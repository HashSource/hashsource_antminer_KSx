unsigned int __fastcall std::sys::unix::fd::FileDesc::read_buf(int a1, int *a2, int a3, _DWORD *a4)
{
  unsigned int v6; // r1
  unsigned int v7; // r6
  size_t v8; // r2
  ssize_t v10; // r0
  unsigned int v11; // r2
  unsigned int result; // r0

  v6 = a4[1];
  v7 = a4[2];
  if ( v6 < v7 )
    core::slice::index::slice_start_index_len_fail();
  v8 = v6 - v7;
  if ( v6 - v7 >= 0x7FFFFFFF )
    v8 = 0x7FFFFFFF;
  v10 = read(*a2, (void *)(*a4 + v7), v8);
  if ( v10 == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    v11 = a4[3];
    result = v10 + v7;
    a4[2] = result;
    *(_BYTE *)a1 = 4;
    if ( v11 > result )
      result = v11;
    a4[3] = result;
  }
  return result;
}
