int __fastcall <gimli::constants::DwMacro as core::fmt::Display>::fmt(_BYTE *a1, int *a2)
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

  v4 = 15;
  v5 = aDwMacroDefine;
  switch ( *a1 )
  {
    case 1:
      goto LABEL_3;
    case 2:
      v4 = 14;
      v5 = aDwMacroUndef;
LABEL_3:
      v6 = a2;
      return core::fmt::Formatter::pad(v6, v5, v4);
    case 3:
      return core::fmt::Formatter::pad(a2, aDwMacroStartFi, 0x13u);
    case 4:
      return core::fmt::Formatter::pad(a2, aDwMacroEndFile, 0x11u);
    case 5:
      return core::fmt::Formatter::pad(a2, aDwMacroDefineS_1, 0x14u);
    case 6:
      return core::fmt::Formatter::pad(a2, aDwMacroUndefSt_0, 0x13u);
    case 7:
      v5 = (char *)&unk_29A0A8;
      v6 = a2;
      return core::fmt::Formatter::pad(v6, v5, v4);
    case 8:
      return core::fmt::Formatter::pad(a2, aDwMacroDefineS_0, 0x13u);
    case 9:
      return core::fmt::Formatter::pad(a2, aDwMacroUndefSu, 0x12u);
    case 0xA:
      return core::fmt::Formatter::pad(a2, aDwMacroImportS, 0x13u);
    case 0xB:
      return core::fmt::Formatter::pad(a2, aDwMacroDefineS, 0x14u);
    case 0xC:
      return core::fmt::Formatter::pad(a2, aDwMacroUndefSt, 0x13u);
    default:
      v3 = (unsigned __int8)*a1;
      if ( v3 == 224 )
      {
        v5 = aDwMacroLoUser;
      }
      else
      {
        if ( v3 != 255 )
        {
          v14[2] = a1;
          v14[0] = &off_2CCD8C;
          v15[5] = 2;
          v15[3] = 2;
          v15[4] = (int)v14;
          v15[0] = 0;
          v14[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
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
        v5 = aDwMacroHiUser;
      }
      v4 = 16;
      v6 = a2;
      return core::fmt::Formatter::pad(v6, v5, v4);
  }
}
