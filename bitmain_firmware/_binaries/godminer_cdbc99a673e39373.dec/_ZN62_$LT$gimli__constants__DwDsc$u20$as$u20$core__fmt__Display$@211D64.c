int __fastcall <gimli::constants::DwDsc as core::fmt::Display>::fmt(_BYTE *a1, int a2)
{
  const char *v3; // r1
  int v5; // r5
  void *v6; // r6
  int v7; // r4
  int v8; // [sp+4h] [bp-34h] BYREF
  void *v9; // [sp+8h] [bp-30h]
  int v10; // [sp+Ch] [bp-2Ch]
  _DWORD v11[4]; // [sp+10h] [bp-28h] BYREF
  _DWORD v12[6]; // [sp+20h] [bp-18h] BYREF

  if ( !*a1 )
  {
    v3 = aDwDscLabel;
    return core::fmt::Formatter::pad(a2, v3, 12);
  }
  if ( *a1 == 1 )
  {
    v3 = aDwDscRange;
    return core::fmt::Formatter::pad(a2, v3, 12);
  }
  v11[2] = a1;
  v11[0] = &off_2CDD5C;
  v12[5] = 2;
  v12[3] = 2;
  v12[4] = v11;
  v12[0] = 0;
  v11[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
  v11[1] = sub_201134;
  v12[2] = &off_2CDC94;
  alloc::fmt::format::format_inner(&v8, v12);
  v5 = v8;
  v6 = v9;
  v7 = core::fmt::Formatter::pad(a2, v9, v10);
  if ( v5 )
    _rust_dealloc(v6);
  return v7;
}
