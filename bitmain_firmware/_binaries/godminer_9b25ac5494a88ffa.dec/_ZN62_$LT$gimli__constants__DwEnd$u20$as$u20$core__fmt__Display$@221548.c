int __fastcall <gimli::constants::DwEnd as core::fmt::Display>::fmt(_BYTE *a1, int a2)
{
  unsigned int v3; // r1
  const char *v4; // r1
  int v5; // r0
  int v7; // r5
  void *v8; // r6
  int v9; // r4
  int v10; // [sp+4h] [bp-34h] BYREF
  void *v11; // [sp+8h] [bp-30h]
  int v12; // [sp+Ch] [bp-2Ch]
  _DWORD v13[4]; // [sp+10h] [bp-28h] BYREF
  _DWORD v14[6]; // [sp+20h] [bp-18h] BYREF

  v3 = (unsigned __int8)*a1;
  if ( v3 <= 1 )
  {
    if ( !*a1 )
    {
      v4 = aDwEndDef;
      v5 = a2;
      return core::fmt::Formatter::pad(v5, v4, 14);
    }
    if ( v3 == 1 )
      return core::fmt::Formatter::pad(a2, aDwEndBig, 10);
  }
  else
  {
    switch ( v3 )
    {
      case 2u:
        return core::fmt::Formatter::pad(a2, aDwEndLittle, 13);
      case 0x40u:
        v4 = (const char *)&unk_2AE066;
        v5 = a2;
        return core::fmt::Formatter::pad(v5, v4, 14);
      case 0xFFu:
        v4 = (const char *)&unk_2AE058;
        v5 = a2;
        return core::fmt::Formatter::pad(v5, v4, 14);
    }
  }
  v13[2] = a1;
  v13[0] = &off_2E0D0C;
  v14[5] = 2;
  v14[3] = 2;
  v14[4] = v13;
  v14[0] = 0;
  v13[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
  v13[1] = sub_211EA8;
  v14[2] = &off_2E0C94;
  alloc::fmt::format::format_inner(&v10, v14);
  v7 = v10;
  v8 = v11;
  v9 = core::fmt::Formatter::pad(a2, v11, v12);
  if ( v7 )
    _rust_dealloc(v8);
  return v9;
}
