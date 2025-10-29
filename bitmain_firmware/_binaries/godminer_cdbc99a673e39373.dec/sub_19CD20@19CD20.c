int __fastcall sub_19CD20(unsigned int *a1)
{
  int result; // r0
  unsigned int v3; // r2

  result = a1[2] - 1;
  a1[2] = result;
  if ( !result )
  {
    result = 0;
    a1[1] = 0;
    __dmb(0xBu);
    do
      v3 = __ldrex(a1);
    while ( __strex(0, a1) );
    if ( v3 == 2 )
      return syscall(240, a1, 129, 1);
  }
  return result;
}
