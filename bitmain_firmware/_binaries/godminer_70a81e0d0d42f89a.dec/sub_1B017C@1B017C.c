void __fastcall sub_1B017C(int a1)
{
  if ( *(_QWORD *)(a1 + 40) != 47 )
  {
    if ( *(_DWORD *)(a1 + 92) )
      _rust_dealloc(*(void **)(a1 + 96));
    if ( *(_DWORD *)(a1 + 104) )
      _rust_dealloc(*(void **)(a1 + 108));
    if ( *(_DWORD *)(a1 + 116) )
      _rust_dealloc(*(void **)(a1 + 120));
    if ( *(_DWORD *)(a1 + 128) )
      _rust_dealloc(*(void **)(a1 + 132));
  }
}
