void __fastcall sub_1AF4FC(int a1)
{
  void *v2; // r0
  bool v3; // zf

  v2 = *(void **)a1;
  v3 = v2 == 0;
  if ( v2 )
    v3 = *(_DWORD *)(a1 + 4) == 0;
  if ( !v3 )
    _rust_dealloc(v2);
}
