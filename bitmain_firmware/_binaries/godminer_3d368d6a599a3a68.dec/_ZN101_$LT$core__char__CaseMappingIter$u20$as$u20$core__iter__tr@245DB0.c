int __fastcall <core::char::CaseMappingIter as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(
        int a1)
{
  unsigned int v1; // r12
  unsigned int v2; // r3

  v1 = *(_DWORD *)(a1 + 8);
  v2 = v1 - 1114111;
  if ( v1 < 0x10FFFF )
    v2 = 0;
  return ((int (*)(void))((char *)dword_245DD4 + dword_245DD4[v2]))();
}
