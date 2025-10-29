int __fastcall <std::io::util::Repeat as std::io::Read>::read_buf(_BYTE *a1, unsigned __int8 *a2, int a3, _DWORD *a4)
{
  unsigned int v5; // r4
  unsigned int v6; // r0
  unsigned int v8; // r1
  int result; // r0

  v5 = a4[1];
  v6 = a4[2];
  if ( v5 < v6 )
    core::slice::index::slice_start_index_len_fail(v6, a4[1], (int)&off_2C9AD4);
  if ( v5 != v6 )
    memset((void *)(*a4 + v6), *a2, v5 - v6);
  v8 = a4[3];
  result = 4;
  a4[2] = v5;
  *a1 = 4;
  if ( v8 > v5 )
    v5 = v8;
  a4[3] = v5;
  return result;
}
