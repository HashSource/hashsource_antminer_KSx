void __fastcall sub_1B14E4(int a1)
{
  _DWORD *v2; // r0
  int v3; // r7
  _DWORD *v4; // r6
  unsigned int *v5; // r1
  unsigned int v6; // r2

  if ( *(_DWORD *)(a1 + 4) )
    _rust_dealloc(*(void **)(a1 + 8));
  v2 = *(_DWORD **)(a1 + 20);
  v3 = 336 * *(_DWORD *)(a1 + 24);
  while ( v3 )
  {
    v3 -= 336;
    v4 = v2 + 84;
    sub_1B147C(v2);
    v2 = v4;
  }
  if ( *(_DWORD *)(a1 + 16) )
    _rust_dealloc(*(void **)(a1 + 20));
  v5 = *(unsigned int **)(a1 + 28);
  __dmb(0xBu);
  do
    v6 = __ldrex(v5);
  while ( __strex(v6 - 1, v5) );
  if ( v6 == 1 )
  {
    __dmb(0xBu);
    sub_1B9B5C(a1 + 28);
  }
  if ( *(_DWORD *)a1 )
  {
    sub_1B14E4();
    _rust_dealloc(*(void **)a1);
  }
}
