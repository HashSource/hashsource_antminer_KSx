int __fastcall membist0(int a1)
{
  int v2; // r0
  int v3; // r11
  void *v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r6
  int v9; // r0
  unsigned int *v10; // r4
  int v11; // r5
  int v12; // r0
  int v13; // r0
  int v14; // r6
  int v15; // r0
  unsigned int *v16; // r4
  int v17; // r5
  int v18; // r0
  int v19; // r6
  int v20; // r0
  int v21; // r5
  _DWORD *v22; // r4
  int v23; // r0
  _DWORD *v24; // r3
  int v25; // r0
  int v26; // r6
  unsigned int v27; // r5
  unsigned int v28; // r7
  unsigned int v29; // r8
  int v30; // r0
  int v31; // r0
  int v33; // r0
  _DWORD *v34; // r3
  int v35; // r0
  _DWORD *v36; // r3
  int v37; // [sp+54h] [bp-1798h]
  void *ptr; // [sp+58h] [bp-1794h]
  void *ptra[2]; // [sp+58h] [bp-1794h]
  char *v40[2]; // [sp+60h] [bp-178Ch]
  int v41; // [sp+68h] [bp-1784h]
  __int64 v42; // [sp+68h] [bp-1784h]
  int v43; // [sp+70h] [bp-177Ch]
  char *v44; // [sp+84h] [bp-1768h]
  int i; // [sp+8Ch] [bp-1760h]
  _DWORD v46[5]; // [sp+94h] [bp-1758h] BYREF
  char v47[32]; // [sp+A8h] [bp-1744h] BYREF
  int v48; // [sp+C8h] [bp-1724h] BYREF
  char v49[32]; // [sp+E8h] [bp-1704h] BYREF
  int v50; // [sp+108h] [bp-16E4h] BYREF
  char v51[32]; // [sp+128h] [bp-16C4h] BYREF
  int v52; // [sp+148h] [bp-16A4h] BYREF
  char v53[32]; // [sp+168h] [bp-1684h] BYREF
  int v54; // [sp+188h] [bp-1664h] BYREF
  char v55[32]; // [sp+1A8h] [bp-1644h] BYREF
  int v56; // [sp+1C8h] [bp-1624h] BYREF
  _BYTE s[512]; // [sp+1E8h] [bp-1604h] BYREF
  _BYTE v58[512]; // [sp+3E8h] [bp-1404h] BYREF
  _BYTE v59[512]; // [sp+5E8h] [bp-1204h] BYREF
  _DWORD v60[1025]; // [sp+7E8h] [bp-1004h] BYREF

  v44 = (char *)v46;
  v46[0] = -2023406815;
  v46[1] = 1266163410;
  v46[2] = 2015285835;
  v46[3] = 517098360;
  v46[4] = -766805986;
  V_LOCK(-2023406815);
  v2 = logfmt_raw((int)v60, 0x1000u);
  V_UNLOCK(v2);
  v3 = a1;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
    192,
    "membist0",
    8,
    547,
    40,
    v60);
  memset(s, 0, sizeof(s));
  memset(v58, 0, sizeof(v58));
  memset(v59, 0, sizeof(v59));
  v4 = calloc(0x600u, 1u);
  v41 = 0;
  ptr = v4;
  do
  {
    V_LOCK(v4);
    V_INT((int)v47, "chain");
    v5 = *(_DWORD *)v44;
    v44 += 4;
    v43 = 0;
    v6 = logfmt_raw((int)v60, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
      192,
      "membist0",
      8,
      557,
      60,
      v60);
    sub_D0FF4(v3, 164, v5);
    do
    {
      sub_D1120(v3, v43, 12, 1);
      sub_D1120(v3, v43, 160, 3);
      usleep((__useconds_t)"3c2aE");
      v7 = sub_D13B8(v3, (unsigned __int16)v43, 161, ptr);
      v8 = v7;
      if ( v7 == 8
        || (V_LOCK(v7),
            V_INT((int)&v48, "chain"),
            v9 = logfmt_raw((int)v60, 0x1000u),
            V_UNLOCK(v9),
            v7 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
                   192,
                   "membist0",
                   8,
                   568,
                   100,
                   v60),
            v8 > 0) )
      {
        v10 = (unsigned int *)ptr;
        v11 = 0;
        do
        {
          while ( (*v10 & 0x80) == 0 )
          {
            V_LOCK(v7);
            ++v11;
            v10 += 3;
            V_INT((int)&v50, "chain");
            v12 = logfmt_raw((int)v60, 0x1000u);
            V_UNLOCK(v12);
            v7 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
                   192,
                   "membist0",
                   8,
                   584,
                   100,
                   v60);
            if ( v8 <= v11 )
              goto LABEL_11;
          }
          if ( (*v10 & 0xFFFFFF00) != 0 )
          {
            V_LOCK(v7);
            V_INT((int)v49, "chain");
            v33 = logfmt_raw((int)v60, 0x1000u);
            V_UNLOCK(v33);
            v7 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
                   192,
                   "membist0",
                   8,
                   578,
                   100,
                   v60);
            v34 = &v60[16 * *((unsigned __int8 *)v10 + 4) + v41];
            *(v34 - 384) += bswap32(*v10) & 0x7FFFFF;
          }
          ++v11;
          v10 += 3;
        }
        while ( v8 > v11 );
      }
LABEL_11:
      memset(ptr, 0, 0x600u);
      v13 = sub_D13B8(v3, (unsigned __int16)v43, 162, ptr);
      v14 = v13;
      if ( v13 == 8
        || (V_LOCK(v13),
            V_INT((int)v51, "chain"),
            v15 = logfmt_raw((int)v60, 0x1000u),
            V_UNLOCK(v15),
            v13 = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
                    192,
                    "membist0",
                    8,
                    592,
                    100,
                    v60),
            v14 > 0) )
      {
        v16 = (unsigned int *)ptr;
        v17 = 0;
        do
        {
          while ( (*v16 & 0x80) == 0 )
          {
            V_LOCK(v13);
            ++v17;
            v16 += 3;
            V_INT((int)v53, "chain");
            v18 = logfmt_raw((int)v60, 0x1000u);
            V_UNLOCK(v18);
            v13 = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
                    192,
                    "membist0",
                    8,
                    607,
                    100,
                    v60);
            if ( v14 <= v17 )
              goto LABEL_19;
          }
          if ( (*v16 & 0xFFFFFF00) != 0 )
          {
            V_LOCK(v13);
            V_INT((int)&v52, "chain");
            v35 = logfmt_raw((int)v60, 0x1000u);
            V_UNLOCK(v35);
            v13 = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
                    192,
                    "membist0",
                    8,
                    601,
                    100,
                    v60);
            v36 = &v60[16 * *((unsigned __int8 *)v16 + 4) + v41];
            *(v36 - 256) += bswap32(*v16) & 0x7FFFFF;
          }
          ++v17;
          v16 += 3;
        }
        while ( v14 > v17 );
      }
LABEL_19:
      memset(ptr, 0, 0x600u);
      v4 = (void *)sub_D13B8(v3, (unsigned __int16)v43, 163, ptr);
      v19 = (int)v4;
      if ( v4 == (void *)8
        || (V_LOCK(v4),
            V_INT((int)&v54, "chain"),
            v20 = logfmt_raw((int)v60, 0x1000u),
            V_UNLOCK(v20),
            v4 = (void *)zlog(
                           g_zc,
                           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildr"
                           "oot/tmp/release/build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
                           192,
                           "membist0",
                           8,
                           615,
                           100,
                           v60),
            v19 > 0) )
      {
        v21 = 0;
        v22 = ptr;
        do
        {
          while ( 1 )
          {
            ++v21;
            if ( (*v22 & 0xFFFF00) != 0 && (*v22 & 0xC0) != 0 )
              break;
            v22 += 3;
            if ( v19 <= v21 )
              goto LABEL_26;
          }
          V_LOCK(v4);
          v22 += 3;
          V_INT((int)v55, "chain");
          v23 = logfmt_raw((int)v60, 0x1000u);
          V_UNLOCK(v23);
          v4 = (void *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
                         192,
                         "membist0",
                         8,
                         623,
                         100,
                         v60);
          v24 = &v60[16 * *((unsigned __int8 *)v22 - 8) + v41];
          *(v24 - 128) += bswap32(*(v22 - 3)) & 0x7FFF;
        }
        while ( v19 > v21 );
      }
LABEL_26:
      ++v43;
    }
    while ( v43 != 16 );
    ++v41;
  }
  while ( v41 != 5 );
  free(ptr);
  for ( i = 0; i != 20; i += 4 )
  {
    v26 = 0;
    *(_QWORD *)ptra = 0;
    v37 = i;
    *(_QWORD *)v40 = 0;
    v42 = 0;
    do
    {
      v27 = *(_DWORD *)&s[v37];
      v28 = *(_DWORD *)&v58[v37];
      v29 = *(_DWORD *)&v59[v37];
      V_LOCK(v25);
      *(_QWORD *)ptra += v27;
      *(_QWORD *)v40 += v28;
      V_INT((int)&v56, "chain");
      v42 += v29;
      v37 += 64;
      ++v26;
      v30 = logfmt_raw((int)v60, 0x1000u);
      V_UNLOCK(v30);
      v25 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
              192,
              "membist0",
              8,
              642,
              100,
              v60);
    }
    while ( v26 != 8 );
  }
  v31 = dev_ctrl(v25);
  (*(void (__fastcall **)(_DWORD))(v31 + 80))(*(_DWORD *)(v3 + 244));
  return 0;
}
