void __fastcall sub_1B0DE8(int a1)
{
  if ( *(_DWORD *)(a1 + 4) )
    _rust_dealloc(*(void **)(a1 + 8));
  if ( *(_DWORD *)(a1 + 16) )
    _rust_dealloc(*(void **)(a1 + 20));
}
