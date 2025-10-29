char *__fastcall <alloc::borrow::Cow<str> as core::ops::arith::AddAssign<&str>>::add_assign(int a1, void *src, char *n)
{
  char *result; // r0
  int v5; // r7
  size_t v6; // r6
  char *v8; // r9
  int v9; // r1
  int v11; // r10
  int v12; // r0
  bool v13; // zf
  int v14; // r7
  size_t v15; // r1
  int v16; // r2
  char *v17; // [sp+0h] [bp-Ch] BYREF
  int v18; // [sp+4h] [bp-8h]
  int v19; // [sp+8h] [bp-4h]

  result = *(char **)a1;
  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD *)(a1 + 8);
  v8 = *(char **)(a1 + 4);
  v9 = v5;
  if ( !result )
    v9 = *(_DWORD *)(a1 + 8);
  if ( v9 )
  {
    if ( n )
    {
      if ( !result )
      {
        v11 = (int)&n[v6];
        if ( &n[v6] )
        {
          if ( v11 <= -1 )
            alloc::raw_vec::capacity_overflow();
          v12 = _rust_alloc((size_t)&n[v6]);
          if ( !v12 )
            alloc::alloc::handle_alloc_error();
        }
        else
        {
          v12 = 1;
        }
        v14 = 0;
        v18 = v12;
        v19 = 0;
        v17 = &n[v6];
        if ( v11 < v6 )
        {
          sub_7D57C((size_t *)&v17, 0, v6);
          v12 = v18;
          v14 = v19;
        }
        memcpy((void *)(v12 + v14), v8, v6);
        v15 = (size_t)v17;
        v16 = v18;
        *(_DWORD *)(a1 + 12) = v14 + v6;
        *(_DWORD *)(a1 + 4) = v15;
        *(_DWORD *)(a1 + 8) = v16;
        v8 = *(char **)(a1 + 4);
        v5 = *(_DWORD *)(a1 + 12);
        *(_DWORD *)a1 = 1;
      }
      if ( &v8[-v5] < n )
      {
        sub_7D57C((size_t *)(a1 + 4), v5, (int)n);
        v5 = *(_DWORD *)(a1 + 12);
      }
      memcpy((void *)(*(_DWORD *)(a1 + 8) + v5), src, (size_t)n);
      result = &n[v5];
      *(_DWORD *)(a1 + 12) = &n[v5];
    }
  }
  else
  {
    v13 = result == 0;
    if ( result )
      v13 = v8 == 0;
    if ( v13 )
    {
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = src;
      *(_DWORD *)(a1 + 8) = n;
    }
    else
    {
      _rust_dealloc(*(void **)(a1 + 8));
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = src;
      *(_DWORD *)(a1 + 8) = n;
    }
    return 0;
  }
  return result;
}
