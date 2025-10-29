// Alternative name is '_ZN82_$LT$core..char..ToUppercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$4next17h66ae744e328c48eaE'
int __fastcall <core::char::ToLowercase as core::iter::traits::iterator::Iterator>::next(int a1)
{
  unsigned int v1; // r2
  int v2; // r3

  v1 = *(_DWORD *)(a1 + 8);
  v2 = v1 - ((_DWORD)&loc_10FFFC + 3);
  if ( v1 < (unsigned int)&loc_10FFFC + 3 )
    v2 = 0;
  return ((int (*)(void))((char *)dword_245E30 + dword_245E30[v2]))();
}
