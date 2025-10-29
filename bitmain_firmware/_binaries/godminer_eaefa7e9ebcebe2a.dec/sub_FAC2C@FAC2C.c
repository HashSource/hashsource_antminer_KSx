int __fastcall sub_FAC2C(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int v9; // r0
  int v10; // r6
  int v11; // r12
  _DWORD *v12; // r1
  _DWORD *v13; // r3
  __int64 *v14; // r12
  int v15; // r10
  int v16; // r9
  int v17; // r8
  int v18; // r10
  int v19; // r9
  int v20; // r8
  int v21; // r9
  int v22; // r8
  int v23; // lr
  int v24; // r8
  int v25; // lr
  int v26; // r9
  int v27; // r9
  int v28; // r8
  int v29; // r0
  int v30; // r9
  int v31; // r8
  int v32; // r0
  __int64 v33; // r2
  int v34; // r9
  __int64 v35; // d16
  __int64 v36; // r6
  __int64 v37; // d16
  int v38; // r6
  int v39; // r0
  int v40; // r0
  int v41; // r0
  char *v42; // r9
  char *v43; // r0
  int v44; // t1
  int v45; // r5
  char *p_s; // r6
  char *v47; // r0
  int v48; // t1
  int v49; // r0
  int v50; // r0
  int v52; // r0
  int v55; // [sp+58h] [bp-10CCh] BYREF
  int v56; // [sp+78h] [bp-10ACh] BYREF
  char v57; // [sp+98h] [bp-108Ch] BYREF
  char v58; // [sp+D8h] [bp-104Ch] BYREF
  char s; // [sp+DCh] [bp-1048h] BYREF
  int v60; // [sp+11Ch] [bp-1008h] BYREF
  _BYTE var1004[4128]; // [sp+120h] [bp-1004h] BYREF

  v9 = BM_CRC16(a2 + 2, 43);
  if ( v9 == (*(unsigned __int8 *)(a2 + 46) | (*(unsigned __int8 *)(a2 + 45) << 8)) )
  {
    v10 = *(unsigned __int8 *)(a2 + 12);
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
    v14[512] |= (*(unsigned __int8 *)(a2 + 8) << 16)
              + (*(unsigned __int8 *)(a2 + 9) << 8)
              + *(unsigned __int8 *)(a2 + 10)
              + (*(unsigned __int8 *)(a2 + 7) << 24);
    v27 = *(_DWORD *)(a2 + 17);
    v28 = *(_DWORD *)(a2 + 21);
    v29 = *(_DWORD *)(a2 + 25);
    *(_DWORD *)(a3 + 98) = *(_DWORD *)(a2 + 13);
    *(_DWORD *)(a3 + 102) = v27;
    *(_DWORD *)(a3 + 106) = v28;
    *(_DWORD *)(a3 + 110) = v29;
    v30 = *(_DWORD *)(a2 + 33);
    v31 = *(_DWORD *)(a2 + 37);
    v32 = *(_DWORD *)(a2 + 41);
    *(_DWORD *)(a3 + 114) = *(_DWORD *)(a2 + 29);
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
    *(_BYTE *)(a3 + 17) = *(_BYTE *)(a2 + 11);
    v36 = v14[256];
    *(_DWORD *)(a3 + 18) = v36;
    v37 = *v14;
    *(_DWORD *)(a3 + 22) = HIDWORD(v36);
    *(_QWORD *)a3 = v37;
    *a7 = v37;
    *(_DWORD *)(a3 + 12) = ((unsigned int)v33 >> 10) & 0xF;
    v38 = a3 + 33;
    *a6 = 0;
    LODWORD(v33) = *(_DWORD *)(a3 + 26);
    a5[1] = *(_DWORD *)(a3 + 30);
    *a5 = v33;
    *a4 = 1;
    V_LOCK(1);
    v39 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v39);
    v40 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
            192,
            "dump_nonce",
            10,
            1200,
            60,
            var1004);
    V_LOCK(v40);
    V_INT((int)&v55, "chain");
    v41 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v41);
    v42 = &v57;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
      192,
      "dump_nonce",
      10,
      1202,
      60,
      var1004);
    do
    {
      v43 = v42;
      v44 = *(unsigned __int8 *)++v38;
      v42 += 2;
      sprintf(v43, "%02x", v44);
    }
    while ( v42 != &v58 );
    v45 = a3 + 97;
    p_s = &s;
    do
    {
      v47 = p_s;
      v48 = *(unsigned __int8 *)++v45;
      p_s += 2;
      v49 = sprintf(v47, "%02x", v48);
    }
    while ( p_s != (char *)&v60 );
    V_LOCK(v49);
    V_INT((int)&v56, "chain");
    ++*(_QWORD *)&dword_306B00;
    v50 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v50);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
      192,
      "dump_nonce",
      10,
      1211,
      60,
      var1004);
    return 0;
  }
  else
  {
    V_LOCK(v9);
    v52 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v52);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
      192,
      "packet_2_nonce_rvn",
      18,
      1237,
      100,
      var1004);
    return 11;
  }
}
