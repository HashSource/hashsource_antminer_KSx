int __fastcall sub_21308C(_DWORD *a1, int size, int a3, int a4)
{
  size_t v4; // r5
  int v6; // r0
  bool v7; // zf
  int v9; // r0

  v4 = size;
  if ( !a3 )
  {
    a1[1] = size;
    a1[2] = 0;
    *a1 = 1;
    return 1;
  }
  if ( size < 0 )
  {
    a1[2] = 0;
    *a1 = 1;
    return 1;
  }
  v6 = *(_DWORD *)(a4 + 8);
  v7 = v6 == 0;
  if ( v6 )
  {
    size = *(_DWORD *)(a4 + 4);
    v7 = size == 0;
  }
  if ( !v7 )
  {
    v9 = _rust_realloc(*(void **)a4, size, 1, v4);
    if ( !v9 )
      goto LABEL_13;
    goto LABEL_9;
  }
  if ( v4 )
  {
    v9 = _rust_alloc(v4);
    if ( !v9 )
    {
LABEL_13:
      a1[2] = 1;
      *a1 = 1;
      a1[1] = v4;
      return 1;
    }
LABEL_9:
    a1[1] = v9;
    a1[2] = v4;
    *a1 = 0;
    return 0;
  }
  a1[1] = 1;
  a1[2] = 0;
  *a1 = 0;
  return 0;
}
