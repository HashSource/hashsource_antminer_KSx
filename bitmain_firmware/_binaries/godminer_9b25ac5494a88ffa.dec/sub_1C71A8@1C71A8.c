void __fastcall sub_1C71A8(int *a1)
{
  int v1; // r3
  unsigned int *v3; // r0
  bool v4; // zf
  unsigned int v5; // r1

  v1 = *a1;
  v3 = (unsigned int *)a1[1];
  v4 = v1 == 0;
  *((_BYTE *)a1 + 8) = 2;
  if ( v1 )
    v4 = v3 == 0;
  *a1 = 0;
  if ( !v4 )
  {
    __dmb(0xBu);
    do
      v5 = __ldrex(v3);
    while ( __strex(v5 - 1, v3) );
    if ( v5 == 1 )
    {
      __dmb(0xBu);
      sub_1B5B44((int)v3);
    }
  }
}
