void __fastcall <alloc::borrow::Cow<str> as core::ops::arith::AddAssign>::add_assign(int *a1, int *a2)
{
  int v3; // r0
  int v4; // r4
  size_t v5; // r10
  char *v7; // r9
  int v8; // r1
  int v9; // r1
  const void *v10; // r8
  unsigned int v11; // r6
  bool v12; // zf
  int v13; // r2
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r4
  size_t v19; // r1
  int v20; // r2
  int v21; // r9
  bool v22; // zf
  size_t v23; // [sp+8h] [bp-Ch] BYREF
  int v24; // [sp+Ch] [bp-8h]
  int v25; // [sp+10h] [bp-4h]

  v3 = *a1;
  v4 = a1[3];
  v5 = a1[2];
  v7 = (char *)a1[1];
  v8 = v4;
  if ( !v3 )
    v8 = a1[2];
  if ( v8 )
  {
    v9 = *a2;
    v10 = (const void *)a2[1];
    v11 = a2[3];
    if ( *a2 )
      v10 = (const void *)a2[2];
    else
      v11 = a2[2];
    if ( !v11 )
    {
LABEL_27:
      v22 = v9 == 0;
      if ( v9 )
        v22 = a2[1] == 0;
      if ( !v22 )
        _rust_dealloc((void *)a2[2]);
      return;
    }
    if ( v3 )
    {
      if ( (unsigned int)&v7[-v4] >= v11 )
        goto LABEL_26;
    }
    else
    {
      v13 = v11 + v5;
      if ( v11 + v5 )
      {
        if ( v13 <= -1 )
          alloc::raw_vec::capacity_overflow();
        v14 = _rust_alloc(v11 + v5);
        v13 = v11 + v5;
        if ( !v14 )
          alloc::alloc::handle_alloc_error();
      }
      else
      {
        v14 = 1;
      }
      v18 = 0;
      v25 = 0;
      v24 = v14;
      v23 = v13;
      if ( v13 < v5 )
      {
        sub_7D57C(&v23, 0, v5);
        v14 = v24;
        v18 = v25;
      }
      memcpy((void *)(v14 + v18), v7, v5);
      v19 = v23;
      v20 = v24;
      a1[3] = v18 + v5;
      a1[1] = v19;
      a1[2] = v20;
      v21 = a1[1];
      v4 = a1[3];
      *a1 = 1;
      if ( v21 - v4 >= v11 )
        goto LABEL_26;
    }
    sub_7D57C((size_t *)a1 + 1, v4, v11);
    v4 = a1[3];
LABEL_26:
    memcpy((void *)(a1[2] + v4), v10, v11);
    v9 = *a2;
    a1[3] = v4 + v11;
    goto LABEL_27;
  }
  v12 = v3 == 0;
  if ( v3 )
    v12 = v7 == 0;
  if ( !v12 )
    _rust_dealloc((void *)a1[2]);
  v15 = a2[1];
  v16 = a2[2];
  v17 = a2[3];
  *a1 = *a2;
  a1[1] = v15;
  a1[2] = v16;
  a1[3] = v17;
}
