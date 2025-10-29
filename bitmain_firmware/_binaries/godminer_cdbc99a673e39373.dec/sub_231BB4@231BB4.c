bool __fastcall sub_231BB4(unsigned __int8 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r3
  int v4; // r1
  bool v6; // cf
  int v7; // r4
  unsigned int v8; // r12
  unsigned int v9; // r3
  int v10; // r1
  int v11; // t1
  unsigned int v12; // r5
  int v13; // r4
  unsigned int v14; // r1
  unsigned int v15; // r1
  unsigned int v16; // r6
  int v17; // r5
  int v18; // t1
  unsigned int v19; // r6
  int v20; // t1
  unsigned __int8 v21; // r6
  unsigned int v22; // r3
  unsigned int v23; // [sp+4h] [bp-24h] BYREF
  _DWORD v24[6]; // [sp+8h] [bp-20h] BYREF
  _DWORD v25[2]; // [sp+20h] [bp-8h] BYREF

  v3 = a2;
  v23 = a3;
  if ( a3 - 2 > 0x22 )
  {
    v24[3] = 1;
    v24[5] = 1;
    v24[4] = v25;
    v24[0] = 0;
    v24[2] = &off_2CFF14;
    v25[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v25[0] = &v23;
    core::panicking::panic_fmt((int)v24, (int)&off_2CFF1C);
  }
  if ( !a2 )
    return 1;
  v4 = *a1;
  if ( v4 == 45 )
  {
    if ( v3 != 1 )
      goto LABEL_10;
    return 1;
  }
  if ( v4 == 43 )
  {
    if ( !--v3 )
      return 1;
    ++a1;
  }
LABEL_10:
  v6 = a3 >= 0x10;
  if ( a3 <= 0x10 )
    v6 = v3 >= 3;
  if ( !v6 )
  {
    v15 = 0;
    if ( a3 <= 0xA )
    {
      do
      {
        v16 = *a1 - 48;
        if ( v16 >= a3 )
          break;
        v15 = v16 + v15 * a3;
        --v3;
        ++a1;
      }
      while ( v3 );
      return v16 >= a3;
    }
    while ( 1 )
    {
      v18 = *a1++;
      v17 = v18;
      v19 = v18 - 48;
      if ( (unsigned int)(v18 - 48) >= 0xA )
      {
        v19 = (v17 | 0x20) - 87;
        if ( (v17 | 0x20u) - 97 >= 0xFFFFFFF6 )
          v19 = -1;
        if ( v19 >= a3 )
          break;
      }
      --v3;
      v15 = v15 * a3 + v19;
      if ( !v3 )
        return 0;
    }
    return 1;
  }
  LOBYTE(v7) = 0;
  if ( a3 <= 0xA )
  {
    do
    {
      v8 = v3;
      if ( !v3 )
        break;
      v20 = *a1++;
      v21 = v20 - 48;
      if ( v20 - 48 >= a3 )
        break;
      v22 = (unsigned __int8)v7 * (unsigned __int8)a3;
      if ( v22 >> 8 )
        break;
      v7 = (unsigned __int8)v22 + v21;
      v3 = v8 - 1;
    }
    while ( (unsigned __int8)v7 == v7 );
  }
  else
  {
    do
    {
      v8 = v3;
      if ( !v3 )
        break;
      v9 = (unsigned __int8)v7 * (unsigned __int8)a3;
      v11 = *a1++;
      v10 = v11;
      v12 = v11 - 48;
      v13 = v9 >> 8;
      if ( v9 >> 8 )
        v13 = 1;
      if ( v12 >= 0xA )
      {
        v14 = (v10 | 0x20) - 97;
        v12 = v14 + 10;
        if ( v14 >= 0xFFFFFFF6 )
          v12 = -1;
        if ( v12 >= a3 )
          break;
      }
      if ( v13 )
        break;
      v7 = (unsigned __int8)v9 + (unsigned __int8)v12;
      v3 = v8 - 1;
    }
    while ( (unsigned __int8)v7 == v7 );
  }
  return v8 != 0;
}
