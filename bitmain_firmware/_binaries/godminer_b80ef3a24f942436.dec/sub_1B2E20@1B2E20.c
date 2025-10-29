int __fastcall sub_1B2E20(int *a1)
{
  int result; // r0

  result = *a1;
  if ( result != -1 )
    return close(result);
  return result;
}
