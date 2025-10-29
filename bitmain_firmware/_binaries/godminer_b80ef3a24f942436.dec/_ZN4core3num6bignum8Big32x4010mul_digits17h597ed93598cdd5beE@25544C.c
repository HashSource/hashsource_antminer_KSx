int *__fastcall core::num::bignum::Big32x40::mul_digits(int *a1, int *a2, unsigned int a3)
{
  unsigned int v6; // r9
  int *v7; // r1
  void **p_dest; // r9
  unsigned int v9; // r2
  unsigned int v10; // r11
  int *v11; // r4
  unsigned int v12; // r10
  void **v13; // r12
  unsigned int v14; // r7
  int v15; // r3
  int v16; // r6
  unsigned int v17; // r0
  int v18; // lr
  int v19; // r3
  unsigned int v20; // r9
  char *v21; // r8
  char *v22; // kr00_4
  unsigned int v23; // r0
  unsigned int v24; // r0
  unsigned int v25; // r0
  int *v26; // r2
  unsigned int v27; // r1
  _BYTE *v28; // r8
  unsigned int v29; // r7
  int v30; // r4
  int v31; // r3
  int v32; // r12
  int v33; // r1
  char *v34; // r7
  int v35; // r10
  int v36; // lr
  int v37; // kr08_4
  unsigned int v38; // r1
  unsigned int v39; // r0
  unsigned int v40; // r0
  int v42; // r0
  int v43; // t1
  unsigned int v44; // [sp+4h] [bp-C0h]
  int v45; // [sp+8h] [bp-BCh]
  unsigned int v46; // [sp+Ch] [bp-B8h]
  void **v47; // [sp+10h] [bp-B4h]
  unsigned int v48; // [sp+10h] [bp-B4h]
  unsigned int v49; // [sp+14h] [bp-B0h]
  unsigned int v50; // [sp+18h] [bp-ACh]
  void *dest; // [sp+1Ch] [bp-A8h] BYREF
  _BYTE s[160]; // [sp+20h] [bp-A4h] BYREF

  memset(s, 0, sizeof(s));
  v6 = a1[40];
  if ( v6 < a3 )
  {
    if ( v6 < 0x29 )
    {
      v7 = &a1[v6];
      p_dest = &dest;
      v9 = 4 * a3;
      v10 = 0;
      v11 = a1;
      v12 = 0;
      v45 = a3 - 1;
      v49 = a3;
      v44 = a3 + 1;
      dest = a1;
LABEL_4:
      v13 = &p_dest[v10];
      v14 = v10;
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        v17 = v14;
        if ( &v11[v15] == v7 )
          break;
        v18 = v11[v16];
        ++v14;
        ++v13;
        ++v15;
        ++v16;
        if ( v18 )
        {
          v11 = (int *)((char *)v11 + v15 * 4);
          v19 = v17;
          if ( v17 >= 0x28 )
            v19 = 40;
          v47 = p_dest;
          v20 = 0;
          v21 = 0;
          do
          {
            if ( !(4 * v19 - 160 + v20) )
              goto LABEL_43;
            ++v17;
            v22 = &v21[(_DWORD)v13[v20 / 4] + a2[v20 / 4] * v18];
            v21 = (char *)(((unsigned __int64)v13[v20 / 4] + a2[v20 / 4] * (__int64)v18 + (int)v21) >> 32);
            v13[v20 / 4] = v22;
            v20 += 4;
          }
          while ( v9 != v20 );
          p_dest = v47;
          v23 = v49;
          if ( v21 )
          {
            if ( v45 + v10 + v16 > 0x27 )
              core::panicking::panic_bounds_check(v49 + v10 + v16 - 1, 40, (int)&off_2EF600);
            *(&v47[v10] + v49 + v16) = v21;
            v23 = v44;
          }
          v24 = v10 + v23;
          v10 += v16;
          v25 = v24 + v16 - 1;
          if ( v12 <= v25 )
            v12 = v25;
          goto LABEL_4;
        }
      }
LABEL_35:
      a1 = (int *)dest;
      goto LABEL_36;
    }
LABEL_46:
    core::slice::index::slice_end_index_len_fail();
  }
  if ( v6 >= 0x29 )
    goto LABEL_46;
  v26 = &a2[a3];
  if ( v6 )
  {
    dest = a1;
    v27 = 0;
    v12 = 0;
LABEL_21:
    v28 = &s[4 * v27 - 4];
    v29 = v27;
    v30 = 0;
    v31 = 0;
    while ( 1 )
    {
      v17 = v29;
      if ( &a2[v30] == v26 )
        goto LABEL_35;
      v32 = a2[v31];
      ++v29;
      v28 += 4;
      ++v30;
      ++v31;
      if ( v32 )
      {
        v48 = v27;
        v46 = v27 + v31;
        v33 = v17;
        v34 = (char *)dest;
        if ( v17 >= 0x28 )
          v33 = 40;
        a2 = (int *)((char *)a2 + v30 * 4);
        v50 = v12;
        v35 = 0;
        v36 = 0;
        do
        {
          if ( !(4 * v33 - 160 + v35) )
LABEL_43:
            core::panicking::panic_bounds_check(v17, 40, (int)&off_2EF600);
          ++v17;
          v37 = *(_DWORD *)&v34[v35] * v32 + *(_DWORD *)&v28[v35] + v36;
          v36 = (unsigned __int64)(*(int *)&v34[v35] * (__int64)v32 + *(int *)&v28[v35] + v36) >> 32;
          *(_DWORD *)&v28[v35] = v37;
          v35 += 4;
        }
        while ( 4 * v6 != v35 );
        v12 = v50;
        v38 = v6;
        if ( v36 )
        {
          if ( v6 - 1 + v48 + v31 > 0x27 )
            core::panicking::panic_bounds_check(v6 + v48 + v31 - 1, 40, (int)&off_2EF600);
          v38 = v6 + 1;
          *(_DWORD *)&s[4 * v6 - 4 + 4 * v48 + 4 * v31] = v36;
        }
        v39 = v48 + v38;
        v27 = v46;
        v40 = v39 + v31 - 1;
        if ( v50 <= v40 )
          v12 = v40;
        goto LABEL_21;
      }
    }
  }
  v12 = 0;
  v42 = 0;
  while ( a2 != v26 )
  {
    v43 = *a2++;
    ++v42;
    if ( v43 && v12 <= v42 - 1 )
      v12 = v42 - 1;
  }
LABEL_36:
  memcpy(a1, s, 0xA0u);
  a1[40] = v12;
  return a1;
}
