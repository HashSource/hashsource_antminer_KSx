int __fastcall core::num::flt2dec::digits_to_exp_str(
        unsigned __int8 *a1,
        unsigned int a2,
        __int16 a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int a7)
{
  int v9; // r1
  int result; // r0
  unsigned int v11; // r12
  char *v12; // r6
  int v13; // r7
  unsigned int v14; // r3
  __int16 v15; // r2
  char *v16; // r5
  int v17; // r7
  int v18; // r3
  char **v19; // r2
  char **v20; // r2
  const char *v21; // r0
  char **v22; // r2

  if ( !a2 )
  {
    v21 = aAssertionFaile_39;
    v22 = &off_2CEE24;
    goto LABEL_30;
  }
  if ( *a1 < 0x31u )
  {
    v21 = aAssertionFaile_41;
    v22 = &off_2CEE34;
LABEL_30:
    core::panicking::panic((int)v21, 33, (int)v22);
  }
  v9 = a7;
  if ( a7 < 6 )
    core::panicking::panic((int)aAssertionFaile_43, 34, (int)&off_2CEE44);
  result = a6;
  v11 = 1;
  *(_DWORD *)(a6 + 4) = a1;
  *(_DWORD *)(a6 + 8) = 1;
  *(_WORD *)a6 = 2;
  if ( (a4 | a2) >= 2 )
  {
    *(_DWORD *)(a6 + 28) = a1 + 1;
    *(_DWORD *)(a6 + 16) = asc_29EA91;
    v11 = 3;
    *(_DWORD *)(a6 + 32) = a2 - 1;
    *(_WORD *)(a6 + 24) = 2;
    *(_WORD *)(a6 + 12) = 2;
    *(_DWORD *)(a6 + 20) = 1;
    if ( a4 > a2 )
    {
      *(_DWORD *)(a6 + 40) = a4 - a2;
      v11 = 4;
      *(_WORD *)(a6 + 36) = 0;
    }
  }
  if ( a3 >= 1 )
  {
    if ( v11 < a7 )
    {
      v12 = aE;
      *(_WORD *)(a6 + 12 * v11) = 2;
      v13 = a6 + 12 * v11;
      v14 = v11 + 1;
      if ( a5 )
        v12 = &aEEE[4];
      *(_DWORD *)(v13 + 4) = v12;
      *(_DWORD *)(v13 + 8) = 1;
      if ( v14 < a7 )
      {
        v15 = a3 - 1;
        goto LABEL_18;
      }
      v20 = &off_2CEE84;
LABEL_27:
      core::panicking::panic_bounds_check(v14, a7, (int)v20);
    }
    v19 = &off_2CEE74;
LABEL_25:
    core::panicking::panic_bounds_check(v11, a7, (int)v19);
  }
  if ( v11 >= a7 )
  {
    v19 = &off_2CEE54;
    goto LABEL_25;
  }
  v16 = &aEEE[2];
  v14 = v11 + 1;
  if ( a5 )
    v16 = aEEE;
  *(_WORD *)(a6 + 12 * v11) = 2;
  v17 = a6 + 12 * v11;
  *(_DWORD *)(v17 + 4) = v16;
  *(_DWORD *)(v17 + 8) = 2;
  if ( v14 >= a7 )
  {
    v20 = &off_2CEE64;
    goto LABEL_27;
  }
  v15 = 1 - a3;
LABEL_18:
  v18 = 12 * v14;
  *(_WORD *)(a6 + v18) = 1;
  if ( v11 + 2 <= a7 )
    v9 = v11 + 2;
  *(_WORD *)(a6 + v18 + 2) = v15;
  if ( v11 + 2 > a7 )
    core::slice::index::slice_end_index_len_fail(v11 + 2, v9, (int)&off_2CEE94);
  return result;
}
