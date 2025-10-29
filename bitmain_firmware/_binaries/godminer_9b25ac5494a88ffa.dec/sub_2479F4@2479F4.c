void __fastcall sub_2479F4(int a1, int a2, int a3)
{
  float v3; // s0
  int v4; // r0
  unsigned int v5; // r2
  int v6; // r7
  char v7; // r0

  if ( a3 )
  {
    v4 = LODWORD(v3) & 0x7FFFFF | 0x800000;
    if ( !(unsigned __int8)(LODWORD(v3) >> 23) )
      v4 = (2 * LODWORD(v3)) & 0xFFFFFE;
    v5 = 3;
    if ( v3 != INFINITY && v3 != -INFINITY )
    {
      v6 = 4;
      v5 = 4;
      if ( (LODWORD(v3) & 0x7F800000) == 0 )
        v6 = 3;
      if ( (LODWORD(v3) & 0x7FFFFFFF) == 0 )
        v6 = 2;
      if ( v6 != 2 )
      {
        if ( v6 == 3 )
          v5 = !(v4 & 1);
        else
          v5 = v4 == 0x800000 || !(v4 & 1);
      }
    }
    v7 = 3;
    if ( v5 > 1 )
      v7 = v5 - 2;
    __asm { ADD             PC, R1, R0 }
  }
  core::panicking::panic((int)aAssertionFaile_44, 29, (int)&off_2E2EA4);
}
