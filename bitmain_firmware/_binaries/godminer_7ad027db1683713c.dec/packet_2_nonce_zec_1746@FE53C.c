int __fastcall packet_2_nonce_zec_1746(int a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, unsigned int *a6, _DWORD *a7)
{
  char v7; // r6
  unsigned int v12; // r0
  unsigned int v13; // r10
  int v14; // r6
  int v15; // r5
  int v16; // r11
  int v17; // r7
  int v18; // r5
  unsigned __int8 *v19; // r9
  int v20; // r4
  char *v21; // r2
  int i; // r5
  char v23; // r3
  int v24; // r3
  int v25; // r5
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r5
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r1
  int v34; // r5
  char *v35; // r6
  int v36; // r4
  char *v37; // r5
  char *v38; // r0
  int v39; // r3
  char v40; // r2
  int v41; // r2
  int v43; // [sp+18h] [bp-1014h]
  int v44; // [sp+1Ch] [bp-1010h]
  unsigned __int16 v45; // [sp+26h] [bp-1006h]
  char var1004[4120]; // [sp+28h] [bp-1004h] BYREF

  v7 = a2[2];
  if ( (v7 & 0xF0) != 0xE0 )
    return 10;
  v12 = sub_25ABA8((unsigned __int8)a2[3], *(_DWORD *)(a1 + 404));
  v13 = v12;
  if ( v12 > 5 )
  {
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "%s chip %d is not exist", "packet_2_nonce_zec_1746", v13);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      187,
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
    v16 = *(_DWORD *)(a1 + 800);
    v43 = (unsigned __int8)a2[4];
    memcpy((void *)(v16 + 91 * (__int16)v14 + 1456 * v12 + 27649), a2 + 2, 0x5Bu);
    if ( v14 == 15 )
    {
      v17 = v16 + 27649 + v15;
      v18 = 0;
      v19 = (unsigned __int8 *)v17;
      do
      {
        v45 = __rev16(BM_CRC16(v19, 89));
        if ( __PAIR64__(HIBYTE(v45), (unsigned __int8)v45) != __PAIR64__(v19[90], v19[89]) )
        {
          V_LOCK();
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            "nonce crc error, calc %04x, expected %02x%02x",
            v45,
            *(unsigned __int8 *)(v17 + 91 * v18 + 89),
            *(unsigned __int8 *)(v17 + 91 * v18 + 90));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "verify_nonce_integrality_zec_1746",
            33,
            294,
            20,
            var1004);
          return 11;
        }
        ++v18;
        v19 += 91;
        v20 = 0;
      }
      while ( v18 != 16 );
      v21 = (char *)v17;
      for ( i = 0; i != 16; ++i )
      {
        v23 = *v21;
        v21 += 91;
        if ( (v23 & 0xF) != i )
        {
          V_LOCK();
          logfmt_raw(var1004, 0x1000u, 0, "nonce is not continous i=%d", i);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "verify_nonce_integrality_zec_1746",
            33,
            303,
            20,
            var1004);
          return 36;
        }
      }
      v24 = v17;
      v25 = 0;
      do
      {
        v26 = *(unsigned __int8 *)(v24 + 92);
        v27 = v25 + 1;
        v24 += 91;
        if ( v26 != *(unsigned __int8 *)(v17 + 1) )
        {
          V_LOCK();
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            "chip_addr is different %02x != %02x",
            *(unsigned __int8 *)(v17 + 91 * v25 + 1),
            *(unsigned __int8 *)(v17 + 91 * (v25 + 1) + 1));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "verify_nonce_integrality_zec_1746",
            33,
            312,
            20,
            var1004);
          return 36;
        }
        ++v25;
      }
      while ( v27 != 15 );
      v28 = v17;
      v29 = 0;
      do
      {
        v30 = *(unsigned __int8 *)(v28 + 93);
        v31 = v29 + 1;
        v28 += 91;
        if ( v30 != *(unsigned __int8 *)(v17 + 2) )
        {
          V_LOCK();
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            "workID is different %02x != %02x",
            *(unsigned __int8 *)(v17 + 91 * v29 + 2),
            *(unsigned __int8 *)(v17 + 91 * (v29 + 1) + 2));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "verify_nonce_integrality_zec_1746",
            33,
            321,
            20,
            var1004);
          return 36;
        }
        ++v29;
      }
      while ( v31 != 15 );
      v32 = v17;
      do
      {
        v33 = *(unsigned __int8 *)(v32 + 94);
        v34 = v20 + 1;
        v32 += 91;
        if ( v33 != *(unsigned __int8 *)(v17 + 3) )
        {
          V_LOCK();
          logfmt_raw(
            var1004,
            0x1000u,
            0,
            "nonceID is different %02x != %02x chipid=%d",
            *(unsigned __int8 *)(v17 + 91 * v20 + 3),
            *(unsigned __int8 *)(v17 + 91 * v34 + 3),
            v13);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "verify_nonce_integrality_zec_1746",
            33,
            330,
            20,
            var1004);
          return 36;
        }
        ++v20;
      }
      while ( v34 != 15 );
      v35 = (char *)(v17 + 4);
      v36 = v16 + 36385 + 1357 * v13;
      v44 = 1357 * v13;
      v37 = (char *)v36;
      do
      {
        v38 = v37;
        v37 += 85;
        memcpy(v38, v35, 0x55u);
        v35 += 91;
      }
      while ( (char *)(v36 + 1275) != v37 );
      memcpy((void *)(v36 + 1275), (const void *)(v17 + 1369), 0x45u);
      *(_DWORD *)(v36 + 1352) = *(_DWORD *)(v17 + 1450);
      *(_BYTE *)(v36 + 1344) = *(_BYTE *)(v17 + 1366);
      *(_BYTE *)(v36 + 1345) = *(_BYTE *)(v17 + 1367);
      *(_BYTE *)(v36 + 1346) = *(_BYTE *)(v17 + 1368);
      *(_BYTE *)(v36 + 1347) = *(_BYTE *)(v17 + 1441);
      *(_DWORD *)(v36 + 1348) = *(_DWORD *)(v17 + 1442);
      v39 = *(_DWORD *)(v16 + 8 * v43);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(v16 + 8 * v43 + 4);
      *(_DWORD *)a3 = v39;
      *a7 = v39;
      strcpy((char *)(a3 + 16), (const char *)(v16 + 32 * (v43 + 32)));
      *(_DWORD *)(a3 + 48) = *(_DWORD *)(v16 + v44 + 37737);
      memcpy((void *)(a3 + 54), (const void *)(v16 + v44 + 36385), 0x540u);
      v40 = *(_BYTE *)(v16 + 1357 * v13 + 37732);
      *(_BYTE *)(a3 + 53) = v43;
      *(_BYTE *)(a3 + 52) = v40;
      *a6 = v13;
      v41 = *(_DWORD *)(a3 + 48);
      *(_DWORD *)(a3 + 8) = v13;
      *a5 = v41;
      *a4 = 1;
      return 0;
    }
    else
    {
      return 14;
    }
  }
}
