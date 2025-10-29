void __fastcall sub_1B6758(int a1)
{
  _BYTE *v2; // r0
  unsigned int *v3; // r0
  unsigned int v4; // r1

  v2 = *(_BYTE **)(a1 + 8);
  if ( v2 )
  {
    *v2 = 0;
    if ( *(_DWORD *)(a1 + 12) )
      _rust_dealloc(*(void **)(a1 + 8));
  }
  if ( a1 != -1 )
  {
    v3 = (unsigned int *)(a1 + 4);
    __dmb(0xBu);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    if ( v4 == 1 )
    {
      __dmb(0xBu);
      _rust_dealloc((void *)a1);
    }
  }
}
