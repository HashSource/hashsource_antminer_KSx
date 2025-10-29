void __fastcall sub_1AD1CC(unsigned int **a1)
{
  unsigned int *v1; // r12
  unsigned int v2; // r2
  unsigned int *v3; // r0
  unsigned int *v4; // r12
  unsigned int v5; // r2

  v1 = *a1;
  __dmb(0xBu);
  do
    v2 = __ldrex(v1);
  while ( __strex(v2 - 1, v1) );
  if ( v2 == 1 )
  {
    __dmb(0xBu);
    v3 = *a1;
    if ( v3 != (unsigned int *)-1 )
    {
      v4 = v3 + 1;
      __dmb(0xBu);
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
      if ( v5 == 1 )
      {
        __dmb(0xBu);
        _rust_dealloc(v3);
      }
    }
  }
}
