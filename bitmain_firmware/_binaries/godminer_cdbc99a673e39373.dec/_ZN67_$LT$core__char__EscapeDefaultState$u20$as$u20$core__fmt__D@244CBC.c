void __fastcall <core::char::EscapeDefaultState as core::fmt::Debug>::fmt(int a1)
{
  unsigned int v1; // r2
  int v2; // r1

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 3;
  if ( HIWORD(v1) > 0x10u )
    v2 = v1 - 1114112;
  __asm { ADD             PC, R2, R1 }
}
