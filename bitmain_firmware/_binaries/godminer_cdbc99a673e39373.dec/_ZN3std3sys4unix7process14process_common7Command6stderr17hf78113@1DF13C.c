int __fastcall std::sys::unix::process::process_common::Command::stderr(int a1, int a2, int a3)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 56);
  if ( result == 3 )
    result = close(*(_DWORD *)(a1 + 60));
  *(_DWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 60) = a3;
  return result;
}
