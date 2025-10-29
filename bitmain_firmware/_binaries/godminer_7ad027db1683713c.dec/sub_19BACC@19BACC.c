void __fastcall sub_19BACC(void **a1)
{
  unsigned int *v1; // r12
  unsigned int v2; // r2

  v1 = (unsigned int *)*a1;
  __dmb(0xBu);
  do
    v2 = __ldrex(v1);
  while ( __strex(v2 - 1, v1) );
  if ( v2 == 1 )
  {
    __dmb(0xBu);
    sub_1A3B5C(a1);
  }
}
