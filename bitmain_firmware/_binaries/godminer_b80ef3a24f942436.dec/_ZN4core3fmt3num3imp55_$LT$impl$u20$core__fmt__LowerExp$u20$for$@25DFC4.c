// Alternative name is '_ZN4core3fmt3num3imp53_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$i32$GT$3fmt17hce09b7c3347c8d24E'
int __fastcall core::fmt::num::imp::<impl core::fmt::LowerExp for isize>::fmt(signed int *a1, int *a2)
{
  signed int v3; // r1
  signed int v4; // r0

  v3 = *a1;
  v4 = *a1;
  if ( v4 < 0 )
    v4 = -v3;
  return sub_25DC48(v4, v3 >= 0, 0, a2);
}
