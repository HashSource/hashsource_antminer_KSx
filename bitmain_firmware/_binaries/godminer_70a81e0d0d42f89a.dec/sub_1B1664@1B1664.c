void __fastcall sub_1B1664(int a1)
{
  int v2; // r0
  void **v3; // r5
  int v4; // r6
  int v5; // r0
  int v6; // r5
  int v7; // r6

  if ( !*(_DWORD *)a1 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    if ( v2 )
    {
      v3 = (void **)(*(_DWORD *)(a1 + 4) + 4);
      v4 = 12 * v2;
      do
      {
        if ( *(v3 - 1) )
          _rust_dealloc(*v3);
        v4 -= 12;
        v3 += 3;
      }
      while ( v4 );
      if ( *(_DWORD *)(a1 + 8) )
        _rust_dealloc(*(void **)(a1 + 4));
    }
    v5 = *(_DWORD *)(a1 + 16);
    if ( v5 )
    {
      v6 = *(_DWORD *)(a1 + 12) + 16;
      v7 = 24 * v5;
      do
      {
        if ( *(_DWORD *)(v6 + 4) )
          _rust_dealloc(*(void **)v6);
        v7 -= 24;
        v6 += 24;
      }
      while ( v7 );
      if ( *(_DWORD *)(a1 + 16) )
        _rust_dealloc(*(void **)(a1 + 12));
    }
  }
}
