int __fastcall <rustc_demangle::Demangle as core::fmt::Display>::fmt(_DWORD *a1, _DWORD *a2)
{
  int v4; // r1
  int result; // r0
  _BOOL4 v6; // r0
  bool v7; // zf
  _DWORD *v8; // [sp+4h] [bp-34h] BYREF
  _DWORD v9[3]; // [sp+8h] [bp-30h] BYREF
  _DWORD v10[2]; // [sp+14h] [bp-24h] BYREF
  _DWORD *v11; // [sp+1Ch] [bp-1Ch] BYREF
  int v12[6]; // [sp+20h] [bp-18h] BYREF

  if ( *a1 )
  {
    v8 = a1 + 1;
    v9[2] = a2;
    v9[1] = &loc_F4240;
    v9[0] = 0;
    v10[1] = sub_22B700;
    v11 = v9;
    v10[0] = &v8;
    v12[5] = 1;
    v12[4] = (int)v10;
    v12[3] = 1;
    v12[2] = (int)&off_2EDCA4;
    if ( core::fmt::Formatter::alternate(a2) )
    {
      v12[1] = 1;
      v12[0] = (int)&unk_2AFD20;
    }
    else
    {
      v12[0] = 0;
    }
    v6 = core::fmt::write((int)&v11, (int)&off_2ED92C, v12);
    v7 = v9[0] == 0;
    if ( v9[0] )
      v7 = !v6;
    if ( v7 )
    {
      if ( v6 )
        return 1;
      if ( v9[0] )
        core::result::unwrap_failed((int)aFmtErrorFromSi, 55, (int)v12, (int)&off_2ED994, (int)&off_2EDCAC);
    }
    else if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aSizeLimitReach, 20) )
    {
      return 1;
    }
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, a1[6], a1[7]);
  }
  v4 = <core::fmt::Formatter as core::fmt::Write>::write_str(a2, a1[4], a1[5]);
  result = 1;
  if ( !v4 )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, a1[6], a1[7]);
  return result;
}
