void __fastcall sub_1B249C(int a1)
{
  unsigned int *v2; // r0
  unsigned int v3; // r1

  v2 = *(unsigned int **)(a1 + 24);
  __dmb(0xBu);
  do
    v3 = __ldrex(v2);
  while ( __strex(v3 - 1, v2) );
  if ( v3 == 1 )
  {
    __dmb(0xBu);
    sub_1B9CCC(*(_DWORD *)(a1 + 24));
  }
  **(_BYTE **)(a1 + 16) = 0;
  if ( *(_DWORD *)(a1 + 20) )
    _rust_dealloc(*(void **)(a1 + 16));
}
