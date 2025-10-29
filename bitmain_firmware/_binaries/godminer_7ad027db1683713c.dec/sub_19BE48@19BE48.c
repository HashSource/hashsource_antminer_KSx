void __fastcall sub_19BE48(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r7
  int v5; // r6
  int v6; // r4

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    v4 = 0;
    v5 = 40 * v2;
    do
    {
      v6 = v3 + v4;
      if ( !*(_DWORD *)(v3 + v4 + 8) )
      {
        if ( *(_DWORD *)(v6 + 24) )
          _rust_dealloc(*(void **)(v6 + 20));
        if ( *(_DWORD *)(v6 + 32) )
          _rust_dealloc(*(void **)(v6 + 28));
      }
      v4 += 40;
    }
    while ( v5 != v4 );
  }
  if ( *(_DWORD *)a1 )
    _rust_dealloc(*(void **)(a1 + 4));
}
