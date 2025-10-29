void __fastcall sub_197BD4(void **a1)
{
  unsigned int *v1; // r0
  unsigned int *v2; // r12
  unsigned int v3; // r2

  v1 = (unsigned int *)*a1;
  if ( v1 != (unsigned int *)-1 )
  {
    v2 = v1 + 1;
    __dmb(0xBu);
    do
      v3 = __ldrex(v2);
    while ( __strex(v3 - 1, v2) );
    if ( v3 == 1 )
    {
      __dmb(0xBu);
      _rust_dealloc(v1);
    }
  }
}
