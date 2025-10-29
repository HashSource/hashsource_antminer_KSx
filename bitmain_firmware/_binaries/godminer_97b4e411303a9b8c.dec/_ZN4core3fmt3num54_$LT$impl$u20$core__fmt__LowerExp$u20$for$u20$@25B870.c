int __fastcall core::fmt::num::<impl core::fmt::LowerExp for i128>::fmt(_DWORD *a1, _DWORD *a2)
{
  int v2; // r3

  v2 = a1[3];
  return sub_25B2FC(
           (*a1 ^ (v2 >> 31)) - (v2 >> 31),
           (a1[1] ^ (v2 >> 31)) - ((v2 >> 31) + !__CFSHR__(v2, 31)),
           (a1[2] ^ (v2 >> 31)) - ((v2 >> 31) + !__CFSHR__(v2, 31)),
           (v2 ^ (v2 >> 31)) - ((v2 >> 31) + !__CFSUB__(a1[2] ^ (v2 >> 31), v2 >> 31, __CFSHR__(v2, 31))),
           v2 > -1,
           0,
           a2);
}
