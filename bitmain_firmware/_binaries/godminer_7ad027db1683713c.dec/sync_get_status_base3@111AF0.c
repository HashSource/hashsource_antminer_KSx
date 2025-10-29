int __fastcall sync_get_status_base3(pthread_mutex_t *a1, int a2, int a3, int *a4, unsigned int a5, unsigned int a6)
{
  int v6; // r6
  int v8; // r10
  int v9; // r2
  char v10; // r11
  __int16 v12; // r2
  int v13; // r3
  pthread_mutex_t *mutex; // [sp+1Ch] [bp-1028h]
  int v18[2]; // [sp+2Ch] [bp-1018h] BYREF
  unsigned __int8 v19; // [sp+34h] [bp-1010h] BYREF
  unsigned __int8 v20; // [sp+35h] [bp-100Fh]
  unsigned __int8 v21; // [sp+36h] [bp-100Eh] BYREF
  int v22; // [sp+37h] [bp-100Dh]
  unsigned __int8 v23; // [sp+3Bh] [bp-1009h]
  char v24; // [sp+3Ch] [bp-1008h]
  char v25[4096]; // [sp+40h] [bp-1004h] BYREF

  if ( !a1[9].__size[20] )
    return 4;
  v6 = 0;
  mutex = a1 + 36;
  pthread_mutex_lock(a1 + 36);
  queue_clear(a1[35].__lock);
  v8 = 0;
  sub_25A4F8(a5, a6, 0x3E8u);
  v18[1] = 1000000 * v9;
  v18[0] = sub_25A4F8(a5, a6, 0x3E8u);
  while ( v8 < a2 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[35].__lock, (char *)&v19, 9u, v18) == 110 )
      {
        v6 = 3;
        goto LABEL_12;
      }
      V_LOCK();
      logfmt_raw(
        v25,
        0x1000u,
        0,
        "header:%02x%02x chip_addr:%02x, reg value:%08x, reg addr:%02x",
        v19,
        v20,
        v23,
        v22,
        v21);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
        170,
        "sync_get_status_base3",
        21,
        1177,
        20,
        v25);
      if ( v19 != 170 || v20 != 85 )
      {
        v6 = 1;
        *a4 = v8;
        pthread_mutex_unlock(mutex);
        return v6;
      }
      v10 = v24;
      if ( (v10 & 0x1F) == BM_CRC5(&v21, 51) )
        break;
      v6 = 2;
    }
    ++v8;
    v12 = v21;
    v13 = v22;
    *(_BYTE *)(a3 + 4) = v23;
    *(_WORD *)(a3 + 6) = v12;
    *(_DWORD *)a3 = v13;
    a3 += 12;
  }
LABEL_12:
  *a4 = v8;
  pthread_mutex_unlock(mutex);
  return v6;
}
