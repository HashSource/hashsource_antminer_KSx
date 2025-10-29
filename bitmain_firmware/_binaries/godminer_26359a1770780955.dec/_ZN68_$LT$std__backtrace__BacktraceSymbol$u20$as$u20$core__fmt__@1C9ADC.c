int __fastcall <std::backtrace::BacktraceSymbol as core::fmt::Debug>::fmt(_DWORD *a1, int a2)
{
  int v4; // r8
  int v5; // r0
  int v7; // [sp+4h] [bp-70h]
  _DWORD v8[8]; // [sp+8h] [bp-6Ch] BYREF
  int v9; // [sp+28h] [bp-4Ch] BYREF
  _DWORD *v10; // [sp+2Ch] [bp-48h]
  char **v11; // [sp+30h] [bp-44h]
  int v12; // [sp+34h] [bp-40h]
  const char *v13; // [sp+38h] [bp-3Ch]
  int v14; // [sp+3Ch] [bp-38h]
  int v15; // [sp+40h] [bp-34h]
  int v16; // [sp+44h] [bp-30h]
  int v17; // [sp+48h] [bp-2Ch]
  int v18; // [sp+4Ch] [bp-28h]
  _DWORD v19[2]; // [sp+50h] [bp-24h] BYREF
  _DWORD *v20; // [sp+58h] [bp-1Ch] BYREF
  int v21; // [sp+5Ch] [bp-18h]
  char **v22; // [sp+60h] [bp-14h]
  int v23; // [sp+64h] [bp-10h]
  _DWORD *v24; // [sp+68h] [bp-Ch]
  int v25; // [sp+6Ch] [bp-8h]
  int v26; // [sp+70h] [bp-4h]

  v14 = 0;
  v9 = 0;
  v11 = &off_2DE7F0;
  v12 = 1;
  v13 = aRustc9eb3afe9e;
  if ( core::fmt::Formatter::write_fmt(a2, &v9) )
    return 1;
  v4 = a1[9];
  if ( !v4 )
  {
    v12 = 1;
    v14 = 0;
    v9 = 0;
    v11 = &off_2DE7F8;
    v13 = aRustc9eb3afe9e;
    if ( !core::fmt::Formatter::write_fmt(a2, &v9) )
      goto LABEL_11;
    return 1;
  }
  v7 = a1[10];
  core::str::converts::from_utf8(&v9, a1[9]);
  v5 = 2;
  if ( !v9 )
  {
    v5 = 2;
    if ( v10 )
    {
      rustc_demangle::try_demangle(&v9, v10, v11);
      v5 = v9;
      if ( v9 == 2 )
      {
        v5 = 2;
      }
      else
      {
        v20 = v10;
        v21 = (int)v11;
        v22 = (char **)v12;
        v23 = (int)v13;
        v24 = (_DWORD *)v14;
        v25 = v15;
        v26 = v16;
      }
    }
  }
  v8[0] = v20;
  v8[1] = v21;
  v8[2] = v22;
  v8[3] = v23;
  v8[4] = v24;
  v8[5] = v25;
  v8[6] = v26;
  v9 = v5;
  v10 = v20;
  v11 = (char **)v21;
  v12 = (int)v22;
  v13 = (const char *)v23;
  v14 = (int)v24;
  v15 = v25;
  v16 = v26;
  v18 = v7;
  v23 = 2;
  v24 = v19;
  v17 = v4;
  v22 = &off_2DE800;
  v25 = 1;
  v21 = 1;
  v20 = &unk_2A4420;
  v19[1] = <std::backtrace_rs::symbolize::SymbolName as core::fmt::Display>::fmt;
  v19[0] = &v9;
  if ( core::fmt::Formatter::write_fmt(a2, &v20) )
    return 1;
LABEL_11:
  if ( *a1 != 2 )
  {
    v21 = (int)sub_1AC454;
    v11 = &off_2DE810;
    v13 = (const char *)&v20;
    v9 = 0;
    v20 = v8;
    v8[0] = a1;
    v12 = 2;
    v14 = 1;
    if ( core::fmt::Formatter::write_fmt(a2, &v9) )
      return 1;
  }
  if ( a1[4] == 1 )
  {
    v8[0] = a1[5];
    v13 = (const char *)&v20;
    v11 = &off_2DE820;
    v9 = 0;
    v20 = v8;
    v12 = 1;
    v14 = 1;
    v21 = (int)sub_1ACB70;
    if ( core::fmt::Formatter::write_fmt(a2, &v9) )
      return 1;
  }
  v12 = 1;
  v14 = 0;
  v9 = 0;
  v11 = &off_2DE828;
  v13 = aRustc9eb3afe9e;
  return core::fmt::Formatter::write_fmt(a2, &v9);
}
