int __fastcall <core::char::CaseMappingIter as core::iter::traits::iterator::Iterator>::next(int a1)
{
  unsigned int v1; // r2
  int v2; // r3

  v1 = *(_DWORD *)(a1 + 8);
  v2 = v1 - ((_DWORD)&loc_10FFFC + 3);
  if ( v1 < (unsigned int)&loc_10FFFC + 3 )
    v2 = 0;
  return ((int (*)(void))((char *)dword_234328 + dword_234328[v2]))();
}
