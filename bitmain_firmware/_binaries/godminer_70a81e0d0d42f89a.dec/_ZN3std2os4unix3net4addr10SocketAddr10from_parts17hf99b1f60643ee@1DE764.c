int __fastcall std::os::unix::net::addr::SocketAddr::from_parts(_DWORD *a1, _WORD *a2, int a3)
{
  int v4; // r5

  if ( a3 )
  {
    v4 = a3;
    if ( *a2 != 1 )
    {
      a1[1] = 2;
      a1[2] = &off_2E0E08;
      *a1 = 1;
      return 1;
    }
  }
  else
  {
    v4 = 2;
  }
  memcpy(a1 + 2, a2, 0x6Eu);
  a1[1] = v4;
  *a1 = 0;
  return 0;
}
