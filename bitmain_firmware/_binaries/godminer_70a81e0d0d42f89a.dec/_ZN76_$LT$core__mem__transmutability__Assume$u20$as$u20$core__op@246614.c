// Alternative name is '_ZN4core3mem15transmutability6Assume3and17h7b115694202a8246E'
int __fastcall <core::mem::transmutability::Assume as core::ops::arith::Add>::add(int a1, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int v7; // r3

  v2 = 0x10000;
  if ( (a1 & 0x10000) == 0 )
    v2 = a2 & 0x10000;
  v3 = 0x1000000;
  if ( (a1 & 0x1000000) == 0 )
    v3 = a2 & 0x1000000;
  v4 = v3 | v2;
  v5 = 256;
  if ( (a1 & 0x100) == 0 )
    v5 = a2 & 0x100;
  v6 = v4 | v5;
  v7 = 1;
  if ( (a1 & 1) == 0 )
    v7 = a2 & 1;
  return v6 | v7;
}
