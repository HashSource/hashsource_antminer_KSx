__int64 __fastcall diff_to_le256_target_base(_QWORD *a1)
{
  double v1; // d0
  double v2; // d1
  double v4; // d8
  __int64 v5; // r0
  double v6; // d8
  __int64 v7; // r0
  double v8; // d8
  __int64 v9; // r0
  double v10; // r0
  __int64 v11; // r0
  __int64 v12; // r2
  __int64 result; // r0
  __int64 v14; // r2
  __int64 v15; // [sp+10h] [bp-1004h] BYREF
  __int64 v16; // [sp+18h] [bp-FFCh]
  __int64 v17; // [sp+20h] [bp-FF4h]
  __int64 v18; // [sp+28h] [bp-FECh]

  v4 = v2;
  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)&v15, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/dhash_content/base_common.c",
      171,
      "diff_to_le256_target_base",
      25,
      57,
      20,
      &v15);
  }
  else
  {
    v4 = v2 / v1;
  }
  LODWORD(v5) = sub_25A8B8(
                  COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58),
                  HIDWORD(COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58)));
  v18 = v5;
  v6 = v4 - COERCE_DOUBLE(sub_25A6F8(v5)) * 6.27710174e57;
  LODWORD(v7) = sub_25A8B8(
                  COERCE_UNSIGNED_INT64(v6 * 2.93873588e-39),
                  HIDWORD(COERCE_UNSIGNED_INT64(v6 * 2.93873588e-39)));
  v17 = v7;
  v8 = v6 - COERCE_DOUBLE(sub_25A6F8(v7)) * 3.40282367e38;
  LODWORD(v9) = sub_25A8B8(
                  COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20),
                  HIDWORD(COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20)));
  v16 = v9;
  v10 = COERCE_DOUBLE(sub_25A6F8(v9));
  LODWORD(v11) = sub_25A8B8(
                   COERCE_UNSIGNED_INT64(v8 - v10 * 1.84467441e19),
                   HIDWORD(COERCE_UNSIGNED_INT64(v8 - v10 * 1.84467441e19)));
  v15 = v11;
  v12 = v16;
  *a1 = v11;
  a1[1] = v12;
  result = v17;
  v14 = v18;
  a1[2] = v17;
  a1[3] = v14;
  return result;
}
