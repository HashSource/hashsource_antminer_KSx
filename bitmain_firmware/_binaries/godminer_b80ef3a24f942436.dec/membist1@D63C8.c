int __fastcall membist1(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r6
  int v5; // r0
  unsigned int *v6; // r4
  int v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r0
  unsigned int *v12; // r4
  int v13; // r5
  int v14; // r0
  int v15; // r5
  int v16; // r0
  unsigned int v17; // r7
  unsigned int v18; // r6
  int v19; // r0
  int v20; // r0
  int v22; // r0
  _DWORD *v23; // r2
  int v24; // r0
  _DWORD *v25; // r2
  char *v26[2]; // [sp+40h] [bp-116Ch]
  void *s; // [sp+48h] [bp-1164h]
  __int64 sa; // [sp+48h] [bp-1164h]
  char *v29; // [sp+50h] [bp-115Ch]
  int v30; // [sp+54h] [bp-1158h]
  char v31[32]; // [sp+68h] [bp-1144h] BYREF
  int v32; // [sp+88h] [bp-1124h] BYREF
  char v33[32]; // [sp+A8h] [bp-1104h] BYREF
  int v34; // [sp+C8h] [bp-10E4h] BYREF
  char v35[32]; // [sp+E8h] [bp-10C4h] BYREF
  int v36; // [sp+108h] [bp-10A4h] BYREF
  char v37[32]; // [sp+128h] [bp-1084h] BYREF
  int v38; // [sp+148h] [bp-1064h] BYREF
  char v39; // [sp+164h] [bp-1048h] BYREF
  __int64 v40; // [sp+168h] [bp-1044h]
  __int64 v41; // [sp+170h] [bp-103Ch]
  double v42; // [sp+178h] [bp-1034h]
  double v43; // [sp+180h] [bp-102Ch]
  __int64 v44; // [sp+188h] [bp-1024h]
  __int64 v45; // [sp+190h] [bp-101Ch]
  double v46; // [sp+198h] [bp-1014h]
  double v47; // [sp+1A0h] [bp-100Ch]
  _DWORD v48[1025]; // [sp+1A8h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v31, "chain", *(int *)(a1 + 248));
  v2 = logfmt_raw((int)v48, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "membist1",
    8,
    697,
    60,
    v48);
  v30 = 0;
  v44 = 0;
  v45 = 0;
  v40 = 0;
  v41 = 0;
  v46 = 0.0;
  v47 = 0.0;
  v42 = 0.0;
  v43 = 0.0;
  s = malloc(0x600u);
  do
  {
    sub_D1D3C(a1, v30, 12, 1);
    usleep((__useconds_t)"r17hb863d821ff89472fE");
    sub_D1D3C(a1, v30, 160, -2147483647);
    usleep(0xC3500u);
    memset(s, 0, 0x600u);
    v3 = sub_D1FD4(a1, (unsigned __int16)v30, 161, s);
    v4 = v3;
    if ( v3 == 8
      || (V_LOCK(v3),
          V_INT((int)&v32, "chain", *(int *)(a1 + 248)),
          v5 = logfmt_raw((int)v48, 0x1000u),
          V_UNLOCK(v5),
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 187,
                 "membist1",
                 8,
                 721,
                 100,
                 v48),
          v4 > 0) )
    {
      v6 = (unsigned int *)s;
      v7 = 0;
      do
      {
        while ( (*v6 & 0x80) == 0 )
        {
          V_LOCK(v3);
          ++v7;
          v6 += 3;
          V_INT((int)&v34, "chain", *(int *)(a1 + 248));
          v8 = logfmt_raw((int)v48, 0x1000u);
          V_UNLOCK(v8);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 187,
                 "membist1",
                 8,
                 737,
                 100,
                 v48);
          if ( v4 <= v7 )
            goto LABEL_10;
        }
        if ( (*v6 & 0xFFFFFF00) != 0 )
        {
          V_LOCK(v3);
          V_INT((int)v33, "chain", *(int *)(a1 + 248));
          v22 = logfmt_raw((int)v48, 0x1000u);
          V_UNLOCK(v22);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 187,
                 "membist1",
                 8,
                 730,
                 100,
                 v48);
          v23 = &v48[*((unsigned __int8 *)v6 + 4)];
          *(v23 - 8) += bswap32(*v6) & 0x7FFFFF;
        }
        ++v7;
        v6 += 3;
      }
      while ( v4 > v7 );
    }
LABEL_10:
    memset(s, 0, 0x600u);
    v9 = sub_D1FD4(a1, (unsigned __int16)v30, 162, s);
    v10 = v9;
    if ( v9 == 8
      || (V_LOCK(v9),
          V_INT((int)v35, "chain", *(int *)(a1 + 248)),
          v11 = logfmt_raw((int)v48, 0x1000u),
          V_UNLOCK(v11),
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 187,
                 "membist1",
                 8,
                 745,
                 100,
                 v48),
          v10 > 0) )
    {
      v12 = (unsigned int *)s;
      v13 = 0;
      do
      {
        while ( (*v12 & 0x80) == 0 )
        {
          V_LOCK(v9);
          ++v13;
          v12 += 3;
          V_INT((int)v37, "chain", *(int *)(a1 + 248));
          v14 = logfmt_raw((int)v48, 0x1000u);
          V_UNLOCK(v14);
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 187,
                 "membist1",
                 8,
                 761,
                 100,
                 v48);
          if ( v10 <= v13 )
            goto LABEL_18;
        }
        if ( (*v12 & 0xFFFFFF00) != 0 )
        {
          V_LOCK(v9);
          V_INT((int)&v36, "chain", *(int *)(a1 + 248));
          v24 = logfmt_raw((int)v48, 0x1000u);
          V_UNLOCK(v24);
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 187,
                 "membist1",
                 8,
                 754,
                 100,
                 v48);
          v25 = &v48[*((unsigned __int8 *)v12 + 4)];
          *(v25 - 16) += bswap32(*v12) & 0x7FFFFF;
        }
        ++v13;
        v12 += 3;
      }
      while ( v10 > v13 );
    }
LABEL_18:
    ++v30;
  }
  while ( v30 != 16 );
  v15 = 0;
  *(_QWORD *)v26 = 0;
  free(s);
  v16 = 0;
  sa = 0;
  v29 = &v39;
  do
  {
    v17 = *((_DWORD *)&v44 + v15);
    v18 = *((_DWORD *)v29 + 1);
    v29 += 4;
    V_LOCK(v16);
    *(_QWORD *)v26 += v17;
    sa += v18;
    V_INT((int)&v38, "chain", *(int *)(a1 + 248));
    ++v15;
    v19 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v19);
    v16 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            187,
            "membist1",
            8,
            774,
            100,
            v48);
  }
  while ( v15 != 8 );
  v20 = dev_ctrl(v16);
  (*(void (__fastcall **)(_DWORD))(v20 + 96))(*(_DWORD *)(a1 + 240));
  qword_301108 = v44;
  qword_301110 = v45;
  qword_301118 = *(_QWORD *)&v46;
  qword_301120 = *(_QWORD *)&v47;
  return 0;
}
