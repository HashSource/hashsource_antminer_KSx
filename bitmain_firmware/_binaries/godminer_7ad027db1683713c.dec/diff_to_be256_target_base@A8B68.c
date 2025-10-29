unsigned int __fastcall diff_to_be256_target_base(unsigned int *a1)
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
  unsigned int v11; // r1
  unsigned int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r3
  unsigned int result; // r0
  unsigned int v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r3
  unsigned int v19; // [sp+10h] [bp-1004h] BYREF
  unsigned int v20; // [sp+14h] [bp-1000h]
  unsigned int v21; // [sp+18h] [bp-FFCh]
  unsigned int v22; // [sp+1Ch] [bp-FF8h]
  unsigned int v23; // [sp+20h] [bp-FF4h]
  unsigned int v24; // [sp+24h] [bp-FF0h]
  unsigned int v25; // [sp+28h] [bp-FECh]
  unsigned int v26; // [sp+2Ch] [bp-FE8h]

  v4 = v2;
  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)&v19, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/dhash_content/base_common.c",
      171,
      "diff_to_be256_target_base",
      25,
      169,
      20,
      &v19);
  }
  else
  {
    v4 = v2 / v1;
  }
  LODWORD(v5) = sub_25A8B8(
                  COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58),
                  HIDWORD(COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58)));
  v19 = bswap32(HIDWORD(v5));
  v20 = bswap32(v5);
  v6 = v4 - COERCE_DOUBLE(sub_25A6F8(v5)) * 6.27710174e57;
  LODWORD(v7) = sub_25A8B8(
                  COERCE_UNSIGNED_INT64(v6 * 2.93873588e-39),
                  HIDWORD(COERCE_UNSIGNED_INT64(v6 * 2.93873588e-39)));
  v21 = bswap32(HIDWORD(v7));
  v22 = bswap32(v7);
  v8 = v6 - COERCE_DOUBLE(sub_25A6F8(v7)) * 3.40282367e38;
  LODWORD(v9) = sub_25A8B8(
                  COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20),
                  HIDWORD(COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20)));
  v23 = bswap32(HIDWORD(v9));
  v24 = bswap32(v9);
  v10 = COERCE_DOUBLE(sub_25A6F8(v9));
  v26 = bswap32(
          sub_25A8B8(
            COERCE_UNSIGNED_INT64(v8 - v10 * 1.84467441e19),
            HIDWORD(COERCE_UNSIGNED_INT64(v8 - v10 * 1.84467441e19))));
  v25 = bswap32(v11);
  v12 = v20;
  v13 = v21;
  v14 = v22;
  *a1 = v19;
  a1[1] = v12;
  a1[2] = v13;
  a1[3] = v14;
  result = v23;
  v16 = v24;
  v17 = v25;
  v18 = v26;
  a1[4] = v23;
  a1[5] = v16;
  a1[6] = v17;
  a1[7] = v18;
  return result;
}
