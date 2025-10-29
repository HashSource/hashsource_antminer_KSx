int __fastcall std::os::unix::net::stream::UnixStream::connect_addr(int a1, int a2)
{
  int v4; // r0
  int v5; // r5
  int result; // r0

  v4 = socket(1, (int)&loc_80000 + 1, 0);
  if ( v4 == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    v5 = v4;
    if ( connect(v4, (const struct sockaddr *)(a2 + 4), *(_DWORD *)a2) == -1 )
    {
      *(_DWORD *)(a1 + 4) = *_errno_location();
      *(_BYTE *)(a1 + 3) = 0;
      *(_WORD *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      return close(v5);
    }
    else
    {
      *(_DWORD *)(a1 + 4) = v5;
      *(_BYTE *)a1 = 4;
      return 4;
    }
  }
  return result;
}
