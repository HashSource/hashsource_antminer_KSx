void __fastcall sub_2122FC(int a1)
{
  int v1; // r1
  bool v2; // zf

  v1 = *(_DWORD *)(a1 + 8);
  v2 = v1 == 0;
  if ( v1 )
    v2 = *(_DWORD *)(a1 + 12) == 0;
  if ( !v2 )
    _rust_dealloc(*(void **)(a1 + 16));
}
