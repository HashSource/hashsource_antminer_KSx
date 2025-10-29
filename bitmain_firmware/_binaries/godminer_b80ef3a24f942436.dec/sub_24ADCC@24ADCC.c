void sub_24ADCC()
{
  float v0; // s0
  int v1; // r0
  unsigned int v2; // r2
  int v3; // r3
  char v4; // r0

  v1 = LODWORD(v0) & 0x7FFFFF | 0x800000;
  if ( !(unsigned __int8)(LODWORD(v0) >> 23) )
    v1 = (2 * LODWORD(v0)) & 0xFFFFFE;
  v2 = 3;
  if ( v0 != INFINITY && v0 != -INFINITY )
  {
    v3 = 4;
    v2 = 4;
    if ( (LODWORD(v0) & 0x7F800000) == 0 )
      v3 = 3;
    if ( (LODWORD(v0) & 0x7FFFFFFF) == 0 )
      v3 = 2;
    if ( v3 != 2 )
    {
      if ( v3 == 3 )
        v2 = !(v1 & 1);
      else
        v2 = v1 == 0x800000 || !(v1 & 1);
    }
  }
  v4 = 3;
  if ( v2 > 1 )
    v4 = v2 - 2;
  __asm { ADD             PC, R1, R0 }
}
