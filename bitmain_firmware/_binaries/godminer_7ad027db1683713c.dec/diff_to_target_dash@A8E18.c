int __fastcall diff_to_target_dash(_QWORD *a1)
{
  double v1; // d0
  __int64 v3; // r0
  __int64 v4; // d9
  double v5; // d8
  __int64 v6; // r0
  __int64 v7; // kr00_8
  double v8; // d8
  __int64 v9; // r0
  __int64 v10; // kr08_8
  double v11; // r0
  __int64 v12; // r0
  __int64 v13; // r0
  __int64 v14; // r2
  _QWORD v16[2]; // [sp+10h] [bp-1004h] BYREF
  __int64 v17; // [sp+20h] [bp-FF4h]
  __int64 v18; // [sp+28h] [bp-FECh]

  if ( v1 <= 0.0 )
  {
    V_LOCK();
    v4 = 4294901760LL;
    logfmt_raw((char *)v16, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/dhash_content/dash/dash_dhash_common.c",
      182,
      "diff_to_target_dash",
      19,
      58,
      20,
      v16);
    v12 = 0;
    v7 = 0;
    v10 = 0;
  }
  else
  {
    LODWORD(v3) = sub_25A8B8(
                    COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58),
                    HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58)));
    v4 = v3;
    v5 = 2.69595353e67 / v1 - COERCE_DOUBLE(sub_25A6F8(v3)) * 6.27710174e57;
    LODWORD(v6) = sub_25A8B8(
                    COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39),
                    HIDWORD(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39)));
    v7 = v6;
    v8 = v5 - COERCE_DOUBLE(sub_25A6F8(v6)) * 3.40282367e38;
    LODWORD(v9) = sub_25A8B8(
                    COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20),
                    HIDWORD(COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20)));
    v10 = v9;
    v11 = COERCE_DOUBLE(sub_25A6F8(v9));
    LODWORD(v12) = sub_25A8B8(
                     COERCE_UNSIGNED_INT64(v8 - v11 * 1.84467441e19),
                     HIDWORD(COERCE_UNSIGNED_INT64(v8 - v11 * 1.84467441e19)));
  }
  v18 = v4;
  v17 = v7;
  v16[1] = v10;
  v16[0] = v12;
  *a1 = v12;
  a1[1] = v10;
  v13 = v17;
  v14 = v18;
  a1[2] = v17;
  a1[3] = v14;
  return v13;
}
