int __fastcall sub_22BD64(int *a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r7
  unsigned int v5; // r2
  unsigned int v6; // r1
  bool v7; // zf

  v2 = *a1;
  v3 = 0;
  if ( v2 )
  {
    v4 = 1;
    while ( 1 )
    {
      v5 = a1[1];
      v6 = a1[2];
      if ( v6 < v5 && *(_BYTE *)(v2 + v6) == 69 )
      {
        a1[2] = v6 + 1;
        return 0;
      }
      v7 = v3 == 0;
      if ( v3 )
      {
        v5 = a1[4];
        v7 = v5 == 0;
      }
      if ( !v7 && <str as core::fmt::Display>::fmt(asc_2B182B, 2, v5) )
        break;
      if ( sub_22DB44(a1, 1) )
        return v4;
      v2 = *a1;
      ++v3;
      if ( !*a1 )
        return 0;
    }
    return 1;
  }
  else
  {
    return 0;
  }
}
