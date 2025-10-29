int __fastcall sub_D07A4(_DWORD *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v7; // r10
  int v9; // r9
  int v12; // r3
  int v13; // r12
  int v15; // r1
  char v16; // r3
  char v17; // r3
  int v18; // r0
  int v19; // r0
  int v21; // r0
  int v22; // r1
  int v23; // r0
  _BYTE v24[4080]; // [sp+10h] [bp-1000h] BYREF

  v7 = a1[206];
  v9 = *(_BYTE *)(a2 + 9) & 0x7F;
  v12 = *(_DWORD *)(v7 + 8 * v9);
  v13 = *(_DWORD *)(v7 + 8 * v9 + 4);
  *(_DWORD *)a3 = v12;
  *(_DWORD *)(a3 + 4) = v13;
  *a7 = v12;
  strcpy((char *)(a3 + 16), (const char *)(v7 + 32 * (v9 + 32)));
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(a2 + 3);
  v15 = *(_DWORD *)(v7 + 180 * v9 + 5264);
  *(_DWORD *)(a3 + 53) = *(_DWORD *)(v7 + 180 * v9 + 5260);
  *(_DWORD *)(a3 + 57) = v15;
  v16 = *(_BYTE *)(v7 + 180 * v9 + 5270);
  *(_WORD *)(a3 + 61) = *(_WORD *)(v7 + 180 * v9 + 5268);
  *(_BYTE *)(a3 + 63) = v16;
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 4);
  v17 = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a3 + 65) = v9;
  *(_BYTE *)(a3 + 64) = v17;
  v18 = sub_270BA8(*(unsigned __int8 *)(a2 + 3), a1[107]);
  if ( v18 >= a1[84] )
  {
    v21 = rand();
    sub_27089C(v21, a1[84]);
    v18 = v22;
  }
  *a6 = v18;
  *(_DWORD *)(a3 + 8) = v18;
  *(_DWORD *)(a3 + 12) = (*(unsigned __int8 *)(a2 + 5) >> 6) + 4 * *(unsigned __int8 *)(a2 + 4);
  v19 = BM_CRC5((_BYTE *)(a2 + 2), 67);
  if ( v19 == (*(_BYTE *)(a2 + 10) & 0x1F) )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    V_LOCK(v19);
    v23 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
      187,
      "packet_2_nonce_dcr",
      18,
      212,
      80,
      v24);
    return 11;
  }
}
