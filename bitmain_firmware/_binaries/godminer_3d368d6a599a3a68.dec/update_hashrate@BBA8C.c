_QWORD *__fastcall update_hashrate(int a1, int a2, _QWORD *a3)
{
  unsigned __int64 v3; // d17
  int v7; // r7
  __int64 v8; // r2
  int v9; // r8
  __int64 v10; // r0
  char *v11; // r9
  float v12; // s16
  int v13; // r0
  __int64 v14; // d16
  int v15; // r2
  int v16; // r0
  __int64 *v17; // r3
  __int64 v18; // d17
  __int64 v19; // r0
  int v21; // r5
  __int64 v22; // r2
  double v23; // d16
  int miner_working_status; // r0
  int v25; // r0
  void *status_from_monitor; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  __int64 v32; // d10
  __int64 v33; // d9
  float v34; // r0
  __int64 v35; // d9
  float v36; // s17
  int v37; // r0
  char *v38; // r12
  char *v39; // r11
  int v40; // r3
  __int64 v41; // r0
  float v42; // s17
  int v43; // r0
  unsigned __int64 v44; // r0
  float v45; // s17
  __int64 v46; // [sp+28h] [bp-1154h]
  __int64 v47; // [sp+38h] [bp-1144h]
  _BYTE v48[4]; // [sp+4Ch] [bp-1130h] BYREF
  __int64 v49; // [sp+50h] [bp-112Ch] BYREF
  __int64 v50; // [sp+58h] [bp-1124h] BYREF
  double v51; // [sp+60h] [bp-111Ch] BYREF
  _BYTE v52[16]; // [sp+68h] [bp-1114h] BYREF
  __int64 v53; // [sp+78h] [bp-1104h] BYREF
  _BYTE v54[36]; // [sp+98h] [bp-10E4h] BYREF
  _BYTE v55[4100]; // [sp+178h] [bp-1004h] BYREF

  (*(void (__fastcall **)(int, __int64 *))(a1 + 132))(a1, &v49);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 140))(a1, &v50);
  (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 136))(a1, &v51, v48);
  v7 = *(_DWORD *)(a1 + 244);
  v8 = v50;
  *(_QWORD *)(a2 + 56) = v49;
  *(_QWORD *)(a2 + 64) = v8;
  if ( v7 <= 16 )
  {
    v9 = 16 * v7;
    if ( !*((_BYTE *)&unk_2EADE0 + v7) )
    {
      clock_gettime(1, (struct timespec *)((char *)&unk_2EADF0 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2EAEF0 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2EAFF0 + v9));
      *((_BYTE *)&unk_2EADE0 + v7) = 1;
      *((_QWORD *)&unk_2EADE0 + v7 + 98) = 0;
    }
    if ( *(_QWORD *)(a1 + 448) )
    {
      if ( !byte_2EB170 )
        byte_2EB170 = 1;
    }
    else if ( !byte_2EB170 )
    {
      v46 = *(_QWORD *)(a1 + 448);
      clock_gettime(1, (struct timespec *)((char *)&unk_2EADF0 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2EAEF0 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2EAFF0 + v9));
      *((_QWORD *)&unk_2EADE0 + v7 + 98) = v46;
      return a3;
    }
    clock_gettime(1, (struct timespec *)((char *)&unk_2EADF0 + v9 + 8));
    v10 = 1000LL * (*(_DWORD *)((char *)&unk_2EADE0 + v9 + 24) - *(_DWORD *)((char *)&unk_2EADE0 + v9 + 16))
        + (*(_DWORD *)((char *)&unk_2EADE0 + v9 + 28) - *(_DWORD *)((char *)&unk_2EADE0 + v9 + 20)) / 1000000;
    v11 = (char *)&unk_2EB178 + 2896 * v7;
    v12 = sub_26D098(v10, HIDWORD(v10)) / 1000.0;
    if ( v12 >= 5.0 )
    {
      v32 = *(_QWORD *)(a1 + 448);
      v33 = *((_QWORD *)&unk_2EADE0 + v7 + 98);
      v34 = COERCE_FLOAT(get_miner_working_status((int)v54));
      v35 = v32 - v33;
      if ( v54[6] || v54[0] )
      {
        v36 = 0.0;
      }
      else
      {
        LODWORD(v3) = *(_DWORD *)(a1 + 432);
        v44 = vshld_u64(1u, v3);
        v45 = COERCE_FLOAT(((int (__fastcall *)(_DWORD, _DWORD))sub_26CF14)(v44, HIDWORD(v44)));
        v34 = sub_26CF14(v35, HIDWORD(v35));
        v36 = v45 * (float)(v34 / v12);
      }
      V_LOCK(LODWORD(v34));
      v37 = logfmt_raw((int)v55, 0x1000u);
      V_UNLOCK(v37);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
        211,
        "update_hashrate",
        15,
        155,
        20,
        v55);
      clock_gettime(1, (struct timespec *)((char *)&unk_2EADF0 + v9));
      v38 = (char *)&unk_2EB178 + 2896 * v7;
      *((_QWORD *)&unk_2EADE0 + v7 + 98) = v32;
      v39 = v38 + 2880;
      v40 = *((_DWORD *)v38 + 720);
      v41 = *((_QWORD *)v38 + 361);
      v47 = v41 + 1;
      *((float *)&unk_2EB178 + 724 * v7 + v40) = v36;
      *((_DWORD *)v38 + 720) = (v40 + 1) % 720;
      v42 = v36 + (float)(sub_26CF14(v41, HIDWORD(v41)) * *(float *)(a2 + 48));
      *(float *)(a2 + 48) = v42 / sub_26CF14(v47, HIDWORD(v47));
      *((_QWORD *)v39 + 1) = v47;
    }
    sub_BB9F0((int)v11);
    *(float *)(a2 + 36) = 5.0;
    sub_BB9F0((int)v11);
    *(_DWORD *)(a2 + 40) = 1114636288;
    sub_BB9F0((int)v11);
    v13 = *(_DWORD *)(a1 + 332);
    v14 = 0;
    *(_DWORD *)(a2 + 44) = 1155596288;
    if ( v13 > 0 )
    {
      v14 = 0;
      v15 = *(_DWORD *)(a1 + 456) + 16;
      v16 = v15 + 48 * v13;
      do
      {
        v17 = (__int64 *)v15;
        do
        {
          v18 = *v17++;
          v14 += v18;
        }
        while ( (__int64 *)(v15 + 32) != v17 );
        v15 += 48;
      }
      while ( v16 != v15 );
    }
    *(_QWORD *)(a2 + 88) = v14;
    clock_gettime(1, (struct timespec *)((char *)&unk_2EAEF0 + v9 + 8));
    v19 = 1000LL * (*(_DWORD *)((char *)&unk_2EADE0 + v9 + 280) - *(_DWORD *)((char *)&unk_2EADE0 + v9 + 272))
        + (*(_DWORD *)((char *)&unk_2EADE0 + v9 + 284) - *(_DWORD *)((char *)&unk_2EADE0 + v9 + 276)) / 1000000;
    if ( (float)(sub_26D098(v19, HIDWORD(v19)) / 1000.0) >= 900.0 )
    {
      sub_BB9F0((int)v11);
      v21 = *(_DWORD *)(a2 + 208);
      if ( v21 > 23 )
      {
        memcpy((void *)(a2 + 112), (const void *)(a2 + 116), 0x5Cu);
        *(_DWORD *)(a2 + 204) = 1147207680;
      }
      else
      {
        *(_DWORD *)(a2 + 4 * v21 + 112) = 1147207680;
      }
      v22 = *(_QWORD *)(a2 + 216);
      *(_DWORD *)(a2 + 208) = v21 + 1;
      v23 = v51;
      *(_QWORD *)(a2 + 216) = v22 + 1;
      if ( v23 * 0.97 < 900.0 )
      {
        v43 = *(_DWORD *)(a1 + 248);
        a3[1] |= 1uLL;
        set_miner_6060info_low_hashrate_err(v43, 0);
      }
      else
      {
        *a3 |= 1uLL;
        miner_working_status = get_miner_working_status((int)v52);
        if ( !v52[8] && !v52[6] )
        {
          V_LOCK(miner_working_status);
          V_INT((int)&v53, "chain");
          v25 = logfmt_raw((int)v55, 0x1000u);
          V_UNLOCK(v25);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            211,
            "update_hashrate",
            15,
            202,
            80,
            v55);
          status_from_monitor = read_status_from_monitor(v54, a1);
          V_LOCK(status_from_monitor);
          v27 = logfmt_raw((int)v55, 0x1000u);
          V_UNLOCK(v27);
          v28 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
                  211,
                  "update_hashrate",
                  15,
                  205,
                  80,
                  v55);
          V_LOCK(v28);
          v29 = logfmt_raw((int)v55, 0x1000u);
          V_UNLOCK(v29);
          v30 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
                  211,
                  "update_hashrate",
                  15,
                  206,
                  80,
                  v55);
          V_LOCK(v30);
          v31 = logfmt_raw((int)v55, 0x1000u);
          V_UNLOCK(v31);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            211,
            "update_hashrate",
            15,
            207,
            80,
            v55);
          set_miner_6060info_low_hashrate_err(*(_DWORD *)(a1 + 248), 1);
        }
      }
      clock_gettime(1, (struct timespec *)((char *)&unk_2EAEF0 + v9));
    }
  }
  return a3;
}
