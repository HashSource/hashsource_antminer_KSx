int __fastcall <gimli::constants::DwUt as core::fmt::Display>::fmt(_BYTE *a1, int *a2)
{
  unsigned int v3; // r2
  int v4; // kr00_4
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

  v3 = 13;
  v5 = (char *)&unk_2B7AE8;
  switch ( *a1 )
  {
    case 1:
      goto LABEL_3;
    case 2:
      v3 = 10;
      v5 = aDwUtType;
LABEL_3:
      v6 = a2;
      return core::fmt::Formatter::pad(v6, v5, v3);
    case 3:
      v5 = (char *)&unk_2B7AD1;
      v6 = a2;
      return core::fmt::Formatter::pad(v6, v5, v3);
    case 4:
      return core::fmt::Formatter::pad(a2, aDwUtSkeleton, 0xEu);
    case 5:
      return core::fmt::Formatter::pad(a2, aDwUtSplitCompi, 0x13u);
    case 6:
      return core::fmt::Formatter::pad(a2, aDwUtSplitType, 0x10u);
    default:
      v4 = (unsigned __int8)*a1;
      if ( v4 == 128 )
      {
        v5 = (char *)&unk_2B7AA3;
        v6 = a2;
        return core::fmt::Formatter::pad(v6, v5, v3);
      }
      if ( v4 == 255 )
      {
        v5 = (char *)&unk_2B7A96;
        v6 = a2;
        return core::fmt::Formatter::pad(v6, v5, v3);
      }
      v14[2] = a1;
      v14[0] = &off_2ECCC4;
      v15[5] = 2;
      v15[3] = 2;
      v15[4] = (int)v14;
      v15[0] = 0;
      v14[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
      v14[1] = sub_215FC4;
      v15[2] = (int)&off_2ECC94;
      alloc::fmt::format::format_inner(&v11, v15);
      v8 = v11;
      v9 = v12;
      v10 = core::fmt::Formatter::pad(a2, v12, v13);
      if ( v8 )
        _rust_dealloc(v9);
      return v10;
  }
}
