void __fastcall sub_1F1434(int a1)
{
  bool v1; // zf

  v1 = *(_DWORD *)a1 == 0;
  if ( *(_DWORD *)a1 )
    v1 = *(_DWORD *)(a1 + 4) == 0;
  if ( !v1 )
    _rust_dealloc(*(void **)(a1 + 8));
}
