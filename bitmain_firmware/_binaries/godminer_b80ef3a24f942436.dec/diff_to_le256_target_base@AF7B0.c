__int64 __fastcall diff_to_le256_target_base(__int64 *a1)
{
  double v1; // d0
  double v2; // d1
  double v4; // d8
  double v5; // d8
  double v6; // d8
  double v7; // r0
  __int64 v8; // r2
  __int64 result; // r0
  __int64 v10; // r2
  int v11; // r0
  __int64 v12; // [sp+10h] [bp-1004h] BYREF
  __int64 v13; // [sp+18h] [bp-FFCh]
  __int64 v14; // [sp+20h] [bp-FF4h]
  __int64 v15; // [sp+28h] [bp-FECh]

  v4 = v2;
  if ( v1 <= 0.0 )
  {
    V_LOCK(a1);
    v11 = logfmt_raw((int)&v12, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/dhash_content/base_common.c",
      171,
      "diff_to_le256_target_base",
      25,
      57,
      20,
      &v12);
  }
  else
  {
    v4 = v2 / v1;
  }
  v15 = sub_2708B8(COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58), HIDWORD(COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58)));
  v5 = v4 - sub_2706F8(v15, HIDWORD(v15)) * 6.27710174e57;
  v14 = sub_2708B8(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39)));
  v6 = v5 - sub_2706F8(v14, HIDWORD(v14)) * 3.40282367e38;
  v13 = sub_2708B8(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20)));
  v7 = sub_2706F8(v13, HIDWORD(v13));
  v12 = sub_2708B8(
          COERCE_UNSIGNED_INT64(v6 - v7 * 1.84467441e19),
          HIDWORD(COERCE_UNSIGNED_INT64(v6 - v7 * 1.84467441e19)));
  v8 = v13;
  *a1 = v12;
  a1[1] = v8;
  result = v14;
  v10 = v15;
  a1[2] = v14;
  a1[3] = v10;
  return result;
}
