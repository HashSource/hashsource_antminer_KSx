bool __fastcall core::num::flt2dec::round_up(_BYTE *a1, unsigned int a2)
{
  size_t v3; // r2
  _BYTE *v4; // r1
  size_t v5; // r6
  _BYTE *v6; // r2
  int v7; // r3

  v3 = 0;
  v4 = a1;
  while ( 1 )
  {
    v5 = v3;
    if ( a2 == v3 )
      break;
    v6 = &v4[a2];
    --v4;
    v7 = (unsigned __int8)*(v6 - 1);
    v3 = v5 + 1;
    if ( v7 != 57 )
    {
      ++v4[a2];
      if ( a2 - v5 < a2 )
        memset(&v4[a2 + 1], 48, v5);
      return a2 == v5;
    }
  }
  if ( a2 )
  {
    *a1 = 49;
    if ( a2 != 1 )
      memset(a1 + 1, 48, a2 - 1);
  }
  return a2 == v5;
}
