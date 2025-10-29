int __fastcall <std::os::unix::net::addr::SocketAddr as std::os::net::linux_ext::addr::SocketAddrExt>::as_abstract_name(
        int *a1)
{
  int v1; // r3
  int result; // r0

  v1 = *a1;
  result = 0;
  if ( v1 != 2 )
  {
    if ( *((_BYTE *)a1 + 6) )
    {
      if ( (unsigned int)(v1 - 3) >= 0x6D )
        core::slice::index::slice_end_index_len_fail();
    }
    else
    {
      if ( (unsigned int)(v1 - 2) >= 0x6D )
        core::slice::index::slice_end_index_len_fail();
      return (int)a1 + 7;
    }
  }
  return result;
}
