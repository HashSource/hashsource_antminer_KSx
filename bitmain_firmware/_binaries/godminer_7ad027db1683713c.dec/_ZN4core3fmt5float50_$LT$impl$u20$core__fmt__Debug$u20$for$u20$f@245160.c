void __fastcall core::fmt::float::<impl core::fmt::Debug for f64>::fmt(_DWORD *a1, int a2)
{
  double v2; // d3

  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    sub_235180();
  }
  else
  {
    LODWORD(v2) = *a1;
    HIDWORD(v2) = a1[1] & 0x7FFFFFFF;
    if ( v2 >= 1.0e16 || v2 != 0.0 && v2 < 0.0001 )
      sub_236318();
    else
      sub_235830();
  }
}
