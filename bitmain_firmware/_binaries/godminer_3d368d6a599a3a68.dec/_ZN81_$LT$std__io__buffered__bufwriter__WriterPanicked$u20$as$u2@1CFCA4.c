int __fastcall <std::io::buffered::bufwriter::WriterPanicked as core::fmt::Debug>::fmt(int *a1, int a2)
{
  int v3; // r2
  int v4; // r0
  _BYTE v6[8]; // [sp+8h] [bp-38h] BYREF
  _DWORD v7[6]; // [sp+10h] [bp-30h] BYREF
  _DWORD v8[4]; // [sp+28h] [bp-18h] BYREF
  int v9; // [sp+38h] [bp-8h] BYREF
  int v10; // [sp+3Ch] [bp-4h] BYREF

  core::fmt::Formatter::debug_struct(v6, a2, aWriterpanicked, 14);
  v7[3] = 2;
  v7[2] = &off_2DE990;
  v7[4] = v8;
  v7[5] = 2;
  v7[0] = 0;
  v9 = a1[2];
  v8[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v8[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v8[2] = &v10;
  v3 = *a1;
  v8[0] = &v9;
  v10 = v3;
  v4 = core::fmt::builders::DebugStruct::field(v6, &unk_2A5B61, 6, v7, &off_2DE9A0);
  return core::fmt::builders::DebugStruct::finish(v4);
}
