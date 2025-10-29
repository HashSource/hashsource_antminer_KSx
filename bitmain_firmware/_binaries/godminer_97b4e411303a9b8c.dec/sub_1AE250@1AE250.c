int __fastcall sub_1AE250(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // t1

  sub_1AF4A4(a1 + 34);
  sub_1AEA2C(a1 + 40);
  if ( *a1 != 2 )
    sub_1AFF14(a1);
  v4 = a1[6];
  v3 = a1 + 6;
  result = v4;
  if ( v4 != 2 )
    return sub_1AEAC0(v3);
  return result;
}
