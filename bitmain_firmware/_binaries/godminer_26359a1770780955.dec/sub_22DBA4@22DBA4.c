int __fastcall sub_22DBA4(int *a1)
{
  int v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // r2
  int v5; // r4
  int v6; // r7
  int v7; // r6
  unsigned int v8; // r3
  bool v9; // cf
  int v10; // r2
  int v12; // r4
  unsigned int v13; // r1
  unsigned int v14; // r7
  unsigned int v15; // r6
  unsigned int v16; // r10
  unsigned int v17; // r0
  int v18; // r5
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int i; // r7
  int v23; // kr00_4
  unsigned int v24; // r0
  int v25; // r1
  int v26; // r0
  unsigned int v27; // [sp+4h] [bp-20h] BYREF
  unsigned int v28; // [sp+8h] [bp-1Ch]
  unsigned int v29; // [sp+Ch] [bp-18h]
  int v30; // [sp+10h] [bp-14h]
  int v31; // [sp+14h] [bp-10h]
  _DWORD v32[3]; // [sp+18h] [bp-Ch] BYREF

  v2 = *a1;
  if ( !v2 )
  {
    v10 = a1[4];
    if ( v10 )
      return <str as core::fmt::Display>::fmt(asc_2B0B29, 1, v10);
    return 0;
  }
  v3 = a1[1];
  v4 = a1[2];
  v5 = v4;
  v6 = v3;
  if ( v4 > v3 )
    v6 = a1[2];
  do
  {
    if ( v5 == v6 )
      goto LABEL_28;
    v7 = *(unsigned __int8 *)(v2 + v5);
    v8 = v5++;
    a1[2] = v5;
    v9 = (unsigned int)(v7 - 48) >= 0xA;
    if ( (unsigned int)(v7 - 48) >= 0xA )
      v9 = (unsigned int)(v7 - 97) >= 6;
  }
  while ( !v9 );
  if ( v7 != 95 )
    goto LABEL_28;
  if ( v8 < v4 )
    goto LABEL_14;
  if ( v4 )
  {
    if ( v4 >= v3 )
    {
      if ( v4 != v3 )
LABEL_14:
        core::str::slice_error_fail(v2);
    }
    else if ( *(char *)(v2 + v4) <= -65 )
    {
      goto LABEL_14;
    }
  }
  v13 = v8 - v4;
  if ( ((v8 - v4) & 1) != 0 )
    goto LABEL_28;
  v14 = v2 + v4;
  v15 = v13 & 0xFFFFFFFE;
  v16 = v2 + v4 + (v13 & 0xFFFFFFFE);
  v31 = 2;
  v28 = v13 & 0xFFFFFFFE;
  v30 = 0;
  v27 = v2 + v4;
  v29 = v16;
  do
    v17 = sub_227458((unsigned int)&v27);
  while ( v17 < 0x110000 );
  if ( v17 != 1114113 )
  {
LABEL_28:
    v21 = a1[4];
    if ( !v21 || (v12 = 1, !<str as core::fmt::Display>::fmt(&unk_2B0B09, 16, v21)) )
    {
      *((_BYTE *)a1 + 4) = 0;
      *a1 = 0;
      return 0;
    }
    return v12;
  }
  v18 = a1[4];
  if ( !v18 )
    return 0;
  v12 = 1;
  if ( <core::fmt::Formatter as core::fmt::Write>::write_char(a1[4], 34) )
    return v12;
  v29 = v16;
  v31 = 2;
  v30 = 0;
  v28 = v15;
  v27 = v14;
  v19 = sub_227458((unsigned int)&v27);
  if ( v19 != 1114113 )
  {
    for ( i = v19; i != 1114113; i = sub_227458((unsigned int)&v27) )
    {
      if ( i == 1114112 )
        core::result::unwrap_failed((int)aCalledResultUn_0, 43, (int)v32, (int)&off_2E29B4, (int)&off_2E2954);
      v23 = v20;
      v24 = 48;
      v25 = 1114114;
      switch ( i )
      {
        case 0:
          goto LABEL_47;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 11:
        case 12:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 35:
        case 36:
        case 37:
        case 38:
          goto LABEL_38;
        case 9:
          v24 = 116;
          v25 = 1114114;
          goto LABEL_47;
        case 10:
          v24 = 110;
          v25 = 1114114;
          goto LABEL_47;
        case 13:
          v24 = 114;
          v25 = 1114114;
          goto LABEL_47;
        case 34:
          goto LABEL_37;
        case 39:
          if ( !<core::fmt::Formatter as core::fmt::Write>::write_char(v18, 39) )
            continue;
          return v12;
        default:
          v25 = v23;
          if ( i == 92 )
          {
LABEL_37:
            v24 = i;
            v25 = 1114114;
          }
          else
          {
LABEL_38:
            if ( core::unicode::unicode_data::grapheme_extend::lookup(i, v25)
              || !core::unicode::printable::is_printable(i) )
            {
              v24 = (__clz(i | 1) >> 2) ^ 7;
              v25 = i;
            }
            else
            {
              v24 = i;
              v25 = 1114113;
            }
          }
LABEL_47:
          v32[0] = v24;
          v32[1] = v25;
          v32[2] = 5;
          break;
      }
      while ( 1 )
      {
        v26 = <core::char::EscapeDebug as core::iter::traits::iterator::Iterator>::next(v32);
        if ( v26 == 1114112 )
          break;
        if ( <core::fmt::Formatter as core::fmt::Write>::write_char(v18, v26) )
          return v12;
      }
    }
  }
  return <core::fmt::Formatter as core::fmt::Write>::write_char(v18, 34);
}
