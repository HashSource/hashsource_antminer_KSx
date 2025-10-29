int __fastcall sub_DB77C(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v7; // r7
  int v9; // r6
  int v12; // r3
  int v13; // r12
  const char *v15; // r1
  int v16; // r7
  char v17; // r3
  signed int v18; // r0
  signed int v19; // r6
  signed int v20; // r1
  int v21; // r0
  int v22; // r5
  int v23; // r7
  int v25; // r1
  int v26; // r2
  int v27; // r0
  _DWORD v28[7]; // [sp+30h] [bp-1020h] BYREF
  int v29; // [sp+4Ch] [bp-1004h]
  char v30[4080]; // [sp+50h] [bp-1000h] BYREF

  v7 = *(_DWORD *)(a1 + 800);
  v9 = *(_BYTE *)(a2 + 10) & 0x7F;
  v12 = *(_DWORD *)(v7 + 8 * v9);
  v13 = *(_DWORD *)(v7 + 8 * v9 + 4);
  *(_DWORD *)a3 = v12;
  *(_DWORD *)(a3 + 4) = v13;
  v15 = (const char *)(v7 + 32 * (v9 + 32));
  *a7 = v12;
  v16 = v7 + (v9 << 8);
  strcpy((char *)(a3 + 16), v15);
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(v16 + 5241);
  *(_BYTE *)(a3 + 53) = *(_BYTE *)(v16 + 5240);
  *(_BYTE *)(a3 + 54) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a3 + 55) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 5);
  v17 = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a3 + 57) = v9;
  *(_BYTE *)(a3 + 56) = v17;
  v18 = sub_25ABA8(*(unsigned __int8 *)(a2 + 3), *(_DWORD *)(a1 + 404));
  v19 = v18;
  if ( v18 >= *(_DWORD *)(a1 + 312) )
  {
    v27 = rand();
    sub_25A89C(v27, *(_DWORD *)(a1 + 312));
    *a6 = v20;
  }
  else
  {
    v20 = v18;
    *a6 = v18;
  }
  *(_DWORD *)(a3 + 8) = v20;
  *(_DWORD *)(a3 + 12) = *(_BYTE *)(a2 + 8) & 0x3F;
  v21 = BM_CRC5((_BYTE *)(a2 + 2), 75);
  v22 = *(_BYTE *)(a2 + 11) & 0x1F;
  v23 = v21;
  if ( v21 != v22 && *(_BYTE *)(a1 + 238) )
  {
    v25 = *(_DWORD *)(a1 + 232);
    v26 = dword_2E0448[v25];
    dword_2E0448[v25] = v26 + 1;
    if ( v26 <= 9 )
    {
      V_LOCK();
      V_INT((int)v28, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v30,
        0x1000u,
        0,
        v29,
        v28[0],
        v28[1],
        v28[2],
        v28[3],
        v28[4],
        v28[5],
        v28[6],
        v29,
        "chip id %2d, get nonce crc error calc value %04x expected value %04x",
        v19,
        v23,
        v22);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        187,
        "packet_2_nonce_hns",
        18,
        232,
        40,
        v30);
    }
    return 11;
  }
  else
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
}
