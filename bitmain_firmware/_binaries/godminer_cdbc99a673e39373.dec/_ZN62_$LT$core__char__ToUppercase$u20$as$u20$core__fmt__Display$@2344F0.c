// Alternative name is '_ZN62_$LT$core..char..ToLowercase$u20$as$u20$core..fmt..Display$GT$3fmt17h0e3de2ea9d7aadc4E'
void __fastcall <core::char::ToUppercase as core::fmt::Display>::fmt(int a1)
{
  unsigned int v1; // r4
  int v2; // r2

  v1 = *(_DWORD *)(a1 + 8);
  v2 = v1 - ((_DWORD)&loc_10FFFC + 3);
  if ( v1 < (unsigned int)&loc_10FFFC + 3 )
    v2 = 0;
  __asm { ADD             PC, R3, R2 }
}
