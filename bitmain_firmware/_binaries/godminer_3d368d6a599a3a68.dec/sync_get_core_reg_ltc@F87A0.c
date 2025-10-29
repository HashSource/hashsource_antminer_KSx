int __fastcall sync_get_core_reg_ltc(pthread_mutex_t *a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
  int v9; // r6
  __int16 v13; // r2
  int v14; // r0
  char v15; // r0
  int v16; // r2
  int v17; // r2
  char v18; // r11
  int v19; // r0
  int v20; // r0
  unsigned __int8 v22; // r2
  char v23; // r0
  char v24; // r1
  int v25; // [sp+14h] [bp-1038h]
  int v26; // [sp+1Ch] [bp-1030h]
  int v27; // [sp+24h] [bp-1028h]
  __int16 v28; // [sp+26h] [bp-1026h]
  _DWORD v29[2]; // [sp+28h] [bp-1024h] BYREF
  _BYTE v30[2]; // [sp+30h] [bp-101Ch] BYREF
  _BYTE v31[5]; // [sp+32h] [bp-101Ah] BYREF
  unsigned __int8 v32; // [sp+37h] [bp-1015h]
  char v33; // [sp+38h] [bp-1014h]
  _BYTE v34[2]; // [sp+3Ch] [bp-1010h] BYREF
  _BYTE v35[9]; // [sp+3Eh] [bp-100Eh] BYREF
  _BYTE v36[4088]; // [sp+48h] [bp-1004h] BYREF

  if ( !a1[10].__size[12] )
    return 4;
  LOBYTE(v28) = v28 & 0xF0 | *(_WORD *)(a2 + 10) & 0xF;
  v13 = v28 & 0xF00F | (16 * *(unsigned __int8 *)(a2 + 12));
  BYTE2(v27) = v28 & 0xF | (16 * *(_BYTE *)(a2 + 12));
  HIBYTE(v27) = HIBYTE(v13) & 0xF | ((*(_BYTE *)(a2 + 14) & 1) << 7);
  memset(v35, 0, sizeof(v35));
  LOWORD(v27) = 0;
  LOBYTE(v13) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 1;
  v34[0] = 85;
  v34[1] = -86;
  *(_QWORD *)v35 = v13 & 0x1F | 0x40u;
  v35[1] = 9;
  v35[3] = 60;
  v14 = reverse_byte_order_32(v27);
  v35[8] = 32 * (*(_BYTE *)(a2 + 15) & 3);
  *(_DWORD *)&v35[4] = v14;
  v15 = BM_CRC5(v35, 64);
  v16 = *(unsigned __int8 *)(a2 + 8);
  v35[8] = v35[8] & 0xE0 | v15 & 0x1F;
  if ( !v16 && !*(_BYTE *)(a2 + 14) )
    a3 = 1;
  v26 = a4;
  pthread_mutex_lock(a1 + 37);
  v9 = 0;
  queue_clear(a1[36].__lock);
  send_command_packet(a1, v34, 11);
  sub_26D070(a7, a8, 1000, 0);
  v25 = 0;
  v29[1] = 1000000 * v17;
  v29[0] = sub_26D070(a7, a8, 1000, 0);
  while ( a3 > v25 )
  {
    while ( 1 )
    {
      v19 = queue_dequeue_for(a1[36].__lock, v30, 9, v29);
      if ( v19 == 110 )
      {
        v9 = 3;
        goto LABEL_16;
      }
      if ( v30[0] != 170 || v30[1] != 85 || (v33 & 0xE0) != 0xC0 )
      {
        v9 = 1;
        goto LABEL_16;
      }
      if ( (v32 & 0x10) != 0 )
      {
        V_LOCK(v19);
        v20 = logfmt_raw((int)v36, 0x1000u);
        V_UNLOCK(v20);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/chip_reg_io_ltc_1489.c",
          196,
          "sync_get_core_reg_ltc",
          21,
          370,
          100,
          v36);
      }
      v18 = v33;
      if ( (v18 & 0x1F) == BM_CRC5(v31, 51) )
        break;
      v9 = 2;
    }
    v22 = v32;
    ++v25;
    v23 = v31[3];
    v24 = v31[4];
    *(_DWORD *)v26 = (v31[0] << 16) | (((v32 >> 5) & 1) << 24) | v31[2] | (v31[1] << 8);
    *(_BYTE *)(v26 + 4) = v23;
    *(_WORD *)(v26 + 6) = v22 & 0xF;
    *(_BYTE *)(v26 + 9) = v22 >> 6;
    *(_BYTE *)(v26 + 8) = v24;
    v26 += 12;
  }
LABEL_16:
  *a5 = v25;
  pthread_mutex_unlock(a1 + 37);
  return v9;
}
