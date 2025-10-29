void __fastcall <core::char::CaseMappingIter as core::fmt::Debug>::fmt(int a1)
{
  unsigned int v1; // r1
  bool v2; // cf
  int v3; // r1

  v1 = *(_DWORD *)(a1 + 8);
  v2 = v1 >= (unsigned int)&loc_10FFFC + 3;
  v3 = v1 - ((_DWORD)&loc_10FFFC + 3);
  if ( !v2 )
    v3 = 0;
  __asm { ADD             PC, R3, R1 }
}
