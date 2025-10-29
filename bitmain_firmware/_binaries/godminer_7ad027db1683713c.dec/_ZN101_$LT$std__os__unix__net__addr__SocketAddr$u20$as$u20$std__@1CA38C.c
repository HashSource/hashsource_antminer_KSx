int __fastcall <std::os::unix::net::addr::SocketAddr as std::os::net::linux_ext::addr::SocketAddrExt>::as_abstract_name(
        int *a1)
{
  int v1; // r3
  int result; // r0
  unsigned int v4; // r3

  v1 = *a1;
  result = 0;
  if ( v1 != 2 )
  {
    if ( *((_BYTE *)a1 + 6) )
    {
      v4 = v1 - 3;
      if ( v4 >= 0x6D )
        core::slice::index::slice_end_index_len_fail(v4, 108, (int)&off_2C9E14);
    }
    else
    {
      if ( (unsigned int)(v1 - 2) >= 0x6D )
        core::slice::index::slice_end_index_len_fail(v1 - 2, 108, (int)&off_2C9E24);
      return (int)a1 + 7;
    }
  }
  return result;
}
