int *__fastcall update_pool_diff1_of_all_runtimes(int *a1)
{
  int *all_created_runtime; // r0
  int v3; // r12
  __int64 v4; // d16
  int *v5; // r2
  int v6; // t1
  int *v7; // r3
  __int64 v9; // d17
  __int64 v10; // d19
  double v11; // d17
  int v12; // [sp+4h] [bp-4h] BYREF

  v12 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v12);
  v3 = *a1;
  v4 = 0;
  if ( v12 > 0 )
  {
    v5 = &all_created_runtime[v12];
    do
    {
      v6 = *all_created_runtime++;
      v4 += *(_QWORD *)(v6 + 8 * (v3 + 71));
    }
    while ( v5 != all_created_runtime );
  }
  v7 = &dword_2EA890[2 * v3];
  v9 = v4 - *((_QWORD *)v7 + 16);
  v10 = *((_QWORD *)a1 + 249) + v9;
  *(_QWORD *)&v11 = *(_QWORD *)&total_diff1 + v9;
  *((_QWORD *)v7 + 16) = v4;
  *((_QWORD *)a1 + 249) = v10;
  total_diff1 = v11;
  return a1 + 500;
}
