int __fastcall sub_1105FC(pthread_mutex_t *a1, int a2, int a3, int *a4, unsigned int a5, unsigned int a6)
{
  pthread_mutex_t *v6; // r11
  int v9; // r8
  int v10; // r10
  int v11; // r2
  unsigned int v12; // r0
  int *v14; // r5
  int v15; // r12
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v22; // [sp+1Ch] [bp-1060h]
  int v23[2]; // [sp+24h] [bp-1058h] BYREF
  unsigned __int8 v24; // [sp+2Ch] [bp-1050h] BYREF
  unsigned __int8 v25; // [sp+2Dh] [bp-104Fh]
  unsigned __int8 v26; // [sp+2Eh] [bp-104Eh] BYREF
  unsigned __int8 v27; // [sp+2Fh] [bp-104Dh]
  unsigned int v28; // [sp+30h] [bp-104Ch]
  int v29; // [sp+34h] [bp-1048h] BYREF
  unsigned __int16 v30; // [sp+74h] [bp-1008h] BYREF
  char var1004[4104]; // [sp+78h] [bp-1004h] BYREF

  v6 = a1 + 36;
  v9 = 0;
  pthread_mutex_lock(a1 + 36);
  queue_clear(a1[35].__lock);
  v22 = a3;
  sub_25A4F8(a5, a6, 0x3E8u);
  v10 = 0;
  v23[1] = 1000000 * v11;
  v23[0] = sub_25A4F8(a5, a6, 0x3E8u);
  while ( a2 > v10 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[35].__lock, (char *)&v24, 0x4Au, v23) == 110 )
      {
        v9 = 3;
        goto LABEL_10;
      }
      V_LOCK();
      logfmt_raw(var1004, 0x1000u, 0, "[DAG] header:%02x%02x chip_addr:%02x", v24, v25, v27);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
        170,
        "sync_get_dag_base",
        17,
        241,
        20,
        var1004);
      if ( v24 != 170 || v25 != 85 )
      {
        v9 = 1;
        goto LABEL_10;
      }
      v12 = BM_CRC16(&v26, 70);
      if ( v30 == (unsigned __int16)__rev16(v12) )
        break;
      v9 = 2;
    }
    v14 = &v29;
    *(_BYTE *)(v22 + 4) = v27;
    *(_DWORD *)v22 = reverse_byte_order_32(v28);
    v15 = v22 + 10;
    do
    {
      v15 += 16;
      v16 = *v14;
      v17 = v14[1];
      v18 = v14[2];
      v19 = v14[3];
      v14 += 4;
      *(_DWORD *)(v15 - 16) = v16;
      *(_DWORD *)(v15 - 12) = v17;
      *(_DWORD *)(v15 - 8) = v18;
      *(_DWORD *)(v15 - 4) = v19;
    }
    while ( v14 != (int *)&v30 );
    ++v10;
    v22 += 76;
  }
LABEL_10:
  *a4 = v10;
  pthread_mutex_unlock(v6);
  return v9;
}
