int __fastcall core::fmt::num::<impl core::fmt::LowerExp for i128>::fmt(_DWORD *a1, int *a2)
{
  int v2; // r3
  int v3; // lr
  int v4; // r2
  unsigned __int64 v5; // r0
  int v6; // r2
  _BOOL1 v7; // cf
  unsigned __int64 v8; // r2
  _BOOL4 v10; // [sp+0h] [bp-10h]

  v2 = a1[3];
  v3 = a1[1];
  v4 = a1[2];
  LODWORD(v5) = (*a1 ^ (v2 >> 31)) - (v2 >> 31);
  v6 = v4 ^ (v2 >> 31);
  HIDWORD(v5) = (v3 ^ (v2 >> 31)) - ((v2 >> 31) + !__CFSHR__(v2, 31));
  v10 = v2 > -1;
  v7 = __CFSUB__(v6, v2 >> 31, __CFSHR__(v2, 31));
  LODWORD(v8) = v6 - ((v2 >> 31) + !__CFSHR__(v2, 31));
  HIDWORD(v8) = (v2 ^ (v2 >> 31)) - ((v2 >> 31) + !v7);
  return sub_248524(v5, v8, v10, 0, a2);
}
