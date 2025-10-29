int __fastcall sub_ED0E4(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v7; // r8
  int v9; // r11
  int v13; // r3
  int v14; // lr
  _DWORD *v15; // r7
  char v16; // r3
  char v17; // r3
  int v18; // r0
  int v19; // r2
  unsigned int v21; // r2
  int v22; // r0
  int v23; // r0
  int v24; // r1
  int v25; // [sp+30h] [bp-1024h] BYREF
  _BYTE v26[4080]; // [sp+50h] [bp-1004h] BYREF

  v7 = *(_DWORD *)(a1 + 816);
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
  v18 = sub_26CA90(*(unsigned __int8 *)(a2 + 3), *(_DWORD *)(a1 + 420));
  if ( v18 >= *(_DWORD *)(a1 + 328) )
  {
    v23 = rand();
    sub_26C784(v23, *(_DWORD *)(a1 + 328));
    v18 = v24;
  }
  *a6 = v18;
  *(_DWORD *)(a3 + 8) = v18;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 7) & 3)
                       + 4 * ((unsigned __int8)(*(_BYTE *)(a2 + 6) << 6) | (*(unsigned __int8 *)(a2 + 7) >> 2));
  if ( BM_CRC5(a2 + 2, 67) != (*(_BYTE *)(a2 + 10) & 0x1F) && *(_BYTE *)(a1 + 250) )
  {
    v21 = dword_301A54++;
    if ( !(v21 % 0x3E8) )
    {
      V_LOCK(274877907 * v21);
      V_INT((int)&v25, "chain");
      v22 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v22);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_kda_2110/backend_kda_2110.c",
        192,
        "packet_2_nonce_kda",
        18,
        223,
        100,
        v26);
    }
    return 11;
  }
  else
  {
    v19 = v15[1];
    *a5 = *v15;
    a5[1] = v19;
    *a4 = 1;
    return 0;
  }
}
