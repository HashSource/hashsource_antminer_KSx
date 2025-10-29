int __fastcall membist1(int a1)
{
  int v2; // r6
  unsigned int *v3; // r4
  int i; // r5
  int v5; // r6
  unsigned int *v6; // r4
  int j; // r5
  int v8; // r5
  unsigned int v9; // r7
  unsigned int v10; // r6
  int v11; // r0
  int (**v12)(); // r0
  char *v14; // r2
  char *v15; // r2
  int v16; // [sp+24h] [bp-1188h]
  char *v17[2]; // [sp+40h] [bp-116Ch]
  void *s; // [sp+48h] [bp-1164h]
  __int64 sa; // [sp+48h] [bp-1164h]
  int *v20; // [sp+50h] [bp-115Ch]
  int v21; // [sp+54h] [bp-1158h]
  _DWORD v22[7]; // [sp+68h] [bp-1144h] BYREF
  int v23; // [sp+84h] [bp-1128h]
  _DWORD v24[7]; // [sp+88h] [bp-1124h] BYREF
  int v25; // [sp+A4h] [bp-1108h]
  _DWORD v26[7]; // [sp+A8h] [bp-1104h] BYREF
  int v27; // [sp+C4h] [bp-10E8h]
  _DWORD v28[7]; // [sp+C8h] [bp-10E4h] BYREF
  int v29; // [sp+E4h] [bp-10C8h]
  _DWORD v30[7]; // [sp+E8h] [bp-10C4h] BYREF
  int v31; // [sp+104h] [bp-10A8h]
  _DWORD v32[7]; // [sp+108h] [bp-10A4h] BYREF
  int v33; // [sp+124h] [bp-1088h]
  _DWORD v34[7]; // [sp+128h] [bp-1084h] BYREF
  int v35; // [sp+144h] [bp-1068h]
  _DWORD v36[7]; // [sp+148h] [bp-1064h] BYREF
  int v37; // [sp+164h] [bp-1048h] BYREF
  __int64 v38; // [sp+168h] [bp-1044h]
  __int64 v39; // [sp+170h] [bp-103Ch]
  double v40; // [sp+178h] [bp-1034h]
  double v41; // [sp+180h] [bp-102Ch]
  __int64 v42; // [sp+188h] [bp-1024h]
  __int64 v43; // [sp+190h] [bp-101Ch]
  double v44; // [sp+198h] [bp-1014h]
  double v45; // [sp+1A0h] [bp-100Ch]
  char v46[4100]; // [sp+1A8h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v22, "chain", *(int *)(a1 + 232));
  logfmt_raw(v46, 0x1000u, 0, v23, v22[0], v22[1], v22[2], v22[3], v22[4], v22[5], v22[6], v23, "%s...", "membist1");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "membist1",
    8,
    663,
    60,
    v46);
  v21 = 0;
  v42 = 0;
  v43 = 0;
  v38 = 0;
  v39 = 0;
  v44 = 0.0;
  v45 = 0.0;
  v40 = 0.0;
  v41 = 0.0;
  s = malloc(0x600u);
  do
  {
    sub_C8E84(a1, v21, 12, 1);
    usleep((__useconds_t)"");
    sub_C8E84(a1, v21, 160, -2147483647);
    usleep(0xC3500u);
    memset(s, 0, 0x600u);
    v2 = sub_C911C(a1, (unsigned __int16)v21, 161, s);
    if ( v2 == 8
      || (V_LOCK(),
          V_INT((int)v24, "chain", *(int *)(a1 + 232)),
          logfmt_raw(
            v46,
            0x1000u,
            0,
            v25,
            v24[0],
            v24[1],
            v24[2],
            v24[3],
            v24[4],
            v24[5],
            v24[6],
            v25,
            "get membist err failed, resp_num: %d",
            v2),
          V_UNLOCK(),
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            187,
            "membist1",
            8,
            683,
            100,
            v46),
          v2 > 0) )
    {
      v3 = (unsigned int *)s;
      for ( i = 0; i < v2; ++i )
      {
        while ( (*v3 & 0x80) == 0 )
        {
          V_LOCK();
          ++i;
          v3 += 3;
          V_INT((int)v28, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v46,
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
            "chip %02x core %02x membist not done!",
            *((unsigned __int8 *)v3 - 8),
            *((unsigned __int8 *)v3 - 4));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            187,
            "membist1",
            8,
            699,
            100,
            v46);
          if ( v2 <= i )
            goto LABEL_10;
        }
        if ( (*v3 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v26, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v46,
            0x1000u,
            0,
            v27,
            v26[0],
            v26[1],
            v26[2],
            v26[3],
            v26[4],
            v26[5],
            v26[6],
            v27,
            "chip %02x core %02x membist err cnt: %08x",
            *((unsigned __int8 *)v3 + 4),
            *((unsigned __int8 *)v3 + 8),
            bswap32(*v3));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            187,
            "membist1",
            8,
            692,
            100,
            v46);
          v14 = &v46[4 * *((unsigned __int8 *)v3 + 4)];
          *((_DWORD *)v14 - 8) += bswap32(*v3) & 0x7FFFFF;
        }
        v3 += 3;
      }
    }
LABEL_10:
    memset(s, 0, 0x600u);
    v5 = sub_C911C(a1, (unsigned __int16)v21, 162, s);
    if ( v5 == 8
      || (V_LOCK(),
          V_INT((int)v30, "chain", *(int *)(a1 + 232)),
          logfmt_raw(
            v46,
            0x1000u,
            0,
            v31,
            v30[0],
            v30[1],
            v30[2],
            v30[3],
            v30[4],
            v30[5],
            v30[6],
            v31,
            "get membist lost failed, resp_num: %d",
            v5),
          V_UNLOCK(),
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            187,
            "membist1",
            8,
            707,
            100,
            v46),
          v5 > 0) )
    {
      v6 = (unsigned int *)s;
      for ( j = 0; j < v5; ++j )
      {
        while ( (*v6 & 0x80) == 0 )
        {
          V_LOCK();
          ++j;
          v6 += 3;
          V_INT((int)v34, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v46,
            0x1000u,
            0,
            v35,
            v34[0],
            v34[1],
            v34[2],
            v34[3],
            v34[4],
            v34[5],
            v34[6],
            v35,
            "chip %02x core %02x membist not done!",
            *((unsigned __int8 *)v6 - 8),
            *((unsigned __int8 *)v6 - 4));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            187,
            "membist1",
            8,
            723,
            100,
            v46);
          if ( v5 <= j )
            goto LABEL_18;
        }
        if ( (*v6 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v32, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v46,
            0x1000u,
            0,
            v33,
            v32[0],
            v32[1],
            v32[2],
            v32[3],
            v32[4],
            v32[5],
            v32[6],
            v33,
            "chip %02x core %02x membist lost cnt: %08x",
            *((unsigned __int8 *)v6 + 4),
            *((unsigned __int8 *)v6 + 8),
            bswap32(*v6));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            187,
            "membist1",
            8,
            716,
            100,
            v46);
          v15 = &v46[4 * *((unsigned __int8 *)v6 + 4)];
          *((_DWORD *)v15 - 16) += bswap32(*v6) & 0x7FFFFF;
        }
        v6 += 3;
      }
    }
LABEL_18:
    ++v21;
  }
  while ( v21 != 16 );
  v8 = 0;
  *(_QWORD *)v17 = 0;
  free(s);
  sa = 0;
  v20 = &v37;
  do
  {
    v9 = *((_DWORD *)&v42 + v8);
    v10 = v20[1];
    ++v20;
    V_LOCK();
    *(_QWORD *)v17 += v9;
    sa += v10;
    V_INT((int)v36, "chain", *(int *)(a1 + 232));
    v16 = v8++;
    logfmt_raw(
      v46,
      0x1000u,
      0,
      v37,
      v36[0],
      v36[1],
      v36[2],
      v36[3],
      v36[4],
      v36[5],
      v36[6],
      v37,
      "chip %02x mbist check: lost_cnt/err_cnt: 0x%x/0x%x, total_lost/total_err: 0x%llx/0x%llx",
      v16,
      v10,
      v9,
      sa,
      *(_QWORD *)v17);
    V_UNLOCK();
    v11 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            187,
            "membist1",
            8,
            736,
            100,
            v46);
  }
  while ( v8 != 8 );
  v12 = dev_ctrl(v11);
  ((void (__fastcall *)(_DWORD))v12[20])(*(_DWORD *)(a1 + 228));
  qword_2E0428 = v42;
  qword_2E0430 = v43;
  qword_2E0438 = *(_QWORD *)&v44;
  qword_2E0440 = *(_QWORD *)&v45;
  return 0;
}
