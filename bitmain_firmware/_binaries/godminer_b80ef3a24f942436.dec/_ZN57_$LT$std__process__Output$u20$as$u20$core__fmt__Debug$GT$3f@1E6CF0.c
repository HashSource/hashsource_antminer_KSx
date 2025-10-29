int __fastcall <std::process::Output as core::fmt::Debug>::fmt(_DWORD *a1, _DWORD *a2)
{
  int v4; // r7
  int v5; // r6
  _BYTE *v6; // r0
  int *v7; // r3
  int (**v8)(); // r5
  int (**v9)(); // r1
  _BYTE *v10; // r0
  int *v11; // r3
  unsigned __int8 *v12; // r0
  int v14; // [sp+8h] [bp-20h] BYREF
  int v15; // [sp+Ch] [bp-1Ch] BYREF
  int v16; // [sp+14h] [bp-14h] BYREF
  int v17; // [sp+18h] [bp-10h] BYREF
  _BYTE v18[8]; // [sp+20h] [bp-8h] BYREF

  core::str::converts::from_utf8((int)&v14, a1[2], a1[3]);
  v4 = v14;
  core::str::converts::from_utf8((int)&v16, a1[5], a1[6]);
  v5 = v16;
  core::fmt::Formatter::debug_struct((int)v18, a2, (int)aOutput, 6);
  v6 = core::fmt::builders::DebugStruct::field(v18, (int)aStatus_1, 6u, (int)a1, (int)&off_2EA05C);
  v7 = a1 + 1;
  v8 = &off_2EA04C;
  v9 = &off_2EA04C;
  if ( !v4 )
  {
    v9 = &off_2E9A4C;
    v7 = &v15;
  }
  v10 = core::fmt::builders::DebugStruct::field(v6, (int)aStdout_0, 6u, (int)v7, (int)v9);
  if ( !v5 )
    v8 = &off_2E9A4C;
  v11 = a1 + 4;
  if ( !v5 )
    v11 = &v17;
  v12 = core::fmt::builders::DebugStruct::field(v10, (int)aStderr_0, 6u, (int)v11, (int)v8);
  return core::fmt::builders::DebugStruct::finish(v12);
}
