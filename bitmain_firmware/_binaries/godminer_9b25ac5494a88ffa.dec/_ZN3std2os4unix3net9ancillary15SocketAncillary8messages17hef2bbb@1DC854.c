unsigned int __fastcall std::os::unix::net::ancillary::SocketAncillary::messages(_DWORD *a1, _DWORD *a2)
{
  unsigned int result; // r0

  result = a2[2];
  if ( result > a2[1] )
    core::slice::index::slice_end_index_len_fail();
  *a1 = *a2;
  a1[1] = result;
  a1[2] = 0;
  return result;
}
