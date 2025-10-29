int __fastcall sub_E4B3C(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v7; // r8
  int v9; // r11
  int v13; // r3
  int v14; // lr
  _DWORD *v15; // r7
  char v16; // r3
  char v17; // r3
  signed int v18; // r0
  int v19; // r0
  int v20; // r4
  int v21; // r11
  int v22; // r2
  unsigned int v24; // r2
  int v25; // r0
  signed int v26; // r1
  _DWORD v27[7]; // [sp+30h] [bp-1024h] BYREF
  int v28; // [sp+4Ch] [bp-1008h]
  char v29[4080]; // [sp+50h] [bp-1004h] BYREF

  v7 = *(_DWORD *)(a1 + 800);
  v9 = *(_BYTE *)(a2 + 9) & 0x7F;
  v13 = *(_DWORD *)(v7 + 8 * v9);
  v14 = *(_DWORD *)(v7 + 8 * v9 + 4);
  v15 = (_DWORD *)(a3 + 80);
  *(_DWORD *)a3 = v13;
  *(_DWORD *)(a3 + 4) = v14;
  *a7 = v13;
  strcpy((char *)(a3 + 16), (const char *)(v7 + ((v9 + 16) << 6)));
  *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 3);
  *(_BYTE *)(a3 + 84) = *(_BYTE *)(a2 + 7);
  v16 = *(_BYTE *)(v7 + 3 * v9 + 45826);
  *(_WORD *)(a3 + 85) = *(_WORD *)(v7 + 3 * v9 + 45824);
  *(_BYTE *)(a3 + 87) = v16;
  v17 = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a3 + 89) = v9;
  *(_BYTE *)(a3 + 88) = v17;
  v18 = sub_25ABA8(*(unsigned __int8 *)(a2 + 3), *(_DWORD *)(a1 + 404));
  if ( v18 >= *(_DWORD *)(a1 + 312) )
  {
    v25 = rand();
    sub_25A89C(v25, *(_DWORD *)(a1 + 312));
    v18 = v26;
  }
  *a6 = v18;
  *(_DWORD *)(a3 + 8) = v18;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 7) & 3)
                       + 4 * ((unsigned __int8)(*(_BYTE *)(a2 + 6) << 6) | (*(unsigned __int8 *)(a2 + 7) >> 2));
  v19 = BM_CRC5((_BYTE *)(a2 + 2), 67);
  v20 = *(_BYTE *)(a2 + 10) & 0x1F;
  v21 = v19;
  if ( v19 != v20 && *(_BYTE *)(a1 + 238) )
  {
    v24 = dword_2E852C++;
    if ( !(v24 % 0x3E8) )
    {
      V_LOCK();
      V_INT((int)v27, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v29,
        0x1000u,
        0,
        v28,
        v27[0],
        v27[1],
        v27[2],
        v27[3],
        v27[4],
        v27[5],
        v27[6],
        v28,
        "chip id %3d, get nonce crc error calc value %04x expected value %04x\n",
        *a6,
        v21,
        v20);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
        187,
        "packet_2_nonce_kda",
        18,
        223,
        100,
        v29);
    }
    return 11;
  }
  else
  {
    v22 = v15[1];
    *a5 = *v15;
    a5[1] = v22;
    *a4 = 1;
    return 0;
  }
}
