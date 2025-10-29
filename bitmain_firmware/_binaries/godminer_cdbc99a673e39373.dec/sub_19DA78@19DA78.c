int __fastcall sub_19DA78(int a1)
{
  int v2; // r0
  void **v3; // r5
  int v4; // r6
  int result; // r0

  sub_19C654(a1);
  if ( *(_DWORD *)(a1 + 96) )
    _rust_dealloc(*(void **)(a1 + 100));
  munmap(*(void **)(a1 + 112), *(_DWORD *)(a1 + 116));
  v2 = *(_DWORD *)(a1 + 128);
  if ( v2 )
  {
    v3 = (void **)(*(_DWORD *)(a1 + 124) + 4);
    v4 = 12 * v2;
    do
    {
      if ( *(v3 - 1) )
        _rust_dealloc(*v3);
      v4 -= 12;
      v3 += 3;
    }
    while ( v4 );
  }
  if ( *(_DWORD *)(a1 + 120) )
    _rust_dealloc(*(void **)(a1 + 124));
  result = *(_DWORD *)(a1 + 132);
  if ( result )
    return munmap(*(void **)(a1 + 136), *(_DWORD *)(a1 + 140));
  return result;
}
