int __fastcall std::sys::unix::process::process_common::Command::stdin(int a1, int a2, int a3)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 40);
  if ( result == 3 )
    result = close(*(_DWORD *)(a1 + 44));
  *(_DWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 44) = a3;
  return result;
}
