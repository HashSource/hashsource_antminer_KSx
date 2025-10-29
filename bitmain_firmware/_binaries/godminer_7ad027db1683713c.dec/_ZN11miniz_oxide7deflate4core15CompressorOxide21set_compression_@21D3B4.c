char *__fastcall miniz_oxide::deflate::core::CompressorOxide::set_compression_level(int a1, int a2)
{
  unsigned int v2; // r3
  char *v3; // r2
  int v4; // r12
  int v5; // r1
  int v6; // r1
  unsigned int v7; // r3
  char *result; // r0

  v2 = (unsigned __int8)a2;
  v3 = (char *)&word_10010 + a1;
  a2 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 >= 0xAu )
    a2 = 10;
  v4 = dword_29CA4C[a2];
  v5 = *(_DWORD *)((_BYTE *)&word_10010 + a1) & 0x1000;
  if ( v2 < 4 )
    v5 |= 0x4000u;
  v6 = v5 | v4;
  if ( !v2 )
    v6 |= 0x80000u;
  *(_DWORD *)v3 = v6;
  v7 = v6 & 0xFFF;
  v3[54] = (v6 & 0x4000) != 0;
  *(int *)((char *)&dword_1004C + a1) = ((43691 * (v7 + 2)) >> 17) + 1;
  result = (char *)&dword_1004C + a1;
  *((_DWORD *)result + 1) = ((43691 * ((v7 >> 2) + 2)) >> 17) + 1;
  return result;
}
