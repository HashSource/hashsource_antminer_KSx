int __fastcall sync_get_core_reg_ltc(
        pthread_mutex_t *a1,
        int a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        unsigned int a7,
        unsigned int a8)
{
  int v9; // r6
  __int16 v13; // r2
  unsigned int v14; // r0
  char v15; // r0
  int v16; // r2
  int v17; // r2
  char v18; // r11
  unsigned __int8 v20; // r2
  char v21; // r0
  unsigned __int8 v22; // r1
  int v23; // [sp+14h] [bp-1038h]
  int v24; // [sp+1Ch] [bp-1030h]
  unsigned int v25; // [sp+24h] [bp-1028h]
  __int16 v26; // [sp+26h] [bp-1026h]
  int v27[2]; // [sp+28h] [bp-1024h] BYREF
  char v28[2]; // [sp+30h] [bp-101Ch] BYREF
  _BYTE v29[4]; // [sp+32h] [bp-101Ah] BYREF
  unsigned __int8 v30; // [sp+36h] [bp-1016h]
  unsigned __int8 v31; // [sp+37h] [bp-1015h]
  char v32; // [sp+38h] [bp-1014h]
  _BYTE v33[2]; // [sp+3Ch] [bp-1010h] BYREF
  _BYTE v34[9]; // [sp+3Eh] [bp-100Eh] BYREF
  char v35[4088]; // [sp+48h] [bp-1004h] BYREF

  if ( !a1[9].__size[20] )
    return 4;
  LOBYTE(v26) = v26 & 0xF0 | *(_WORD *)(a2 + 10) & 0xF;
  v13 = v26 & 0xF00F | (16 * *(unsigned __int8 *)(a2 + 12));
  BYTE2(v25) = v26 & 0xF | (16 * *(_BYTE *)(a2 + 12));
  HIBYTE(v25) = HIBYTE(v13) & 0xF | ((*(_BYTE *)(a2 + 14) & 1) << 7);
  memset(v34, 0, sizeof(v34));
  LOWORD(v25) = 0;
  LOBYTE(v13) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 1;
  v33[0] = 85;
  v33[1] = -86;
  *(_QWORD *)v34 = v13 & 0x1F | 0x40u;
  v34[1] = 9;
  v34[3] = 60;
  v14 = reverse_byte_order_32(v25);
  v34[8] = 32 * (*(_BYTE *)(a2 + 15) & 3);
  *(_DWORD *)&v34[4] = v14;
  v15 = BM_CRC5(v34, 64);
  v16 = *(unsigned __int8 *)(a2 + 8);
  v34[8] = v34[8] & 0xE0 | v15 & 0x1F;
  if ( !v16 && !*(_BYTE *)(a2 + 14) )
    a3 = 1;
  v24 = a4;
  pthread_mutex_lock(a1 + 36);
  v9 = 0;
  queue_clear(a1[35].__lock);
  send_command_packet(a1, (int)v33, 0xBu);
  sub_25A4F8(a7, a8, 0x3E8u);
  v23 = 0;
  v27[1] = 1000000 * v17;
  v27[0] = sub_25A4F8(a7, a8, 0x3E8u);
  while ( a3 > v23 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[35].__lock, v28, 9u, v27) == 110 )
      {
        v9 = 3;
        goto LABEL_16;
      }
      if ( (unsigned __int8)v28[0] != 170 || v28[1] != 85 || (v32 & 0xE0) != 0xC0 )
      {
        v9 = 1;
        goto LABEL_16;
      }
      if ( (v31 & 0x10) != 0 )
      {
        V_LOCK();
        logfmt_raw(v35, 0x1000u, 0, "core %d get parity", v30);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_reg_io_ltc_1489.c",
          191,
          "sync_get_core_reg_ltc",
          21,
          370,
          100,
          v35);
      }
      v18 = v32;
      if ( (v18 & 0x1F) == BM_CRC5(v29, 51) )
        break;
      v9 = 2;
    }
    v20 = v31;
    ++v23;
    v21 = v29[3];
    v22 = v30;
    *(_DWORD *)v24 = (v29[0] << 16) | (((v31 >> 5) & 1) << 24) | v29[2] | (v29[1] << 8);
    *(_BYTE *)(v24 + 4) = v21;
    *(_WORD *)(v24 + 6) = v20 & 0xF;
    *(_BYTE *)(v24 + 9) = v20 >> 6;
    *(_BYTE *)(v24 + 8) = v22;
    v24 += 12;
  }
LABEL_16:
  *a5 = v23;
  pthread_mutex_unlock(a1 + 36);
  return v9;
}
