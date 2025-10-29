int __fastcall sub_1D4468(int a1, _DWORD *a2, char a3, int a4)
{
  int v5; // r7
  char *v6; // r5
  int v7; // r6
  _BYTE *v8; // r2
  _DWORD v10[2]; // [sp+10h] [bp-30h] BYREF
  int v11; // [sp+18h] [bp-28h] BYREF
  int v12; // [sp+1Ch] [bp-24h]
  void *v13; // [sp+20h] [bp-20h]
  int v14; // [sp+24h] [bp-1Ch]
  _DWORD *v15; // [sp+28h] [bp-18h]
  int v16; // [sp+2Ch] [bp-14h]
  _DWORD v17[4]; // [sp+30h] [bp-10h] BYREF

  if ( *a2 )
  {
    v5 = 9;
    v6 = aUnknown_0;
    v7 = 9;
    if ( a3 )
      return <std::sys::unix::os_str::Slice as core::fmt::Display>::fmt(v6, v7, a1);
  }
  else
  {
    v6 = (char *)a2[1];
    v5 = a2[2];
    v7 = 0;
    if ( a3 )
    {
LABEL_12:
      v7 = v5;
      return <std::sys::unix::os_str::Slice as core::fmt::Display>::fmt(v6, v7, a1);
    }
    if ( !v5 )
      return <std::sys::unix::os_str::Slice as core::fmt::Display>::fmt(v6, v7, a1);
  }
  if ( !a4 )
    goto LABEL_12;
  if ( *v6 != 47 )
    goto LABEL_12;
  v8 = std::path::Path::_strip_prefix(v6, v5, *(_BYTE **)(a4 + 4), *(_DWORD *)(a4 + 8));
  if ( !v8 )
    goto LABEL_12;
  core::str::converts::from_utf8(&v11, v8);
  if ( v11 )
    goto LABEL_12;
  v7 = v5;
  if ( v12 )
  {
    v10[0] = v12;
    v14 = 2;
    v16 = 2;
    v15 = v17;
    v11 = 0;
    v10[1] = v13;
    v13 = &off_2CB184;
    v17[3] = sub_19B8BC;
    v17[2] = v10;
    v17[1] = <char as core::fmt::Display>::fmt;
    v17[0] = "/";
    return core::fmt::Formatter::write_fmt(a1, &v11);
  }
  return <std::sys::unix::os_str::Slice as core::fmt::Display>::fmt(v6, v7, a1);
}
