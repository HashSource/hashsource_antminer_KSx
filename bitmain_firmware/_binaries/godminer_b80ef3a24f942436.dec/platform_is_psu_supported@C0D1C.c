int __fastcall platform_is_psu_supported(int a1)
{
  unsigned __int16 *i; // r3
  int v2; // t1

  if ( dword_312D8C <= 0 )
    return 0;
  if ( *(unsigned __int16 *)dword_312DA4 != a1 )
  {
    for ( i = (unsigned __int16 *)(dword_312DA4 + 2); i != (unsigned __int16 *)(dword_312DA4 + 2 * dword_312D8C); ++i )
    {
      v2 = *i;
      if ( v2 == a1 )
        return 1;
    }
    return 0;
  }
  return 1;
}
