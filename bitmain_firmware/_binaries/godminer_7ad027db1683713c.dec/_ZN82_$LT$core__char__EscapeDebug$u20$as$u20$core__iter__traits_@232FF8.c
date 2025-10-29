unsigned int *__fastcall <core::char::EscapeDebug as core::iter::traits::iterator::Iterator>::size_hint(
        unsigned int *result,
        int *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r4
  int v4; // lr
  int v5; // r1

  v2 = a2[1];
  v3 = 3;
  v4 = *a2;
  v5 = *((unsigned __int8 *)a2 + 8);
  if ( HIWORD(v2) > 0x10u )
    v3 = v2 - 1114112;
  if ( v3 >= 3 )
    v3 = v4 + v5;
  result[2] = v3;
  *result = v3;
  result[1] = 1;
  return result;
}
