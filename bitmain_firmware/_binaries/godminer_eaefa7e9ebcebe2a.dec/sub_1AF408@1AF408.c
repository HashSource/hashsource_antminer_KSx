void __fastcall sub_1AF408(int a1)
{
  <std::sys::unix::fs::Dir as core::ops::drop::Drop>::drop(a1 + 8);
  if ( *(_DWORD *)(a1 + 12) )
    _rust_dealloc(*(void **)(a1 + 16));
}
