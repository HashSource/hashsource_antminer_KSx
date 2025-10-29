int __fastcall <gimli::constants::DwAddr as core::fmt::Display>::fmt(_QWORD *a1, int *a2)
{
  signed int v3; // r5
  char *v4; // r6
  int v5; // r4
  signed int v7; // [sp+4h] [bp-34h] BYREF
  char *v8; // [sp+8h] [bp-30h]
  unsigned int v9; // [sp+Ch] [bp-2Ch]
  _DWORD v10[4]; // [sp+10h] [bp-28h] BYREF
  int v11[6]; // [sp+20h] [bp-18h] BYREF

  if ( !*a1 )
    return core::fmt::Formatter::pad(a2, aDwAddrNone, 0xCu);
  v10[2] = a1;
  v10[0] = &off_2ECD34;
  v11[5] = 2;
  v11[3] = 2;
  v11[4] = (int)v10;
  v11[0] = 0;
  v10[3] = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
  v10[1] = sub_215FC4;
  v11[2] = (int)&off_2ECC94;
  alloc::fmt::format::format_inner(&v7, v11);
  v3 = v7;
  v4 = v8;
  v5 = core::fmt::Formatter::pad(a2, v8, v9);
  if ( v3 )
    _rust_dealloc(v4);
  return v5;
}
