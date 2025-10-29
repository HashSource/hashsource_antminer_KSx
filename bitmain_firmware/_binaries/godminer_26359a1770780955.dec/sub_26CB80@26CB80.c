int __fastcall sub_26CB80(unsigned int a1, unsigned int a2)
{
  int result; // r0
  int v4; // r3
  unsigned int v5; // r1

  result = 0;
  if ( a2 >= 0x3FF00000 )
  {
    if ( a2 >= 0x43F00000 )
    {
      result = __PAIR64__(a2, a1) < 0x7FF0000000000001LL;
      if ( __PAIR64__(a2, a1) < 0x7FF0000000000001LL )
        return -1;
    }
    else
    {
      v4 = (62 - (unsigned __int8)(a2 >> 20)) & 0x3F;
      v5 = (a2 << 11) | (a1 >> 21) | 0x80000000;
      result = (a1 << 11 >> v4) | (v5 << (32 - v4));
      if ( v4 - 32 >= 0 )
        return v5 >> (v4 - 32);
    }
  }
  return result;
}
