int __fastcall <gimli::constants::DwDsc as core::fmt::Display>::fmt(_BYTE *a1, int *a2)
{
  char *v3; // r1
  signed int v5; // r5
  char *v6; // r6
  int v7; // r4
  signed int v8; // [sp+4h] [bp-34h] BYREF
  char *v9; // [sp+8h] [bp-30h]
  unsigned int v10; // [sp+Ch] [bp-2Ch]
  _DWORD v11[4]; // [sp+10h] [bp-28h] BYREF
  int v12[6]; // [sp+20h] [bp-18h] BYREF

  if ( !*a1 )
  {
    v3 = aDwDscLabel;
    return core::fmt::Formatter::pad(a2, v3, 0xCu);
  }
  if ( *a1 == 1 )
  {
    v3 = aDwDscRange;
    return core::fmt::Formatter::pad(a2, v3, 0xCu);
  }
  v11[2] = a1;
  v11[0] = &off_2CCD5C;
  v12[5] = 2;
  v12[3] = 2;
  v12[4] = (int)v11;
  v12[0] = 0;
  v11[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
  v11[1] = sub_1FFFC4;
  v12[2] = (int)&off_2CCC94;
  alloc::fmt::format::format_inner(&v8, v12);
  v5 = v8;
  v6 = v9;
  v7 = core::fmt::Formatter::pad(a2, v9, v10);
  if ( v5 )
    _rust_dealloc(v6);
  return v7;
}
