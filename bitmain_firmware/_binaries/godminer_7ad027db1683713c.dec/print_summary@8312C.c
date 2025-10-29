char *print_summary()
{
  double v0; // d0
  double v1; // d11
  double v2; // r0
  double v3; // d8
  double v4; // d9
  char *result; // r0
  _DWORD *v6; // r12
  int v7; // r0
  int v8; // r12
  int v9; // r4
  int v10; // r8
  int v11; // r6
  int v12; // r5
  int v13; // r0
  int v14; // r3
  __int64 *v15; // r5
  __int64 *v16; // r6
  int v17; // r4
  __int64 v18; // d16
  size_t v19; // r1
  char *v20; // r0
  double v21; // r4
  int v22; // r1
  double v23; // d10
  double v24; // r0
  int v25; // r6
  int v26; // lr
  _DWORD *v27; // r6
  __int64 v28; // r4
  int v29; // r1
  double v30; // d8
  double v31; // r0
  int v32; // [sp+0h] [bp-78h]
  int v33; // [sp+4h] [bp-74h]
  char *v34; // [sp+1Ch] [bp-5Ch]
  int v35; // [sp+1Ch] [bp-5Ch]
  int v36; // [sp+20h] [bp-58h]
  int v37; // [sp+28h] [bp-50h]
  _DWORD *v38; // [sp+28h] [bp-50h]
  int v39; // [sp+2Ch] [bp-4Ch]
  int v40; // [sp+3Ch] [bp-3Ch] BYREF
  char v41[24]; // [sp+40h] [bp-38h] BYREF
  float v42; // [sp+58h] [bp-20h]
  double v43; // [sp+70h] [bp-8h]
  char v44[4040]; // [sp+78h] [bp+0h] BYREF
  char v45[4100]; // [sp+1078h] [bp+1000h] BYREF

  read_system_status_from_monitor((int)v41);
  v1 = v42 / 1000.0 / 1000.0 / 1000.0;
  get_miner_elapsed_time();
  LODWORD(v2) = sub_25A788(*(__int64 *)&total_accepted);
  v3 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v0 * 60.0;
  v4 = v2 / v0 * 60.0;
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Summary of runtime statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2148,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Runtime: %d hrs : %d mins : %d secs", (int)v0 / 3600, (int)v0 % 3600 / 60, (int)v0 % 60);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2149,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Average hashrate: %.1f Ghash/s", v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2150,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Total got job from pools: %lld", total_getworks);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2151,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Total generated local work  %d", local_work);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2152,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Solved blocks: %d", dword_2D23A8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2153,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Share submissions: %lld", *(_QWORD *)&total_accepted + *(_QWORD *)&total_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2154,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Accepted shares: %lld", total_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2155,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Rejected shares: %lld", total_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2156,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Accepted difficulty shares: %1.f", total_diff_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2157,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Rejected difficulty shares: %1.f", total_diff_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2158,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Total Hardware errors %llu", v43);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2159,
    80,
    v45);
  if ( *(_QWORD *)&total_accepted || *(_QWORD *)&total_rejected )
  {
    V_LOCK();
    v21 = total_rejected;
    LODWORD(v23) = sub_25A788(
                     3LL * *(_QWORD *)&total_rejected
                   + vshld_n_s64(3LL * *(_QWORD *)&total_rejected, 5u)
                   + *(_QWORD *)&total_rejected);
    HIDWORD(v23) = v22;
    LODWORD(v24) = sub_25A788(*(_QWORD *)&total_accepted + *(_QWORD *)&v21);
    logfmt_raw(v45, 0x1000u, 0, "Reject ratio: %.1f%%", v23 / v24);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "print_summary",
      13,
      2162,
      80,
      v45);
  }
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Utility (accepted shares / min): %.2f/min", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2164,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Work Utility (diff1 shares solved / min): %.2f/min", v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2165,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Stale submissions discarded due to new blocks: %lld", total_stale);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2166,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Unable to get work from server occasions: %d", total_go);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2167,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Submitting work remotely delay occasions: %d", total_ro);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2168,
    80,
    v45);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "New blocks detected on network: %d", new_blocks);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2169,
    80,
    v45);
  if ( total_pools > 0 )
  {
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, "Summary of pool statistics:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "print_summary",
      13,
      2173,
      80,
      v45);
    if ( total_pools > 0 )
    {
      v35 = 0;
      do
      {
        v25 = *(_DWORD *)(pools + 4 * v35);
        V_LOCK();
        v26 = v25;
        v32 = *(_DWORD *)(v25 + 12);
        v27 = (_DWORD *)(v25 + 1936);
        v36 = v26;
        v38 = (_DWORD *)(v26 + 1968);
        logfmt_raw(v45, 0x1000u, 0, "Pool: %s", v32);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/api_new.c",
          153,
          "print_summary",
          13,
          2178,
          80,
          v45);
        V_LOCK();
        logfmt_raw(v45, 0x1000u, 0, "User: %s", *(_DWORD *)(v36 + 16));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/api_new.c",
          153,
          "print_summary",
          13,
          2179,
          80,
          v45);
        V_LOCK();
        logfmt_raw(v45, 0x1000u, 0, "Share submissions: %lld", *((_QWORD *)v27 - 1) + *(_QWORD *)v27);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/api_new.c",
          153,
          "print_summary",
          13,
          2180,
          80,
          v45);
        V_LOCK();
        logfmt_raw(v45, 0x1000u, 0, "Accepted shares: %lld", *(v27 - 2), *(v27 - 1));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/api_new.c",
          153,
          "print_summary",
          13,
          2181,
          80,
          v45);
        V_LOCK();
        logfmt_raw(v45, 0x1000u, 0, "Rejected shares: %lld", *v27, v27[1]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/api_new.c",
          153,
          "print_summary",
          13,
          2182,
          80,
          v45);
        V_LOCK();
        logfmt_raw(v45, 0x1000u, 0, "Accepted difficulty shares: %1.f", *(v38 - 2), *(v38 - 1));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/api_new.c",
          153,
          "print_summary",
          13,
          2183,
          80,
          v45);
        V_LOCK();
        logfmt_raw(v45, 0x1000u, 0, "Rejected difficulty shares: %1.f", *v38, v38[1]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/api_new.c",
          153,
          "print_summary",
          13,
          2184,
          80,
          v45);
        if ( *((_QWORD *)v27 - 1) || *(_QWORD *)v27 )
        {
          V_LOCK();
          v28 = *(_QWORD *)v27;
          LODWORD(v30) = sub_25A788(3LL * *(_QWORD *)v27 + vshld_n_s64(3LL * *(_QWORD *)v27, 5u) + *(_QWORD *)v27);
          HIDWORD(v30) = v29;
          LODWORD(v31) = sub_25A788(*((_QWORD *)v27 - 1) + v28);
          logfmt_raw(v45, 0x1000u, 0, "Reject ratio: %.1f%%", v30 / v31);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "print_summary",
            13,
            2187,
            80,
            v45);
        }
        ++v35;
      }
      while ( total_pools > v35 );
    }
  }
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Summary of per device statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/api_new.c",
    153,
    "print_summary",
    13,
    2192,
    80,
    v45);
  v40 = 0;
  result = (char *)get_all_created_runtime(&v40);
  if ( v40 > 0 )
  {
    v34 = result - 4;
    v39 = 0;
    do
    {
      v6 = (_DWORD *)*((_DWORD *)v34 + 1);
      v34 += 4;
      v7 = snprintf(
             v44,
             0x1000u,
             "chain %d device %d wc %llu nc %llu detail: ",
             v6[58],
             v6[57],
             v33,
             v6[104],
             v6[105],
             v6[106],
             v6[107]);
      v8 = *(_DWORD *)v34;
      v37 = *(_DWORD *)(*(_DWORD *)v34 + 312);
      v9 = v7;
      if ( v37 > 0 )
      {
        v10 = 0;
        while ( 1 )
        {
          v11 = 48 * v10++;
          v12 = *(_DWORD *)(v8 + 432);
          v13 = snprintf(&v44[v9], 4096 - v9, "%d:", v10);
          v14 = v12 + 48;
          v15 = (__int64 *)(v12 + v11);
          v16 = (__int64 *)(v14 + v11);
          v17 = v13 + v9;
          do
          {
            v18 = *v15++;
            v17 += snprintf(&v44[v17], 4096 - v17, " %llu", v18);
          }
          while ( v16 != v15 );
          v19 = 4096 - v17;
          v20 = &v44[v17];
          v9 = v17 + 2;
          snprintf(v20, v19, " /");
          if ( v10 == v37 )
            break;
          v8 = *(_DWORD *)v34;
        }
      }
      V_LOCK();
      ++v39;
      logfmt_raw(v45, 0x1000u, 0, "%s", v44);
      V_UNLOCK();
      result = (char *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-new/api_new.c",
                         153,
                         "print_summary",
                         13,
                         2212,
                         80,
                         v45);
    }
    while ( v40 > v39 );
  }
  return result;
}
