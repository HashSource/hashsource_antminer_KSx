int __fastcall sub_24459C(int result, unsigned __int8 *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r6
  bool v5; // cf
  unsigned __int64 v6; // r4
  int v7; // r6
  unsigned int v8; // r12
  unsigned int v9; // lr
  int v10; // r9
  int v11; // t1
  int v12; // r12
  int v13; // off
  int v14; // r5
  unsigned int v15; // r4
  _BOOL4 v16; // r5
  char v17; // r1
  unsigned int v18; // r2
  bool v19; // cf
  unsigned __int8 *v20; // r12
  int v21; // r1
  unsigned int v22; // lr
  unsigned int v23; // kr18_4
  int v24; // r8
  int v25; // t1
  unsigned __int64 v26; // kr40_8
  int v27; // r1
  int v28; // r5
  unsigned int v29; // r4
  _BOOL4 v30; // r5
  int v31; // r12
  int v32; // t1
  unsigned int v33; // r6
  unsigned int v34; // r12
  unsigned int v35; // r1
  int v36; // r6
  int v37; // t1
  unsigned int v38; // r1
  unsigned int v39; // [sp+4h] [bp-24h] BYREF
  _DWORD v40[6]; // [sp+8h] [bp-20h] BYREF
  _DWORD v41[2]; // [sp+20h] [bp-8h] BYREF

  v39 = a4;
  if ( a4 - 2 > 0x22 )
  {
    v40[3] = 1;
    v40[5] = 1;
    v40[4] = v41;
    v40[0] = 0;
    v40[2] = &off_2E4F14;
    v41[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v41[0] = &v39;
    core::panicking::panic_fmt((int)v40, (int)&off_2E4F1C);
  }
  if ( !a3 )
  {
    v17 = 0;
    goto LABEL_22;
  }
  v4 = *a2;
  if ( v4 != 45 )
  {
    if ( v4 != 43 )
    {
LABEL_7:
      v5 = a4 >= 0x10;
      if ( a4 <= 0x10 )
        v5 = a3 >= 0x10;
      if ( !v5 )
      {
        if ( a4 <= 0xA )
        {
          v34 = 0;
          HIDWORD(v6) = 0;
          while ( 1 )
          {
            LODWORD(v6) = *a2 - 48;
            if ( (unsigned int)v6 >= a4 )
              break;
            HIDWORD(v6) *= a4;
            --a3;
            ++a2;
            v6 += v34 * (unsigned __int64)a4;
            v34 = v6;
            if ( !a3 )
              goto LABEL_54;
          }
        }
        else
        {
          v6 = 0;
          while ( 1 )
          {
            v32 = *a2++;
            v31 = v32;
            v33 = v32 - 48;
            if ( (unsigned int)(v32 - 48) >= 0xA )
            {
              v33 = (v31 | 0x20) - 87;
              if ( (v31 | 0x20u) - 97 >= 0xFFFFFFF6 )
                v33 = -1;
              if ( v33 >= a4 )
                break;
            }
            v6 = v6 * a4 + v33;
            if ( !--a3 )
              goto LABEL_54;
          }
        }
        goto LABEL_60;
      }
      v6 = 0;
      while ( 1 )
      {
        v7 = SHIDWORD(v6) >> 31;
        v8 = ((unsigned int)v6 * (unsigned __int64)a4) >> 32;
        v9 = v6 * a4;
        v11 = *a2++;
        v10 = v11;
        LODWORD(v6) = (HIDWORD(v6) * (unsigned __int64)a4) >> 32;
        HIDWORD(v6) *= a4;
        v5 = __CFADD__(HIDWORD(v6), v8);
        v13 = (__PAIR64__(a4 * v7, HIDWORD(v6)) + v8) >> 32;
        v12 = HIDWORD(v6) + v8;
        v14 = (v6 + v13) ^ (v12 >> 31)
            | (a4 * v7
             + (__CFADD__(v5, a4 * v7) | __CFADD__((_DWORD)v6, v13))
             + ((a4 * (unsigned __int64)(unsigned int)v7) >> 32))
            ^ (v12 >> 31);
        v15 = v11 - 48;
        v16 = v14 != 0;
        if ( a4 >= 0xB )
        {
          if ( v15 < 0xA )
            goto LABEL_17;
          v15 = (v10 | 0x20) - 87;
          if ( (v10 | 0x20u) - 97 >= 0xFFFFFFF6 )
            v15 = -1;
        }
        if ( v15 >= a4 )
          goto LABEL_60;
LABEL_17:
        if ( v16 || (v6 = __PAIR64__(v12, v9) + v15, ((v12 ^ HIDWORD(v6)) & ~v12) < 0) )
        {
          v17 = 2;
          goto LABEL_22;
        }
        if ( !--a3 )
          goto LABEL_54;
      }
    }
    if ( --a3 )
    {
      ++a2;
      goto LABEL_7;
    }
LABEL_60:
    *(_BYTE *)(result + 1) = 1;
    *(_BYTE *)result = 1;
    return result;
  }
  v18 = a3 - 1;
  if ( !v18 )
    goto LABEL_60;
  v19 = a4 >= 0x10;
  v20 = a2 + 1;
  if ( a4 <= 0x10 )
    v19 = v18 >= 0x10;
  if ( !v19 )
  {
    v6 = 0;
    if ( a4 > 0xA )
    {
      while ( 1 )
      {
        v37 = *v20++;
        v36 = v37;
        v38 = v37 - 48;
        if ( (unsigned int)(v37 - 48) >= 0xA )
        {
          v38 = (v36 | 0x20) - 87;
          if ( (v36 | 0x20u) - 97 >= 0xFFFFFFF6 )
            v38 = -1;
          if ( v38 >= a4 )
            break;
        }
        v6 = v6 * a4 - v38;
        if ( !--v18 )
          goto LABEL_54;
      }
    }
    else
    {
      while ( 1 )
      {
        v35 = *v20 - 48;
        if ( v35 >= a4 )
          break;
        ++v20;
        v6 = v6 * a4 - v35;
        if ( !--v18 )
          goto LABEL_54;
      }
    }
    goto LABEL_60;
  }
  v6 = 0;
  while ( 1 )
  {
    v23 = v6;
    v21 = ((unsigned int)v6 * (unsigned __int64)a4) >> 32;
    v22 = v6 * a4;
    LODWORD(v6) = SHIDWORD(v6) >> 31;
    v25 = *v20++;
    v24 = v25;
    v26 = HIDWORD(v6) * (unsigned __int64)a4;
    v5 = __CFADD__((_DWORD)v26, v21);
    v27 = (__PAIR64__(HIDWORD(v6), v23) * a4) >> 32;
    v28 = (HIDWORD(v26) + v5 + a4 * v6) ^ (v27 >> 31)
        | (a4 * v6
         + (__CFADD__(v5, a4 * v6) | __CFADD__(HIDWORD(v26), v5 + a4 * v6))
         + ((a4 * (unsigned __int64)(unsigned int)v6) >> 32))
        ^ (v27 >> 31);
    v29 = v25 - 48;
    v30 = v28 != 0;
    if ( a4 >= 0xB )
    {
      if ( v29 < 0xA )
        goto LABEL_34;
      v29 = (v24 | 0x20) - 87;
      if ( (v24 | 0x20u) - 97 >= 0xFFFFFFF6 )
        v29 = -1;
    }
    if ( v29 >= a4 )
      goto LABEL_60;
LABEL_34:
    if ( v30 )
      break;
    v6 = __PAIR64__(v27, v22) - v29;
    if ( (v27 & (v27 ^ HIDWORD(v6))) < 0 )
      break;
    if ( !--v18 )
    {
LABEL_54:
      *(_QWORD *)(result + 8) = v6;
      *(_BYTE *)result = 0;
      return result;
    }
  }
  v17 = 3;
LABEL_22:
  *(_BYTE *)(result + 1) = v17;
  *(_BYTE *)result = 1;
  return result;
}
