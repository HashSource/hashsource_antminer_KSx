int __fastcall <std::process::Output as core::fmt::Debug>::fmt(_DWORD *a1, int a2)
{
  int v4; // r7
  int v5; // r6
  int v6; // r0
  int *v7; // r3
  int (**v8)(); // r5
  int (**v9)(); // r1
  int v10; // r0
  int *v11; // r3
  int v12; // r0
  int v14; // [sp+8h] [bp-20h] BYREF
  int v15; // [sp+Ch] [bp-1Ch] BYREF
  int v16; // [sp+14h] [bp-14h] BYREF
  int v17; // [sp+18h] [bp-10h] BYREF
  _BYTE v18[8]; // [sp+20h] [bp-8h] BYREF

  core::str::converts::from_utf8(&v14, a1[2]);
  v4 = v14;
  core::str::converts::from_utf8(&v16, a1[5]);
  v5 = v16;
  core::fmt::Formatter::debug_struct(v18, a2, aOutput, 6);
  v6 = core::fmt::builders::DebugStruct::field(v18, aStatus_1, 6, a1, &off_2DF05C);
  v7 = a1 + 1;
  v8 = &off_2DF04C;
  v9 = &off_2DF04C;
  if ( !v4 )
  {
    v9 = &off_2DEA4C;
    v7 = &v15;
  }
  v10 = core::fmt::builders::DebugStruct::field(v6, aStdout_0, 6, v7, v9);
  if ( !v5 )
    v8 = &off_2DEA4C;
  v11 = a1 + 4;
  if ( !v5 )
    v11 = &v17;
  v12 = core::fmt::builders::DebugStruct::field(v10, aStderr_1, 6, v11, v8);
  return core::fmt::builders::DebugStruct::finish(v12);
}
