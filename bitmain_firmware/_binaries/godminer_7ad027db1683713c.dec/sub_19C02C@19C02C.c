void __fastcall sub_19C02C(int a1)
{
  int v2; // r0
  unsigned int v3; // r1
  void **v4; // r6
  void **v5; // r5
  void **v6; // r7

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8) - v2;
  if ( v3 )
  {
    v4 = (void **)(v2 + 16);
    v5 = (void **)(v2 + 24 * (v3 / 0x18));
    do
    {
      v6 = v4 - 4;
      if ( *(v4 - 4) )
        _rust_dealloc(*(v4 - 3));
      if ( *(v4 - 1) )
        _rust_dealloc(*v4);
      v4 += 6;
    }
    while ( v6 + 6 != v5 );
  }
  if ( *(_DWORD *)a1 )
    _rust_dealloc(*(void **)(a1 + 12));
}
