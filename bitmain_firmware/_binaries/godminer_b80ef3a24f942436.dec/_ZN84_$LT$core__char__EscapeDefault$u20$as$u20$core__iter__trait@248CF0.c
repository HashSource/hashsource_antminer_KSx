int __fastcall <core::char::EscapeDefault as core::iter::traits::iterator::Iterator>::last(int a1)
{
  unsigned int v1; // r1
  int v2; // r2
  int v4; // r1

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 3;
  if ( HIWORD(v1) > 0x10u )
    v2 = v1 - 1114112;
  if ( (unsigned int)(v2 - 1) < 2 )
    return *(_DWORD *)a1;
  v4 = 1114112;
  if ( v2 )
  {
    v4 = 125;
    if ( !*(_BYTE *)(a1 + 8) )
      return 1114112;
  }
  return v4;
}
