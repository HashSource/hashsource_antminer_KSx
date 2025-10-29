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
  __int64 v25; // d10
  __int64 v26; // d9
  float v27; // r0
  __int64 v28; // d9
  float v29; // s17
  int v30; // r0
  char *v31; // r12
  char *v32; // r11
  int v33; // r3
  __int64 v34; // r0
  float v35; // s17
  int v36; // r0
  unsigned __int64 v37; // r0
  float v38; // s17
  int v39; // r0
  void *status_from_monitor; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  __int64 v46; // [sp+28h] [bp-114Ch]
  __int64 v47; // [sp+38h] [bp-113Ch]
  _BYTE v48[4]; // [sp+4Ch] [bp-1128h] BYREF
  __int64 v49; // [sp+50h] [bp-1124h] BYREF
  __int64 v50; // [sp+58h] [bp-111Ch] BYREF
  double v51; // [sp+60h] [bp-1114h] BYREF
  _BYTE v52[12]; // [sp+6Ch] [bp-1108h] BYREF
  _BYTE v53[16]; // [sp+78h] [bp-10FCh] BYREF
  _BYTE v54[32]; // [sp+98h] [bp-10DCh] BYREF
  _BYTE v55[4100]; // [sp+170h] [bp-1004h] BYREF

  (*(void (__fastcall **)(int, __int64 *))(a1 + 132))(a1, &v49);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 140))(a1, &v50);
  (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 136))(a1, &v51, v48);
  v7 = *(_DWORD *)(a1 + 240);
  v8 = v50;
  *(_QWORD *)(a2 + 48) = v49;
  *(_QWORD *)(a2 + 56) = v8;
  if ( v7 <= 16 )
  {
    v9 = 16 * v7;
    if ( !*((_BYTE *)&unk_2F55C0 + v7) )
    {
      clock_gettime(1, (struct timespec *)((char *)&unk_2F55D0 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2F56D0 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2F57D0 + v9));
      *((_BYTE *)&unk_2F55C0 + v7) = 1;
      *((_QWORD *)&unk_2F55C0 + v7 + 98) = 0;
    }
    if ( *(_QWORD *)(a1 + 448) )
    {
      if ( !byte_2F5950 )
        byte_2F5950 = 1;
    }
    else if ( !byte_2F5950 )
    {
      v46 = *(_QWORD *)(a1 + 448);
      clock_gettime(1, (struct timespec *)((char *)&unk_2F55D0 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2F56D0 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2F57D0 + v9));
      *((_QWORD *)&unk_2F55C0 + v7 + 98) = v46;
      return a3;
    }
    clock_gettime(1, (struct timespec *)((char *)&unk_2F55D0 + v9 + 8));
    v10 = 1000LL * (*(_DWORD *)((char *)&unk_2F55C0 + v9 + 24) - *(_DWORD *)((char *)&unk_2F55C0 + v9 + 16))
        + (*(_DWORD *)((char *)&unk_2F55C0 + v9 + 28) - *(_DWORD *)((char *)&unk_2F55C0 + v9 + 20)) / 1000000;
    v11 = (char *)&unk_2F5958 + 2896 * v7;
    v12 = sub_270520(v10, HIDWORD(v10)) / 1000.0;
    if ( v12 >= 5.0 )
    {
      v25 = *(_QWORD *)(a1 + 448);
      v26 = *((_QWORD *)&unk_2F55C0 + v7 + 98);
      v27 = COERCE_FLOAT(get_miner_working_status((int)v54));
      v28 = v25 - v26;
      if ( v54[6] || v54[0] )
      {
        v29 = 0.0;
      }
      else
      {
        LODWORD(v3) = *(_DWORD *)(a1 + 432);
        v37 = vshld_u64(1u, v3);
        v38 = COERCE_FLOAT(((int (__fastcall *)(_DWORD, _DWORD))sub_27039C)(v37, HIDWORD(v37)));
        v27 = sub_27039C(v28, HIDWORD(v28));
        v29 = v38 * (float)(v27 / v12);
      }
      V_LOCK(LODWORD(v27));
      v30 = logfmt_raw((int)v55, 0x1000u);
      V_UNLOCK(v30);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
        206,
        "update_hashrate",
        15,
        126,
        20,
        v55);
      clock_gettime(1, (struct timespec *)((char *)&unk_2F55D0 + v9));
      v31 = (char *)&unk_2F5958 + 2896 * v7;
      *((_QWORD *)&unk_2F55C0 + v7 + 98) = v25;
      v32 = v31 + 2880;
      v33 = *((_DWORD *)v31 + 720);
      v34 = *((_QWORD *)v31 + 361);
      v47 = v34 + 1;
      *((float *)&unk_2F5958 + 724 * v7 + v33) = v29;
      *((_DWORD *)v31 + 720) = (v33 + 1) % 720;
      v35 = v29 + (float)(sub_27039C(v34, HIDWORD(v34)) * *(float *)(a2 + 44));
      *(float *)(a2 + 44) = v35 / sub_27039C(v47, HIDWORD(v47));
      *((_QWORD *)v32 + 1) = v47;
    }
    sub_BC6D8((int)v11);
    *(float *)(a2 + 32) = 5.0;
    sub_BC6D8((int)v11);
    *(_DWORD *)(a2 + 36) = 1114636288;
    sub_BC6D8((int)v11);
    v13 = *(_DWORD *)(a1 + 336);
    v14 = 0;
    *(_DWORD *)(a2 + 40) = 1155596288;
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
    *(_QWORD *)(a2 + 80) = v14;
    clock_gettime(1, (struct timespec *)((char *)&unk_2F56D0 + v9 + 8));
    v19 = 1000LL * (*(_DWORD *)((char *)&unk_2F55C0 + v9 + 280) - *(_DWORD *)((char *)&unk_2F55C0 + v9 + 272))
        + (*(_DWORD *)((char *)&unk_2F55C0 + v9 + 284) - *(_DWORD *)((char *)&unk_2F55C0 + v9 + 276)) / 1000000;
    if ( (float)(sub_270520(v19, HIDWORD(v19)) / 1000.0) >= 900.0 )
    {
      sub_BC6D8((int)v11);
      v21 = *(_DWORD *)(a2 + 200);
      if ( v21 > 23 )
      {
        memcpy((void *)(a2 + 104), (const void *)(a2 + 108), 0x5Cu);
        *(_DWORD *)(a2 + 196) = 1147207680;
      }
      else
      {
        *(_DWORD *)(a2 + 4 * v21 + 104) = 1147207680;
      }
      v22 = *(_QWORD *)(a2 + 208);
      *(_DWORD *)(a2 + 200) = v21 + 1;
      v23 = v51;
      *(_QWORD *)(a2 + 208) = v22 + 1;
      if ( v23 * 0.97 < 900.0 )
      {
        v36 = *(_DWORD *)(a1 + 248);
        a3[1] |= 1uLL;
        set_miner_6060info_low_hashrate_err(v36, 0);
      }
      else
      {
        *a3 |= 1uLL;
        miner_working_status = get_miner_working_status((int)v52);
        if ( !v52[8] )
        {
          V_LOCK(miner_working_status);
          V_INT((int)v53, "chain", *(int *)(a1 + 248));
          v39 = logfmt_raw((int)v55, 0x1000u);
          V_UNLOCK(v39);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            206,
            "update_hashrate",
            15,
            173,
            80,
            v55);
          status_from_monitor = read_status_from_monitor(v54, a1);
          V_LOCK(status_from_monitor);
          v41 = logfmt_raw((int)v55, 0x1000u);
          V_UNLOCK(v41);
          v42 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
                  206,
                  "update_hashrate",
                  15,
                  176,
                  80,
                  v55);
          V_LOCK(v42);
          v43 = logfmt_raw((int)v55, 0x1000u);
          V_UNLOCK(v43);
          v44 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
                  206,
                  "update_hashrate",
                  15,
                  177,
                  80,
                  v55);
          V_LOCK(v44);
          v45 = logfmt_raw((int)v55, 0x1000u);
          V_UNLOCK(v45);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            206,
            "update_hashrate",
            15,
            178,
            80,
            v55);
          set_miner_6060info_low_hashrate_err(*(_DWORD *)(a1 + 248), 1);
        }
      }
      clock_gettime(1, (struct timespec *)((char *)&unk_2F56D0 + v9));
    }
  }
  return a3;
}
