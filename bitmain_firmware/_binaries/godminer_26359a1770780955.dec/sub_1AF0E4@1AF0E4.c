int __fastcall sub_1AF0E4(int *a1)
{
  int result; // r0

  result = *a1;
  if ( result != -1 )
    return close(result);
  return result;
}
