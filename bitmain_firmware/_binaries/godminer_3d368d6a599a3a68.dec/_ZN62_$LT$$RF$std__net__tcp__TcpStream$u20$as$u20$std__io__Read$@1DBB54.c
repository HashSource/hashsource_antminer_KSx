ssize_t __fastcall <&std::net::tcp::TcpStream as std::io::Read>::read(int a1, int **a2, void *buf, size_t n)
{
  ssize_t result; // r0

  result = recv(**a2, buf, n, 0);
  if ( result == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = result;
    *(_BYTE *)a1 = 4;
  }
  return result;
}
