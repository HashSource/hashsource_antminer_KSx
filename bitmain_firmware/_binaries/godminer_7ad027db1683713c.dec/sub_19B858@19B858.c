void __fastcall sub_19B858(int a1)
{
  void **v1; // r0
  unsigned int *v2; // r12
  unsigned int *v3; // t1
  unsigned int v4; // r2

  v3 = *(unsigned int **)(a1 + 104);
  v1 = (void **)(a1 + 104);
  v2 = v3;
  if ( v3 )
  {
    __dmb(0xBu);
    do
      v4 = __ldrex(v2);
    while ( __strex(v4 - 1, v2) );
    if ( v4 == 1 )
    {
      __dmb(0xBu);
      sub_1A3B5C(v1);
    }
  }
}
