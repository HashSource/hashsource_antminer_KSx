int __fastcall sub_BD314(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v7; // r9
  int v9; // r11
  int v13; // r3
  int v14; // lr
  _DWORD *v15; // r6
  int v16; // r0
  int v17; // r2
  int v18; // r3
  signed int v19; // r0
  int v20; // r0
  int v21; // r4
  int v22; // r11
  int v23; // r12
  int v24; // r1
  int v25; // r2
  unsigned int v27; // r2
  int v28; // r0
  signed int v29; // r1
  _DWORD v30[7]; // [sp+30h] [bp-1024h] BYREF
  int v31; // [sp+4Ch] [bp-1008h]
  char v32[4080]; // [sp+50h] [bp-1004h] BYREF

  v7 = *(_DWORD *)(a1 + 800);
  v9 = *(_BYTE *)(a2 + 10) & 0x7F;
  v13 = *(_DWORD *)(v7 + 8 * v9);
  v14 = *(_DWORD *)(v7 + 8 * v9 + 4);
  *(_DWORD *)a3 = v13;
  *(_DWORD *)(a3 + 4) = v14;
  v15 = (_DWORD *)(a3 + 48);
  *a7 = v13;
  strcpy((char *)(a3 + 16), (const char *)(v7 + 32 * (v9 + 32)));
  v16 = *(_DWORD *)(v7 + 48 * v9 + 5156);
  v17 = *(_DWORD *)(v7 + 48 * v9 + 5160);
  v18 = *(_DWORD *)(v7 + 48 * v9 + 5164);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(v7 + 48 * v9 + 5152);
  *(_DWORD *)(a3 + 52) = v16;
  *(_DWORD *)(a3 + 56) = v17;
  *(_DWORD *)(a3 + 60) = v18;
  *(_DWORD *)(a3 + 58) = *(_DWORD *)(a2 + 3);
  *(_WORD *)(a3 + 62) = *(_WORD *)(a2 + 7);
  LOBYTE(v18) = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a3 + 65) = v9;
  *(_BYTE *)(a3 + 64) = v18;
  v19 = sub_25ABA8(*(unsigned __int8 *)(a2 + 3), *(_DWORD *)(a1 + 404));
  if ( v19 >= *(_DWORD *)(a1 + 312) )
  {
    v28 = rand();
    sub_25A89C(v28, *(_DWORD *)(a1 + 312));
    v19 = v29;
  }
  *a6 = v19;
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 8) & 3)
                       + 4 * ((*(_BYTE *)(a2 + 7) << 6) & 0x40 | (*(unsigned __int8 *)(a2 + 8) >> 2));
  v20 = BM_CRC5((_BYTE *)(a2 + 2), 75);
  v21 = *(_BYTE *)(a2 + 11) & 0x1F;
  v22 = v20;
  if ( v20 != v21 && *(_BYTE *)(a1 + 238) )
  {
    v27 = dword_2E0414++;
    if ( !(v27 % 0x3E8) )
    {
      V_LOCK();
      V_INT((int)v30, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v32,
        0x1000u,
        0,
        v31,
        v30[0],
        v30[1],
        v30[2],
        v30[3],
        v30[4],
        v30[5],
        v30[6],
        v31,
        "chip id %3d, get nonce crc error calc value %04x expected value %04x",
        *a6,
        v22,
        v21);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
        187,
        "packet_2_nonce_ckb",
        18,
        207,
        100,
        v32);
    }
    return 11;
  }
  else
  {
    v23 = v15[1];
    v24 = v15[2];
    v25 = v15[3];
    *a5 = *v15;
    a5[1] = v23;
    a5[2] = v24;
    a5[3] = v25;
    *a4 = 1;
    return 0;
  }
}
