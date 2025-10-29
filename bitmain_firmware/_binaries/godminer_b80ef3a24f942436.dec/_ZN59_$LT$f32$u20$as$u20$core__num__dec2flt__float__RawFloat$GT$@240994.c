// Alternative name is '_ZN4core3f3221_$LT$impl$u20$f32$GT$8classify17h8d10dbbbeb4552d3E'
int <f32 as core::num::dec2flt::float::RawFloat>::classify()
{
  float v0; // s0
  int result; // r0

  result = 1;
  if ( v0 != INFINITY )
  {
    result = 4;
    if ( (LODWORD(v0) & 0x7F800000) == 0 )
      result = 3;
    if ( (LODWORD(v0) & 0x7FFFFFFF) == 0 )
      return 2;
  }
  return result;
}
