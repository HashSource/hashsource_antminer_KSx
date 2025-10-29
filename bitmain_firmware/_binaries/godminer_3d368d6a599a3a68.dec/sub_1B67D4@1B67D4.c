void __fastcall sub_1B67D4(int a1)
{
  unsigned int *v2; // r0
  unsigned int v3; // r1

  if ( *(_DWORD *)(a1 + 16) )
    _rust_dealloc(*(void **)(a1 + 20));
  if ( a1 != -1 )
  {
    v2 = (unsigned int *)(a1 + 4);
    __dmb(0xBu);
    do
      v3 = __ldrex(v2);
    while ( __strex(v3 - 1, v2) );
    if ( v3 == 1 )
    {
      __dmb(0xBu);
      _rust_dealloc((void *)a1);
    }
  }
}
