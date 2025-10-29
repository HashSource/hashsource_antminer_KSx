unsigned int __fastcall core::num::bignum::tests::Big8x3::div_rem(unsigned int *a1, int a2, int a3, int a4)
{
  unsigned int v5; // r0
  int *v8; // r4
  unsigned __int8 *v9; // r1
  bool v10; // zf
  unsigned int result; // r0
  unsigned int *v12; // r1
  char *v13; // r2
  unsigned int *v14; // r2
  int v15; // t1
  unsigned int v16; // r0
  unsigned int v17; // r1
  unsigned int v18; // r11
  int v19; // r1
  char *v20; // r0
  unsigned int v21; // r1
  char v22; // r12
  unsigned int v23; // r3
  unsigned int v24; // r5
  unsigned int v25; // r2
  int v26; // r7
  unsigned __int8 *v27; // r5
  int *v28; // lr
  _BOOL4 v29; // r2
  unsigned int v30; // r3
  _BYTE *v31; // r7
  int v32; // t1
  int v33; // r4
  int v34; // r6
  int v35; // r2
  unsigned int *v36; // r2
  int v37; // t1
  unsigned int *v38; // r2
  int v39; // t1
  unsigned int *v40; // [sp+4h] [bp-10h]
  int v41; // [sp+8h] [bp-Ch]
  unsigned int v42; // [sp+Ch] [bp-8h]
  unsigned __int8 *v43; // [sp+10h] [bp-4h]

  v5 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 >= 4u )
    goto LABEL_49;
  if ( !v5 )
    goto LABEL_50;
  v43 = (unsigned __int8 *)(a2 + 4);
  v8 = (int *)a3;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    v9 = &v43[v5];
    if ( (unsigned __int8 *)(a2 + 5) == &v43[v5] )
      goto LABEL_50;
    if ( !*(_BYTE *)(a2 + 5) )
    {
      if ( (unsigned __int8 *)(a2 + 6) == v9 )
        goto LABEL_50;
      v10 = *(_BYTE *)(a2 + 6) == 0;
      if ( !*(_BYTE *)(a2 + 6) )
        v10 = a2 + 7 == (_DWORD)v9;
      if ( v10 )
LABEL_50:
        core::panicking::panic((int)aAssertionFaile_52, 30, (int)&off_2E3618);
    }
  }
  *(_DWORD *)a4 = v5;
  result = *a1;
  *(_BYTE *)(a3 + 6) = 0;
  *(_WORD *)(a3 + 4) = 0;
  *(_BYTE *)(a4 + 6) = 0;
  *(_DWORD *)a3 = 1;
  *(_WORD *)(a4 + 4) = 0;
  if ( result > 3 )
LABEL_49:
    core::slice::index::slice_end_index_len_fail();
  if ( result )
  {
    v12 = a1 + 1;
    v13 = (char *)a1 + result + 4;
    v15 = (unsigned __int8)*(v13 - 1);
    v14 = (unsigned int *)(v13 - 1);
    if ( v15 )
    {
      v16 = result - 1;
    }
    else
    {
      if ( v12 == v14 )
        return result;
      v37 = *((unsigned __int8 *)v14 - 1);
      v36 = (unsigned int *)((char *)v14 - 1);
      if ( v37 )
      {
        v16 = result - 2;
      }
      else
      {
        if ( v12 == v36 )
          return result;
        v39 = *((unsigned __int8 *)v36 - 1);
        v38 = (unsigned int *)((char *)v36 - 1);
        if ( v39 )
        {
          v16 = result - 3;
        }
        else
        {
          if ( v12 == v38 )
            return result;
          v16 = result - 4;
        }
      }
    }
    v17 = *((unsigned __int8 *)v12 + v16);
    if ( !v17 )
      core::option::expect_failed();
    result = 8 * v16 + ((unsigned __int8)(__clz(v17) - 24) ^ 7);
    v18 = result + 1;
    if ( result != -1 )
    {
      v42 = result;
      v40 = a1;
      v41 = 1;
      do
      {
        core::num::bignum::tests::Big8x3::mul_pow2(a4, 1u);
        result = --v18 >> 3;
        if ( v42 >= 0x18 )
          core::panicking::panic_bounds_check(result, 3, (int)&off_2E3618);
        v21 = *(_DWORD *)a2;
        v22 = v18 & 7;
        if ( *(_DWORD *)a4 > *(_DWORD *)a2 )
          v21 = *(_DWORD *)a4;
        *(_BYTE *)(a4 + 4) |= (*((unsigned __int8 *)a1 + result + 4) >> v22) & 1;
        if ( v21 >= 4 )
          core::slice::index::slice_end_index_len_fail();
        v23 = -3 - v21;
        while ( v23 != -3 )
        {
          v24 = *(unsigned __int8 *)(a4 - v23);
          v25 = *(unsigned __int8 *)(a2 - v23++);
          v26 = v25 != v24;
          if ( v25 > v24 )
            v26 = -1;
          if ( v26 )
          {
            if ( (unsigned __int8)v26 > 1u )
              goto LABEL_22;
            break;
          }
        }
        if ( v21 )
        {
          v27 = v43;
          v28 = v8;
          LOBYTE(v29) = 1;
          v30 = v21;
          v31 = (_BYTE *)(a4 + 4);
          do
          {
            v32 = *v27++;
            v33 = (unsigned __int8)(*v31 + ~(_BYTE)v32) ^ ((unsigned __int8)*v31 + (v32 ^ 0xFF));
            v34 = v29 + (unsigned __int8)(*v31 + ~(_BYTE)v32);
            *v31++ = v34;
            v35 = v33 | (unsigned __int8)v34 ^ v34;
            v29 = v35 != 0;
            --v30;
          }
          while ( v30 );
          a1 = v40;
          v8 = v28;
          if ( !v29 )
            core::panicking::panic((int)aAssertionFaile_49, 26, (int)&off_2E3618);
        }
        *(_DWORD *)a4 = v21;
        v19 = v41;
        if ( (v41 & 1) != 0 )
          v19 = result + 1;
        v20 = (char *)v8 + result;
        if ( (v41 & 1) != 0 )
          *v8 = v19;
        v20[4] |= 1 << v22;
        result = 0;
        v41 = 0;
LABEL_22:
        ;
      }
      while ( v18 );
    }
  }
  return result;
}
