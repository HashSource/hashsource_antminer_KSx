int __fastcall packet_2_nonce_zec_1746(int a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, unsigned int *a6, _DWORD *a7)
{
  char v7; // r6
  unsigned int v12; // r0
  unsigned int v13; // r10
  int v14; // r6
  int v15; // r5
  int v16; // r11
  int v17; // r0
  int v18; // r7
  int v19; // r5
  int v20; // r9
  unsigned int v21; // r0
  int v22; // r0
  int v23; // r4
  char *v24; // r2
  int i; // r5
  char v26; // r3
  int v27; // r0
  int v28; // r0
  int v29; // r3
  int v30; // r5
  int v31; // r1
  int v32; // r2
  int v33; // r0
  int v34; // r0
  int v35; // r3
  int v36; // r5
  int v37; // r1
  int v38; // r2
  int v39; // r0
  int v40; // r3
  int v41; // r1
  int v42; // r5
  int v43; // r0
  char *v44; // r6
  int v45; // r4
  char *v46; // r5
  char *v47; // r0
  int v48; // r3
  char v49; // r2
  int v50; // r2
  int v52; // [sp+18h] [bp-1014h]
  int v53; // [sp+1Ch] [bp-1010h]
  _BYTE var1004[4120]; // [sp+28h] [bp-1004h] BYREF

  v7 = a2[2];
  if ( (v7 & 0xF0) != 0xE0 )
    return 10;
  v12 = sub_26D720((unsigned __int8)a2[3], *(_DWORD *)(a1 + 428));
  v13 = v12;
  if ( v12 > 5 )
  {
    V_LOCK(v12);
    v17 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
      192,
      "packet_2_nonce_zec_1746",
      23,
      394,
      80,
      var1004);
    return 14;
  }
  else
  {
    v14 = v7 & 0xF;
    v15 = 1456 * v12;
    v16 = *(_DWORD *)(a1 + 824);
    v52 = (unsigned __int8)a2[4];
    memcpy((void *)(v16 + 91 * (__int16)v14 + 1456 * v12 + 27649), a2 + 2, 0x5Bu);
    if ( v14 == 15 )
    {
      v18 = v16 + 27649 + v15;
      v19 = 0;
      v20 = v18;
      do
      {
        v21 = __rev16(BM_CRC16(v20, 89));
        if ( __PAIR64__(BYTE1(v21), (unsigned __int8)v21) != __PAIR64__(
                                                               *(unsigned __int8 *)(v20 + 90),
                                                               *(unsigned __int8 *)(v20 + 89)) )
        {
          V_LOCK(v21);
          v22 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v22);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
            192,
            "verify_nonce_integrality_zec_1746",
            33,
            294,
            20,
            var1004);
          return 11;
        }
        ++v19;
        v20 += 91;
        v23 = 0;
      }
      while ( v19 != 16 );
      v24 = (char *)v18;
      for ( i = 0; i != 16; ++i )
      {
        v26 = *v24;
        v24 += 91;
        if ( (v26 & 0xF) != i )
        {
          V_LOCK(v21);
          v27 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v27);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
            192,
            "verify_nonce_integrality_zec_1746",
            33,
            303,
            20,
            var1004);
          return 36;
        }
      }
      v28 = *(unsigned __int8 *)(v18 + 1);
      v29 = v18;
      v30 = 0;
      do
      {
        v31 = *(unsigned __int8 *)(v29 + 92);
        v32 = v30 + 1;
        v29 += 91;
        if ( v31 != v28 )
        {
          V_LOCK(v28);
          v33 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v33);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
            192,
            "verify_nonce_integrality_zec_1746",
            33,
            312,
            20,
            var1004);
          return 36;
        }
        ++v30;
      }
      while ( v32 != 15 );
      v34 = *(unsigned __int8 *)(v18 + 2);
      v35 = v18;
      v36 = 0;
      do
      {
        v37 = *(unsigned __int8 *)(v35 + 93);
        v38 = v36 + 1;
        v35 += 91;
        if ( v37 != v34 )
        {
          V_LOCK(v34);
          v39 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v39);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
            192,
            "verify_nonce_integrality_zec_1746",
            33,
            321,
            20,
            var1004);
          return 36;
        }
        ++v36;
      }
      while ( v38 != 15 );
      v40 = v18;
      do
      {
        v41 = *(unsigned __int8 *)(v40 + 94);
        v42 = v23 + 1;
        v40 += 91;
        if ( v41 != *(unsigned __int8 *)(v18 + 3) )
        {
          V_LOCK(v34);
          v43 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v43);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
            192,
            "verify_nonce_integrality_zec_1746",
            33,
            330,
            20,
            var1004);
          return 36;
        }
        ++v23;
      }
      while ( v42 != 15 );
      v44 = (char *)(v18 + 4);
      v45 = v16 + 36385 + 1357 * v13;
      v53 = 1357 * v13;
      v46 = (char *)v45;
      do
      {
        v47 = v46;
        v46 += 85;
        memcpy(v47, v44, 0x55u);
        v44 += 91;
      }
      while ( (char *)(v45 + 1275) != v46 );
      memcpy((void *)(v45 + 1275), (const void *)(v18 + 1369), 0x45u);
      *(_DWORD *)(v45 + 1352) = *(_DWORD *)(v18 + 1450);
      *(_BYTE *)(v45 + 1344) = *(_BYTE *)(v18 + 1366);
      *(_BYTE *)(v45 + 1345) = *(_BYTE *)(v18 + 1367);
      *(_BYTE *)(v45 + 1346) = *(_BYTE *)(v18 + 1368);
      *(_BYTE *)(v45 + 1347) = *(_BYTE *)(v18 + 1441);
      *(_DWORD *)(v45 + 1348) = *(_DWORD *)(v18 + 1442);
      v48 = *(_DWORD *)(v16 + 8 * v52);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(v16 + 8 * v52 + 4);
      *(_DWORD *)a3 = v48;
      *a7 = v48;
      strcpy((char *)(a3 + 16), (const char *)(v16 + 32 * (v52 + 32)));
      *(_DWORD *)(a3 + 48) = *(_DWORD *)(v16 + v53 + 37737);
      memcpy((void *)(a3 + 54), (const void *)(v16 + v53 + 36385), 0x540u);
      v49 = *(_BYTE *)(v16 + 1357 * v13 + 37732);
      *(_BYTE *)(a3 + 53) = v52;
      *(_BYTE *)(a3 + 52) = v49;
      *a6 = v13;
      v50 = *(_DWORD *)(a3 + 48);
      *(_DWORD *)(a3 + 8) = v13;
      *a5 = v50;
      *a4 = 1;
      return 0;
    }
    else
    {
      return 14;
    }
  }
}
