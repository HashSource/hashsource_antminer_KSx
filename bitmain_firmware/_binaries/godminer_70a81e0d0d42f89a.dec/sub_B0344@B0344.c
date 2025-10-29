int __fastcall sub_B0344(_QWORD *a1, int *a2)
{
  int v2; // r2
  struct timeval v4; // [sp+0h] [bp-14h] BYREF
  unsigned int seed[3]; // [sp+8h] [bp-Ch] BYREF

  *a1 = *a2;
  gettimeofday(&v4, 0);
  *(_QWORD *)seed = v4.tv_usec + 1000000 * v4.tv_sec;
  v2 = rand_r(seed) & 0xFFFFFFF;
  dword_2EB684 = v2;
  return 0;
}
