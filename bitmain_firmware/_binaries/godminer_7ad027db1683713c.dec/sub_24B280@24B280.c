void __fastcall sub_24B280(_DWORD **a1, int a2)
{
  _DWORD *v2; // r0
  double v3; // d3

  v2 = *a1;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    sub_235180();
  }
  else
  {
    LODWORD(v3) = *v2;
    HIDWORD(v3) = v2[1] & 0x7FFFFFFF;
    if ( v3 >= 1.0e16 || v3 != 0.0 && v3 < 0.0001 )
      sub_236318();
    else
      sub_235830();
  }
}
