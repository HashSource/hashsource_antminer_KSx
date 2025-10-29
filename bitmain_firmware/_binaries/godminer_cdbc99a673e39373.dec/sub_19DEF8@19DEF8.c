unsigned int __fastcall sub_19DEF8(_DWORD *a1)
{
  unsigned int result; // r0

  if ( *a1 >= 2u )
    close(a1[1]);
  if ( a1[2] >= 2u )
    close(a1[3]);
  result = a1[4];
  if ( result >= 2 )
    return close(a1[5]);
  return result;
}
