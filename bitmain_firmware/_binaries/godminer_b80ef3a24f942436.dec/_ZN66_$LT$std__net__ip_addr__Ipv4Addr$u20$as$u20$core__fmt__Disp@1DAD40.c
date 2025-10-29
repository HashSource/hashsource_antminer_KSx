int __fastcall <std::net::ip_addr::Ipv4Addr as core::fmt::Display>::fmt(int *a1, int *a2)
{
  int v4; // [sp+4h] [bp-54h] BYREF
  unsigned int v5; // [sp+8h] [bp-50h] BYREF
  char v6[16]; // [sp+Ch] [bp-4Ch] BYREF
  int *v7; // [sp+1Ch] [bp-3Ch] BYREF
  int (__fastcall *v8)(unsigned __int8 *, int); // [sp+20h] [bp-38h]
  char *v9; // [sp+24h] [bp-34h]
  int (__fastcall *v10)(unsigned __int8 *, int); // [sp+28h] [bp-30h]
  char *v11; // [sp+2Ch] [bp-2Ch]
  int (__fastcall *v12)(unsigned __int8 *, int); // [sp+30h] [bp-28h]
  char *v13; // [sp+34h] [bp-24h]
  int (__fastcall *v14)(unsigned __int8 *, int); // [sp+38h] [bp-20h]
  unsigned int *v15; // [sp+3Ch] [bp-1Ch] BYREF
  int v16[2]; // [sp+40h] [bp-18h] BYREF
  char **v17; // [sp+48h] [bp-10h]
  int v18; // [sp+4Ch] [bp-Ch]
  int **v19; // [sp+50h] [bp-8h]
  int v20; // [sp+54h] [bp-4h]

  v4 = *a1;
  if ( core::fmt::Formatter::precision(a2) == 1 || core::fmt::Formatter::width(a2) == 1 )
  {
    v5 = 0;
    v13 = (char *)&v4 + 3;
    v11 = (char *)&v4 + 2;
    v9 = (char *)&v4 + 1;
    v16[0] = 0;
    v20 = 4;
    v18 = 4;
    v7 = &v4;
    v14 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v12 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v10 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v8 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v15 = &v5;
    v19 = &v7;
    v17 = &off_2E9CD8;
    if ( core::fmt::write((int)&v15, (int)&off_2E90C8, v16) )
      core::result::unwrap_failed((int)&unk_2AFC2A, 43, (int)v16, (int)&off_2E9318, (int)&off_2E9CF8);
    if ( v5 >= 0x10 )
      core::slice::index::slice_end_index_len_fail();
    return core::fmt::Formatter::pad(a2, v6, v5);
  }
  else
  {
    v18 = 4;
    v20 = 4;
    v19 = &v7;
    v16[0] = 0;
    v14 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v12 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v10 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v8 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v13 = (char *)&v4 + 3;
    v17 = &off_2E9CD8;
    v11 = (char *)&v4 + 2;
    v9 = (char *)&v4 + 1;
    v7 = &v4;
    return core::fmt::Formatter::write_fmt(a2, v16);
  }
}
