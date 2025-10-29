int __fastcall <gimli::constants::DwEnd as core::fmt::Display>::fmt(_BYTE *a1, int *a2)
{
  unsigned int v3; // r1
  char *v4; // r1
  int *v5; // r0
  signed int v7; // r5
  char *v8; // r6
  int v9; // r4
  signed int v10; // [sp+4h] [bp-34h] BYREF
  char *v11; // [sp+8h] [bp-30h]
  unsigned int v12; // [sp+Ch] [bp-2Ch]
  _DWORD v13[4]; // [sp+10h] [bp-28h] BYREF
  int v14[6]; // [sp+20h] [bp-18h] BYREF

  v3 = (unsigned __int8)*a1;
  if ( v3 <= 1 )
  {
    if ( !*a1 )
    {
      v4 = aDwEndDef;
      v5 = a2;
      return core::fmt::Formatter::pad(v5, v4, 0xEu);
    }
    if ( v3 == 1 )
      return core::fmt::Formatter::pad(a2, aDwEndBig, 0xAu);
  }
  else
  {
    switch ( v3 )
    {
      case 2u:
        return core::fmt::Formatter::pad(a2, aDwEndLittle, 0xDu);
      case 0x40u:
        v4 = (char *)&unk_2B9E06;
        v5 = a2;
        return core::fmt::Formatter::pad(v5, v4, 0xEu);
      case 0xFFu:
        v4 = (char *)&unk_2B9DF8;
        v5 = a2;
        return core::fmt::Formatter::pad(v5, v4, 0xEu);
    }
  }
  v13[2] = a1;
  v13[0] = &off_2ECD0C;
  v14[5] = 2;
  v14[3] = 2;
  v14[4] = (int)v13;
  v14[0] = 0;
  v13[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
  v13[1] = sub_215FC4;
  v14[2] = (int)&off_2ECC94;
  alloc::fmt::format::format_inner(&v10, v14);
  v7 = v10;
  v8 = v11;
  v9 = core::fmt::Formatter::pad(a2, v11, v12);
  if ( v7 )
    _rust_dealloc(v8);
  return v9;
}
