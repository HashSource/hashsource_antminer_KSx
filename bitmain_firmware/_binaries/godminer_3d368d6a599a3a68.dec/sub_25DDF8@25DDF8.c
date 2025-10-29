void __fastcall sub_25DDF8(_DWORD **a1, int a2)
{
  _DWORD *v2; // r0
  double v3; // d3

  v2 = *a1;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    sub_247CF8();
  }
  else
  {
    LODWORD(v3) = *v2;
    HIDWORD(v3) = v2[1] & 0x7FFFFFFF;
    if ( v3 >= 1.0e16 || v3 != 0.0 && v3 < 0.0001 )
      sub_248E90();
    else
      sub_2483A8();
  }
}
