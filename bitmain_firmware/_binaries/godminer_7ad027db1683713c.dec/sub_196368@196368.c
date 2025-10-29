void __fastcall sub_196368(int a1)
{
  void **v1; // r0
  unsigned int *v2; // r12
  unsigned int *v3; // t1
  unsigned int v4; // r2

  v3 = *(unsigned int **)(a1 + 244);
  v1 = (void **)(a1 + 244);
  v2 = v3;
  __dmb(0xBu);
  do
    v4 = __ldrex(v2);
  while ( __strex(v4 - 1, v2) );
  if ( v4 == 1 )
  {
    __dmb(0xBu);
    sub_196A64(v1);
  }
}
