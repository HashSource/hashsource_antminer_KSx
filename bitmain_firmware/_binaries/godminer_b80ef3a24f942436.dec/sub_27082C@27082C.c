int __fastcall sub_27082C(unsigned int a1)
{
  int result; // r0
  unsigned int v3; // r1
  int v4; // r2

  result = 0;
  if ( a1 >= 0x3F800000 )
  {
    if ( a1 >> 23 >= 0xBF )
    {
      result = 0;
      if ( a1 < 0x7F800001 )
        return -1;
    }
    else
    {
      v3 = (a1 << 8) | 0x80000000;
      v4 = (62 - (unsigned __int8)(a1 >> 23)) & 0x3F;
      result = v3 << (32 - v4);
      if ( v4 - 32 >= 0 )
        return v3 >> (v4 - 32);
    }
  }
  return result;
}
