int core::f32::<impl f32>::partial_classify()
{
  int v0; // s0
  int result; // r0

  result = 4;
  if ( (v0 & 0x7F800000) == 0 )
    result = 3;
  if ( (v0 & 0x7FFFFFFF) == 0 )
    return 2;
  return result;
}
