int __fastcall <gimli::constants::DwDefaulted as core::fmt::Display>::fmt(char *a1, int a2)
{
  unsigned int v2; // r2
  int v5; // r5
  void *v6; // r6
  int v7; // r4
  int v8; // [sp+4h] [bp-34h] BYREF
  void *v9; // [sp+8h] [bp-30h]
  int v10; // [sp+Ch] [bp-2Ch]
  _DWORD v11[4]; // [sp+10h] [bp-28h] BYREF
  _DWORD v12[6]; // [sp+20h] [bp-18h] BYREF

  v2 = *a1;
  if ( v2 <= 2 )
    return core::fmt::Formatter::pad(a2, *(&off_2E48A4 + v2), dword_2B2D48[v2]);
  v11[2] = a1;
  v11[0] = &off_2E3D6C;
  v12[5] = 2;
  v12[3] = 2;
  v12[4] = v11;
  v12[0] = 0;
  v11[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
  v11[1] = sub_2144E8;
  v12[2] = &off_2E3C94;
  alloc::fmt::format::format_inner(&v8, v12);
  v5 = v8;
  v6 = v9;
  v7 = core::fmt::Formatter::pad(a2, v9, v10);
  if ( v5 )
    _rust_dealloc(v6);
  return v7;
}
