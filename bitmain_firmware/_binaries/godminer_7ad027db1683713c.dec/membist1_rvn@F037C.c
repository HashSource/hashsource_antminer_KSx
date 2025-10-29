int __fastcall membist1_rvn(int a1)
{
  int v2; // r10
  unsigned int *v3; // r4
  int i; // r5
  int v5; // r6
  unsigned int *v6; // r4
  int j; // r5
  char *v8; // r3
  __int64 v9; // r0
  unsigned int v10; // t1
  int v11; // r0
  int (**v12)(); // r0
  char *v14; // r2
  char *v15; // r2
  void *s; // [sp+3Ch] [bp-1138h]
  int v17; // [sp+44h] [bp-1130h]
  _DWORD v18[7]; // [sp+50h] [bp-1124h] BYREF
  int v19; // [sp+6Ch] [bp-1108h]
  _DWORD v20[7]; // [sp+70h] [bp-1104h] BYREF
  int v21; // [sp+8Ch] [bp-10E8h]
  _DWORD v22[7]; // [sp+90h] [bp-10E4h] BYREF
  int v23; // [sp+ACh] [bp-10C8h]
  _DWORD v24[7]; // [sp+B0h] [bp-10C4h] BYREF
  int v25; // [sp+CCh] [bp-10A8h]
  _DWORD v26[7]; // [sp+D0h] [bp-10A4h] BYREF
  int v27; // [sp+ECh] [bp-1088h]
  _DWORD v28[7]; // [sp+F0h] [bp-1084h] BYREF
  int v29; // [sp+10Ch] [bp-1068h]
  _DWORD v30[7]; // [sp+110h] [bp-1064h] BYREF
  int v31; // [sp+12Ch] [bp-1048h]
  __int64 v32; // [sp+130h] [bp-1044h]
  __int64 v33; // [sp+138h] [bp-103Ch]
  double v34; // [sp+140h] [bp-1034h]
  double v35; // [sp+148h] [bp-102Ch] BYREF
  __int64 v36; // [sp+150h] [bp-1024h]
  __int64 v37; // [sp+158h] [bp-101Ch]
  double v38; // [sp+160h] [bp-1014h]
  double v39; // [sp+168h] [bp-100Ch] BYREF
  char v40[4100]; // [sp+170h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v18, "chain", *(int *)(a1 + 232));
  logfmt_raw(v40, 0x1000u, 0, v19, v18[0], v18[1], v18[2], v18[3], v18[4], v18[5], v18[6], v19, "%s...", "membist1_rvn");
  v17 = 0;
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "membist1_rvn",
    12,
    648,
    60,
    v40);
  v36 = 0;
  v37 = 0;
  v32 = 0;
  v33 = 0;
  v38 = 0.0;
  v39 = 0.0;
  v34 = 0.0;
  v35 = 0.0;
  s = malloc(0x300u);
  do
  {
    sub_EC27C(a1, v17, 28, 1);
    usleep((__useconds_t)"");
    sub_EC27C(a1, v17, 160, -2147483647);
    usleep(0xC3500u);
    memset(s, 0, 0x300u);
    v2 = sub_EC594(a1, (unsigned __int16)v17, 161, s);
    if ( v2 == 8
      || (V_LOCK(),
          V_INT((int)v20, "chain", *(int *)(a1 + 232)),
          logfmt_raw(
            v40,
            0x1000u,
            0,
            v21,
            v20[0],
            v20[1],
            v20[2],
            v20[3],
            v20[4],
            v20[5],
            v20[6],
            v21,
            "get membist err cnt failed!"),
          V_UNLOCK(),
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
            187,
            "membist1_rvn",
            12,
            668,
            100,
            v40),
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
          V_INT((int)v24, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v40,
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
            "chip %02x core %02x membist not done!",
            *((unsigned __int8 *)v3 - 8),
            *((unsigned __int8 *)v3 - 4));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
            187,
            "membist1_rvn",
            12,
            684,
            100,
            v40);
          if ( v2 <= i )
            goto LABEL_10;
        }
        if ( (*v3 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v22, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v40,
            0x1000u,
            0,
            v23,
            v22[0],
            v22[1],
            v22[2],
            v22[3],
            v22[4],
            v22[5],
            v22[6],
            v23,
            "chip %02x core %02x membist err cnt: %08x",
            *((unsigned __int8 *)v3 + 4),
            *((unsigned __int8 *)v3 + 8),
            bswap32(*v3));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
            187,
            "membist1_rvn",
            12,
            677,
            100,
            v40);
          v14 = &v40[4 * *((unsigned __int8 *)v3 + 4)];
          *((_DWORD *)v14 - 8) += bswap32(*v3) & 0x7FFFFF;
        }
        v3 += 3;
      }
    }
LABEL_10:
    memset(s, 0, 0x300u);
    v5 = sub_EC594(a1, (unsigned __int16)v17, 162, s);
    if ( v5 == 8
      || (V_LOCK(),
          V_INT((int)v26, "chain", *(int *)(a1 + 232)),
          logfmt_raw(
            v40,
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
            "get membist lost cnt failed!"),
          V_UNLOCK(),
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
            187,
            "membist1_rvn",
            12,
            692,
            100,
            v40),
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
          V_INT((int)v30, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v40,
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
            "chip %02x core %02x membist not done!",
            *((unsigned __int8 *)v6 - 8),
            *((unsigned __int8 *)v6 - 4));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
            187,
            "membist1_rvn",
            12,
            708,
            100,
            v40);
          if ( v5 <= j )
            goto LABEL_18;
        }
        if ( (*v6 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v28, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v40,
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
            "chip %02x core %02x membist lost cnt: %08x",
            *((unsigned __int8 *)v6 + 4),
            *((unsigned __int8 *)v6 + 8),
            bswap32(*v6));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
            187,
            "membist1_rvn",
            12,
            701,
            100,
            v40);
          v15 = &v40[4 * *((unsigned __int8 *)v6 + 4)];
          *((_DWORD *)v15 - 16) += bswap32(*v6) & 0x7FFFFF;
        }
        v6 += 3;
      }
    }
LABEL_18:
    ++v17;
  }
  while ( v17 != 8 );
  free(s);
  v8 = (char *)&v35 + 4;
  v9 = 0;
  memset(v40, 0, 64);
  do
  {
    v10 = *((_DWORD *)v8 + 1);
    v8 += 4;
    v9 += v10;
  }
  while ( (char *)&v39 + 4 != v8 );
  v11 = sprintf(v40, "<mbist1> %lld", v9);
  v12 = dev_ctrl(v11);
  ((void (__fastcall *)(_DWORD))v12[20])(*(_DWORD *)(a1 + 228));
  qword_2E8534 = v36;
  qword_2E853C = v37;
  qword_2E8544 = *(_QWORD *)&v38;
  qword_2E854C = *(_QWORD *)&v39;
  return 0;
}
