int __fastcall sub_25B5D4(int a1)
{
  unsigned int v1; // r3
  int v2; // r2
  unsigned int v3; // r1
  int v4; // r2
  unsigned int v5; // r3
  int v6; // r2

  v1 = a1 & 0x7FFFFFFF;
  v2 = 0;
  if ( (a1 & 0x7FFFFFFFu) < 0x3F800000 )
    return v2;
  if ( v1 >= 0x5F000000 )
  {
    v2 = 0;
    if ( v1 < 0x7F800001 )
      return ~(a1 >> 31);
    return v2;
  }
  v3 = (a1 << 8) | 0x80000000;
  v4 = (62 - (unsigned __int8)((unsigned int)a1 >> 23)) & 0x3F;
  v5 = v3 << (32 - v4);
  if ( v4 - 32 >= 0 )
    v5 = v3 >> (v4 - 32);
  v6 = -v5;
  if ( a1 >= 0 )
    return v5;
  return v6;
}
