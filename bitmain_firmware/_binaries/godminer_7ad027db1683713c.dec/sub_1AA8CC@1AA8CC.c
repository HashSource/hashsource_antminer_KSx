int __fastcall sub_1AA8CC(_DWORD *a1, int *a2)
{
  char *v3; // r3
  unsigned int v4; // r1

  v3 = (char *)a1[1];
  v4 = a1[3];
  if ( *a1 )
    v3 = (char *)a1[2];
  else
    v4 = a1[2];
  return <str as core::fmt::Display>::fmt(v3, v4, a2);
}
