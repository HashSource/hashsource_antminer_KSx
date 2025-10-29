int __fastcall core::num::flt2dec::digits_to_exp_str(
        unsigned __int8 *a1,
        unsigned int a2,
        __int16 a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int a7)
{
  int result; // r0
  unsigned int v9; // r12
  char *v10; // r6
  int v11; // r7
  unsigned int v12; // r3
  __int16 v13; // r2
  char *v14; // r5
  int v15; // r7
  int v16; // r3
  char **v17; // r2
  char **v18; // r2
  const char *v19; // r0
  char **v20; // r2

  if ( !a2 )
  {
    v19 = aAssertionFaile_39;
    v20 = &off_2E2E24;
    goto LABEL_28;
  }
  if ( *a1 < 0x31u )
  {
    v19 = aAssertionFaile_41;
    v20 = &off_2E2E34;
LABEL_28:
    core::panicking::panic((int)v19, 33, (int)v20);
  }
  if ( a7 < 6 )
    core::panicking::panic((int)aAssertionFaile_43, 34, (int)&off_2E2E44);
  result = a6;
  v9 = 1;
  *(_DWORD *)(a6 + 4) = a1;
  *(_DWORD *)(a6 + 8) = 1;
  *(_WORD *)a6 = 2;
  if ( (a4 | a2) >= 2 )
  {
    *(_DWORD *)(a6 + 28) = a1 + 1;
    *(_DWORD *)(a6 + 16) = asc_2B3241;
    v9 = 3;
    *(_DWORD *)(a6 + 32) = a2 - 1;
    *(_WORD *)(a6 + 24) = 2;
    *(_WORD *)(a6 + 12) = 2;
    *(_DWORD *)(a6 + 20) = 1;
    if ( a4 > a2 )
    {
      *(_DWORD *)(a6 + 40) = a4 - a2;
      v9 = 4;
      *(_WORD *)(a6 + 36) = 0;
    }
  }
  if ( a3 >= 1 )
  {
    if ( v9 < a7 )
    {
      v10 = aE;
      *(_WORD *)(a6 + 12 * v9) = 2;
      v11 = a6 + 12 * v9;
      v12 = v9 + 1;
      if ( a5 )
        v10 = &aEEE[4];
      *(_DWORD *)(v11 + 4) = v10;
      *(_DWORD *)(v11 + 8) = 1;
      if ( v12 < a7 )
      {
        v13 = a3 - 1;
        goto LABEL_18;
      }
      v18 = &off_2E2E84;
LABEL_25:
      core::panicking::panic_bounds_check(v12, a7, (int)v18);
    }
    v17 = &off_2E2E74;
LABEL_23:
    core::panicking::panic_bounds_check(v9, a7, (int)v17);
  }
  if ( v9 >= a7 )
  {
    v17 = &off_2E2E54;
    goto LABEL_23;
  }
  v14 = &aEEE[2];
  v12 = v9 + 1;
  if ( a5 )
    v14 = aEEE;
  *(_WORD *)(a6 + 12 * v9) = 2;
  v15 = a6 + 12 * v9;
  *(_DWORD *)(v15 + 4) = v14;
  *(_DWORD *)(v15 + 8) = 2;
  if ( v12 >= a7 )
  {
    v18 = &off_2E2E64;
    goto LABEL_25;
  }
  v13 = 1 - a3;
LABEL_18:
  v16 = 12 * v12;
  *(_WORD *)(a6 + v16) = 1;
  *(_WORD *)(a6 + v16 + 2) = v13;
  if ( v9 + 2 > a7 )
    core::slice::index::slice_end_index_len_fail();
  return result;
}
