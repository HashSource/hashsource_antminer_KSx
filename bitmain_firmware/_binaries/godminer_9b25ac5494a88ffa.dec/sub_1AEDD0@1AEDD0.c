void __fastcall sub_1AEDD0(int a1)
{
  if ( *(_DWORD *)a1 )
  {
    **(_BYTE **)a1 = 0;
    if ( *(_DWORD *)(a1 + 4) )
      _rust_dealloc(*(void **)a1);
  }
}
