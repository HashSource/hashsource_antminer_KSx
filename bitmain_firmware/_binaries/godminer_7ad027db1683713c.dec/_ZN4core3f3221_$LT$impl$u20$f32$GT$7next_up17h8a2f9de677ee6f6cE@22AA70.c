int core::f32::<impl f32>::next_up()
{
  int v0; // s0
  int result; // r0

  result = v0;
  if ( v0 != 2139095040 )
  {
    if ( (v0 & 0x7FFFFFFF) != 0 )
    {
      if ( v0 <= -1 )
        return v0 - 1;
      else
        return v0 + 1;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
