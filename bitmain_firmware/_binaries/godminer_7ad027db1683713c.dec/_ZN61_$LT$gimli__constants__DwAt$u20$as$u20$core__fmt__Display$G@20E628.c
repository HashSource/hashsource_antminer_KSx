int __fastcall <gimli::constants::DwAt as core::fmt::Display>::fmt(unsigned __int16 *a1, int *a2)
{
  char *v4; // r0
  unsigned int v5; // r1
  signed int v7; // r5
  char *v8; // r6
  int v9; // r4
  signed int v10; // [sp+4h] [bp-34h] BYREF
  char *v11; // [sp+8h] [bp-30h]
  unsigned int v12; // [sp+Ch] [bp-2Ch]
  _DWORD v13[4]; // [sp+10h] [bp-28h] BYREF
  int v14[6]; // [sp+20h] [bp-18h] BYREF

  v4 = (char *)gimli::constants::DwAt::static_string(a1);
  if ( v4 )
    return core::fmt::Formatter::pad(a2, v4, v5);
  v13[3] = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
  v13[0] = &off_2CCCE4;
  v13[1] = sub_1FFFC4;
  v13[2] = a1;
  v14[5] = 2;
  v14[3] = 2;
  v14[2] = (int)&off_2CCC94;
  v14[0] = 0;
  v14[4] = (int)v13;
  alloc::fmt::format::format_inner(&v10, v14);
  v7 = v10;
  v8 = v11;
  v9 = core::fmt::Formatter::pad(a2, v11, v12);
  if ( v7 )
    _rust_dealloc(v8);
  return v9;
}
