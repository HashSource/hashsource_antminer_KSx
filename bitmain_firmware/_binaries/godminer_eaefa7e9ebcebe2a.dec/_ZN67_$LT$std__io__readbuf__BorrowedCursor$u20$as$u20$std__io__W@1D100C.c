unsigned int __fastcall <std::io::readbuf::BorrowedCursor as std::io::Write>::write(
        int a1,
        int a2,
        void *src,
        size_t n)
{
  _DWORD *v4; // r6
  unsigned int v7; // r1
  unsigned int v8; // r0
  unsigned int v9; // r1
  unsigned int result; // r0

  v4 = *(_DWORD **)(a2 + 4);
  v7 = v4[1];
  v8 = v4[2];
  if ( v7 - v8 < n )
    core::panicking::panic((int)aAssertionFaile_12, 46, (int)&off_2DEAC4);
  if ( v7 < v8 )
    core::slice::index::slice_start_index_len_fail();
  memcpy((void *)(*v4 + v8), src, n);
  v9 = v4[3];
  result = v4[2] + n;
  *(_DWORD *)(a1 + 4) = n;
  *(_BYTE *)a1 = 4;
  if ( v9 <= result )
    v9 = result;
  v4[2] = result;
  v4[3] = v9;
  return result;
}
