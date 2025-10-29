int __fastcall calc_chip_temp_min_max_avg_ks5(int a1, _DWORD *a2, int *a3, _DWORD *a4, int *a5)
{
  signed int v9; // r4
  char *v10; // r0
  char *v11; // r6
  int v12; // r4
  char *v13; // r11
  int v14; // r8
  int v15; // r0
  int v16; // r2
  char *v17; // r0
  int v18; // r1
  int v19; // r3
  int v20; // t1
  int v21; // r3
  int v22; // r2
  int v23; // r1
  char *v24; // r3
  int v25; // r0
  int v26; // t1
  int v27; // r4

  *a5 = 1;
  v9 = *(_DWORD *)(a1 + 332);
  v10 = (char *)malloc(4 * v9);
  v11 = v10;
  if ( v9 > 0 )
  {
    v12 = 0;
    v13 = v10 - 4;
    v14 = 0;
    do
    {
      ++v14;
      pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + v12 + 20));
      v15 = *(_DWORD *)(a1 + 528) + v12;
      v12 += 44;
      *((_DWORD *)v13 + 1) = *(_DWORD *)v15;
      v13 += 4;
      pthread_mutex_unlock((pthread_mutex_t *)(v15 + 20));
    }
    while ( *(_DWORD *)(a1 + 332) > v14 );
    v9 = *(_DWORD *)(a1 + 332);
  }
  qsort(v11, v9, 4u, (__compar_fn_t)cmpfunc_int);
  *a2 = -64;
  v16 = *(_DWORD *)(a1 + 332);
  if ( v16 > 1 )
  {
    v17 = v11 - 4;
    v18 = 0;
    do
    {
      v20 = *((_DWORD *)v17 + 1);
      v17 += 4;
      v19 = v20;
      ++v18;
      if ( v20 != -64 )
      {
        *a2 = v19;
        v16 = *(_DWORD *)(a1 + 332);
      }
      if ( v16 >= 4 )
        v21 = 4;
      else
        v21 = v16;
    }
    while ( v21 - 1 > v18 );
  }
  v22 = *(_DWORD *)&v11[4 * v16 - 4];
  *a3 = v22;
  if ( v22 > *a2 + 40 )
    *a5 = 0;
  v23 = *(_DWORD *)(a1 + 332);
  if ( v23 <= 6 )
  {
    *a5 = 0;
    free(v11);
    return 0;
  }
  else
  {
    v24 = v11 + 8;
    v25 = 0;
    do
    {
      v26 = *((_DWORD *)v24 + 1);
      v24 += 4;
      v25 += v26;
    }
    while ( v24 != &v11[4 * v23 - 16] );
    *a4 = sub_26CD38(v25, v23 - 6);
    v27 = *a5;
    free(v11);
    if ( v27 )
      return 4;
    else
      return 0;
  }
}
