int __fastcall sync_get_dag_node_rvn(pthread_mutex_t *a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // r6
  pthread_mutex_t *v7; // r11
  int v9; // r10
  int v10; // r2
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r0
  int v15; // r0
  char *v16; // r2
  int v17; // r1
  int v18; // r0
  int v19; // lr
  int v20; // r12
  int v21; // r0
  int v24; // [sp+1Ch] [bp-1120h]
  _DWORD v25[2]; // [sp+24h] [bp-1118h] BYREF
  _BYTE v26[2]; // [sp+2Ch] [bp-1110h] BYREF
  _BYTE v27[3]; // [sp+2Eh] [bp-110Eh] BYREF
  int v28; // [sp+31h] [bp-110Bh]
  char v29; // [sp+35h] [bp-1107h] BYREF
  _WORD v30[97]; // [sp+75h] [bp-10C7h] BYREF
  _BYTE var1004[4104]; // [sp+138h] [bp-1004h] BYREF

  if ( !a1[10].__size[12] )
    return 4;
  v7 = a1 + 37;
  v24 = a3 + 8;
  pthread_mutex_lock(a1 + 37);
  queue_clear(a1[36].__lock);
  v6 = 0;
  sub_26D070(a5, a6, 1000, 0);
  v9 = 0;
  v25[1] = 1000000 * v10;
  v25[0] = sub_26D070(a5, a6, 1000, 0);
  while ( v9 < a2 )
  {
    while ( 1 )
    {
      v13 = queue_dequeue_for(a1[36].__lock, v26, 267, v25);
      if ( v13 == 110 )
      {
        v6 = 3;
        goto LABEL_12;
      }
      V_LOCK(v13);
      v11 = logfmt_raw((int)var1004, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/chip_reg_io_base.c",
        175,
        "sync_get_dag_node_rvn",
        21,
        299,
        20,
        var1004);
      if ( v26[0] != 170 || v26[1] != 85 )
      {
        v6 = 1;
        *a4 = v9;
        pthread_mutex_unlock(v7);
        return v6;
      }
      v12 = BM_CRC16(v27, 263);
      if ( v30[96] == (unsigned __int16)__rev16(v12) )
        break;
      v6 = 2;
    }
    *(_BYTE *)(v24 - 6) = v27[2];
    v15 = reverse_byte_order_32(v28);
    v16 = &v29;
    v17 = v24;
    *(_DWORD *)(v24 - 4) = v15;
    do
    {
      v18 = *(_DWORD *)v16;
      v16 += 16;
      v19 = *((_DWORD *)v16 - 3);
      v17 += 16;
      v20 = *((_DWORD *)v16 - 2);
      *(_DWORD *)(v17 - 16) = v18;
      v21 = *((_DWORD *)v16 - 1);
      *(_DWORD *)(v17 - 12) = v19;
      *(_DWORD *)(v17 - 8) = v20;
      *(_DWORD *)(v17 - 4) = v21;
    }
    while ( v16 != (char *)v30 );
    ++v9;
    v24 += 268;
  }
LABEL_12:
  *a4 = v9;
  pthread_mutex_unlock(v7);
  return v6;
}
