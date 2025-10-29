int __fastcall sync_get_status_base(pthread_mutex_t *a1, int a2, int a3, int *a4, unsigned int a5, unsigned int a6)
{
  int v6; // r6
  int v8; // r10
  int v9; // r2
  int v10; // r11
  int v12; // r3
  __int16 v13; // r0
  int v14; // r1
  int v15; // r2
  pthread_mutex_t *mutex; // [sp+1Ch] [bp-1028h]
  int v20[2]; // [sp+2Ch] [bp-1018h] BYREF
  unsigned __int8 v21; // [sp+34h] [bp-1010h] BYREF
  unsigned __int8 v22; // [sp+35h] [bp-100Fh]
  char v23; // [sp+36h] [bp-100Eh] BYREF
  int v24; // [sp+37h] [bp-100Dh]
  unsigned __int8 v25; // [sp+3Bh] [bp-1009h]
  unsigned __int8 v26; // [sp+3Ch] [bp-1008h]
  char v27; // [sp+3Dh] [bp-1007h]
  char v28[4096]; // [sp+40h] [bp-1004h] BYREF

  if ( !a1[9].__size[20] )
    return 4;
  mutex = a1 + 36;
  pthread_mutex_lock(a1 + 36);
  queue_clear(a1[35].__lock);
  v6 = 0;
  sub_25A4F8(a5, a6, 0x3E8u);
  v8 = 0;
  v20[1] = 1000000 * v9;
  v20[0] = sub_25A4F8(a5, a6, 0x3E8u);
  while ( v8 < a2 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[35].__lock, (char *)&v21, 0xAu, v20) == 110 )
      {
        v6 = 3;
        goto LABEL_14;
      }
      V_LOCK();
      logfmt_raw(
        v28,
        0x1000u,
        0,
        "header:%02x%02x chip_addr:%02x, reg value:%08x, reg addr:%02x",
        v21,
        v22,
        v25,
        v24,
        v26);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
        170,
        "sync_get_status_base",
        20,
        1109,
        20,
        v28);
      if ( v21 != 170 || v22 != 85 || v23 != 8 || (v27 & 0x40) != 0 )
      {
        v6 = 1;
        *a4 = v8;
        pthread_mutex_unlock(mutex);
        return v6;
      }
      v10 = v27 & 0x1F;
      if ( v10 == BM_CRC5(&v23, 59) )
        break;
      v6 = 2;
    }
    v12 = 12 * v8;
    v13 = v26;
    ++v8;
    v14 = v24;
    v15 = a3 + v12;
    *(_BYTE *)(v15 + 4) = v25;
    *(_WORD *)(v15 + 6) = v13;
    *(_DWORD *)v15 = v14;
  }
LABEL_14:
  *a4 = v8;
  pthread_mutex_unlock(mutex);
  return v6;
}
