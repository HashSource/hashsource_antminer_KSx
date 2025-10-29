bool __fastcall std::os::unix::net::addr::SocketAddr::is_unnamed(int *a1)
{
  int v1; // r2
  unsigned int v3; // r0
  char **v4; // r2

  v1 = *a1;
  v3 = *a1 - 2;
  if ( v3 )
  {
    if ( *((_BYTE *)a1 + 6) )
    {
      if ( (unsigned int)(v1 - 3) >= 0x6D )
      {
        v3 = v1 - 3;
        v4 = &off_2C9E14;
        goto LABEL_8;
      }
    }
    else if ( v3 >= 0x6D )
    {
      v4 = &off_2C9E24;
LABEL_8:
      core::slice::index::slice_end_index_len_fail(v3, 108, (int)v4);
    }
  }
  return v3 == 0;
}
