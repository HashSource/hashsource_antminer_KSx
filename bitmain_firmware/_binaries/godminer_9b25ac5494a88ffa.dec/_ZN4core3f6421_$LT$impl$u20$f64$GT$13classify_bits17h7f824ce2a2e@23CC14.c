int __fastcall core::f64::<impl f64>::classify_bits(int a1, int a2)
{
  bool v3; // zf
  int result; // r0

  v3 = (a1 | a2 & 0x7FFFFFFF ^ 0x7FF00000) == 0;
  result = 1;
  if ( !v3 )
  {
    if ( (a2 & 0x7FF00000) != 0 )
    {
      result = 4;
      if ( (a2 & 0x7FF00000) == 0x7FF00000 )
        return 0;
    }
    else
    {
      result = 3;
      if ( !(a1 | a2 & 0xFFFFF) )
        return 2;
    }
  }
  return result;
}
