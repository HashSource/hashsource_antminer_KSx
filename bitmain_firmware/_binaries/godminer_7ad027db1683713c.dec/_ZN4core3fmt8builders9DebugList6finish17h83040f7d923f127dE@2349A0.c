int __fastcall core::fmt::builders::DebugList::finish(int a1)
{
  if ( *(_BYTE *)(a1 + 4) )
    return 1;
  else
    return (*(int (__fastcall **)(_DWORD, const char *, int))(*(_DWORD *)(*(_DWORD *)a1 + 4) + 12))(
             **(_DWORD **)a1,
             asc_29F1A3,
             1);
}
