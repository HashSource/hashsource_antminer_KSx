void __fastcall <core::char::EscapeDefault as core::iter::traits::iterator::Iterator>::nth(int a1)
{
  unsigned int v1; // lr
  int v2; // r3

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 3;
  if ( HIWORD(v1) > 0x10u )
    v2 = v1 - 1114112;
  __asm { ADD             PC, R4, R3 }
}
