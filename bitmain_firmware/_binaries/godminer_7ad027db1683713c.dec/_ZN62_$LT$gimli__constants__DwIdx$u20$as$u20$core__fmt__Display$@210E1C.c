int __fastcall <gimli::constants::DwIdx as core::fmt::Display>::fmt(_WORD *a1, int *a2)
{
  int v3; // kr00_4
  unsigned int v4; // r2
  char *v5; // r1
  int *v6; // r0
  signed int v8; // r5
  char *v9; // r6
  int v10; // r4
  signed int v11; // [sp+4h] [bp-34h] BYREF
  char *v12; // [sp+8h] [bp-30h]
  unsigned int v13; // [sp+Ch] [bp-2Ch]
  _DWORD v14[4]; // [sp+10h] [bp-28h] BYREF
  int v15[6]; // [sp+20h] [bp-18h] BYREF

  v4 = 19;
  v5 = aDwIdxCompileUn;
  switch ( *a1 )
  {
    case 1:
      goto LABEL_3;
    case 2:
      v4 = 16;
      v5 = aDwIdxTypeUnit;
LABEL_3:
      v6 = a2;
      return core::fmt::Formatter::pad(v6, v5, v4);
    case 3:
      return core::fmt::Formatter::pad(a2, aDwIdxDieOffset, 0x11u);
    case 4:
      return core::fmt::Formatter::pad(a2, aDwIdxParent, 0xDu);
    case 5:
      return core::fmt::Formatter::pad(a2, aDwIdxTypeHash, 0x10u);
    default:
      v3 = (unsigned __int16)*a1;
      if ( v3 == 0x2000 )
      {
        v5 = aDwIdxLoUser;
      }
      else
      {
        if ( v3 != 0x3FFF )
        {
          v14[2] = a1;
          v14[0] = &off_2CCD64;
          v15[5] = 2;
          v15[3] = 2;
          v15[4] = (int)v14;
          v15[0] = 0;
          v14[3] = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
          v14[1] = sub_1FFFC4;
          v15[2] = (int)&off_2CCC94;
          alloc::fmt::format::format_inner(&v11, v15);
          v8 = v11;
          v9 = v12;
          v10 = core::fmt::Formatter::pad(a2, v12, v13);
          if ( v8 )
            _rust_dealloc(v9);
          return v10;
        }
        v5 = aDwIdxHiUser;
      }
      v4 = 14;
      v6 = a2;
      return core::fmt::Formatter::pad(v6, v5, v4);
  }
}
