int __fastcall sub_C5894(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v7; // r9
  int v9; // r11
  int v13; // r3
  int v14; // lr
  _DWORD *v15; // r6
  int v16; // r0
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r12
  int v21; // r1
  int v22; // r2
  unsigned int v24; // r2
  int v25; // r0
  int v26; // r0
  int v27; // r1
  int v28; // [sp+30h] [bp-1024h] BYREF
  _BYTE v29[4080]; // [sp+50h] [bp-1004h] BYREF

  v7 = *(_DWORD *)(a1 + 816);
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
  v19 = sub_26CA90(*(unsigned __int8 *)(a2 + 3), *(_DWORD *)(a1 + 420));
  if ( v19 >= *(_DWORD *)(a1 + 328) )
  {
    v26 = rand();
    sub_26C784(v26, *(_DWORD *)(a1 + 328));
    v19 = v27;
  }
  *a6 = v19;
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 8) & 3)
                       + 4 * ((*(_BYTE *)(a2 + 7) << 6) & 0x40 | (*(unsigned __int8 *)(a2 + 8) >> 2));
  if ( BM_CRC5(a2 + 2, 75) != (*(_BYTE *)(a2 + 11) & 0x1F) && *(_BYTE *)(a1 + 250) )
  {
    v24 = dword_2F993C++;
    if ( !(v24 % 0x3E8) )
    {
      V_LOCK(274877907 * v24);
      V_INT((int)&v28, "chain");
      v25 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v25);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ckb_2042/backend_ckb_2042.c",
        192,
        "packet_2_nonce_ckb",
        18,
        207,
        100,
        v29);
    }
    return 11;
  }
  else
  {
    v20 = v15[1];
    v21 = v15[2];
    v22 = v15[3];
    *a5 = *v15;
    a5[1] = v20;
    a5[2] = v21;
    a5[3] = v22;
    *a4 = 1;
    return 0;
  }
}
