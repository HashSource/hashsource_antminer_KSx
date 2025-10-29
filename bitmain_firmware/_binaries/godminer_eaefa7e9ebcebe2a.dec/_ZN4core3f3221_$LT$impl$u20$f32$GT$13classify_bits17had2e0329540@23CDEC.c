int __fastcall core::f32::<impl f32>::classify_bits(int a1)
{
  int v1; // r3
  int result; // r0

  v1 = a1 & 0x7FFFFFFF;
  result = 1;
  if ( v1 != 2139095040 )
  {
    if ( (a1 & 0x7F800000) != 0 )
    {
      result = 4;
      if ( (a1 & 0x7F800000) == 0x7F800000 )
        return 0;
    }
    else
    {
      result = 3;
      if ( (a1 & 0x7FFFFF) == 0 )
        return 2;
    }
  }
  return result;
}
