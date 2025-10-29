int __fastcall sync_get_core_reg_base_3(pthread_mutex_t *a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
  int v9; // r6
  char v13; // r1
  char v14; // r3
  __int16 v15; // r12
  char v16; // r0
  int v17; // r2
  int v18; // r2
  int v19; // r0
  int v20; // r11
  int v21; // r0
  int v23; // r3
  int v24; // r0
  __int16 v25; // r1
  char v26; // r2
  int v27; // r3
  int v28; // r0
  int v29; // [sp+24h] [bp-1030h]
  int v30; // [sp+2Ch] [bp-1028h]
  _BYTE v31[2]; // [sp+34h] [bp-1020h] BYREF
  int v32; // [sp+36h] [bp-101Eh] BYREF
  __int16 v33; // [sp+3Ah] [bp-101Ah]
  _DWORD v34[2]; // [sp+3Ch] [bp-1018h] BYREF
  _BYTE v35[2]; // [sp+44h] [bp-1010h] BYREF
  _BYTE v36[6]; // [sp+46h] [bp-100Eh] BYREF
  char v37; // [sp+4Ch] [bp-1008h]
  _BYTE v38[4080]; // [sp+50h] [bp-1004h] BYREF

  if ( !a1[10].__size[12] )
    return 4;
  v32 = 0;
  v13 = *(_BYTE *)(a2 + 8);
  v33 = 0;
  v14 = *(_BYTE *)(a2 + 12);
  v31[0] = 85;
  v31[1] = -86;
  v15 = *(_WORD *)(a2 + 10);
  v32 = (16 * (v13 & 1)) & 0x1A | 0x45;
  LOBYTE(v33) = v14;
  BYTE1(v32) = 6;
  HIBYTE(v32) = v15;
  v16 = BM_CRC5(&v32, 40);
  v17 = *(unsigned __int8 *)(a2 + 8);
  HIBYTE(v33) = HIBYTE(v33) & 0xE0 | v16 & 0x1F;
  if ( !v17 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v30 = a4;
  pthread_mutex_lock(a1 + 37);
  v9 = 0;
  queue_clear(a1[36].__lock);
  send_command_packet(a1, v31, 8);
  sub_26EA20(a7, a8, 1000, 0);
  v29 = 0;
  v34[1] = 1000000 * v18;
  v34[0] = sub_26EA20(a7, a8, 1000, 0);
  while ( v29 < a3 )
  {
    while ( 1 )
    {
      v21 = queue_dequeue_for(a1[36].__lock, v35, 9, v34);
      if ( v21 == 110 )
      {
        v9 = 3;
        goto LABEL_14;
      }
      V_LOCK(v21);
      v19 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/chip_reg_io_base.c",
        175,
        "sync_get_core_reg_base_3",
        24,
        602,
        20,
        v38);
      if ( v35[0] != 170 || v35[1] != 85 || (v37 & 0x40) == 0 )
      {
        v9 = 1;
        goto LABEL_14;
      }
      v20 = v37 & 0x1F;
      if ( v20 == BM_CRC5(v36, 51) )
        break;
      v9 = 2;
    }
    v23 = v36[2];
    ++v29;
    v24 = v36[3];
    v25 = v36[5];
    *(_BYTE *)(v30 + 4) = v36[4];
    v26 = v36[0];
    v27 = (v23 << 16) | (v24 << 24);
    v28 = v36[1];
    *(_WORD *)(v30 + 6) = v25;
    *(_BYTE *)(v30 + 8) = v26;
    *(_DWORD *)v30 = v27 | v28;
    v30 += 12;
  }
LABEL_14:
  *a5 = v29;
  pthread_mutex_unlock(a1 + 37);
  return v9;
}
