unsigned int __fastcall std::os::unix::net::ancillary::SocketAncillary::messages(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // r1
  unsigned int result; // r0

  v4 = a2[1];
  result = a2[2];
  if ( result > v4 )
    core::slice::index::slice_end_index_len_fail(result, v4, (int)&off_2C9E5C);
  *a1 = *a2;
  a1[1] = result;
  a1[2] = 0;
  return result;
}
