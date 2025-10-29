int __fastcall core::num::<impl u16>::from_str_radix(unsigned __int8 *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v3; // r5
  int v4; // r3
  int v5; // r4
  bool v6; // cf
  int v7; // r3
  unsigned int v8; // r3
  int v9; // r4
  int v10; // t1
  unsigned int v11; // r7
  int v12; // r6
  int v13; // r6
  int v14; // t1
  unsigned int v15; // r7
  unsigned int v17; // r3
  int v18; // t1
  unsigned int v19; // r6
  int v20; // r7
  unsigned int v21; // r4
  unsigned int v22; // [sp+4h] [bp-24h] BYREF
  _DWORD v23[6]; // [sp+8h] [bp-20h] BYREF
  _DWORD v24[2]; // [sp+20h] [bp-8h] BYREF

  v22 = a3;
  if ( a3 - 2 > 0x22 )
  {
    v23[3] = 1;
    v23[5] = 1;
    v23[4] = v24;
    v23[0] = 0;
    v23[2] = &off_2E5F14;
    v24[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v24[0] = &v22;
    core::panicking::panic_fmt((int)v23, (int)&off_2E5F1C);
  }
  if ( !a2 )
  {
    v5 = 0;
    return v5 | 1;
  }
  v4 = *a1;
  if ( v4 == 45 )
  {
    v5 = 256;
    if ( a2 != 1 )
      goto LABEL_9;
    return v5 | 1;
  }
  if ( v4 == 43 )
  {
    if ( !--a2 )
      return 257;
    ++a1;
  }
LABEL_9:
  v6 = a3 >= 0x10;
  if ( a3 <= 0x10 )
    v6 = a2 >= 5;
  if ( !v6 )
  {
    if ( a3 > 0xA )
    {
      v7 = 0;
      while ( 1 )
      {
        v14 = *a1++;
        v13 = v14;
        v15 = v14 - 48;
        if ( (unsigned int)(v14 - 48) >= 0xA )
        {
          v15 = (v13 | 0x20) - 87;
          if ( (v13 | 0x20u) - 97 >= 0xFFFFFFF6 )
            v15 = -1;
          if ( v15 >= a3 )
            break;
        }
        --a2;
        v7 = v7 * a3 + v15;
        if ( !a2 )
          return v7 << 16;
      }
      return 257;
    }
    v7 = 0;
    while ( 1 )
    {
      v21 = *a1 - 48;
      if ( v21 >= a3 )
        break;
      v7 = v21 + v7 * a3;
      --a2;
      ++a1;
      if ( !a2 )
        return v7 << 16;
    }
    return 257;
  }
  if ( a3 <= 0xA )
  {
    v7 = 0;
    v5 = 512;
    while ( a2 )
    {
      v17 = (unsigned __int16)v7 * (unsigned __int16)a3;
      v18 = *a1++;
      v19 = v18 - 48;
      if ( v18 - 48 < a3 )
        v3 = v19;
      v20 = HIWORD(v17);
      if ( HIWORD(v17) )
        v20 = 1;
      if ( v19 >= a3 )
        return 257;
      if ( !v20 )
      {
        --a2;
        v7 = (unsigned __int16)v17 + v3;
        v3 = v19;
        if ( (unsigned __int16)v7 == v7 )
          continue;
      }
      return v5 | 1;
    }
  }
  else
  {
    v7 = 0;
    while ( a2 )
    {
      v8 = (unsigned __int16)v7 * (unsigned __int16)a3;
      v10 = *a1++;
      v9 = v10;
      v11 = v10 - 48;
      v12 = HIWORD(v8);
      if ( HIWORD(v8) )
        v12 = 1;
      if ( v11 >= 0xA )
      {
        v11 = (v9 | 0x20) - 87;
        if ( (v9 | 0x20u) - 97 >= 0xFFFFFFF6 )
          v11 = -1;
        if ( v11 >= a3 )
          return 257;
      }
      v5 = 512;
      if ( !v12 )
      {
        --a2;
        v7 = (unsigned __int16)v8 + (unsigned __int16)v11;
        if ( (unsigned __int16)v7 == v7 )
          continue;
      }
      return v5 | 1;
    }
  }
  return v7 << 16;
}
