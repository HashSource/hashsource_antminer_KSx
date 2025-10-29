unsigned int core::f64::<impl f64>::next_down()
{
  __int64 v0; // d0
  unsigned int result; // r0

  result = HIDWORD(v0);
  if ( (unsigned int)v0 | HIDWORD(v0) ^ 0xFFF00000 )
  {
    if ( (unsigned int)v0 | HIDWORD(v0) & 0x7FFFFFFF )
    {
      if ( SHIDWORD(v0) <= -1 )
        return (unsigned __int64)(v0 + 1) >> 32;
      else
        return (unsigned __int64)(v0 - 1) >> 32;
    }
    else
    {
      return 0x80000000;
    }
  }
  return result;
}
