unsigned int __fastcall <std::fs::File as std::io::Read>::read_buf(int a1, int *a2, int a3, _DWORD *a4)
{
  unsigned int v5; // r1
  unsigned int v6; // r6
  int v8; // r0
  size_t v9; // r2
  ssize_t v11; // r0
  unsigned int v12; // r2
  unsigned int result; // r0

  v5 = a4[1];
  v6 = a4[2];
  if ( v5 < v6 )
    core::slice::index::slice_start_index_len_fail();
  v8 = *a2;
  v9 = v5 - v6;
  if ( v5 - v6 >= 0x7FFFFFFF )
    v9 = 0x7FFFFFFF;
  v11 = read(v8, (void *)(*a4 + v6), v9);
  if ( v11 == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    v12 = a4[3];
    result = v11 + v6;
    a4[2] = result;
    *(_BYTE *)a1 = 4;
    if ( v12 > result )
      result = v12;
    a4[3] = result;
  }
  return result;
}
