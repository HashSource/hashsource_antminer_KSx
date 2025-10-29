void __fastcall sub_1AF318(int a1)
{
  int v2; // r0
  int v3; // r5
  _DWORD *v4; // r6
  void *v5; // r0
  bool v6; // zf
  int v7; // r0
  void *v8; // r0

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = 44 * v2;
    v4 = (_DWORD *)(*(_DWORD *)(a1 + 20) + 32);
    do
    {
      v5 = (void *)v4[1];
      v6 = v5 == 0;
      if ( v5 )
        v6 = *v4 == 0;
      if ( v6 )
      {
        v7 = *(v4 - 8);
        if ( v7 == 2 )
          goto LABEL_4;
      }
      else
      {
        _rust_dealloc(v5);
        v7 = *(v4 - 8);
        if ( v7 == 2 )
          goto LABEL_4;
      }
      if ( v7 )
      {
        if ( !*(v4 - 7) )
          goto LABEL_4;
        v8 = (void *)*(v4 - 6);
      }
      else
      {
        if ( !*(v4 - 7) )
          goto LABEL_4;
        v8 = (void *)*(v4 - 6);
      }
      _rust_dealloc(v8);
LABEL_4:
      v3 -= 44;
      v4 += 11;
    }
    while ( v3 );
  }
  if ( *(_DWORD *)(a1 + 16) )
    _rust_dealloc(*(void **)(a1 + 20));
}
