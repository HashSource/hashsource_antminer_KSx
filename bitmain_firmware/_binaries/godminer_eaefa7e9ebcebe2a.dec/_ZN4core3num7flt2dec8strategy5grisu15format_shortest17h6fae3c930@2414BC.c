int __fastcall core::num::flt2dec::strategy::grisu::format_shortest(_DWORD *a1, int a2, _BYTE *a3, unsigned int a4)
{
  int result; // r0
  int v9; // r1
  int v10; // r2
  _DWORD v11[4]; // [sp+0h] [bp-10h] BYREF

  core::num::flt2dec::strategy::grisu::format_shortest_opt((int)v11, a2, (int)a3, a4);
  if ( !v11[0] )
    return core::num::flt2dec::strategy::dragon::format_shortest((int)a1, a2, a3, a4);
  result = v11[0];
  v9 = v11[1];
  v10 = v11[2];
  *a1 = v11[0];
  a1[1] = v9;
  a1[2] = v10;
  return result;
}
