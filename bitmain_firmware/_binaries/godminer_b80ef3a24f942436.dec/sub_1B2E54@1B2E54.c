void __fastcall sub_1B2E54(int a1)
{
  int v2; // r0
  int v3; // r5
  _DWORD *v4; // r6

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = 8 * v2;
    v4 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
    do
    {
      *(_BYTE *)*(v4 - 1) = 0;
      if ( *v4 )
        _rust_dealloc((void *)*(v4 - 1));
      v3 -= 8;
      v4 += 2;
    }
    while ( v3 );
  }
  if ( *(_DWORD *)a1 )
    _rust_dealloc(*(void **)(a1 + 4));
  if ( *(_DWORD *)(a1 + 12) )
    _rust_dealloc(*(void **)(a1 + 16));
}
