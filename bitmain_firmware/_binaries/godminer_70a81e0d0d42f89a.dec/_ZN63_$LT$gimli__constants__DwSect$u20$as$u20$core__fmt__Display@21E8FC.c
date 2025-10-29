int __fastcall <gimli::constants::DwSect as core::fmt::Display>::fmt(_DWORD *a1, int a2)
{
  unsigned int v3; // r2
  int v4; // r5
  void *v5; // r6
  int v6; // r4
  int v8; // [sp+4h] [bp-34h] BYREF
  void *v9; // [sp+8h] [bp-30h]
  int v10; // [sp+Ch] [bp-2Ch]
  _DWORD v11[4]; // [sp+10h] [bp-28h] BYREF
  _DWORD v12[6]; // [sp+20h] [bp-18h] BYREF

  v3 = *a1 - 1;
  if ( v3 <= 7 && ((0xFDu >> v3) & 1) != 0 )
    return core::fmt::Formatter::pad(a2, *(&off_2E47E4 + v3), dword_2AC7A4[v3]);
  v11[2] = a1;
  v11[0] = &off_2E3CA4;
  v12[5] = 2;
  v12[3] = 2;
  v12[4] = v11;
  v12[0] = 0;
  v11[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v11[1] = sub_2144E8;
  v12[2] = &off_2E3C94;
  alloc::fmt::format::format_inner(&v8, v12);
  v4 = v8;
  v5 = v9;
  v6 = core::fmt::Formatter::pad(a2, v9, v10);
  if ( v4 )
    _rust_dealloc(v5);
  return v6;
}
