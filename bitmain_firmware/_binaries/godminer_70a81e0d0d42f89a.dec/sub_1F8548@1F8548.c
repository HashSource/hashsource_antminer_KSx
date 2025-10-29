void __fastcall sub_1F8548(int a1)
{
  _BYTE *addr; // r0
  int v3; // r1
  unsigned int *v4; // r0
  unsigned int v5; // r1

  addr = (_BYTE *)_tls_get_addr(&dword_2E7454);
  v3 = *(_DWORD *)(a1 + 8);
  *addr = 2;
  if ( v3 != 2 )
  {
    v4 = *(unsigned int **)(a1 + 4);
    __dmb(0xBu);
    do
      v5 = __ldrex(v4);
    while ( __strex(v5 - 1, v4) );
    if ( v5 == 1 )
    {
      __dmb(0xBu);
      sub_1B8108(*(_DWORD *)(a1 + 4));
    }
  }
}
