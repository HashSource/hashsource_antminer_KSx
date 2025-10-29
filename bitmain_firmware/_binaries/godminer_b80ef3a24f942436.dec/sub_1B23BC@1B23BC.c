void __fastcall sub_1B23BC(int a1)
{
  int v2; // r0
  unsigned int v3; // r1
  void **v4; // r5
  unsigned int v5; // r6

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8) - v2;
  if ( v3 )
  {
    v4 = (void **)(v2 + 4);
    v5 = 12 * (v3 / 0xC);
    do
    {
      if ( *(v4 - 1) )
        _rust_dealloc(*v4);
      v5 -= 12;
      v4 += 3;
    }
    while ( v5 );
  }
  if ( *(_DWORD *)a1 )
    _rust_dealloc(*(void **)(a1 + 12));
}
