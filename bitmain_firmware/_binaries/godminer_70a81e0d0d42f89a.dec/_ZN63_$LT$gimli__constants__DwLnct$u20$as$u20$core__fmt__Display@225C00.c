int __fastcall <gimli::constants::DwLnct as core::fmt::Display>::fmt(_WORD *a1, int a2)
{
  int v3; // kr00_4
  int v4; // r2
  const char *v5; // r1
  int v6; // r0
  int v8; // r5
  void *v9; // r6
  int v10; // r4
  int v11; // [sp+4h] [bp-34h] BYREF
  void *v12; // [sp+8h] [bp-30h]
  int v13; // [sp+Ch] [bp-2Ch]
  _DWORD v14[4]; // [sp+10h] [bp-28h] BYREF
  _DWORD v15[6]; // [sp+20h] [bp-18h] BYREF

  v4 = 12;
  v5 = aDwLnctPath;
  switch ( *a1 )
  {
    case 1:
      goto LABEL_3;
    case 2:
      v4 = 23;
      v5 = aDwLnctDirector;
LABEL_3:
      v6 = a2;
      return core::fmt::Formatter::pad(v6, v5, v4);
    case 3:
      return core::fmt::Formatter::pad(a2, aDwLnctTimestam, 17);
    case 4:
      v5 = (const char *)&unk_2B1213;
      v6 = a2;
      return core::fmt::Formatter::pad(v6, v5, v4);
    case 5:
      return core::fmt::Formatter::pad(a2, aDwLnctMd5, 11);
    default:
      v3 = (unsigned __int16)*a1;
      if ( v3 == 0x2000 )
      {
        v5 = aDwLnctLoUser;
      }
      else
      {
        if ( v3 != 0x3FFF )
        {
          v14[2] = a1;
          v14[0] = &off_2E3D84;
          v15[5] = 2;
          v15[3] = 2;
          v15[4] = v14;
          v15[0] = 0;
          v14[3] = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
          v14[1] = sub_2144E8;
          v15[2] = &off_2E3C94;
          alloc::fmt::format::format_inner(&v11, v15);
          v8 = v11;
          v9 = v12;
          v10 = core::fmt::Formatter::pad(a2, v12, v13);
          if ( v8 )
            _rust_dealloc(v9);
          return v10;
        }
        v5 = aDwLnctHiUser;
      }
      v4 = 15;
      v6 = a2;
      return core::fmt::Formatter::pad(v6, v5, v4);
  }
}
