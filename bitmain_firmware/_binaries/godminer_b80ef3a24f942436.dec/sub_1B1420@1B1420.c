void __fastcall sub_1B1420(int a1)
{
  if ( *(_DWORD *)a1 )
  {
    sub_1B21B8(a1 + 4);
  }
  else if ( *(_DWORD *)(a1 + 4) )
  {
    _rust_dealloc(*(void **)(a1 + 8));
  }
}
