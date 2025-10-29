int __fastcall <gimli::constants::DwEhPe as core::fmt::Display>::fmt(_BYTE *a1, int *a2)
{
  unsigned int v3; // r2
  char *v4; // r1
  int *v5; // r0
  signed int v6; // r5
  char *v7; // r6
  int v8; // r4
  signed int v10; // [sp+4h] [bp-34h] BYREF
  char *v11; // [sp+8h] [bp-30h]
  unsigned int v12; // [sp+Ch] [bp-2Ch]
  _DWORD v13[4]; // [sp+10h] [bp-28h] BYREF
  int v14[6]; // [sp+20h] [bp-18h] BYREF

  v3 = 16;
  v4 = aDwEhPeUleb128;
  switch ( *a1 )
  {
    case 0:
      v4 = (char *)&unk_29A9B3;
      goto LABEL_18;
    case 1:
      goto LABEL_5;
    case 2:
      v4 = (char *)&unk_29AA2C;
      goto LABEL_18;
    case 3:
      v4 = (char *)&unk_29AA1D;
      goto LABEL_18;
    case 4:
      v4 = (char *)&unk_29AA0E;
      goto LABEL_18;
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4C:
    case 0x4D:
    case 0x4E:
    case 0x4F:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x6C:
    case 0x6D:
    case 0x6E:
    case 0x6F:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7A:
    case 0x7B:
    case 0x7C:
    case 0x7D:
    case 0x7E:
    case 0x7F:
      goto LABEL_8;
    case 9:
      v4 = (char *)&unk_295CFC;
      v5 = a2;
      return core::fmt::Formatter::pad(v5, v4, v3);
    case 0xA:
      v4 = (char *)&unk_29A9FF;
      goto LABEL_18;
    case 0xB:
      v4 = (char *)&unk_29A9F0;
      goto LABEL_18;
    case 0xC:
      v4 = aDwEhPeSdata8;
LABEL_18:
      v3 = 15;
      v5 = a2;
      return core::fmt::Formatter::pad(v5, v4, v3);
    case 0x10:
      return core::fmt::Formatter::pad(a2, aDwEhPePcrel, 0xEu);
    case 0x20:
      v4 = (char *)&unk_295CEC;
      v5 = a2;
      return core::fmt::Formatter::pad(v5, v4, v3);
    case 0x30:
      v4 = (char *)&unk_295CDC;
      v5 = a2;
      return core::fmt::Formatter::pad(v5, v4, v3);
    case 0x40:
      v4 = (char *)&unk_295CCC;
      v5 = a2;
      return core::fmt::Formatter::pad(v5, v4, v3);
    case 0x50:
      v4 = (char *)&unk_295CBC;
      v5 = a2;
      return core::fmt::Formatter::pad(v5, v4, v3);
    case 0x80:
      return core::fmt::Formatter::pad(a2, aDwEhPeIndirect, 0x11u);
    default:
      if ( (unsigned __int8)*a1 == 255 )
      {
        v3 = 13;
        v4 = aDwEhPeOmit;
LABEL_5:
        v5 = a2;
        return core::fmt::Formatter::pad(v5, v4, v3);
      }
      else
      {
LABEL_8:
        v13[2] = a1;
        v13[0] = &off_2CCDA4;
        v14[5] = 2;
        v14[3] = 2;
        v14[4] = (int)v13;
        v14[0] = 0;
        v13[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
        v13[1] = sub_1FFFC4;
        v14[2] = (int)&off_2CCC94;
        alloc::fmt::format::format_inner(&v10, v14);
        v6 = v10;
        v7 = v11;
        v8 = core::fmt::Formatter::pad(a2, v11, v12);
        if ( v6 )
          _rust_dealloc(v7);
        return v8;
      }
  }
}
