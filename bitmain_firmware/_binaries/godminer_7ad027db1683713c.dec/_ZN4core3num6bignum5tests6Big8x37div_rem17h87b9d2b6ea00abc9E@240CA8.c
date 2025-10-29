unsigned int __fastcall core::num::bignum::tests::Big8x3::div_rem(unsigned int *a1, int a2, int a3, int a4)
{
  unsigned int result; // r0
  int *v8; // r4
  unsigned __int8 *v9; // r1
  bool v10; // zf
  unsigned int *v11; // r1
  char *v12; // r2
  unsigned int *v13; // r2
  int v14; // t1
  int v15; // r0
  unsigned int v16; // r1
  int v17; // r11
  int v18; // r1
  char *v19; // r0
  unsigned int v20; // r1
  char v21; // r12
  unsigned int v22; // r3
  unsigned int v23; // r5
  unsigned int v24; // r2
  int v25; // r7
  unsigned __int8 *v26; // r5
  int *v27; // lr
  _BOOL4 v28; // r2
  unsigned int v29; // r3
  _BYTE *v30; // r7
  int v31; // t1
  int v32; // r4
  int v33; // r6
  int v34; // r2
  unsigned int *v35; // r2
  int v36; // t1
  unsigned int *v37; // r2
  int v38; // t1
  unsigned int *v39; // [sp+4h] [bp-10h]
  int v40; // [sp+8h] [bp-Ch]
  unsigned int v41; // [sp+Ch] [bp-8h]
  unsigned __int8 *v42; // [sp+10h] [bp-4h]

  result = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 >= 4u )
    goto LABEL_49;
  if ( !result )
    goto LABEL_50;
  v42 = (unsigned __int8 *)(a2 + 4);
  v8 = (int *)a3;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    v9 = &v42[result];
    if ( (unsigned __int8 *)(a2 + 5) == &v42[result] )
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
        core::panicking::panic((int)aAssertionFaile_52, 30, (int)&off_2CF618);
    }
  }
  *(_DWORD *)a4 = result;
  result = *a1;
  *(_BYTE *)(a3 + 6) = 0;
  *(_WORD *)(a3 + 4) = 0;
  *(_BYTE *)(a4 + 6) = 0;
  *(_DWORD *)a3 = 1;
  *(_WORD *)(a4 + 4) = 0;
  if ( result > 3 )
LABEL_49:
    core::slice::index::slice_end_index_len_fail(result, 3, (int)&off_2CF618);
  if ( result )
  {
    v11 = a1 + 1;
    v12 = (char *)a1 + result + 4;
    v14 = (unsigned __int8)*(v12 - 1);
    v13 = (unsigned int *)(v12 - 1);
    if ( v14 )
    {
      v15 = result - 1;
    }
    else
    {
      if ( v11 == v13 )
        return result;
      v36 = *((unsigned __int8 *)v13 - 1);
      v35 = (unsigned int *)((char *)v13 - 1);
      if ( v36 )
      {
        v15 = result - 2;
      }
      else
      {
        if ( v11 == v35 )
          return result;
        v38 = *((unsigned __int8 *)v35 - 1);
        v37 = (unsigned int *)((char *)v35 - 1);
        if ( v38 )
        {
          v15 = result - 3;
        }
        else
        {
          if ( v11 == v37 )
            return result;
          v15 = result - 4;
        }
      }
    }
    v16 = *((unsigned __int8 *)v11 + v15);
    if ( !v16 )
      core::option::expect_failed((int)aArgumentOfInte, 46, (int)&off_2CF618);
    result = 8 * v15 + ((unsigned __int8)(__clz(v16) - 24) ^ 7);
    v17 = result + 1;
    if ( result != -1 )
    {
      v41 = result;
      v39 = a1;
      v40 = 1;
      do
      {
        core::num::bignum::tests::Big8x3::mul_pow2(a4, 1u);
        result = (unsigned int)--v17 >> 3;
        if ( v41 >= 0x18 )
          core::panicking::panic_bounds_check(result, 3, (int)&off_2CF618);
        v20 = *(_DWORD *)a2;
        v21 = v17 & 7;
        if ( *(_DWORD *)a4 > *(_DWORD *)a2 )
          v20 = *(_DWORD *)a4;
        *(_BYTE *)(a4 + 4) |= (*((unsigned __int8 *)a1 + result + 4) >> v21) & 1;
        if ( v20 >= 4 )
          core::slice::index::slice_end_index_len_fail(v20, 3, (int)&off_2CF618);
        v22 = -3 - v20;
        while ( v22 != -3 )
        {
          v23 = *(unsigned __int8 *)(a4 - v22);
          v24 = *(unsigned __int8 *)(a2 - v22++);
          v25 = v24 != v23;
          if ( v24 > v23 )
            v25 = -1;
          if ( v25 )
          {
            if ( (unsigned __int8)v25 > 1u )
              goto LABEL_22;
            break;
          }
        }
        if ( v20 )
        {
          v26 = v42;
          v27 = v8;
          LOBYTE(v28) = 1;
          v29 = v20;
          v30 = (_BYTE *)(a4 + 4);
          do
          {
            v31 = *v26++;
            v32 = (unsigned __int8)(*v30 + ~(_BYTE)v31) ^ ((unsigned __int8)*v30 + (v31 ^ 0xFF));
            v33 = v28 + (unsigned __int8)(*v30 + ~(_BYTE)v31);
            *v30++ = v33;
            v34 = v32 | (unsigned __int8)v33 ^ v33;
            v28 = v34 != 0;
            --v29;
          }
          while ( v29 );
          a1 = v39;
          v8 = v27;
          if ( !v28 )
            core::panicking::panic((int)aAssertionFaile_49, 26, (int)&off_2CF618);
        }
        *(_DWORD *)a4 = v20;
        v18 = v40;
        if ( (v40 & 1) != 0 )
          v18 = result + 1;
        v19 = (char *)v8 + result;
        if ( (v40 & 1) != 0 )
          *v8 = v18;
        v19[4] |= 1 << v21;
        result = 0;
        v40 = 0;
LABEL_22:
        ;
      }
      while ( v17 );
    }
  }
  return result;
}
