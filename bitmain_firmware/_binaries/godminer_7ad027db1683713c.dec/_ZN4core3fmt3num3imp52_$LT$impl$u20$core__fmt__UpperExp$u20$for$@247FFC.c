int __fastcall core::fmt::num::imp::<impl core::fmt::UpperExp for i8>::fmt(unsigned __int8 *a1, int *a2)
{
  unsigned int v2; // r0
  bool v3; // zf
  bool v4; // nf
  bool v5; // vf

  v2 = *a1;
  v5 = __OFADD__((char)v2, 1);
  v3 = (char)v2 == -1;
  v4 = (char)v2 + 1 < 0;
  if ( (char)v2 <= -1 )
    v2 = -(char)v2;
  return sub_247C48(v2, !(v4 ^ v5 | v3), 1, a2);
}
