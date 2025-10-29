int __fastcall core::fmt::num::<impl core::fmt::Display for i128>::fmt(_DWORD *a1, int a2)
{
  int v2; // r3

  v2 = a1[3];
  return sub_249BB4(
           (*a1 ^ (v2 >> 31)) - (v2 >> 31),
           (a1[1] ^ (v2 >> 31)) - ((v2 >> 31) + !__CFSHR__(v2, 31)),
           (a1[2] ^ (v2 >> 31)) - ((v2 >> 31) + !__CFSHR__(v2, 31)),
           (v2 ^ (v2 >> 31)) - ((v2 >> 31) + !__CFSUB__(a1[2] ^ (v2 >> 31), v2 >> 31, __CFSHR__(v2, 31))),
           v2 > -1,
           a2);
}
