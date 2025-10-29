void sub_247548()
{
  unsigned int v0; // s0
  unsigned int v1; // s1
  int v2; // r2
  int v3; // lr
  int v4; // r5
  unsigned int v5; // r5
  char v6; // r0

  if ( ((v1 >> 20) & 0x7FF) != 0 )
  {
    v2 = v1 & 0xFFFFF | 0x100000;
    v3 = v0;
  }
  else
  {
    v3 = 2 * v0;
    v2 = (2 * v1) & 0x1FFFFF | (v0 >> 31);
  }
  v4 = v1 & 0x7FF00000;
  if ( v0 | v1 & 0xFFFFF )
    goto LABEL_4;
  if ( v4 == 2146435072 )
  {
    v5 = 3;
  }
  else
  {
    if ( v4 )
    {
LABEL_4:
      if ( v4 )
      {
        if ( v3 | v2 ^ 0x100000 )
          v5 = !(v3 & 1);
        else
          v5 = 1;
      }
      else
      {
        v5 = !(v3 & 1);
      }
      goto LABEL_14;
    }
    v5 = 4;
  }
LABEL_14:
  v6 = 3;
  if ( v5 > 1 )
    v6 = v5 - 2;
  __asm { ADD             PC, R1, R0 }
}
