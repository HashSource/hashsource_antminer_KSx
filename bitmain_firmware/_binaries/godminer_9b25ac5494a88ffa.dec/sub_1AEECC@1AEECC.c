int __fastcall sub_1AEECC(int result)
{
  unsigned int *v1; // r12
  unsigned int v2; // r2

  v1 = *(unsigned int **)(result + 20);
  __dmb(0xBu);
  do
    v2 = __ldrex(v1);
  while ( __strex(v2 - 1, v1) );
  if ( v2 == 1 )
  {
    __dmb(0xBu);
    return sub_1B5AC8(*(_DWORD *)(result + 20));
  }
  return result;
}
