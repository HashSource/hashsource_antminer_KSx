unsigned int __fastcall core::num::bignum::Big32x40::div_rem(int a1, int *a2, _DWORD *s, _DWORD *a4)
{
  unsigned int v4; // r5
  _DWORD *v6; // r7
  int *v7; // r4
  int v8; // r0
  int v9; // t1
  int v10; // r5
  unsigned int result; // r0
  int v12; // r2
  int v13; // r1
  int v14; // r3
  unsigned int v15; // r0
  unsigned int v16; // r9
  _DWORD *v17; // r11
  int *v18; // r10
  unsigned int v19; // r1
  int *v20; // lr
  int v21; // r3
  unsigned int v22; // r5
  unsigned int v23; // r4
  int v24; // r2
  int v25; // r5
  unsigned int v26; // r3
  int *v27; // r4
  int *v28; // r2
  int v29; // t1
  int v30; // r7
  _DWORD *v31; // [sp+0h] [bp-14h]
  _DWORD *v32; // [sp+4h] [bp-10h]
  char v33; // [sp+8h] [bp-Ch]
  unsigned int v34; // [sp+Ch] [bp-8h]

  v4 = a2[40];
  if ( v4 >= 0x29 )
    core::slice::index::slice_end_index_len_fail();
  v6 = s;
  v7 = a2;
  v8 = 4 * v4;
  do
  {
    if ( !v8 )
      core::panicking::panic((int)aAssertionFaile_52, 30, (int)&off_2E5600);
    v9 = *a2++;
    v8 -= 4;
  }
  while ( !v9 );
  memset(s, 0, 0xA0u);
  memset(a4, 0, 0xA0u);
  a4[40] = v4;
  v10 = a1;
  v6[40] = 1;
  result = *(_DWORD *)(a1 + 160);
  if ( result > 0x28 )
    core::slice::index::slice_end_index_len_fail();
  v12 = 4 - 4 * result;
  v13 = 32 * result;
  while ( v12 != 4 )
  {
    v14 = *(_DWORD *)(a1 - v12);
    v13 -= 32;
    v12 += 4;
    --result;
    if ( v14 )
    {
      v15 = *(_DWORD *)(a1 + 4 * result);
      if ( !v15 )
        core::option::expect_failed();
      result = (__clz(v15) | v13) ^ 0x1F;
      v34 = result;
      v16 = result + 1;
      if ( result != -1 )
      {
        v17 = a4 - 1;
        v18 = v7 - 1;
        v33 = 1;
        v31 = a4;
        v32 = v6;
        do
        {
          core::num::bignum::Big32x40::mul_pow2(a4, 1u);
          result = --v16 >> 5;
          if ( v34 >= 0x500 )
            core::panicking::panic_bounds_check(result, 40, (int)&off_2E5600);
          v19 = v7[40];
          v20 = v7;
          if ( a4[40] > v19 )
            v19 = a4[40];
          *a4 |= (*(_DWORD *)(v10 + 4 * result) >> (v16 & 0x1F)) & 1;
          if ( v19 >= 0x29 )
            core::slice::index::slice_end_index_len_fail();
          v21 = -4 * v19;
          while ( v21 )
          {
            v22 = v17[v21 / 0xFFFFFFFC];
            v23 = v18[v21 / 0xFFFFFFFC];
            v21 += 4;
            v24 = v23 != v22;
            if ( v23 > v22 )
              v24 = -1;
            if ( v24 )
            {
              if ( (unsigned __int8)v24 > 1u )
                goto LABEL_16;
              break;
            }
          }
          if ( v19 )
          {
            LOBYTE(v25) = 1;
            v26 = v19;
            v27 = a4;
            v28 = v20;
            do
            {
              v29 = *v28++;
              v30 = ~v29 + ((v25 & 1) != 0) + *v27;
              v25 = __CFADD__((v25 & 1) != 0, *v27) | __CFADD__(~v29, ((v25 & 1) != 0) + *v27);
              *v27++ = v30;
              --v26;
            }
            while ( v26 );
            a4 = v31;
            v6 = v32;
            if ( !v25 )
              core::panicking::panic((int)aAssertionFaile_49, 26, (int)&off_2E5600);
          }
          a4[40] = v19;
          if ( (v33 & 1) != 0 )
            v6[40] = result + 1;
          v6[result] |= 1 << (v16 & 0x1F);
          result = 0;
          v33 = 0;
LABEL_16:
          v10 = a1;
          v7 = v20;
        }
        while ( v16 );
      }
      return result;
    }
  }
  return result;
}
