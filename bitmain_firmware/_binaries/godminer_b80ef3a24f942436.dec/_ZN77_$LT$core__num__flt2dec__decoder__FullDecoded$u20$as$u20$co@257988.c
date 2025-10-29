void __fastcall <core::num::flt2dec::decoder::FullDecoded as core::fmt::Debug>::fmt(int a1)
{
  unsigned int v1; // r1
  char v2; // r2

  v1 = *(unsigned __int8 *)(a1 + 26);
  v2 = 3;
  if ( v1 > 1 )
    v2 = v1 - 2;
  __asm { ADD             PC, R2, R1 }
}
