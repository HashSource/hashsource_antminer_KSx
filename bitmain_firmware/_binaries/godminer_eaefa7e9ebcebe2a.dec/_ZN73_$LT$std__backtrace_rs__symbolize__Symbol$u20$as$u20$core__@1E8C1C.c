int __fastcall <std::backtrace_rs::symbolize::Symbol as core::fmt::Debug>::fmt(int *a1, int a2)
{
  int v3; // r5
  _BYTE v5[8]; // [sp+8h] [bp-58h] BYREF
  int v6[10]; // [sp+10h] [bp-50h] BYREF
  _DWORD v7[10]; // [sp+38h] [bp-28h] BYREF

  core::fmt::Formatter::debug_struct(v5, a2, aSymbol, 6);
  sub_1E8AC0(v6, a1);
  if ( v6[0] != 3 )
  {
    v7[0] = v6[0];
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    v7[6] = v6[6];
    v7[7] = v6[7];
    v7[8] = v6[8];
    v7[9] = v6[9];
    core::fmt::builders::DebugStruct::field(v5, aName, 4, v7, &off_2DF4B0);
  }
  v3 = a1[4];
  if ( v3 != 3 )
  {
    v7[0] = a1[8];
    core::fmt::builders::DebugStruct::field(v5, aAddr, 4, v7, &off_2DF478);
    if ( v3 == 1 )
    {
      v7[0] = a1[5];
      core::fmt::builders::DebugStruct::field(v5, aLineno, 6, v7, &off_2DF4C0);
    }
  }
  return core::fmt::builders::DebugStruct::finish(v5);
}
