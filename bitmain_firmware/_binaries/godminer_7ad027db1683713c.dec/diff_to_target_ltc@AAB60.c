int __fastcall diff_to_target_ltc(_QWORD *a1)
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

  if ( v1 <= 0.0 )
  {
    v12 = 0;
    v4 = 0xFFFF00000000LL;
    v7 = 0;
    v10 = 0;
  }
  else
  {
    LODWORD(v3) = sub_25A8B8(
                    COERCE_UNSIGNED_INT64(1.7668201e72 / v1 * 1.59309191e-58),
                    HIDWORD(COERCE_UNSIGNED_INT64(1.7668201e72 / v1 * 1.59309191e-58)));
    v4 = v3;
    v5 = 1.7668201e72 / v1 - COERCE_DOUBLE(sub_25A6F8(v3)) * 6.27710174e57;
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
  *a1 = v12;
  a1[1] = v10;
  a1[2] = v7;
  a1[3] = v4;
  return v7;
}
