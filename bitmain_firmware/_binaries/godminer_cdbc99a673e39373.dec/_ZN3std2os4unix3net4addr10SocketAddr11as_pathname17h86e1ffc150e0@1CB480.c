_BYTE *__fastcall std::os::unix::net::addr::SocketAddr::as_pathname(_DWORD *a1)
{
  _BYTE *result; // r0
  int v3; // r1
  _BYTE *v4; // r3
  int v5; // t1
  unsigned int v6; // r12

  result = 0;
  v5 = *a1;
  v4 = (char *)a1 + 6;
  v3 = v5;
  v6 = v5 - 2;
  if ( v5 != 2 )
  {
    if ( *v4 )
    {
      if ( (unsigned int)(v3 - 3) >= 0x6D )
        core::slice::index::slice_end_index_len_fail();
      return v4;
    }
    else if ( v6 >= 0x6D )
    {
      core::slice::index::slice_end_index_len_fail();
    }
  }
  return result;
}
