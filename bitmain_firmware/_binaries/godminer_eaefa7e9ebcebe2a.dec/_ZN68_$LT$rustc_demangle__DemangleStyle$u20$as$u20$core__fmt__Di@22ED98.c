int __fastcall <rustc_demangle::DemangleStyle as core::fmt::Display>::fmt(int a1, int a2)
{
  int v3; // r2
  int v4; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  if ( *(_DWORD *)a1 )
    return <rustc_demangle::legacy::Demangle as core::fmt::Display>::fmt((unsigned __int8 **)a1, a2);
  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 8);
  v5[4] = a2;
  v5[1] = v4;
  v5[2] = 0;
  v5[5] = 0;
  v5[3] = 0;
  v5[0] = v3;
  return sub_22B56C((int)v5, 1);
}
