char *__fastcall miniz_oxide::deflate::core::CompressorOxide::set_format_and_level(int a1, unsigned __int8 a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r2
  unsigned int v5; // r1
  char *v6; // r0
  char *result; // r0

  v3 = (unsigned __int8)a3;
  a3 = (unsigned __int8)a3;
  if ( (unsigned __int8)a3 >= 0xAu )
    a3 = 10;
  v4 = dword_2B11FC[a3];
  if ( v3 < 4 )
    v4 |= 0x4000u;
  if ( a2 < 2u )
    v4 |= 0x1000u;
  if ( !v3 )
    v4 |= 0x80000u;
  v5 = v4 & 0xFFF;
  *(int *)((char *)&dword_1004C + a1) = ((43691 * (v5 + 2)) >> 17) + 1;
  v6 = (char *)&dword_1004C + a1;
  *((_DWORD *)v6 - 15) = v4;
  result = v6 - 60;
  *((_DWORD *)result + 16) = ((43691 * ((v5 >> 2) + 2)) >> 17) + 1;
  result[54] = (v4 & 0x4000) != 0;
  return result;
}
