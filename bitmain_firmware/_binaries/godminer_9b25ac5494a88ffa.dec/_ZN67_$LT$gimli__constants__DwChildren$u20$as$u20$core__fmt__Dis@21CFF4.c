int __fastcall <gimli::constants::DwChildren as core::fmt::Display>::fmt(_BYTE *a1, int a2)
{
  int v4; // r5
  void *v5; // r6
  int v6; // r4
  int v7; // [sp+4h] [bp-34h] BYREF
  void *v8; // [sp+8h] [bp-30h]
  int v9; // [sp+Ch] [bp-2Ch]
  _DWORD v10[4]; // [sp+10h] [bp-28h] BYREF
  _DWORD v11[6]; // [sp+20h] [bp-18h] BYREF

  if ( !*a1 )
    return core::fmt::Formatter::pad(a2, aDwChildrenNo, 14);
  if ( *a1 == 1 )
    return core::fmt::Formatter::pad(a2, aDwChildrenYes, 15);
  v10[2] = a1;
  v10[0] = &off_2E0CD4;
  v11[5] = 2;
  v11[3] = 2;
  v11[4] = v10;
  v11[0] = 0;
  v10[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
  v10[1] = sub_211EA8;
  v11[2] = &off_2E0C94;
  alloc::fmt::format::format_inner(&v7, v11);
  v4 = v7;
  v5 = v8;
  v6 = core::fmt::Formatter::pad(a2, v8, v9);
  if ( v4 )
    _rust_dealloc(v5);
  return v6;
}
