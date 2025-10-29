int __fastcall sub_19C5EC(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // t1

  sub_19D840(a1 + 34);
  sub_19CDC8(a1 + 40);
  if ( *a1 != 2 )
    sub_19E2B0(a1);
  v4 = a1[6];
  v3 = a1 + 6;
  result = v4;
  if ( v4 != 2 )
    return sub_19CE5C(v3);
  return result;
}
