int __fastcall sub_1AD360(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // t1

  sub_1AE5B4(a1 + 34);
  sub_1ADB3C(a1 + 40);
  if ( *a1 != 2 )
    sub_1AF024(a1);
  v4 = a1[6];
  v3 = a1 + 6;
  result = v4;
  if ( v4 != 2 )
    return sub_1ADBD0(v3);
  return result;
}
