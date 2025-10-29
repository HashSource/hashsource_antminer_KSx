int __fastcall <gimli::constants::DwCfa as core::fmt::Display>::fmt(unsigned __int8 *a1, int a2)
{
  void *v4; // r0
  int v5; // r1
  int v7; // r5
  void *v8; // r6
  int v9; // r4
  int v10; // [sp+4h] [bp-34h] BYREF
  void *v11; // [sp+8h] [bp-30h]
  int v12; // [sp+Ch] [bp-2Ch]
  _DWORD v13[4]; // [sp+10h] [bp-28h] BYREF
  _DWORD v14[6]; // [sp+20h] [bp-18h] BYREF

  v4 = gimli::constants::DwCfa::static_string(a1);
  if ( v4 )
    return core::fmt::Formatter::pad(a2, v4, v5);
  v13[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
  v13[0] = &off_2E1CCC;
  v13[1] = sub_212288;
  v13[2] = a1;
  v14[5] = 2;
  v14[3] = 2;
  v14[2] = &off_2E1C94;
  v14[0] = 0;
  v14[4] = v13;
  alloc::fmt::format::format_inner(&v10, v14);
  v7 = v10;
  v8 = v11;
  v9 = core::fmt::Formatter::pad(a2, v11, v12);
  if ( v7 )
    _rust_dealloc(v8);
  return v9;
}
