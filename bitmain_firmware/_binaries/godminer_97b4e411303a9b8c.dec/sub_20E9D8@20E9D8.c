int __fastcall sub_20E9D8(int *a1, int a2, int a3, unsigned int a4, int a5, unsigned int a6)
{
  unsigned int v7; // r5
  int v9; // r9
  unsigned int v11; // r10
  unsigned int v12; // r4
  int v13; // r8
  int v14; // r1
  bool v15; // cf
  int v16; // r0
  unsigned int v17; // r2
  int v19; // [sp+4h] [bp-10h]
  unsigned int v20; // [sp+Ch] [bp-8h]
  unsigned __int8 v21; // [sp+10h] [bp-4h]

  v7 = *(unsigned __int8 *)(a2 + 8);
  if ( v7 >= a6 )
    core::panicking::panic_bounds_check(*(unsigned __int8 *)(a2 + 8), a6, (int)&off_2E2748);
  v20 = *(unsigned __int8 *)(a2 + 9);
  if ( v20 >= a6 )
    core::panicking::panic_bounds_check(v20, a6, (int)&off_2E2758);
  v9 = *a1;
  if ( !*a1 )
    return 1;
  v11 = a1[1];
  v19 = *(unsigned __int8 *)(a5 + v20);
  v21 = *(_BYTE *)(a5 + v7);
  if ( (unsigned int)(v9 - 1) >= 0x32 && v11 < 8 * (v9 - 1) )
  {
LABEL_19:
    *a1 = 0;
    return 1;
  }
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    if ( v12 > a4 )
      core::slice::index::slice_start_index_len_fail();
    if ( v12 == a4 )
      return 0;
    if ( !memchr::memchr::fallback::memchr(v21, a3 + v12, a4 - v12) )
      return v13;
    v15 = __CFADD__(v9++, 1);
    if ( v15 )
      v9 = -1;
    v15 = __CFADD__(v11, v14);
    v11 += v14;
    if ( v15 )
      v11 = -1;
    v16 = v14 + v12;
    *a1 = v9;
    a1[1] = v11;
    if ( v14 + v12 >= v7 )
    {
      v17 = v16 - v7 + v20;
      if ( v17 < a4 && *(unsigned __int8 *)(a3 + v17) == v19 )
        return 1;
    }
    v12 = v16 + 1;
    if ( (unsigned int)(v9 - 1) >= 0x32 && v11 < 8 * (v9 - 1) )
      goto LABEL_19;
  }
}
