int __fastcall sub_1D32F8(int *a1, _DWORD *a2, char a3, int a4)
{
  int v5; // r7
  char *v6; // r5
  int v7; // r6
  unsigned int v8; // r1
  _BYTE *v9; // r2
  _DWORD v11[2]; // [sp+10h] [bp-30h] BYREF
  int v12; // [sp+18h] [bp-28h] BYREF
  int v13; // [sp+1Ch] [bp-24h]
  void *v14; // [sp+20h] [bp-20h]
  int v15; // [sp+24h] [bp-1Ch]
  _DWORD *v16; // [sp+28h] [bp-18h]
  int v17; // [sp+2Ch] [bp-14h]
  _DWORD v18[4]; // [sp+30h] [bp-10h] BYREF

  if ( *a2 )
  {
    v5 = 9;
    v6 = aUnknown_0;
    v7 = 9;
    if ( a3 )
      return <std::sys::unix::os_str::Slice as core::fmt::Display>::fmt((int)v6, v7, a1);
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
      return <std::sys::unix::os_str::Slice as core::fmt::Display>::fmt((int)v6, v7, a1);
    }
    if ( !v5 )
      return <std::sys::unix::os_str::Slice as core::fmt::Display>::fmt((int)v6, v7, a1);
  }
  if ( !a4 )
    goto LABEL_12;
  if ( *v6 != 47 )
    goto LABEL_12;
  v9 = std::path::Path::_strip_prefix(v6, v5, *(_BYTE **)(a4 + 4), *(_DWORD *)(a4 + 8));
  if ( !v9 )
    goto LABEL_12;
  core::str::converts::from_utf8((int)&v12, (int)v9, v8);
  if ( v12 )
    goto LABEL_12;
  v7 = v5;
  if ( v13 )
  {
    v11[0] = v13;
    v15 = 2;
    v17 = 2;
    v16 = v18;
    v12 = 0;
    v11[1] = v14;
    v14 = &off_2CA184;
    v18[3] = sub_19A74C;
    v18[2] = v11;
    v18[1] = <char as core::fmt::Display>::fmt;
    v18[0] = "/";
    return core::fmt::Formatter::write_fmt(a1, &v12);
  }
  return <std::sys::unix::os_str::Slice as core::fmt::Display>::fmt((int)v6, v7, a1);
}
