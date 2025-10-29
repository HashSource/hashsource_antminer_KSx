int __fastcall calc_chip_temp_min_max_avg_ks5(int a1, _DWORD *a2, int *a3, _DWORD *a4, int *a5)
{
  signed int v9; // r4
  int *v10; // r0
  int *v11; // r7
  int v12; // r4
  char *v13; // r6
  int v14; // r8
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int v18; // r2
  int v19; // r0
  int *v20; // r3
  int v21; // t1
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r12
  int v26; // r12
  int *v27; // r2
  int v28; // t1
  int v29; // r1
  int *v30; // r3
  int v31; // r0
  int v32; // t1
  int v33; // r4

  *a5 = 1;
  v9 = *(_DWORD *)(a1 + 332);
  v10 = (int *)malloc(4 * v9);
  v11 = v10;
  if ( v9 > 0 )
  {
    v12 = 0;
    v13 = (char *)(v10 - 1);
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
  if ( v16 >= 5 )
    v17 = 5;
  else
    v17 = *(_DWORD *)(a1 + 332);
  if ( v16 > 1 )
  {
    v18 = *v11;
    if ( (unsigned int)(*v11 + 63) <= 0x106 )
    {
LABEL_32:
      *a2 = v18;
    }
    else
    {
      v19 = (int)&v11[v17 - 2];
      v20 = v11;
      while ( (int *)v19 != v20 )
      {
        v21 = v20[1];
        ++v20;
        v18 = v21;
        if ( (unsigned int)(v21 + 63) <= 0x106 )
          goto LABEL_32;
      }
    }
  }
  v22 = -64;
  *a3 = -64;
  v23 = *(_DWORD *)(a1 + 332);
  v24 = v23 - 1;
  if ( v23 < 3 )
    v25 = 3;
  else
    v25 = *(_DWORD *)(a1 + 332);
  v26 = v25 - 3;
  if ( v24 >= v26 )
  {
    v22 = v11[v24];
    if ( (unsigned int)(v22 + 63) <= 0x106 )
    {
LABEL_31:
      *a3 = v22;
    }
    else
    {
      v27 = &v11[v23 - 1];
      while ( --v24 >= v26 )
      {
        v28 = *--v27;
        v22 = v28;
        if ( (unsigned int)(v28 + 63) <= 0x106 )
          goto LABEL_31;
      }
      v22 = -64;
    }
  }
  if ( *a2 + 40 < v22 )
    *a5 = 0;
  v29 = *(_DWORD *)(a1 + 332);
  if ( v29 <= 3 )
  {
    *a5 = 0;
    free(v11);
    return 0;
  }
  else
  {
    v30 = v11 + 3;
    v31 = 0;
    do
    {
      v32 = *v30++;
      v31 += v32;
    }
    while ( &v11[v29] != v30 );
    *a4 = sub_26D748(v31, v29 - 3);
    v33 = *a5;
    free(v11);
    if ( v33 )
      return 4;
    else
      return 0;
  }
}
