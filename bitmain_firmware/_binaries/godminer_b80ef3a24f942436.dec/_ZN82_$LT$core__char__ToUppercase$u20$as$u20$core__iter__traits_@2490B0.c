// Alternative name is '_ZN82_$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$9size_hint17he70214d950c11c76E'
unsigned int *__fastcall <core::char::ToUppercase as core::iter::traits::iterator::Iterator>::size_hint(
        unsigned int *result,
        int a2)
{
  unsigned int v2; // r1
  bool v3; // cf
  unsigned int v4; // r1
  unsigned int v5; // r1

  v2 = *(_DWORD *)(a2 + 8);
  v3 = v2 >= 0x10FFFF;
  v4 = v2 - 1114111;
  if ( !v3 )
    v4 = 0;
  v5 = 3 - v4;
  result[2] = v5;
  *result = v5;
  result[1] = 1;
  return result;
}
