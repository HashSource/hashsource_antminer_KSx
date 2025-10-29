int __fastcall sub_19D24C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int result; // r0

  v2 = a1[3];
  if ( v2 != -1 )
    close(v2);
  v3 = a1[4];
  if ( v3 != -1 )
    close(v3);
  v4 = a1[5];
  if ( v4 != -1 )
    close(v4);
  result = a1[6];
  if ( result != -1 )
    return close(result);
  return result;
}
