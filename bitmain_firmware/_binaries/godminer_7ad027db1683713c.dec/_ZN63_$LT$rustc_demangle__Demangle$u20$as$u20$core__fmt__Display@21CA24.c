int __fastcall <rustc_demangle::Demangle as core::fmt::Display>::fmt(_DWORD *a1, _DWORD *a2)
{
  int v3; // r1
  int result; // r0
  _BOOL4 v5; // r0
  bool v6; // zf
  _DWORD *v7; // [sp+4h] [bp-34h] BYREF
  _DWORD v8[3]; // [sp+8h] [bp-30h] BYREF
  _DWORD v9[2]; // [sp+14h] [bp-24h] BYREF
  _DWORD *v10; // [sp+1Ch] [bp-1Ch] BYREF
  int v11[6]; // [sp+20h] [bp-18h] BYREF

  if ( *a1 )
  {
    v7 = a1 + 1;
    v8[2] = a2;
    v8[1] = &loc_F4240;
    v8[0] = 0;
    v9[1] = sub_215700;
    v10 = v8;
    v9[0] = &v7;
    v11[5] = 1;
    v11[4] = (int)v9;
    v11[3] = 1;
    v11[2] = (int)&off_2CDCA4;
    if ( core::fmt::Formatter::alternate((int)a2) )
    {
      v11[1] = 1;
      v11[0] = (int)&unk_28F7D0;
    }
    else
    {
      v11[0] = 0;
    }
    v5 = core::fmt::write((int)&v10, (int)&off_2CD92C, v11);
    v6 = v8[0] == 0;
    if ( v8[0] )
      v6 = !v5;
    if ( v6 )
    {
      if ( v5 )
        return 1;
      if ( v8[0] )
        core::result::unwrap_failed((int)aFmtErrorFromSi, 55, (int)v11, (int)&off_2CD994, (int)&off_2CDCAC);
    }
    else if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2) )
    {
      return 1;
    }
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2);
  }
  v3 = <core::fmt::Formatter as core::fmt::Write>::write_str(a2);
  result = 1;
  if ( !v3 )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2);
  return result;
}
