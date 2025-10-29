void __fastcall sub_1AF384(int a1)
{
  if ( *(_DWORD *)a1 )
    _rust_dealloc(*(void **)(a1 + 4));
  if ( *(_DWORD *)(a1 + 12) )
    _rust_dealloc(*(void **)(a1 + 16));
}
