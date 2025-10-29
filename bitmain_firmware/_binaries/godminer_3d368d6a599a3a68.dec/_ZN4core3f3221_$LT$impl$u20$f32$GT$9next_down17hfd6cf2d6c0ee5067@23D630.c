int core::f32::<impl f32>::next_down()
{
  int v0; // s0
  int result; // r0

  result = v0;
  if ( v0 != -8388608 )
  {
    if ( (v0 & 0x7FFFFFFF) != 0 )
    {
      if ( v0 <= -1 )
        return v0 + 1;
      else
        return v0 - 1;
    }
    else
    {
      return -2147483647;
    }
  }
  return result;
}
