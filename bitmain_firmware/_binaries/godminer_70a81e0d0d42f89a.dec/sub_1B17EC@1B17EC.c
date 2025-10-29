void __fastcall sub_1B17EC(int a1)
{
  int v1; // r3
  bool v2; // zf

  if ( !*(_DWORD *)a1 )
  {
    if ( !*(_DWORD *)(a1 + 4) )
      return;
    goto LABEL_8;
  }
  v1 = *(_DWORD *)(a1 + 8);
  v2 = v1 == 0;
  if ( v1 )
    v2 = *(_DWORD *)(a1 + 4) == 0;
  if ( !v2 )
LABEL_8:
    _rust_dealloc(*(void **)(a1 + 8));
}
