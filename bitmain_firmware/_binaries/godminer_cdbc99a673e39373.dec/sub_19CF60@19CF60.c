void __fastcall sub_19CF60(int a1)
{
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 24) )
      _rust_dealloc(*(void **)(a1 + 20));
    if ( *(_DWORD *)(a1 + 32) )
      _rust_dealloc(*(void **)(a1 + 28));
  }
}
