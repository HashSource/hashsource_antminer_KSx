void __fastcall sub_248CF0(int a1, int a2, int a3)
{
  unsigned int v3; // s0
  unsigned int v4; // s1
  int v5; // r2
  int v6; // lr
  int v7; // r5
  unsigned int v8; // r5
  char v9; // r0

  if ( !a3 )
    core::panicking::panic((int)aAssertionFaile_44, 29, (int)&off_2E4EA4);
  if ( ((v4 >> 20) & 0x7FF) != 0 )
  {
    v5 = v4 & 0xFFFFF | 0x100000;
    v6 = v3;
  }
  else
  {
    v6 = 2 * v3;
    v5 = (2 * v4) & 0x1FFFFF | (v3 >> 31);
  }
  v7 = v4 & 0x7FF00000;
  if ( !(v3 | v4 & 0xFFFFF) )
  {
    if ( v7 == 2146435072 )
    {
      v8 = 3;
      goto LABEL_14;
    }
    if ( !v7 )
    {
      v8 = 4;
      goto LABEL_14;
    }
  }
  v8 = v7 && !(v6 | v5 ^ 0x100000) || !(v6 & 1);
LABEL_14:
  v9 = 3;
  if ( v8 > 1 )
    v9 = v8 - 2;
  __asm { ADD             PC, R1, R0 }
}
