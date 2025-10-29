int __fastcall sub_1B1308(int *a1)
{
  int v2; // r0
  int v3; // r0
  int result; // r0

  v2 = *a1;
  if ( v2 != -1 )
    close(v2);
  v3 = a1[1];
  if ( v3 != -1 )
    close(v3);
  result = a1[2];
  if ( result != -1 )
    return close(result);
  return result;
}
