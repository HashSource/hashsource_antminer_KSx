int __fastcall <gimli::constants::DwSect as core::fmt::Display>::fmt(_DWORD *a1, int *a2)
{
  unsigned int v3; // r2
  signed int v4; // r5
  char *v5; // r6
  int v6; // r4
  signed int v8; // [sp+4h] [bp-34h] BYREF
  char *v9; // [sp+8h] [bp-30h]
  unsigned int v10; // [sp+Ch] [bp-2Ch]
  _DWORD v11[4]; // [sp+10h] [bp-28h] BYREF
  int v12[6]; // [sp+20h] [bp-18h] BYREF

  v3 = *a1 - 1;
  if ( v3 <= 7 && ((0xFDu >> v3) & 1) != 0 )
    return core::fmt::Formatter::pad(a2, (char *)*(&off_2CD7E4 + v3), dword_295594[v3]);
  v11[2] = a1;
  v11[0] = &off_2CCCA4;
  v12[5] = 2;
  v12[3] = 2;
  v12[4] = (int)v11;
  v12[0] = 0;
  v11[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v11[1] = sub_1FFFC4;
  v12[2] = (int)&off_2CCC94;
  alloc::fmt::format::format_inner(&v8, v12);
  v4 = v8;
  v5 = v9;
  v6 = core::fmt::Formatter::pad(a2, v9, v10);
  if ( v4 )
    _rust_dealloc(v5);
  return v6;
}
