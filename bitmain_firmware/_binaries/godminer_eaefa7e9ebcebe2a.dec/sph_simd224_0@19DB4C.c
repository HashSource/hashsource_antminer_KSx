void *__fastcall sph_simd224_0(void *result, char *src, size_t a3)
{
  size_t v3; // r6
  int v4; // r5
  int v6; // r0
  char *v7; // r1
  size_t v8; // r4
  void *v9; // r0
  size_t v10; // r4
  int v11; // r3

  v3 = a3;
  if ( a3 )
  {
    v4 = (int)result;
    do
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)(v4 + 64);
        v7 = src;
        v8 = 64 - v6;
        v9 = (void *)(v4 + v6);
        if ( v8 >= v3 )
          v8 = v3;
        v3 -= v8;
        src += v8;
        result = memcpy(v9, v7, v8);
        v10 = v8 + *(_DWORD *)(v4 + 64);
        *(_DWORD *)(v4 + 64) = v10;
        if ( v10 == 64 )
          break;
        if ( !v3 )
          return result;
      }
      result = (void *)sub_198EFC((unsigned __int8 *)v4, 0);
      v11 = *(_DWORD *)(v4 + 132);
      *(_DWORD *)(v4 + 64) = 0;
      *(_DWORD *)(v4 + 132) = ++v11;
      if ( !v11 )
        ++*(_DWORD *)(v4 + 136);
    }
    while ( v3 );
  }
  return result;
}
