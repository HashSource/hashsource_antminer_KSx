int __fastcall sub_26EB6C(unsigned int a1, int a2)
{
  unsigned int v2; // r2
  int result; // r0
  unsigned int v5; // r2
  int v6; // r0
  unsigned int v7; // r12
  int v8; // lr

  v2 = a2 & 0x7FFFFFFF;
  result = 0;
  if ( (a2 & 0x7FFFFFFFu) >= 0x3FF00000 )
  {
    if ( v2 >= 0x43E00000 )
    {
      result = 0;
      if ( __PAIR64__(v2, a1) < 0x7FF0000000000001LL )
        return ~(a2 >> 31);
    }
    else
    {
      v5 = a1 << 11;
      v6 = (62 - (unsigned __int8)((unsigned int)a2 >> 20)) & 0x3F;
      v7 = (a2 << 11) | (a1 >> 21) | 0x80000000;
      v8 = (v5 >> v6) | (v7 << (32 - v6));
      if ( v6 - 32 >= 0 )
        v8 = v7 >> (v6 - 32);
      result = -v8;
      if ( a2 >= 0 )
        return v8;
    }
  }
  return result;
}
