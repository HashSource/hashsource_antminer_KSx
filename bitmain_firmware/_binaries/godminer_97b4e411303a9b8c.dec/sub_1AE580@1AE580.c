void __fastcall sub_1AE580(int a1)
{
  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 3) >= 2 )
  {
    if ( *(_DWORD *)a1 )
      _rust_dealloc(*(void **)(a1 + 12));
  }
}
