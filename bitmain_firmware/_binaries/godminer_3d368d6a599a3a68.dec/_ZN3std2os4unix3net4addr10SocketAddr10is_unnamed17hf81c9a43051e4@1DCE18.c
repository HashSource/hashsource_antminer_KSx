bool __fastcall std::os::unix::net::addr::SocketAddr::is_unnamed(int *a1)
{
  int v1; // r2
  unsigned int v3; // r0

  v1 = *a1;
  v3 = *a1 - 2;
  if ( v3 )
  {
    if ( *((_BYTE *)a1 + 6) )
    {
      if ( (unsigned int)(v1 - 3) >= 0x6D )
LABEL_7:
        core::slice::index::slice_end_index_len_fail();
    }
    else if ( v3 >= 0x6D )
    {
      goto LABEL_7;
    }
  }
  return v3 == 0;
}
