int __fastcall core::num::<impl i16>::from_str_radix(unsigned __int8 *a1, unsigned int a2, unsigned int a3)
{
  __int16 v3; // r5
  int v4; // r7
  bool v5; // cf
  int v6; // r4
  int v7; // lr
  int v8; // r7
  int v9; // r3
  int v10; // t1
  unsigned int v11; // r6
  unsigned int v12; // r3
  unsigned int v14; // r1
  bool v15; // cf
  unsigned __int8 *v16; // r0
  int v17; // r3
  int v18; // t1
  unsigned int v19; // r6
  bool v20; // zf
  int v21; // r5
  int v22; // r3
  int v23; // t1
  unsigned int v24; // r6
  _BOOL4 v25; // r5
  unsigned int v26; // r3
  int v27; // r7
  int v28; // t1
  unsigned int v29; // r3
  unsigned int v30; // r7
  int v31; // r5
  int v32; // t1
  unsigned int v33; // r3
  unsigned int v34; // r5
  unsigned int v35; // [sp+4h] [bp-24h] BYREF
  _DWORD v36[6]; // [sp+8h] [bp-20h] BYREF
  _DWORD v37[2]; // [sp+20h] [bp-8h] BYREF

  v35 = a3;
  if ( a3 - 2 > 0x22 )
  {
    v36[3] = 1;
    v36[5] = 1;
    v36[4] = v37;
    v36[0] = 0;
    v36[2] = &off_2E5F14;
    v37[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v37[0] = &v35;
    core::panicking::panic_fmt((int)v36, (int)&off_2E5F1C);
  }
  if ( !a2 )
    return 1;
  v4 = *a1;
  if ( v4 != 45 )
  {
    if ( v4 == 43 )
    {
      if ( !--a2 )
        return 257;
      ++a1;
    }
    v5 = a3 >= 0x10;
    if ( a3 <= 0x10 )
      v5 = a2 >= 4;
    if ( !v5 )
    {
      if ( a3 > 0xA )
      {
        v6 = 0;
        while ( 1 )
        {
          v28 = *a1++;
          v27 = v28;
          v29 = v28 - 48;
          if ( (unsigned int)(v28 - 48) >= 0xA )
          {
            v29 = (v27 | 0x20) - 87;
            if ( (v27 | 0x20u) - 97 >= 0xFFFFFFF6 )
              v29 = -1;
            if ( v29 >= a3 )
              break;
          }
          --a2;
          v6 = v6 * a3 + v29;
          if ( !a2 )
            return v6 << 16;
        }
        return 257;
      }
      v6 = 0;
      while ( 1 )
      {
        v30 = *a1 - 48;
        if ( v30 >= a3 )
          break;
        v6 = v30 + v6 * a3;
        --a2;
        ++a1;
        if ( !a2 )
          return v6 << 16;
      }
      return 257;
    }
    v6 = 0;
    v7 = 512;
    while ( 1 )
    {
      if ( !a2 )
        return v6 << 16;
      v8 = (__int16)v6 * (__int16)a3;
      v10 = *a1++;
      v9 = v10;
      v11 = v10 - 48;
      if ( a3 < 0xB )
        goto LABEL_17;
      if ( v11 >= 0xA )
        break;
LABEL_18:
      if ( (__int16)v8 == v8 )
      {
        v6 = (__int16)v8 + (__int16)v11;
        --a2;
        if ( (__int16)v6 == v6 )
          continue;
      }
      return v7 | 1;
    }
    v12 = (v9 | 0x20) - 97;
    v11 = v12 + 10;
    if ( v12 >= 0xFFFFFFF6 )
      v11 = -1;
LABEL_17:
    if ( v11 >= a3 )
      return 257;
    goto LABEL_18;
  }
  v14 = a2 - 1;
  v7 = 256;
  if ( !v14 )
    return v7 | 1;
  v15 = a3 >= 0x10;
  v16 = a1 + 1;
  if ( a3 <= 0x10 )
    v15 = v14 >= 4;
  if ( !v15 )
  {
    if ( a3 > 0xA )
    {
      v6 = 0;
      while ( 1 )
      {
        v32 = *v16++;
        v31 = v32;
        v33 = v32 - 48;
        if ( (unsigned int)(v32 - 48) >= 0xA )
        {
          v33 = (v31 | 0x20) - 87;
          if ( (v31 | 0x20u) - 97 >= 0xFFFFFFF6 )
            v33 = -1;
          if ( v33 >= a3 )
            break;
        }
        --v14;
        v6 = v6 * a3 - v33;
        if ( !v14 )
          return v6 << 16;
      }
      return 257;
    }
    v6 = 0;
    while ( 1 )
    {
      v34 = *v16 - 48;
      if ( v34 >= a3 )
        break;
      --v14;
      ++v16;
      v6 = v6 * a3 - v34;
      if ( !v14 )
        return v6 << 16;
    }
    return v7 | 1;
  }
  v6 = 0;
  if ( a3 > 0xA )
  {
    while ( v14 )
    {
      v21 = (__int16)v6 * (__int16)a3;
      v23 = *v16++;
      v22 = v23;
      LOWORD(v24) = v23 - 48;
      v6 = (__int16)v21;
      v25 = (__int16)v21 != v21;
      if ( (unsigned int)(v23 - 48) >= 0xA )
      {
        v26 = (v22 | 0x20) - 97;
        v24 = v26 + 10;
        if ( v26 >= 0xFFFFFFF6 )
          v24 = -1;
        if ( v24 >= a3 )
          return 257;
      }
      v20 = !v25;
      if ( !v25 )
      {
        v6 -= (__int16)v24;
        --v14;
        v20 = (__int16)v6 == v6;
      }
      if ( !v20 )
        return 769;
    }
  }
  else
  {
    while ( v14 )
    {
      v17 = (__int16)v6 * (__int16)a3;
      v18 = *v16++;
      v19 = v18 - 48;
      if ( v18 - 48 < a3 )
        v3 = v19;
      if ( v19 >= a3 )
        return v7 | 1;
      if ( (__int16)v17 == v17 )
      {
        v6 = (__int16)v17 - v3;
        --v14;
        v3 = v19;
        if ( (__int16)v6 == v6 )
          continue;
      }
      return 769;
    }
  }
  return v6 << 16;
}
