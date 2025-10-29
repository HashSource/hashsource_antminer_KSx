int __fastcall sub_2287AC(_BOOL4 **a1, int a2, unsigned int a3)
{
  _BOOL4 *v3; // r12
  unsigned int v4; // r0
  unsigned int v5; // lr
  _BOOL4 v6; // r0

  v3 = *a1;
  v4 = (*a1)[1];
  v5 = v4 - a3;
  v6 = *v3 || v4 < a3;
  *v3 = v6;
  v3[1] = v5;
  if ( v6 )
    return 1;
  else
    return <core::fmt::Formatter as core::fmt::Write>::write_str(v3[2], a2, a3);
}
