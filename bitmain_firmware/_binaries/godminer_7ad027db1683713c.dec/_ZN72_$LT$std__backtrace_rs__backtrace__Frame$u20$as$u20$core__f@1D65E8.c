int __fastcall <std::backtrace_rs::backtrace::Frame as core::fmt::Debug>::fmt(_DWORD *a1, _DWORD *a2)
{
  int v3; // r4
  _BYTE *v4; // r6
  unsigned int v5; // r0
  unsigned __int8 *v6; // r0
  _BYTE v8[8]; // [sp+4h] [bp-14h] BYREF
  unsigned int v9; // [sp+Ch] [bp-Ch] BYREF
  unsigned int v10; // [sp+10h] [bp-8h] BYREF
  int v11; // [sp+14h] [bp-4h] BYREF

  core::fmt::Formatter::debug_struct((int)v8, a2, (int)aFrame, 5);
  v3 = a1[1];
  if ( *a1 )
  {
    v9 = a1[1];
    v4 = core::fmt::builders::DebugStruct::field(v8, (int)aIp, 2u, (int)&v9, (int)&off_2CA478);
    v5 = a1[3];
  }
  else
  {
    v11 = 0;
    Unwind_VRS_Get(v3, 0, 15, 0, &v11);
    v9 = v11 & 0xFFFFFFFE;
    v4 = core::fmt::builders::DebugStruct::field(v8, (int)aIp, 2u, (int)&v9, (int)&off_2CA478);
    v11 = 0;
    Unwind_VRS_Get(v3, 0, 15, 0, &v11);
    v5 = v11 & 0xFFFFFFFE;
  }
  v10 = v5;
  v6 = core::fmt::builders::DebugStruct::field(v4, (int)aSymbolAddress, 0xEu, (int)&v10, (int)&off_2CA478);
  return core::fmt::builders::DebugStruct::finish(v6);
}
