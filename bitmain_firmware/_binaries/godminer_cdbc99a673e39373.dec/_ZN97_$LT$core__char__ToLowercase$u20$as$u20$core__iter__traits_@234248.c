// Alternative name is '_ZN97_$LT$core..char..ToUppercase$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$9next_back17hc8a3a118d7438360E'
int __fastcall <core::char::ToLowercase as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(int a1)
{
  unsigned int v1; // r12
  unsigned int v2; // r3

  v1 = *(_DWORD *)(a1 + 8);
  v2 = v1 - 1114111;
  if ( v1 < 0x10FFFF )
    v2 = 0;
  return ((int (*)(void))((char *)dword_23426C + dword_23426C[v2]))();
}
