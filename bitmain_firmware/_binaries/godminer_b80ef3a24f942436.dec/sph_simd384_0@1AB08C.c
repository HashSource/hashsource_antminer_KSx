_DWORD *__fastcall sph_simd384_0(_DWORD *result, char *src, size_t a3)
{
  size_t v3; // r6
  _DWORD *v4; // r5
  int v6; // r0
  char *v7; // r1
  size_t v8; // r4
  char *v9; // r0
  size_t v10; // r4
  int v11; // r3

  v3 = a3;
  if ( a3 )
  {
    v4 = result;
    do
    {
      while ( 1 )
      {
        v6 = v4[32];
        v7 = src;
        v8 = 128 - v6;
        v9 = (char *)v4 + v6;
        if ( v8 >= v3 )
          v8 = v3;
        v3 -= v8;
        src += v8;
        result = memcpy(v9, v7, v8);
        v10 = v8 + v4[32];
        v4[32] = v10;
        if ( v10 == 128 )
          break;
        if ( !v3 )
          return result;
      }
      result = (_DWORD *)sub_1A2350((int)v4, 0);
      v11 = v4[65];
      v4[32] = 0;
      v4[65] = ++v11;
      if ( !v11 )
        ++v4[66];
    }
    while ( v3 );
  }
  return result;
}
