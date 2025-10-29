// Alternative name is '_ZN84_$LT$core..char..EscapeDefault$u20$as$u20$core..iter..traits..iterator..Iterator$GT$4next17h0f60e9409ab3868eE'
void __fastcall <core::char::EscapeDebug as core::iter::traits::iterator::Iterator>::next(int a1)
{
  unsigned int v1; // r2
  int v2; // r3

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 3;
  if ( HIWORD(v1) > 0x10u )
    v2 = v1 - 1114112;
  __asm { ADD             PC, R1, R3 }
}
