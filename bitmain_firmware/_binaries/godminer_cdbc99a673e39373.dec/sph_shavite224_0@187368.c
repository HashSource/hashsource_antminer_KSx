unsigned int *__fastcall sph_shavite224_0(unsigned int *result, char *src, unsigned int a3)
{
  unsigned int v3; // r5
  unsigned int *v4; // r6
  unsigned int v5; // r4
  size_t v7; // r3
  char *v8; // r1
  char *v9; // r0
  int v10; // r3

  v3 = a3;
  v4 = result;
  v5 = result[16];
  while ( v3 )
  {
    v7 = 64 - v5;
    v8 = src;
    v9 = (char *)v4 + v5;
    if ( 64 - v5 >= v3 )
      v7 = v3;
    v5 += v7;
    v3 -= v7;
    src += v7;
    result = (unsigned int *)memcpy(v9, v8, v7);
    if ( v5 == 64 )
    {
      v5 = 0;
      v10 = v4[25] + 512;
      v4[25] = v10;
      if ( !v10 )
        ++v4[26];
      result = (unsigned int *)sub_17A9B4(v4, v4);
    }
  }
  v4[16] = v5;
  return result;
}
