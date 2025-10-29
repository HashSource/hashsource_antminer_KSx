void (__fastcall *std::alloc::take_alloc_error_hook())(int a1)
{
  unsigned int v0; // r1
  void (__fastcall *result)(int); // r0

  __dmb(0xBu);
  do
    v0 = __ldrex((unsigned int *)&off_2E960C);
  while ( __strex(0, (unsigned int *)&off_2E960C) );
  __dmb(0xBu);
  result = sub_1D4B2C;
  if ( v0 )
    return (void (__fastcall *)(int))v0;
  return result;
}
