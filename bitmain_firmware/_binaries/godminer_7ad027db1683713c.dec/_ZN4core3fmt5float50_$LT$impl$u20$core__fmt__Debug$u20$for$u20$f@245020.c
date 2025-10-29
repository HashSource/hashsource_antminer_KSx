void __fastcall core::fmt::float::<impl core::fmt::Debug for f32>::fmt(_DWORD *a1, int a2)
{
  int v2; // s4

  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    sub_234DCC();
  }
  else
  {
    v2 = *a1 & 0x7FFFFFFF;
    if ( *(float *)&v2 >= 1.0e16 || *(float *)&v2 != 0.0 && *(float *)&v2 < 0.0001 )
      sub_2365E4();
    else
      sub_235554();
  }
}
