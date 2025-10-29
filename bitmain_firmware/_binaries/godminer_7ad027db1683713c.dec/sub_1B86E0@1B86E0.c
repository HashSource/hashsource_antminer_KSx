int __fastcall sub_1B86E0(unsigned int **a1, int *a2)
{
  int v2; // r7
  unsigned int *v3; // r10
  int v5; // lr
  const void *v6; // r8
  int v7; // r4
  unsigned int v8; // r11
  int v9; // r12
  int v10; // r8
  const void *v11; // r5
  int v12; // r0
  int v13; // r2
  int v14; // r4
  int *v15; // r6
  int v16; // r0
  int v17; // r4
  int v18; // r6
  unsigned int v19; // r0
  int v20; // r1
  int *v21; // r0
  int v22; // r3
  int v23; // r5
  int v24; // r6
  int v25; // r7
  int v26; // r3
  int v27; // r4
  int v28; // r5
  size_t v29; // r6
  int v30; // r7
  int v32; // [sp+0h] [bp-3Ch] BYREF
  int v33; // [sp+4h] [bp-38h]
  int v34; // [sp+8h] [bp-34h]
  int v35; // [sp+Ch] [bp-30h]
  int v36; // [sp+10h] [bp-2Ch]
  int v37; // [sp+14h] [bp-28h]
  int v38; // [sp+18h] [bp-24h]
  int v39; // [sp+1Ch] [bp-20h]
  const void *v40; // [sp+20h] [bp-1Ch]
  size_t size; // [sp+24h] [bp-18h]
  int v42; // [sp+28h] [bp-14h]
  int v43; // [sp+30h] [bp-Ch]
  size_t v44; // [sp+34h] [bp-8h]
  int v45; // [sp+38h] [bp-4h]

  v3 = *a1;
  sub_1D66FC(&v32, a2);
  if ( v32 == 3 )
  {
    v44 = 0;
  }
  else
  {
    v2 = size;
    v6 = v40;
    if ( size )
    {
      if ( (int)size <= -1 )
        alloc::raw_vec::capacity_overflow();
      v7 = _rust_alloc(size);
      if ( !v7 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v7 = 1;
    }
    memcpy((void *)v7, v6, v2);
    v45 = v2;
    v44 = v7;
    v43 = v2;
  }
  v8 = a2[4];
  v9 = 2;
  v10 = 0;
  if ( v8 > 1 )
  {
    v13 = 0;
  }
  else
  {
    v11 = (const void *)a2[2];
    if ( v11 )
    {
      v2 = a2[3];
      if ( v2 )
      {
        if ( v2 <= -1 )
          alloc::raw_vec::capacity_overflow();
        v12 = _rust_alloc(a2[3]);
        if ( !v12 )
          alloc::alloc::handle_alloc_error();
      }
      else
      {
        v12 = 1;
      }
      v14 = v12;
      memcpy((void *)v12, v11, v2);
      v5 = v14;
      v9 = 0;
      v13 = v8;
    }
    else
    {
      v13 = a2[4];
    }
  }
  v15 = a2 + 5;
  v36 = v13;
  v16 = *v15;
  v17 = v15[1];
  v18 = v15[2];
  if ( v8 < 2 )
    v10 = v17;
  v40 = (const void *)v43;
  v37 = v16;
  v19 = *v3;
  v20 = v3[2];
  size = v44;
  v42 = v45;
  v35 = v2;
  v33 = v2;
  v34 = v5;
  v32 = v9;
  v39 = v18;
  v38 = v10;
  if ( v20 == v19 )
  {
    sub_1A4754(v3, v20);
    v20 = v3[2];
  }
  v21 = (int *)(v3[1] + 44 * v20);
  v22 = v33;
  v23 = v34;
  v24 = v35;
  v25 = v36;
  *v21 = v32;
  v21[1] = v22;
  v21[2] = v23;
  v21[3] = v24;
  v21[4] = v25;
  v21 += 5;
  v26 = v38;
  v27 = v39;
  v28 = (int)v40;
  v29 = size;
  v30 = v42;
  *v21 = v37;
  v21[1] = v26;
  v21[2] = v27;
  v21[3] = v28;
  v21[4] = v29;
  v21[5] = v30;
  v3[2] = v20 + 1;
  return v20 + 1;
}
