int __fastcall read_system_status_from_monitor(int a1)
{
  int v2; // r5
  int *all_created_runtime; // r0
  float v4; // s15
  double v5; // d16
  double v6; // d17
  __int64 v7; // d18
  int *v8; // r2
  float v9; // s12
  float v10; // s13
  float v11; // s14
  int v12; // t1
  _DWORD *v13; // r3
  char *v14; // r1
  int v15; // r3
  int v17; // [sp+4h] [bp-4h] BYREF

  v2 = 0;
  *(_DWORD *)(a1 + 28) = 0;
  v17 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v17);
  v4 = 0.0;
  v5 = 0.0;
  if ( v17 <= 0 )
  {
    v7 = 0;
    v15 = 0;
    v6 = 0.0;
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
  }
  else
  {
    v6 = 0.0;
    v7 = 0;
    v8 = all_created_runtime;
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
    do
    {
      v12 = *v8++;
      v13 = &dword_2D3B30[54 * *(_DWORD *)(v12 + 228)];
      v7 += *((_QWORD *)v13 + 10);
      v11 = v11 + *((float *)v13 + 8);
      v10 = v10 + *((float *)v13 + 9);
      v9 = v9 + *((float *)v13 + 10);
      v4 = v4 + *((float *)v13 + 11);
      v6 = v6 + *((double *)v13 + 6);
      v5 = v5 + *((double *)v13 + 7);
    }
    while ( &all_created_runtime[v17] != v8 );
    v14 = &byte_2D3630[216 * *(_DWORD *)(*all_created_runtime + 228)];
    v15 = *((_DWORD *)v14 + 343);
    v2 = *((_DWORD *)v14 + 344);
  }
  *(_DWORD *)a1 = v17;
  *(_DWORD *)(a1 + 4) = v15;
  *(_DWORD *)(a1 + 8) = v2;
  *(float *)(a1 + 12) = v11;
  *(_QWORD *)(a1 + 48) = v7;
  *(float *)(a1 + 16) = v10;
  *(float *)(a1 + 20) = v9;
  *(float *)(a1 + 24) = v4;
  *(double *)(a1 + 32) = v6;
  *(double *)(a1 + 40) = v5;
  return a1;
}
