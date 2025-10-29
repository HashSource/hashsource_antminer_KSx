int __fastcall <std::io::error::Error as core::error::Error>::cause(int a1)
{
  if ( *(_BYTE *)a1 == 3 )
    return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) + 36))(**(_DWORD **)(a1 + 4));
  else
    return 0;
}
