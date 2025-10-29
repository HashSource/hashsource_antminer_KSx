void __fastcall sub_19C354(int a1)
{
  int v2; // r0
  int v3; // r1
  _DWORD *v4; // r6
  int v5; // r5

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( v3 )
    {
      v4 = (_DWORD *)(v2 + 4);
      v5 = 8 * v3;
      do
      {
        *(_BYTE *)*(v4 - 1) = 0;
        if ( *v4 )
          _rust_dealloc((void *)*(v4 - 1));
        v5 -= 8;
        v4 += 2;
      }
      while ( v5 );
    }
    if ( *(_DWORD *)a1 )
      _rust_dealloc(*(void **)(a1 + 4));
    if ( *(_DWORD *)(a1 + 12) )
      _rust_dealloc(*(void **)(a1 + 16));
  }
}
