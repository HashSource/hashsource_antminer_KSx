unsigned int *sub_1B46D0()
{
  unsigned int *result; // r0
  char v1; // [sp+3h] [bp-5h] BYREF
  char *v2; // [sp+4h] [bp-4h] BYREF

  result = (unsigned int *)dword_2E9658;
  __dmb(0xBu);
  if ( result != (unsigned int *)4 )
  {
    v1 = 1;
    v2 = &v1;
    return sub_7B2CC(&v2);
  }
  return result;
}
