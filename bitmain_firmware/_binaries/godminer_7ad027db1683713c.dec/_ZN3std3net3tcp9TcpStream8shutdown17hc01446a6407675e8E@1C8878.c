int __fastcall std::net::tcp::TcpStream::shutdown(int a1, int *a2, unsigned __int8 a3)
{
  int result; // r0

  if ( shutdown(*a2, a3) == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    *(_BYTE *)a1 = 4;
    return 4;
  }
  return result;
}
