void __fastcall sub_1B13C8(int a1)
{
  void *v2; // r0
  bool v3; // zf

  if ( *(_DWORD *)a1 )
    _rust_dealloc(*(void **)(a1 + 4));
  v2 = *(void **)(a1 + 16);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *(_DWORD *)(a1 + 12) == 0;
  if ( !v3 )
    _rust_dealloc(v2);
}
