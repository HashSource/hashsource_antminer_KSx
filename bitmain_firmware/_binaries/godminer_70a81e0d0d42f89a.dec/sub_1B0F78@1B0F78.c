void __fastcall sub_1B0F78(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 4) + 16;
    v4 = 24 * v2;
    do
    {
      if ( *(_DWORD *)(v3 + 4) )
        _rust_dealloc(*(void **)v3);
      v4 -= 24;
      v3 += 24;
    }
    while ( v4 );
  }
  if ( *(_DWORD *)a1 )
    _rust_dealloc(*(void **)(a1 + 4));
}
