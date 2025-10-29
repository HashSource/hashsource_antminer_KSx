int __fastcall sub_D20E0(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int v9; // r0
  int v10; // r0
  int v11; // r12
  _DWORD *v12; // r2
  _DWORD *v13; // r3
  __int64 *v14; // r12
  int v15; // r9
  int v16; // r8
  int v17; // r6
  int v18; // r9
  int v19; // r8
  int v20; // r6
  int v21; // r9
  int v22; // r8
  int v23; // r6
  int v24; // r8
  int v25; // r6
  int v26; // r9
  int v27; // r9
  int v28; // r8
  int v29; // r6
  int v30; // r9
  int v31; // r8
  int v32; // r6
  __int64 v33; // r10
  int v34; // r9
  __int64 v35; // d16
  int v36; // r4
  __int64 v37; // d7
  int v38; // r0
  int v39; // r2
  int v40; // r0
  int v41; // r0
  int v42; // r0
  char *v43; // r11
  char *v44; // r0
  int v45; // t1
  int v46; // r10
  char *p_s; // r4
  char *v48; // r0
  int v49; // t1
  int v50; // r0
  int v51; // r0
  int v53; // r0
  __int64 v54; // [sp+48h] [bp-10DCh]
  int v57; // [sp+58h] [bp-10CCh] BYREF
  int v58; // [sp+78h] [bp-10ACh] BYREF
  char v59; // [sp+98h] [bp-108Ch] BYREF
  char v60; // [sp+D8h] [bp-104Ch] BYREF
  char s; // [sp+DCh] [bp-1048h] BYREF
  int v62; // [sp+11Ch] [bp-1008h] BYREF
  _BYTE var1004[4128]; // [sp+120h] [bp-1004h] BYREF

  v9 = BM_CRC16(a2 + 2, 39);
  if ( v9 == (*(unsigned __int8 *)(a2 + 42) | (*(unsigned __int8 *)(a2 + 41) << 8)) )
  {
    v10 = *(unsigned __int8 *)(a2 + 3);
    v11 = *(_DWORD *)(a1 + 824);
    v12 = (_DWORD *)(v11 + 32 * (v10 + 576));
    v13 = (_DWORD *)(v11 + 40 * v10);
    v14 = (__int64 *)(v11 + 8 * v10);
    v13 += 2048;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    *(_DWORD *)(a3 + 34) = *v13;
    *(_DWORD *)(a3 + 38) = v15;
    *(_DWORD *)(a3 + 42) = v16;
    *(_DWORD *)(a3 + 46) = v17;
    v18 = v13[5];
    v19 = v13[6];
    v20 = v13[7];
    *(_DWORD *)(a3 + 50) = v13[4];
    *(_DWORD *)(a3 + 54) = v18;
    *(_DWORD *)(a3 + 58) = v19;
    *(_DWORD *)(a3 + 62) = v20;
    v21 = v12[1];
    v22 = v12[2];
    v23 = v12[3];
    *(_DWORD *)(a3 + 66) = *v12;
    *(_DWORD *)(a3 + 70) = v21;
    *(_DWORD *)(a3 + 74) = v22;
    *(_DWORD *)(a3 + 78) = v23;
    v24 = v12[6];
    v25 = v12[7];
    v26 = v12[5];
    *(_DWORD *)(a3 + 82) = v12[4];
    *(_DWORD *)(a3 + 86) = v26;
    *(_DWORD *)(a3 + 90) = v24;
    *(_DWORD *)(a3 + 94) = v25;
    v14[512] |= (*(unsigned __int8 *)(a2 + 6) << 16)
              + (*(unsigned __int8 *)(a2 + 7) << 8)
              + *(unsigned __int8 *)(a2 + 8)
              + (*(unsigned __int8 *)(a2 + 5) << 24);
    v27 = *(_DWORD *)(a2 + 13);
    v28 = *(_DWORD *)(a2 + 17);
    v29 = *(_DWORD *)(a2 + 21);
    *(_DWORD *)(a3 + 98) = *(_DWORD *)(a2 + 9);
    *(_DWORD *)(a3 + 102) = v27;
    *(_DWORD *)(a3 + 106) = v28;
    *(_DWORD *)(a3 + 110) = v29;
    v30 = *(_DWORD *)(a2 + 29);
    v31 = *(_DWORD *)(a2 + 33);
    v32 = *(_DWORD *)(a2 + 37);
    *(_DWORD *)(a3 + 114) = *(_DWORD *)(a2 + 25);
    *(_DWORD *)(a3 + 118) = v30;
    *(_DWORD *)(a3 + 122) = v31;
    *(_DWORD *)(a3 + 126) = v32;
    v33 = v14[512];
    v34 = *((_DWORD *)v14 + 1025);
    *(_QWORD *)(a3 + 26) = v33;
    LODWORD(v35) = 0;
    HIDWORD(v35) = v34;
    v14[512] = v35;
    *(_BYTE *)(a3 + 16) = v10;
    *(_BYTE *)(a3 + 17) = *(_BYTE *)(a2 + 4);
    v36 = a3 + 33;
    v37 = v14[256];
    *(_DWORD *)(a3 + 18) = *((_DWORD *)v14 + 512);
    v54 = *v14;
    *(_QWORD *)a3 = *v14;
    *(_DWORD *)(a3 + 22) = HIDWORD(v37);
    *a7 = v54;
    v38 = sub_26C8C0(v33 & 7, 0, *(_DWORD *)(a1 + 428), 0);
    *(_DWORD *)(a3 + 12) = (unsigned __int16)v33 >> 12;
    *(_DWORD *)(a3 + 8) = v38;
    *a6 = v38;
    v39 = *(_DWORD *)(a3 + 30);
    *a5 = *(_DWORD *)(a3 + 26);
    a5[1] = v39;
    *a4 = 1;
    V_LOCK(a5);
    v40 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v40);
    v41 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
            192,
            "dump_nonce",
            10,
            967,
            60,
            var1004);
    V_LOCK(v41);
    V_INT((int)&v58, "chain");
    v42 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v42);
    v43 = &v59;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
      192,
      "dump_nonce",
      10,
      969,
      60,
      var1004);
    do
    {
      v44 = v43;
      v45 = *(unsigned __int8 *)++v36;
      v43 += 2;
      sprintf(v44, "%02x", v45);
    }
    while ( v43 != &v60 );
    v46 = a3 + 97;
    p_s = &s;
    do
    {
      v48 = p_s;
      v49 = *(unsigned __int8 *)++v46;
      p_s += 2;
      v50 = sprintf(v48, "%02x", v49);
    }
    while ( p_s != (char *)&v62 );
    V_LOCK(v50);
    V_INT((int)&v57, "chain");
    v51 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v51);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
      192,
      "dump_nonce",
      10,
      978,
      60,
      var1004);
    return 0;
  }
  else
  {
    V_LOCK(v9);
    v53 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v53);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
      192,
      "packet_2_nonce_eth",
      18,
      1004,
      100,
      var1004);
    return 11;
  }
}
