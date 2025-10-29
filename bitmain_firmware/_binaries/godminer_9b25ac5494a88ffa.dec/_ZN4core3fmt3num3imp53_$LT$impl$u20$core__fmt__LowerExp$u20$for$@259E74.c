int __fastcall core::fmt::num::imp::<impl core::fmt::LowerExp for i16>::fmt(unsigned __int16 *a1, _DWORD *a2)
{
  unsigned int v2; // r0
  bool v3; // zf
  bool v4; // nf
  bool v5; // vf

  v2 = *a1;
  v5 = __OFADD__((__int16)v2, 1);
  v3 = (__int16)v2 == -1;
  v4 = (__int16)v2 + 1 < 0;
  if ( (__int16)v2 <= -1 )
    v2 = -(__int16)v2;
  return sub_259B30(v2, !(v4 ^ v5 | v3), 0, a2);
}
