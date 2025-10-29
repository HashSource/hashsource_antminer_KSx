int __fastcall std::sys::unix::process::process_common::Command::stdout(int a1, int a2, int a3)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 48);
  if ( result == 3 )
    result = close(*(_DWORD *)(a1 + 52));
  *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 52) = a3;
  return result;
}
