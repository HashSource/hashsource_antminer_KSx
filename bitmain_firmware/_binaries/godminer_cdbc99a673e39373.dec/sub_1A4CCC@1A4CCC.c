void __fastcall sub_1A4CCC(void **a1)
{
  unsigned int *v1; // r5
  char *v2; // r0
  char *v3; // r0
  unsigned int *v4; // r1
  unsigned int *v5; // t1
  unsigned int v6; // r2
  unsigned int *v7; // r0
  unsigned int v8; // r1

  v1 = (unsigned int *)*a1;
  v2 = (char *)*a1;
  v5 = (unsigned int *)*((_DWORD *)v2 + 28);
  v3 = v2 + 112;
  v4 = v5;
  if ( v5 )
  {
    __dmb(0xBu);
    do
      v6 = __ldrex(v4);
    while ( __strex(v6 - 1, v4) );
    if ( v6 == 1 )
    {
      __dmb(0xBu);
      sub_1A4CCC(v3);
    }
  }
  if ( v1 != (unsigned int *)-1 )
  {
    v7 = v1 + 1;
    __dmb(0xBu);
    do
      v8 = __ldrex(v7);
    while ( __strex(v8 - 1, v7) );
    if ( v8 == 1 )
    {
      __dmb(0xBu);
      _rust_dealloc(v1);
    }
  }
}
