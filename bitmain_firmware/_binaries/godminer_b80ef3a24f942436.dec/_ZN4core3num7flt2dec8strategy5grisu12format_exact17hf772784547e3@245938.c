int __fastcall core::num::flt2dec::strategy::grisu::format_exact(
        _DWORD *a1,
        __int64 *a2,
        _BYTE *a3,
        unsigned int a4,
        int a5)
{
  int result; // r0
  int v10; // r1
  int v11; // r2
  _DWORD v12[4]; // [sp+8h] [bp-10h] BYREF

  core::num::flt2dec::strategy::grisu::format_exact_opt(v12, a2, a3, a4, a5);
  if ( !v12[0] )
    return core::num::flt2dec::strategy::dragon::format_exact((int)a1, (unsigned int *)a2, a3, a4, a5);
  result = v12[0];
  v10 = v12[1];
  v11 = v12[2];
  *a1 = v12[0];
  a1[1] = v10;
  a1[2] = v11;
  return result;
}
