int __fastcall sub_1B147C(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // t1

  sub_1B26D0(a1 + 34);
  sub_1B1C58(a1 + 40);
  if ( *a1 != 2 )
    sub_1B3140(a1);
  v4 = a1[6];
  v3 = a1 + 6;
  result = v4;
  if ( v4 != 2 )
    return sub_1B1CEC(v3);
  return result;
}
