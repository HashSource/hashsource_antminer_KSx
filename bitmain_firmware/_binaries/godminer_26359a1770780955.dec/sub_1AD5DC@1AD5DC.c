void __fastcall sub_1AD5DC(int a1)
{
  int v2; // r0
  int v3; // r1
  void **v4; // r5
  void **v5; // r6
  void **v6; // r7

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    v4 = (void **)(v3 + 24 * v2);
    v5 = (void **)(v3 + 16);
    do
    {
      v6 = v5 - 4;
      if ( *(v5 - 4) )
        _rust_dealloc(*(v5 - 3));
      if ( *(v5 - 1) )
        _rust_dealloc(*v5);
      v5 += 6;
    }
    while ( v6 + 6 != v4 );
  }
  if ( *(_DWORD *)a1 )
    _rust_dealloc(*(void **)(a1 + 4));
}
