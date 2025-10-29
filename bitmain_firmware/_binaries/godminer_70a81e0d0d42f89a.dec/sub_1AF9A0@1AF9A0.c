int __fastcall sub_1AF9A0(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // t1

  sub_1B0BF4(a1 + 34);
  sub_1B017C(a1 + 40);
  if ( *a1 != 2 )
    sub_1B1664(a1);
  v4 = a1[6];
  v3 = a1 + 6;
  result = v4;
  if ( v4 != 2 )
    return sub_1B0210(v3);
  return result;
}
