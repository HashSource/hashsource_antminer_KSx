// Alternative name is '_ZN4core3fmt3num3imp55_$LT$impl$u20$core..fmt..UpperExp$u20$for$u20$isize$GT$3fmt17h1d89c8d40e8a6422E'
int __fastcall core::fmt::num::imp::<impl core::fmt::UpperExp for i32>::fmt(signed int *a1, _DWORD *a2)
{
  signed int v3; // r1
  signed int v4; // r0

  v3 = *a1;
  v4 = *a1;
  if ( v4 < 0 )
    v4 = -v3;
  return sub_259B30(v4, v3 >= 0, 1, a2);
}
