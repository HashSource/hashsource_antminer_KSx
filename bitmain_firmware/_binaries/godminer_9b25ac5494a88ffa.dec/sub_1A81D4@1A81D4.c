void __fastcall sub_1A81D4(int a1)
{
  int v2; // r6

  if ( *(_BYTE *)a1 == 3 )
  {
    v2 = *(_DWORD *)(a1 + 4);
    (**(void (__fastcall ***)(_DWORD))(v2 + 4))(*(_DWORD *)v2);
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4) )
      _rust_dealloc(*(void **)v2);
    _rust_dealloc(*(void **)(a1 + 4));
  }
}
