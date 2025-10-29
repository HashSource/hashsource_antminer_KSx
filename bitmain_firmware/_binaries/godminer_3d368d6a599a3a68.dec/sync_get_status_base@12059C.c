int __fastcall sync_get_status_base(pthread_mutex_t *a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // r6
  int v8; // r10
  int v9; // r2
  int v10; // r0
  int v11; // r11
  int v12; // r0
  int v14; // r3
  __int16 v15; // r0
  int v16; // r1
  int v17; // r2
  pthread_mutex_t *mutex; // [sp+1Ch] [bp-1028h]
  _DWORD v22[2]; // [sp+2Ch] [bp-1018h] BYREF
  _BYTE v23[2]; // [sp+34h] [bp-1010h] BYREF
  char v24; // [sp+36h] [bp-100Eh] BYREF
  int v25; // [sp+37h] [bp-100Dh]
  char v26; // [sp+3Bh] [bp-1009h]
  unsigned __int8 v27; // [sp+3Ch] [bp-1008h]
  char v28; // [sp+3Dh] [bp-1007h]
  _BYTE v29[4096]; // [sp+40h] [bp-1004h] BYREF

  if ( !a1[10].__size[12] )
    return 4;
  mutex = a1 + 37;
  pthread_mutex_lock(a1 + 37);
  queue_clear(a1[36].__lock);
  v6 = 0;
  sub_26D070(a5, a6, 1000, 0);
  v8 = 0;
  v22[1] = 1000000 * v9;
  v22[0] = sub_26D070(a5, a6, 1000, 0);
  while ( v8 < a2 )
  {
    while ( 1 )
    {
      v12 = queue_dequeue_for(a1[36].__lock, v23, 10, v22);
      if ( v12 == 110 )
      {
        v6 = 3;
        goto LABEL_14;
      }
      V_LOCK(v12);
      v10 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/chip_reg_io_base.c",
        175,
        "sync_get_status_base",
        20,
        1351,
        20,
        v29);
      if ( v23[0] != 170 || v23[1] != 85 || v24 != 8 || (v28 & 0x40) != 0 )
      {
        v6 = 1;
        *a4 = v8;
        pthread_mutex_unlock(mutex);
        return v6;
      }
      v11 = v28 & 0x1F;
      if ( v11 == BM_CRC5(&v24, 59) )
        break;
      v6 = 2;
    }
    v14 = 12 * v8;
    v15 = v27;
    ++v8;
    v16 = v25;
    v17 = a3 + v14;
    *(_BYTE *)(v17 + 4) = v26;
    *(_WORD *)(v17 + 6) = v15;
    *(_DWORD *)v17 = v16;
  }
LABEL_14:
  *a4 = v8;
  pthread_mutex_unlock(mutex);
  return v6;
}
