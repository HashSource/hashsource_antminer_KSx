unsigned int __fastcall std::path::Path::_join(size_t *a1, const void *a2, signed int size, _BYTE *a4, size_t n)
{
  size_t v6; // r4
  void *v9; // r0
  int v10; // r7
  int *v11; // r10
  int v12; // r0
  _BOOL4 v13; // r0
  unsigned int v14; // r9
  int v15; // r6
  size_t v16; // r0

  v6 = size;
  if ( size )
  {
    if ( size <= -1 )
      alloc::raw_vec::capacity_overflow(a1, a2);
    v9 = (void *)_rust_alloc(size);
    if ( !v9 )
      alloc::alloc::handle_alloc_error();
    v10 = (int)v9;
    memcpy(v9, a2, v6);
    a1[2] = v6;
    v11 = (int *)(a1 + 2);
    v12 = *(unsigned __int8 *)(v6 + v10 - 1);
    *a1 = v6;
    a1[1] = v10;
    v13 = v12 != 47;
    v14 = n;
    if ( !n )
      goto LABEL_8;
  }
  else
  {
    v13 = 0;
    v10 = 1;
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    v11 = (int *)(a1 + 2);
    v14 = n;
    if ( !n )
      goto LABEL_8;
  }
  v15 = 0;
  if ( *a4 == 47 )
    goto LABEL_10;
LABEL_8:
  if ( v13 )
  {
    sub_79740(a1, v6, 1);
    v16 = a1[2];
    v6 = *a1;
    v10 = a1[1];
    v15 = v16 + 1;
    *(_BYTE *)(v10 + v16) = 47;
LABEL_10:
    *v11 = v15;
    if ( v6 - v15 >= v14 )
      goto LABEL_14;
    goto LABEL_13;
  }
  v15 = v6;
  if ( v14 )
  {
LABEL_13:
    sub_79740(a1, v15, v14);
    v10 = a1[1];
    v15 = a1[2];
  }
LABEL_14:
  memcpy((void *)(v10 + v15), a4, v14);
  *v11 = v15 + v14;
  return v15 + v14;
}
