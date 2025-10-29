int __fastcall core::num::<impl i8>::from_str_radix(unsigned __int8 *a1, unsigned int a2, unsigned int a3)
{
  int v3; // r3
  bool v4; // cf
  int v5; // r3
  int v6; // r3
  int v7; // r5
  int v8; // t1
  unsigned int v9; // r4
  int v10; // lr
  _BOOL4 v11; // r3
  int v12; // r3
  unsigned int v14; // r1
  int v15; // r1
  unsigned int v16; // r0
  unsigned int v17; // r5
  int v18; // r4
  int v19; // t1
  unsigned int v20; // r5
  unsigned __int8 *v21; // r0
  int v22; // r3
  int v23; // r5
  int v24; // lr
  bool v25; // zf
  int v26; // r4
  unsigned int v27; // r3
  unsigned __int8 *v28; // lr
  unsigned int v29; // r4
  int v30; // r5
  unsigned int v31; // [sp+4h] [bp-24h] BYREF
  _DWORD v32[6]; // [sp+8h] [bp-20h] BYREF
  _DWORD v33[2]; // [sp+20h] [bp-8h] BYREF

  v31 = a3;
  if ( a3 - 2 > 0x22 )
  {
    v32[3] = 1;
    v32[5] = 1;
    v32[4] = v33;
    v32[0] = 0;
    v32[2] = &off_2E4F14;
    v33[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v33[0] = &v31;
    core::panicking::panic_fmt((int)v32, (int)&off_2E4F1C);
  }
  if ( !a2 )
    return 1;
  v3 = *a1;
  if ( v3 != 45 )
  {
    if ( v3 == 43 )
    {
      if ( !--a2 )
        return 257;
      ++a1;
    }
    v4 = a3 >= 0x10;
    if ( a3 <= 0x10 )
      v4 = a2 >= 2;
    if ( !v4 )
    {
      v5 = 0;
      if ( a3 > 0xA )
      {
        while ( 1 )
        {
          v19 = *a1++;
          v18 = v19;
          v20 = v19 - 48;
          if ( (unsigned int)(v19 - 48) >= 0xA )
          {
            v20 = (v18 | 0x20) - 87;
            if ( (v18 | 0x20u) - 97 >= 0xFFFFFFF6 )
              v20 = -1;
            if ( v20 >= a3 )
              break;
          }
          --a2;
          v5 = v5 * a3 + v20;
          if ( !a2 )
            return v5 << 8;
        }
      }
      else
      {
        while ( 1 )
        {
          v17 = *a1 - 48;
          if ( v17 >= a3 )
            break;
          v5 = v17 + v5 * a3;
          --a2;
          ++a1;
          if ( !a2 )
            return v5 << 8;
        }
      }
      return 257;
    }
    v5 = 0;
    while ( 1 )
    {
      if ( !a2 )
        return v5 << 8;
      v6 = (char)v5 * (char)a3;
      v8 = *a1++;
      v7 = v8;
      v9 = v8 - 48;
      v10 = (char)v6;
      v11 = (char)v6 != v6;
      if ( a3 >= 0xB )
      {
        if ( v9 < 0xA )
          goto LABEL_18;
        v9 = (v7 | 0x20) - 87;
        if ( (v7 | 0x20u) - 97 >= 0xFFFFFFF6 )
          v9 = -1;
      }
      if ( v9 >= a3 )
        return 257;
LABEL_18:
      if ( v11 )
        return 513;
      v5 = v10 + (char)v9;
      --a2;
      if ( (char)v5 != v5 )
      {
        v12 = 2;
        return (v12 << 8) | 1;
      }
    }
  }
  v14 = a2 - 1;
  if ( !v14 )
    return 257;
  if ( a3 <= 0x10 && v14 == 1 )
  {
    v15 = a1[1];
    v16 = v15 - 48;
    if ( a3 > 0xA )
    {
      if ( v16 < 0xA )
        return -256 * v16;
      v16 = (v15 | 0x20) - 87;
      if ( (v15 | 0x20u) - 97 >= 0xFFFFFFF6 )
        v16 = -1;
    }
    v12 = 1;
    if ( v16 >= a3 )
      return (v12 << 8) | 1;
    return -256 * v16;
  }
  if ( a3 <= 0xA )
  {
    v28 = a1 + 1;
    v5 = 0;
    while ( v14 )
    {
      v29 = *v28 - 48;
      if ( v29 >= a3 )
        return 257;
      v30 = (char)v5 * (char)a3;
      if ( (char)v30 == v30 )
      {
        v5 = (char)v30 - (char)v29;
        ++v28;
        --v14;
        if ( (char)v5 == v5 )
          continue;
      }
      return 769;
    }
  }
  else
  {
    v21 = a1 + 1;
    v5 = 0;
    while ( v14 )
    {
      v22 = (char)v5 * (char)a3;
      v23 = *v21;
      v24 = (char)v22;
      v26 = (char)v22 - v22;
      v25 = (char)v22 == v22;
      v27 = v23 - 48;
      if ( !v25 )
        v26 = 1;
      if ( v27 >= 0xA )
      {
        v27 = (v23 | 0x20) - 87;
        if ( (v23 | 0x20u) - 97 >= 0xFFFFFFF6 )
          v27 = -1;
        if ( v27 >= a3 )
          return 257;
      }
      if ( !v26 )
      {
        --v14;
        v5 = v24 - (char)v27;
        ++v21;
        if ( (char)v5 == v5 )
          continue;
      }
      return 769;
    }
  }
  return v5 << 8;
}
