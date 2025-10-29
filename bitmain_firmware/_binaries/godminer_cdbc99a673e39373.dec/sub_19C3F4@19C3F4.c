void __fastcall sub_19C3F4(int a1)
{
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 4) )
      _rust_dealloc(*(void **)(a1 + 8));
  }
  else
  {
    **(_BYTE **)a1 = 0;
    if ( *(_DWORD *)(a1 + 4) )
      _rust_dealloc(*(void **)a1);
  }
}
