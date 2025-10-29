__int64 __fastcall diff_to_target_dcr(_QWORD *a1)
{
  double v1; // d0
  int v3; // r4
  double v4; // d0
  __int64 result; // r0
  _DWORD *v6; // r2
  int v7; // r3

  if ( v1 <= 1.0 )
  {
    result = sub_26CB80(COERCE_UNSIGNED_INT64(4294901760.0 / v1), HIDWORD(COERCE_UNSIGNED_INT64(4294901760.0 / v1)));
    if ( !result )
    {
      *a1 = -1;
      a1[1] = -1;
      a1[2] = -1;
      a1[3] = -1;
      return result;
    }
    v3 = 6;
  }
  else
  {
    v3 = 5;
    v4 = v1 * 2.32830644e-10;
    while ( v4 > 1.0 )
    {
      --v3;
      v4 = v4 * 2.32830644e-10;
      if ( !v3 )
      {
        result = sub_26CB80(COERCE_UNSIGNED_INT64(4294901760.0 / v4), HIDWORD(COERCE_UNSIGNED_INT64(4294901760.0 / v4)));
        v6 = a1;
        v7 = 4;
        goto LABEL_6;
      }
    }
    result = sub_26CB80(COERCE_UNSIGNED_INT64(4294901760.0 / v4), HIDWORD(COERCE_UNSIGNED_INT64(4294901760.0 / v4)));
  }
  v6 = (_DWORD *)a1 + v3;
  v7 = 4 * v3 + 4;
LABEL_6:
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  *v6 = result;
  *(_DWORD *)((char *)a1 + v7) = HIDWORD(result);
  return result;
}
