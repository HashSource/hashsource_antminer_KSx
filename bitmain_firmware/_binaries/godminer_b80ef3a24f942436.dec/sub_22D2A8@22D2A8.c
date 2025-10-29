int __fastcall sub_22D2A8(int a1, int a2)
{
  int v4; // r2
  int result; // r0
  char *v6; // r7
  char *v7; // r12
  __int64 v8; // r2
  char *v9; // r6
  int v10; // t1
  unsigned int v11; // r5
  int v12; // r6
  int v13; // r4
  int v14; // r4
  unsigned int v15; // r7
  _BYTE v16[68]; // [sp+8h] [bp-50h] BYREF
  int v17; // [sp+4Ch] [bp-Ch] BYREF
  int v18; // [sp+50h] [bp-8h]

  core::str::pattern::StrSearcher::new((int)v16, a1, a2, &unk_2BC32D, 1u);
  while ( 1 )
  {
    sub_22BA14(&v17, (int)v16);
    if ( v17 == 1 )
      break;
    if ( v17 == 2 )
    {
      v4 = a2;
      goto LABEL_5;
    }
  }
  v4 = v18;
  if ( (unsigned int)(a2 - v18) > 0x10 )
    return 0;
LABEL_5:
  result = 1;
  if ( v4 != a2 )
  {
    v6 = (char *)(a1 + v4);
    v7 = (char *)(a1 + a2);
    v8 = 0;
    v9 = v6;
    while ( 1 )
    {
      v10 = *v9++;
      v11 = (unsigned __int8)v10;
      if ( v10 > -1 )
        goto LABEL_18;
      v12 = v11 & 0x1F;
      v13 = v6[1] & 0x3F;
      if ( v11 <= 0xDF )
        break;
      v14 = v6[2] & 0x3F | (v13 << 6);
      if ( v11 < 0xF0 )
      {
        v11 = v14 | (v12 << 12);
        v9 = v6 + 3;
        v15 = v11 - 48;
        if ( v11 - 48 >= 0xA )
          goto LABEL_19;
      }
      else
      {
        v11 = v6[3] & 0x3F | (v14 << 6) | ((v11 & 7) << 18);
        if ( v11 == 1114112 )
          return result;
        v9 = v6 + 4;
        v15 = v11 - 48;
        if ( v11 - 48 >= 0xA )
        {
LABEL_19:
          v15 = (v11 | 0x20) - 87;
          if ( (v11 | 0x20) - 97 >= 0xFFFFFFF6 )
            v15 = -1;
          if ( v15 >= 0x10 )
            core::panicking::panic((int)aCalledOptionUn_1, 43, (int)&off_2EDBA4);
        }
      }
LABEL_10:
      HIDWORD(v8) = v8 >> 28;
      LODWORD(v8) = v15 | (16 * v8);
      v6 = v9;
      if ( v9 == v7 )
        return result;
    }
    v11 = v13 | (v12 << 6);
    v9 = v6 + 2;
LABEL_18:
    v15 = v11 - 48;
    if ( v11 - 48 >= 0xA )
      goto LABEL_19;
    goto LABEL_10;
  }
  return result;
}
