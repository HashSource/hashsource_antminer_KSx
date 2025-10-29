int core::f64::<impl f64>::partial_classify()
{
  int v0; // s0
  int v1; // s1
  int v2; // r1
  int result; // r0

  v2 = v1 & 0x7FF00000;
  if ( v0 | v1 & 0xFFFFF )
    goto LABEL_6;
  if ( v2 == 2146435072 )
    return 1;
  if ( !v2 )
    return 2;
LABEL_6:
  result = 4;
  if ( !v2 )
    return 3;
  return result;
}
