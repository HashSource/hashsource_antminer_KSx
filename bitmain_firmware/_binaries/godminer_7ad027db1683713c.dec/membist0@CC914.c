int __fastcall membist0(int a1)
{
  int v2; // r11
  int v3; // r4
  int v4; // r6
  unsigned int *v5; // r4
  int i; // r5
  int v7; // r6
  unsigned int *v8; // r4
  int j; // r5
  int v10; // r6
  int v11; // r5
  _DWORD *v12; // r4
  _DWORD *v13; // r3
  int v14; // r6
  unsigned int v15; // r5
  unsigned int v16; // r7
  unsigned int v17; // r8
  int v18; // r0
  int (**v19)(); // r0
  _DWORD *v21; // r3
  _DWORD *v22; // r3
  int v23; // [sp+24h] [bp-17C8h]
  int v24; // [sp+34h] [bp-17B8h]
  int v25; // [sp+54h] [bp-1798h]
  void *ptr; // [sp+58h] [bp-1794h]
  void *ptra[2]; // [sp+58h] [bp-1794h]
  char *v28[2]; // [sp+60h] [bp-178Ch]
  int v29; // [sp+68h] [bp-1784h]
  __int64 v30; // [sp+68h] [bp-1784h]
  int v31; // [sp+70h] [bp-177Ch]
  char *v32; // [sp+84h] [bp-1768h]
  int k; // [sp+8Ch] [bp-1760h]
  _DWORD v34[5]; // [sp+94h] [bp-1758h] BYREF
  _DWORD v35[7]; // [sp+A8h] [bp-1744h] BYREF
  int v36; // [sp+C4h] [bp-1728h]
  _DWORD v37[7]; // [sp+C8h] [bp-1724h] BYREF
  int v38; // [sp+E4h] [bp-1708h]
  _DWORD v39[7]; // [sp+E8h] [bp-1704h] BYREF
  int v40; // [sp+104h] [bp-16E8h]
  _DWORD v41[7]; // [sp+108h] [bp-16E4h] BYREF
  int v42; // [sp+124h] [bp-16C8h]
  _DWORD v43[7]; // [sp+128h] [bp-16C4h] BYREF
  int v44; // [sp+144h] [bp-16A8h]
  _DWORD v45[7]; // [sp+148h] [bp-16A4h] BYREF
  int v46; // [sp+164h] [bp-1688h]
  _DWORD v47[7]; // [sp+168h] [bp-1684h] BYREF
  int v48; // [sp+184h] [bp-1668h]
  _DWORD v49[7]; // [sp+188h] [bp-1664h] BYREF
  int v50; // [sp+1A4h] [bp-1648h]
  _DWORD v51[7]; // [sp+1A8h] [bp-1644h] BYREF
  int v52; // [sp+1C4h] [bp-1628h]
  _DWORD v53[7]; // [sp+1C8h] [bp-1624h] BYREF
  int v54; // [sp+1E4h] [bp-1608h]
  _BYTE s[512]; // [sp+1E8h] [bp-1604h] BYREF
  _BYTE v56[512]; // [sp+3E8h] [bp-1404h] BYREF
  _BYTE v57[512]; // [sp+5E8h] [bp-1204h] BYREF
  _DWORD v58[1025]; // [sp+7E8h] [bp-1004h] BYREF

  v32 = (char *)v34;
  v34[0] = -2023406815;
  v34[1] = 1266163410;
  v34[2] = 2015285835;
  v34[3] = 517098360;
  v34[4] = -766805986;
  V_LOCK();
  logfmt_raw((char *)v58, 0x1000u, 0, "%s...", "membist0");
  V_UNLOCK();
  v2 = a1;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "membist0",
    8,
    545,
    40,
    v58);
  memset(s, 0, sizeof(s));
  memset(v56, 0, sizeof(v56));
  memset(v57, 0, sizeof(v57));
  v29 = 0;
  ptr = calloc(0x600u, 1u);
  do
  {
    V_LOCK();
    V_INT((int)v35, "chain", *(int *)(v2 + 232));
    v3 = *(_DWORD *)v32;
    v32 += 4;
    v31 = 0;
    logfmt_raw(
      (char *)v58,
      0x1000u,
      0,
      v36,
      v35[0],
      v35[1],
      v35[2],
      v35[3],
      v35[4],
      v35[5],
      v35[6],
      v36,
      "membist0 final pattern %08x",
      v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      187,
      "membist0",
      8,
      555,
      60,
      v58);
    sub_C8D58(v2, 164, v3);
    do
    {
      sub_C8E84(v2, v31, 12, 1);
      sub_C8E84(v2, v31, 160, 3);
      usleep((__useconds_t)"");
      v4 = sub_C911C(v2, (unsigned __int16)v31, 161, ptr);
      if ( v4 == 8
        || (V_LOCK(),
            V_INT((int)v37, "chain", *(int *)(v2 + 232)),
            logfmt_raw(
              (char *)v58,
              0x1000u,
              0,
              v38,
              v37[0],
              v37[1],
              v37[2],
              v37[3],
              v37[4],
              v37[5],
              v37[6],
              v38,
              "get membist0 err cnt failed, resp_num: %d\n",
              v4),
            V_UNLOCK(),
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              187,
              "membist0",
              8,
              566,
              100,
              v58),
            v4 > 0) )
      {
        v5 = (unsigned int *)ptr;
        for ( i = 0; i < v4; ++i )
        {
          while ( (*v5 & 0x80) == 0 )
          {
            V_LOCK();
            ++i;
            v5 += 3;
            V_INT((int)v41, "chain", *(int *)(v2 + 232));
            logfmt_raw(
              (char *)v58,
              0x1000u,
              0,
              v42,
              v41[0],
              v41[1],
              v41[2],
              v41[3],
              v41[4],
              v41[5],
              v41[6],
              v42,
              "chip %02x core %02x membist err not done!",
              *((unsigned __int8 *)v5 - 8),
              *((unsigned __int8 *)v5 - 4));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              187,
              "membist0",
              8,
              582,
              100,
              v58);
            if ( v4 <= i )
              goto LABEL_11;
          }
          if ( (*v5 & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            V_INT((int)v39, "chain", *(int *)(v2 + 232));
            logfmt_raw(
              (char *)v58,
              0x1000u,
              0,
              v40,
              v39[0],
              v39[1],
              v39[2],
              v39[3],
              v39[4],
              v39[5],
              v39[6],
              v40,
              "chip %02x core %02x membist0 err cnt: %08x",
              *((unsigned __int8 *)v5 + 4),
              *((unsigned __int8 *)v5 + 8),
              bswap32(*v5));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              187,
              "membist0",
              8,
              576,
              100,
              v58);
            v21 = &v58[16 * *((unsigned __int8 *)v5 + 4) + v29];
            *(v21 - 384) += bswap32(*v5) & 0x7FFFFF;
          }
          v5 += 3;
        }
      }
LABEL_11:
      memset(ptr, 0, 0x600u);
      v7 = sub_C911C(v2, (unsigned __int16)v31, 162, ptr);
      if ( v7 == 8
        || (V_LOCK(),
            V_INT((int)v43, "chain", *(int *)(v2 + 232)),
            logfmt_raw(
              (char *)v58,
              0x1000u,
              0,
              v44,
              v43[0],
              v43[1],
              v43[2],
              v43[3],
              v43[4],
              v43[5],
              v43[6],
              v44,
              "get membist0 lost cnt failed, resp_num: %d\n",
              v7),
            V_UNLOCK(),
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              187,
              "membist0",
              8,
              590,
              100,
              v58),
            v7 > 0) )
      {
        v8 = (unsigned int *)ptr;
        for ( j = 0; j < v7; ++j )
        {
          while ( (*v8 & 0x80) == 0 )
          {
            V_LOCK();
            ++j;
            v8 += 3;
            V_INT((int)v47, "chain", *(int *)(v2 + 232));
            logfmt_raw(
              (char *)v58,
              0x1000u,
              0,
              v48,
              v47[0],
              v47[1],
              v47[2],
              v47[3],
              v47[4],
              v47[5],
              v47[6],
              v48,
              "chip %02x core %02x membist cnt not done!",
              *((unsigned __int8 *)v8 - 8),
              *((unsigned __int8 *)v8 - 4));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              187,
              "membist0",
              8,
              605,
              100,
              v58);
            if ( v7 <= j )
              goto LABEL_19;
          }
          if ( (*v8 & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            V_INT((int)v45, "chain", *(int *)(v2 + 232));
            logfmt_raw(
              (char *)v58,
              0x1000u,
              0,
              v46,
              v45[0],
              v45[1],
              v45[2],
              v45[3],
              v45[4],
              v45[5],
              v45[6],
              v46,
              "chip %02x core %02x membist0 lost cnt: %08x",
              *((unsigned __int8 *)v8 + 4),
              *((unsigned __int8 *)v8 + 8),
              bswap32(*v8));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              187,
              "membist0",
              8,
              599,
              100,
              v58);
            v22 = &v58[16 * *((unsigned __int8 *)v8 + 4) + v29];
            *(v22 - 256) += bswap32(*v8) & 0x7FFFFF;
          }
          v8 += 3;
        }
      }
LABEL_19:
      memset(ptr, 0, 0x600u);
      v10 = sub_C911C(v2, (unsigned __int16)v31, 163, ptr);
      if ( v10 == 8
        || (V_LOCK(),
            V_INT((int)v49, "chain", *(int *)(v2 + 232)),
            logfmt_raw(
              (char *)v58,
              0x1000u,
              0,
              v50,
              v49[0],
              v49[1],
              v49[2],
              v49[3],
              v49[4],
              v49[5],
              v49[6],
              v50,
              "get membist0 etherr cnt failed, resp_num: %d\n",
              v10),
            V_UNLOCK(),
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              187,
              "membist0",
              8,
              613,
              100,
              v58),
            v10 > 0) )
      {
        v11 = 0;
        v12 = ptr;
        do
        {
          while ( 1 )
          {
            ++v11;
            if ( (*v12 & 0xFFFF00) != 0 && (*v12 & 0xC0) != 0 )
              break;
            v12 += 3;
            if ( v10 <= v11 )
              goto LABEL_26;
          }
          V_LOCK();
          v12 += 3;
          V_INT((int)v51, "chain", *(int *)(v2 + 232));
          logfmt_raw(
            (char *)v58,
            0x1000u,
            0,
            v52,
            v51[0],
            v51[1],
            v51[2],
            v51[3],
            v51[4],
            v51[5],
            v51[6],
            v52,
            "chip %02x core %02x ethbist err cnt: %08x",
            *((unsigned __int8 *)v12 - 8),
            *((unsigned __int8 *)v12 - 4),
            bswap32(*(v12 - 3)));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            187,
            "membist0",
            8,
            621,
            100,
            v58);
          v13 = &v58[16 * *((unsigned __int8 *)v12 - 8) + v29];
          *(v13 - 128) += bswap32(*(v12 - 3)) & 0x7FFF;
        }
        while ( v10 > v11 );
      }
LABEL_26:
      ++v31;
    }
    while ( v31 != 16 );
    ++v29;
  }
  while ( v29 != 5 );
  free(ptr);
  for ( k = 0; k != 20; k += 4 )
  {
    v14 = 0;
    *(_QWORD *)ptra = 0;
    v25 = k;
    *(_QWORD *)v28 = 0;
    v30 = 0;
    do
    {
      v15 = *(_DWORD *)&s[v25];
      v16 = *(_DWORD *)&v56[v25];
      v17 = *(_DWORD *)&v57[v25];
      V_LOCK();
      *(_QWORD *)ptra += v15;
      *(_QWORD *)v28 += v16;
      V_INT((int)v53, "chain", *(int *)(v2 + 232));
      v30 += v17;
      v25 += 64;
      v23 = v14++;
      logfmt_raw(
        (char *)v58,
        0x1000u,
        0,
        v54,
        v53[0],
        v53[1],
        v53[2],
        v53[3],
        v53[4],
        v53[5],
        v53[6],
        v54,
        "chip %02x membist0: lost/err/etherr: %08x/%08x/%08x, total:lost/err/etherr: %llx/%llx/%llx",
        v23,
        v15,
        v16,
        v17,
        v24,
        *(_QWORD *)ptra,
        *(_QWORD *)v28,
        v30);
      V_UNLOCK();
      v18 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              187,
              "membist0",
              8,
              640,
              100,
              v58);
    }
    while ( v14 != 8 );
  }
  v19 = dev_ctrl(v18);
  ((void (__fastcall *)(_DWORD))v19[20])(*(_DWORD *)(v2 + 228));
  return 0;
}
