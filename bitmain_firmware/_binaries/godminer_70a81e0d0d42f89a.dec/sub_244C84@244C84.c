int __fastcall sub_244C84(int result, unsigned __int8 *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r6
  bool v5; // cf
  signed int v6; // r12
  int v7; // lr
  int v8; // r5
  int v9; // t1
  unsigned int v10; // r4
  _BOOL4 v11; // r12
  char v12; // r1
  unsigned int v13; // r2
  bool v14; // cf
  unsigned __int8 *v15; // lr
  int v16; // r6
  int v17; // r1
  int v18; // t1
  int v19; // r5
  bool v20; // zf
  int v21; // r4
  unsigned int v22; // r5
  unsigned int v23; // r1
  unsigned int v24; // r6
  int v25; // r6
  int v26; // t1
  unsigned int v27; // r5
  unsigned int v28; // r6
  unsigned int v29; // r1
  int v30; // r4
  int v31; // t1
  unsigned int v32; // r1
  int v33; // r5
  int v34; // t1
  int v35; // r4
  unsigned int v36; // [sp+4h] [bp-24h] BYREF
  _DWORD v37[6]; // [sp+8h] [bp-20h] BYREF
  _DWORD v38[2]; // [sp+20h] [bp-8h] BYREF

  v36 = a4;
  if ( a4 - 2 > 0x22 )
  {
    v37[3] = 1;
    v37[5] = 1;
    v37[4] = v38;
    v37[0] = 0;
    v37[2] = &off_2E5F14;
    v38[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v38[0] = &v36;
    core::panicking::panic_fmt((int)v37, (int)&off_2E5F1C);
  }
  if ( !a3 )
  {
    v12 = 0;
    goto LABEL_22;
  }
  v4 = *a2;
  if ( v4 == 45 )
  {
    v13 = a3 - 1;
    if ( v13 )
    {
      v14 = a4 >= 0x10;
      v15 = a2 + 1;
      if ( a4 <= 0x10 )
        v14 = v13 >= 8;
      if ( v14 )
      {
        v6 = 0;
        if ( a4 <= 0xA )
        {
          while ( 1 )
          {
            v33 = v6 * a4;
            v34 = *v15++;
            v35 = v34 - 48;
            if ( v34 - 48 >= a4 )
              break;
            if ( (unsigned __int64)(v6 * (__int64)(int)a4) >> 32 != (int)(v6 * a4) >> 31
              || (v6 = v33 - v35, __OFSUB__(v33, v35)) )
            {
LABEL_65:
              v12 = 3;
LABEL_22:
              *(_BYTE *)(result + 1) = v12;
              *(_BYTE *)result = 1;
              return result;
            }
            if ( !--v13 )
            {
LABEL_64:
              *(_DWORD *)(result + 4) = v6;
              *(_BYTE *)result = 0;
              return result;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v16 = v6 * a4;
            v18 = *v15++;
            v17 = v18;
            v19 = (unsigned __int64)(v6 * (__int64)(int)a4) >> 32;
            v21 = v19 - ((int)(v6 * a4) >> 31);
            v20 = v19 == (int)(v6 * a4) >> 31;
            v22 = v18 - 48;
            if ( !v20 )
              v21 = 1;
            if ( v22 >= 0xA )
            {
              v23 = (v17 | 0x20) - 97;
              v22 = v23 + 10;
              if ( v23 >= 0xFFFFFFF6 )
                v22 = -1;
              if ( v22 >= a4 )
                break;
            }
            if ( v21 )
              goto LABEL_65;
            v6 = v16 - v22;
            if ( __OFSUB__(v16, v22) )
              goto LABEL_65;
            if ( !--v13 )
              goto LABEL_64;
          }
        }
      }
      else
      {
        v6 = 0;
        if ( a4 > 0xA )
        {
          while ( 1 )
          {
            v31 = *v15++;
            v30 = v31;
            v32 = v31 - 48;
            if ( (unsigned int)(v31 - 48) >= 0xA )
            {
              v32 = (v30 | 0x20) - 87;
              if ( (v30 | 0x20u) - 97 >= 0xFFFFFFF6 )
                v32 = -1;
              if ( v32 >= a4 )
                break;
            }
            --v13;
            v6 = v6 * a4 - v32;
            if ( !v13 )
              goto LABEL_64;
          }
        }
        else
        {
          while ( 1 )
          {
            v29 = *v15 - 48;
            if ( v29 >= a4 )
              break;
            --v13;
            ++v15;
            v6 = v6 * a4 - v29;
            if ( !v13 )
              goto LABEL_64;
          }
        }
      }
    }
  }
  else
  {
    if ( v4 != 43 )
    {
LABEL_7:
      v5 = a4 >= 0x10;
      if ( a4 <= 0x10 )
        v5 = a3 >= 8;
      if ( !v5 )
      {
        v6 = 0;
        if ( a4 > 0xA )
        {
          while ( 1 )
          {
            v26 = *a2++;
            v25 = v26;
            v27 = v26 - 48;
            if ( (unsigned int)(v26 - 48) >= 0xA )
            {
              v28 = (v25 | 0x20) - 97;
              v27 = v28 + 10;
              if ( v28 >= 0xFFFFFFF6 )
                v27 = -1;
              if ( v27 >= a4 )
                break;
            }
            --a3;
            v6 = v27 + v6 * a4;
            if ( !a3 )
              goto LABEL_64;
          }
        }
        else
        {
          while ( 1 )
          {
            v24 = *a2 - 48;
            if ( v24 >= a4 )
              break;
            v6 = v24 + v6 * a4;
            --a3;
            ++a2;
            if ( !a3 )
              goto LABEL_64;
          }
        }
        goto LABEL_59;
      }
      v6 = 0;
      while ( 1 )
      {
        v7 = v6 * a4;
        v9 = *a2++;
        v8 = v9;
        v10 = v9 - 48;
        v11 = (unsigned __int64)(v6 * (__int64)(int)a4) >> 32 != (int)(v6 * a4) >> 31;
        if ( a4 >= 0xB )
        {
          if ( v10 < 0xA )
            goto LABEL_17;
          v10 = (v8 | 0x20) - 87;
          if ( (v8 | 0x20u) - 97 >= 0xFFFFFFF6 )
            v10 = -1;
        }
        if ( v10 >= a4 )
          goto LABEL_59;
LABEL_17:
        if ( v11 || (v6 = v7 + v10, __OFADD__(v7, v10)) )
        {
          v12 = 2;
          goto LABEL_22;
        }
        if ( !--a3 )
          goto LABEL_64;
      }
    }
    if ( --a3 )
    {
      ++a2;
      goto LABEL_7;
    }
  }
LABEL_59:
  *(_BYTE *)(result + 1) = 1;
  *(_BYTE *)result = 1;
  return result;
}
