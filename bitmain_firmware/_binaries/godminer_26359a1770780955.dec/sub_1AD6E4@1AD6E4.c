void __fastcall sub_1AD6E4(int a1)
{
  if ( *(_DWORD *)a1 )
  {
    sub_1AE47C(a1 + 4);
  }
  else if ( *(_DWORD *)(a1 + 4) )
  {
    _rust_dealloc(*(void **)(a1 + 8));
  }
}
