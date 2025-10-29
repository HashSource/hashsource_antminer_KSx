unsigned int __fastcall <std::backtrace_rs::backtrace::libunwind::Frame as core::clone::Clone>::clone(
        _DWORD *a1,
        _DWORD *a2)
{
  unsigned int v3; // r5
  int v4; // r6
  unsigned int result; // r0
  int v6; // r7
  int v7; // [sp+4h] [bp-Ch] BYREF
  int v8; // [sp+8h] [bp-8h] BYREF
  int v9; // [sp+Ch] [bp-4h] BYREF

  v3 = a2[1];
  if ( *a2 )
  {
    v4 = a2[2];
    result = a2[3];
  }
  else
  {
    v7 = 0;
    Unwind_VRS_Get(v3, 0, 15, 0, &v7);
    v6 = v7;
    v8 = 0;
    Unwind_VRS_Get(v3, 0, 13, 0, &v8);
    v4 = v8;
    v9 = 0;
    Unwind_VRS_Get(v3, 0, 15, 0, &v9);
    v3 = v6 & 0xFFFFFFFE;
    result = v9 & 0xFFFFFFFE;
  }
  a1[3] = result;
  *a1 = 1;
  a1[1] = v3;
  a1[2] = v4;
  return result;
}
