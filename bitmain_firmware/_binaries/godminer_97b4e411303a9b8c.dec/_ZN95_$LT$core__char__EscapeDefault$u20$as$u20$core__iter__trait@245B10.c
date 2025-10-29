unsigned int __fastcall <core::char::EscapeDefault as core::iter::traits::exact_size::ExactSizeIterator>::len(int *a1)
{
  unsigned int v1; // r2
  int v2; // r12
  int v3; // r3
  unsigned int result; // r0

  v1 = a1[1];
  v2 = *a1;
  v3 = *((unsigned __int8 *)a1 + 8);
  result = 3;
  if ( HIWORD(v1) > 0x10u )
    result = v1 - 1114112;
  if ( result >= 3 )
    return v2 + v3;
  return result;
}
