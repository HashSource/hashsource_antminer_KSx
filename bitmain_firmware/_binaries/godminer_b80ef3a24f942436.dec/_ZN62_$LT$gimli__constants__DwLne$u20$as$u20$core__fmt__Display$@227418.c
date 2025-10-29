int __fastcall <gimli::constants::DwLne as core::fmt::Display>::fmt(_BYTE *a1, int *a2)
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
  v5 = aDwLneEndSequen;
  switch ( *a1 )
  {
    case 1:
      goto LABEL_3;
    case 2:
      v4 = 18;
      v5 = aDwLneSetAddres;
LABEL_3:
      v6 = a2;
      return core::fmt::Formatter::pad(v6, v5, v4);
    case 3:
      return core::fmt::Formatter::pad(a2, aDwLneDefineFil, 0x12u);
    case 4:
      return core::fmt::Formatter::pad(a2, aDwLneSetDiscri, 0x18u);
    default:
      v3 = (unsigned __int8)*a1;
      if ( v3 == 128 )
      {
        v5 = aDwLneLoUser;
      }
      else
      {
        if ( v3 != 255 )
        {
          v14[2] = a1;
          v14[0] = &off_2ECD7C;
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
        v5 = aDwLneHiUser;
      }
      v4 = 14;
      v6 = a2;
      return core::fmt::Formatter::pad(v6, v5, v4);
  }
}
