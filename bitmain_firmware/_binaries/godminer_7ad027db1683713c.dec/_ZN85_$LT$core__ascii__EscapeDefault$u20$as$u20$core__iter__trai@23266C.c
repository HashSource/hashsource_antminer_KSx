bool __fastcall <core::ascii::EscapeDefault as core::iter::traits::iterator::Iterator>::last(int a1)
{
  unsigned int v1; // r2
  unsigned int v2; // r3

  v1 = *(unsigned __int8 *)(a1 + 4);
  v2 = *(unsigned __int8 *)(a1 + 5);
  if ( v1 >= v2 )
    return 0;
  *(_BYTE *)(a1 + 5) = v2 - 1;
  if ( (unsigned __int8)(v2 - 1) >= 4u )
    core::panicking::panic_bounds_check((unsigned __int8)(v2 - 1), 4, (int)&off_2CEF5C);
  return v1 < v2;
}
