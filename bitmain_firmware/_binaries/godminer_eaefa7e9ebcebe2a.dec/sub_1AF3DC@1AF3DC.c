void __fastcall sub_1AF3DC(int a1)
{
  close(*(_DWORD *)a1);
  if ( *(_DWORD *)(a1 + 8) )
    _rust_dealloc(*(void **)(a1 + 4));
}
