void __fastcall sub_1AF6DC(int a1)
{
  if ( *(_DWORD *)a1 )
  {
    sub_1AE57C(a1 + 4);
  }
  else if ( *(_DWORD *)(a1 + 4) )
  {
    _rust_dealloc(*(void **)(a1 + 8));
  }
}
