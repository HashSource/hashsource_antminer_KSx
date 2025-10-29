int __fastcall sub_1CA5C4(unsigned int **a1, _DWORD *a2)
{
  int v2; // r7
  unsigned int *v3; // r10
  int v5; // r1
  int v6; // lr
  void *v7; // r0
  const void *v8; // r8
  int v9; // r4
  unsigned int v10; // r11
  int v11; // r12
  int v12; // r8
  const void *v13; // r5
  int v14; // r0
  unsigned int v15; // r2
  int v16; // r4
  int *v17; // r6
  int v18; // r0
  int v19; // r4
  int v20; // r6
  unsigned int v21; // r0
  int v22; // r1
  int *v23; // r0
  int v24; // r3
  int v25; // r5
  int v26; // r6
  unsigned int v27; // r7
  int v28; // r3
  int v29; // r4
  int v30; // r5
  size_t v31; // r6
  int v32; // r7
  int v34; // [sp+0h] [bp-3Ch] BYREF
  int v35; // [sp+4h] [bp-38h]
  int v36; // [sp+8h] [bp-34h]
  int v37; // [sp+Ch] [bp-30h]
  unsigned int v38; // [sp+10h] [bp-2Ch]
  int v39; // [sp+14h] [bp-28h]
  int v40; // [sp+18h] [bp-24h]
  int v41; // [sp+1Ch] [bp-20h]
  const void *v42; // [sp+20h] [bp-1Ch]
  size_t size; // [sp+24h] [bp-18h]
  int v44; // [sp+28h] [bp-14h]
  int v45; // [sp+30h] [bp-Ch]
  size_t v46; // [sp+34h] [bp-8h]
  int v47; // [sp+38h] [bp-4h]

  v3 = *a1;
  sub_1E85E0(&v34);
  if ( v34 == 3 )
  {
    v7 = 0;
    v46 = 0;
  }
  else
  {
    v2 = size;
    v8 = v42;
    if ( size )
    {
      if ( (int)size <= -1 )
        alloc::raw_vec::capacity_overflow(v34, v5);
      v9 = _rust_alloc(size);
      if ( !v9 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v9 = 1;
    }
    v7 = memcpy((void *)v9, v8, v2);
    v47 = v2;
    v46 = v9;
    v45 = v2;
  }
  v10 = a2[4];
  v11 = 2;
  v12 = 0;
  if ( v10 > 1 )
  {
    v15 = 0;
  }
  else
  {
    v13 = (const void *)a2[2];
    if ( v13 )
    {
      v2 = a2[3];
      if ( v2 )
      {
        if ( v2 <= -1 )
          alloc::raw_vec::capacity_overflow(v7, v5);
        v14 = _rust_alloc(a2[3]);
        if ( !v14 )
          alloc::alloc::handle_alloc_error();
      }
      else
      {
        v14 = 1;
      }
      v16 = v14;
      memcpy((void *)v14, v13, v2);
      v6 = v16;
      v11 = 0;
      v15 = v10;
    }
    else
    {
      v15 = a2[4];
    }
  }
  v17 = a2 + 5;
  v38 = v15;
  v18 = *v17;
  v19 = v17[1];
  v20 = v17[2];
  if ( v10 < 2 )
    v12 = v19;
  v42 = (const void *)v45;
  v39 = v18;
  v21 = *v3;
  v22 = v3[2];
  size = v46;
  v44 = v47;
  v37 = v2;
  v35 = v2;
  v36 = v6;
  v34 = v11;
  v41 = v20;
  v40 = v12;
  if ( v22 == v21 )
  {
    sub_1B6638(v3, v22);
    v22 = v3[2];
  }
  v23 = (int *)(v3[1] + 44 * v22);
  v24 = v35;
  v25 = v36;
  v26 = v37;
  v27 = v38;
  *v23 = v34;
  v23[1] = v24;
  v23[2] = v25;
  v23[3] = v26;
  v23[4] = v27;
  v23 += 5;
  v28 = v40;
  v29 = v41;
  v30 = (int)v42;
  v31 = size;
  v32 = v44;
  *v23 = v39;
  v23[1] = v28;
  v23[2] = v29;
  v23[3] = v30;
  v23[4] = v31;
  v23[5] = v32;
  v3[2] = v22 + 1;
  return v22 + 1;
}
