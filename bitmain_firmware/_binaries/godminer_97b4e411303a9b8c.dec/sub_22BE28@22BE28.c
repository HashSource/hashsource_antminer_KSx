int __fastcall sub_22BE28(int *a1)
{
  int v2; // r0
  int i; // r7
  unsigned int v4; // r2
  unsigned int v5; // r1
  bool v6; // zf

  v2 = *a1;
  if ( !v2 )
    return 0;
  for ( i = 0; ; --i )
  {
    v4 = a1[1];
    v5 = a1[2];
    if ( v5 < v4 && *(_BYTE *)(v2 + v5) == 69 )
    {
      a1[2] = v5 + 1;
      return 0;
    }
    v6 = i == 0;
    if ( i )
    {
      v4 = a1[4];
      v6 = v4 == 0;
    }
    if ( !v6 && <str as core::fmt::Display>::fmt(asc_2B182B, 2, v4) || sub_22DB44(a1, 1) )
      break;
    v2 = *a1;
    if ( !*a1 )
      return 0;
  }
  return 1;
}
