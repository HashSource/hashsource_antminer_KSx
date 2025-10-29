// Alternative name is '_ZN4core3mem15transmutability6Assume7but_not17h5abf8d10664a21a9E'
int __fastcall <core::mem::transmutability::Assume as core::ops::arith::Sub>::sub(int a1, int a2)
{
  int v2; // r2
  _BOOL4 v3; // r1

  v2 = a1 & ~a2 & 0x10000;
  if ( (a1 & 0x1000000) != 0 )
    v2 |= ~a2 & 0x1000000;
  if ( (a1 & 0x100) != 0 )
    v2 |= ~a2 & 0x100;
  v3 = (a2 & 1) == 0;
  if ( (a1 & 1) != 0 )
    return v2 | v3;
  return v2;
}
