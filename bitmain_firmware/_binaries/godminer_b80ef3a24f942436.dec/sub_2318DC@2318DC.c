int __fastcall sub_2318DC(int a1)
{
  char *v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r4
  unsigned int v6; // r7
  int v7; // r6
  unsigned int v8; // r3
  bool v9; // cf
  int v10; // r2
  int v12; // r4
  unsigned int v13; // r1
  char *v14; // r7
  unsigned int v15; // r6
  unsigned int v16; // r10
  unsigned int v17; // r0
  int v18; // r5
  int v19; // r0
  int v20; // r2
  int i; // r7
  unsigned int v22; // r0
  int v23; // r1
  int v24; // r0
  char *v25; // [sp+4h] [bp-20h] BYREF
  unsigned int v26; // [sp+8h] [bp-1Ch]
  unsigned int v27; // [sp+Ch] [bp-18h]
  int v28; // [sp+10h] [bp-14h]
  int v29; // [sp+14h] [bp-10h]
  _DWORD v30[3]; // [sp+18h] [bp-Ch] BYREF

  v2 = *(char **)a1;
  if ( !v2 )
  {
    v10 = *(_DWORD *)(a1 + 16);
    if ( v10 )
      return <str as core::fmt::Display>::fmt(asc_2BC429, 1, v10);
    return 0;
  }
  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = v4;
  v6 = v3;
  if ( v4 > v3 )
    v6 = *(_DWORD *)(a1 + 8);
  do
  {
    if ( v5 == v6 )
      goto LABEL_28;
    v7 = (unsigned __int8)v2[v5];
    v8 = v5++;
    *(_DWORD *)(a1 + 8) = v5;
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
        core::str::slice_error_fail(v2, v3, v4, v8, (int)&off_2EDC14);
    }
    else if ( v2[v4] <= -65 )
    {
      goto LABEL_14;
    }
  }
  v13 = v8 - v4;
  if ( ((v8 - v4) & 1) != 0 )
    goto LABEL_28;
  v14 = &v2[v4];
  v15 = v13 & 0xFFFFFFFE;
  v16 = (unsigned int)&v2[v4 + (v13 & 0xFFFFFFFE)];
  v29 = 2;
  v26 = v13 & 0xFFFFFFFE;
  v28 = 0;
  v25 = &v2[v4];
  v27 = v16;
  do
    v17 = sub_22B190((unsigned int)&v25);
  while ( v17 < 0x110000 );
  if ( v17 != 1114113 )
  {
LABEL_28:
    v20 = *(_DWORD *)(a1 + 16);
    if ( !v20 || (v12 = 1, !<str as core::fmt::Display>::fmt(&unk_2BC409, 16, v20)) )
    {
      *(_BYTE *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 0;
      return 0;
    }
    return v12;
  }
  v18 = *(_DWORD *)(a1 + 16);
  if ( !v18 )
    return 0;
  v12 = 1;
  if ( <core::fmt::Formatter as core::fmt::Write>::write_char(*(_DWORD *)(a1 + 16), 34) )
    return v12;
  v27 = v16;
  v29 = 2;
  v28 = 0;
  v26 = v15;
  v25 = v14;
  v19 = sub_22B190((unsigned int)&v25);
  if ( v19 != 1114113 )
  {
    for ( i = v19; i != 1114113; i = sub_22B190((unsigned int)&v25) )
    {
      if ( i == 1114112 )
        core::result::unwrap_failed((int)aCalledResultUn_0, 43, (int)v30, (int)&off_2ED9B4, (int)&off_2ED954);
      v22 = 48;
      v23 = 1114114;
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
          v22 = 116;
          v23 = 1114114;
          goto LABEL_47;
        case 10:
          v22 = 110;
          v23 = 1114114;
          goto LABEL_47;
        case 13:
          v22 = 114;
          v23 = 1114114;
          goto LABEL_47;
        case 34:
          goto LABEL_37;
        case 39:
          if ( !<core::fmt::Formatter as core::fmt::Write>::write_char(v18, 39) )
            continue;
          return v12;
        default:
          if ( i == 92 )
          {
LABEL_37:
            v22 = i;
            v23 = 1114114;
          }
          else
          {
LABEL_38:
            if ( core::unicode::unicode_data::grapheme_extend::lookup(i) || !core::unicode::printable::is_printable(i) )
            {
              v22 = (__clz(i | 1) >> 2) ^ 7;
              v23 = i;
            }
            else
            {
              v22 = i;
              v23 = 1114113;
            }
          }
LABEL_47:
          v30[0] = v22;
          v30[1] = v23;
          v30[2] = 5;
          break;
      }
      while ( 1 )
      {
        <core::char::EscapeDebug as core::iter::traits::iterator::Iterator>::next((int)v30);
        if ( v24 == 1114112 )
          break;
        if ( <core::fmt::Formatter as core::fmt::Write>::write_char(v18, v24) )
          return v12;
      }
    }
  }
  return <core::fmt::Formatter as core::fmt::Write>::write_char(v18, 34);
}
