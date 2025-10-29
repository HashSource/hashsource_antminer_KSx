int __fastcall sub_25C014(int **a1)
{
  int *v1; // r12
  int v3; // lr
  unsigned int v4; // r0
  int *v5; // r0
  unsigned __int16 v6; // r2
  int v7; // r4
  int v8; // r1
  __int16 *v9; // r3
  unsigned int v10; // r0
  int v11; // r5
  __int16 v12; // r6
  int v13; // r7

  v1 = a1[1];
  v3 = *v1;
  v4 = 2 * *v1;
  if ( v4 > 0x3F )
    core::panicking::panic_bounds_check(v4, 64, (int)&off_2D0EBC);
  v5 = *a1;
  v6 = 0;
  v7 = 0;
  v8 = **a1;
  v9 = (__int16 *)(v5[1] + (v3 << 8) + 128);
  v10 = 0;
  do
  {
    v11 = *(unsigned __int8 *)(v8 + v7++);
    v12 = *v9;
    v13 = (unsigned __int16)*(v9 - 64);
    ++v9;
    v6 += v12 * v11;
    v10 += v13 * v11;
  }
  while ( v7 != 64 );
  *v1 = v3 + 1;
  return (v10 >> 6) & 0x3F0 | (v6 >> 10);
}
