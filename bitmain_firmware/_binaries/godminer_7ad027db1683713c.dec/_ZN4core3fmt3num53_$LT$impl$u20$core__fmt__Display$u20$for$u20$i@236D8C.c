int __fastcall core::fmt::num::<impl core::fmt::Display for i128>::fmt(_DWORD *a1, int a2)
{
  int v2; // r3
  int v3; // lr
  int v4; // r2
  __int64 v5; // r0
  _BOOL1 v6; // cf
  unsigned __int64 v7; // r2
  _BOOL4 v9; // [sp+0h] [bp-8h]

  v2 = a1[3];
  v3 = a1[1];
  v4 = a1[2] ^ (v2 >> 31);
  v9 = v2 > -1;
  LODWORD(v5) = (*a1 ^ (v2 >> 31)) - (v2 >> 31);
  HIDWORD(v5) = (v3 ^ (v2 >> 31)) - ((v2 >> 31) + !__CFSHR__(v2, 31));
  v6 = __CFSUB__(v4, v2 >> 31, __CFSHR__(v2, 31));
  LODWORD(v7) = v4 - ((v2 >> 31) + !__CFSHR__(v2, 31));
  HIDWORD(v7) = (v2 ^ (v2 >> 31)) - ((v2 >> 31) + !v6);
  return sub_236DDC(v5, v7, v9, a2);
}
