int __fastcall _exec_all_task(int result)
{
  int v1; // r8
  struct timespec *v2; // r6
  int (__fastcall **v3)(int); // r8
  int (__fastcall **v4)(int); // r7
  struct timespec *v5; // r1
  __time_t tv_sec; // lr
  int v7; // r4
  __time_t v8; // r12
  int v9; // r4
  int (__fastcall *v10)(int); // t1

  v1 = *(_DWORD *)(result + 6144);
  if ( v1 > 0 )
  {
    v2 = (struct timespec *)(result + 2056);
    v3 = (int (__fastcall **)(int))(result + 4 * v1);
    v4 = (int (__fastcall **)(int))result;
    do
    {
      clock_gettime(1, v2);
      v5 = v2 - 1;
      tv_sec = v2[-1].tv_sec;
      v7 = v2->tv_nsec - v2[-1].tv_nsec;
      v8 = v2->tv_sec;
      v2 += 2;
      v9 = 1000 * (v8 - tv_sec) + v7 / 1000000;
      clock_gettime(1, v5);
      v10 = *v4++;
      result = v10(v9);
    }
    while ( v4 != v3 );
  }
  return result;
}
