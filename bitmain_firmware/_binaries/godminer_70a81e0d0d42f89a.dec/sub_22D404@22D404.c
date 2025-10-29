int __fastcall sub_22D404(int *a1)
{
  int v2; // r0
  int v3; // r4
  unsigned int v4; // r2
  unsigned int v5; // r1
  bool v6; // zf

  v2 = *a1;
  v3 = 0;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v4 = a1[1];
    v5 = a1[2];
    if ( v5 < v4 && *(_BYTE *)(v2 + v5) == 69 )
      break;
    v6 = v3 == 0;
    if ( v3 )
    {
      v4 = a1[4];
      v6 = v4 == 0;
    }
    if ( !v6 && <str as core::fmt::Display>::fmt(asc_2B30EB, 2, v4) || sub_22E134(a1) )
      return 1;
    v2 = *a1;
    ++v3;
    if ( !*a1 )
      return 0;
  }
  a1[2] = v5 + 1;
  return 0;
}
