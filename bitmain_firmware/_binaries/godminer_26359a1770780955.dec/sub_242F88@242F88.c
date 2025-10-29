int __fastcall sub_242F88(int result, unsigned __int8 *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r7
  bool v5; // cf
  unsigned int v6; // r12
  unsigned int v7; // lr
  int v8; // r11
  int v9; // r4
  int v10; // r7
  unsigned int v11; // kr10_4
  unsigned __int64 v12; // kr38_8
  unsigned __int64 v13; // kr40_8
  unsigned __int64 v14; // kr48_8
  unsigned int v15; // lr
  int v16; // r9
  unsigned int v17; // kr00_4
  int v18; // r4
  int v19; // t1
  unsigned __int64 v20; // kr50_8
  unsigned int v21; // r6
  unsigned int v22; // r4
  __int64 v23; // r6
  int v24; // r8
  int v25; // r12
  int v26; // lr
  int v27; // kr68_4
  unsigned __int64 v28; // kr70_8
  unsigned int v29; // r5
  int v30; // r4
  int v31; // r8
  int v32; // r12
  int v33; // lr
  int v34; // krA0_4
  unsigned __int64 v35; // krA8_8
  unsigned int v36; // r10
  int v37; // r6
  int v38; // r4
  int v39; // t1
  int v40; // r8
  unsigned int v41; // r7
  int v42; // r5
  unsigned __int64 v43; // krB0_8
  int v44; // r4
  unsigned int v45; // kr20_4
  int v46; // krB8_4
  unsigned __int64 v47; // krC0_8
  unsigned __int64 v48; // krC8_8
  unsigned int v49; // lr
  int v50; // t1
  int v51; // r10
  unsigned __int64 v52; // krD8_8
  unsigned int v53; // r6
  unsigned int v54; // [sp+8h] [bp-24h] BYREF
  _DWORD v55[6]; // [sp+Ch] [bp-20h] BYREF
  _DWORD v56[2]; // [sp+24h] [bp-8h] BYREF

  v54 = a4;
  if ( a4 - 2 > 0x22 )
  {
    v55[3] = 1;
    v55[5] = 1;
    v55[4] = v56;
    v55[0] = 0;
    v55[2] = &off_2E3F14;
    v56[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v56[0] = &v54;
    core::panicking::panic_fmt((int)v55, (int)&off_2E3F1C);
  }
  if ( !a3 )
  {
    *(_BYTE *)(result + 1) = 0;
    *(_BYTE *)result = 1;
    return result;
  }
  v4 = *a2;
  if ( v4 == 45 )
  {
    if ( a3 != 1 )
    {
LABEL_9:
      v5 = a4 >= 0x10;
      if ( a4 <= 0x10 )
        v5 = a3 >= 0x21;
      if ( v5 )
      {
        if ( a4 <= 0xA )
        {
          v6 = 0;
          v7 = 0;
          v8 = 0;
          v9 = 0;
          while ( 1 )
          {
            v43 = (unsigned int)v8 * (unsigned __int64)a4;
            v45 = v9;
            v46 = v9 * a4;
            v44 = ((unsigned int)v9 * (unsigned __int64)a4) >> 32;
            v47 = v6 * (unsigned __int64)a4;
            v48 = v7 * (unsigned __int64)a4;
            v49 = (__PAIR64__(v7, v6) * a4) >> 32;
            v50 = *a2++;
            v51 = HIDWORD(v48) + __CFADD__((_DWORD)v48, HIDWORD(v47)) + (_DWORD)v43;
            v52 = (__CFADD__(__CFADD__((_DWORD)v48, HIDWORD(v47)), (_DWORD)v43)
                 | (unsigned __int8)__CFADD__(HIDWORD(v48), __CFADD__((_DWORD)v48, HIDWORD(v47)) + (_DWORD)v43))
                + (unsigned __int64)(unsigned int)(HIDWORD(v43) + v46);
            v53 = v50 - 48;
            if ( !is_mul_ok(v45, a4) )
              v44 = 1;
            if ( v53 >= a4 )
              break;
            if ( v44 | ((HIDWORD(v43) + (unsigned __int64)(unsigned int)v46) >> 32) | HIDWORD(v52)
              || (v6 = v47 + v53,
                  v5 = __CFADD__(__CFADD__((_DWORD)v47, v53), v49),
                  v8 = (__PAIR64__(v51, __CFADD__((_DWORD)v47, v53)) + v49) >> 32,
                  v7 = __CFADD__((_DWORD)v47, v53) + v49,
                  v9 = __CFADD__(v5, v51) + (_DWORD)v52,
                  __CFADD__(__CFADD__(v5, v51), (_DWORD)v52)) )
            {
LABEL_43:
              *(_BYTE *)(result + 1) = 2;
              *(_BYTE *)result = 1;
              return result;
            }
            if ( !--a3 )
            {
LABEL_42:
              *(_DWORD *)(result + 8) = v6;
              *(_DWORD *)(result + 12) = v7;
              *(_DWORD *)(result + 16) = v8;
              *(_DWORD *)(result + 20) = v9;
              *(_BYTE *)result = 0;
              return result;
            }
          }
        }
        else
        {
          v6 = 0;
          v7 = 0;
          v8 = 0;
          v9 = 0;
          while ( 1 )
          {
            v11 = v9;
            v10 = ((unsigned int)v9 * (unsigned __int64)a4) >> 32;
            v12 = v6 * (unsigned __int64)a4;
            v13 = v7 * (unsigned __int64)a4;
            v14 = (((unsigned int)v8 * (unsigned __int64)a4) >> 32) + v9 * a4;
            v15 = (__PAIR64__(v7, v6) * a4) >> 32;
            v16 = HIDWORD(v13) + __CFADD__((_DWORD)v13, HIDWORD(v12)) + v8 * a4;
            v17 = (__PAIR64__(v9, v8) * a4) >> 32;
            v19 = *a2++;
            v18 = v19;
            v20 = (__CFADD__(__CFADD__((_DWORD)v13, HIDWORD(v12)), v8 * a4)
                 | (unsigned __int8)__CFADD__(HIDWORD(v13), __CFADD__((_DWORD)v13, HIDWORD(v12)) + v8 * a4))
                + (unsigned __int64)v17;
            v21 = v19 - 48;
            if ( !is_mul_ok(v11, a4) )
              v10 = 1;
            if ( v21 >= 0xA )
            {
              v22 = (v18 | 0x20) - 97;
              v21 = v22 + 10;
              if ( v22 >= 0xFFFFFFF6 )
                v21 = -1;
              if ( v21 >= a4 )
                break;
            }
            if ( v10 | HIDWORD(v14) | HIDWORD(v20) )
              goto LABEL_43;
            v6 = v12 + v21;
            v5 = __CFADD__(__CFADD__((_DWORD)v12, v21), v15);
            v8 = (__PAIR64__(v16, __CFADD__((_DWORD)v12, v21)) + v15) >> 32;
            v7 = __CFADD__((_DWORD)v12, v21) + v15;
            v9 = __CFADD__(v5, v16) + (_DWORD)v20;
            if ( __CFADD__(__CFADD__(v5, v16), (_DWORD)v20) )
              goto LABEL_43;
            if ( !--a3 )
              goto LABEL_42;
          }
        }
      }
      else
      {
        v6 = 0;
        v7 = 0;
        v8 = 0;
        v9 = 0;
        if ( a4 > 0xA )
        {
          while ( 1 )
          {
            v31 = (v6 * (unsigned __int64)a4) >> 32;
            v32 = v6 * a4;
            v34 = v7 * a4;
            v33 = (v7 * (unsigned __int64)a4) >> 32;
            v35 = a4 * (unsigned __int64)(unsigned int)v8;
            v36 = v34 + v31;
            v37 = a4 * v9;
            v39 = *a2++;
            v38 = v39;
            v5 = __CFADD__(__CFADD__(v34, v31), (_DWORD)v35);
            v40 = __CFADD__(v34, v31) + (_DWORD)v35;
            v5 |= __CFADD__(v33, v40);
            v40 += v33;
            v41 = v39 - 48;
            v42 = v37 + v5 + HIDWORD(v35);
            if ( (unsigned int)(v39 - 48) >= 0xA )
            {
              v41 = (v38 | 0x20) - 87;
              if ( (v38 | 0x20u) - 97 >= 0xFFFFFFF6 )
                v41 = -1;
              if ( v41 >= a4 )
                break;
            }
            v5 = __CFADD__(v32, v41);
            v7 = (__PAIR64__(v36, v32) + v41) >> 32;
            v6 = v32 + v41;
            v9 = (__PAIR64__(v42, __CFADD__(v5, v36)) + (unsigned int)v40) >> 32;
            v8 = __CFADD__(v5, v36) + v40;
            if ( !--a3 )
              goto LABEL_42;
          }
        }
        else
        {
          while ( 1 )
          {
            LODWORD(v23) = *a2 - 48;
            if ( (unsigned int)v23 >= a4 )
              break;
            v24 = (v6 * (unsigned __int64)a4) >> 32;
            v25 = v6 * a4;
            ++a2;
            v27 = v7 * a4;
            v26 = (v7 * (unsigned __int64)a4) >> 32;
            v28 = a4 * (unsigned __int64)(unsigned int)v8;
            HIDWORD(v23) = v27 + v24;
            v29 = v26 + __CFADD__(v27, v24) + (_DWORD)v28;
            v30 = a4 * v9
                + (__CFADD__(__CFADD__(v27, v24), (_DWORD)v28) | __CFADD__(v26, __CFADD__(v27, v24) + (_DWORD)v28))
                + HIDWORD(v28);
            v5 = __CFADD__(__CFADD__(v25, (_DWORD)v23), v27 + v24);
            v7 = ((unsigned __int64)(unsigned int)v25 + v23) >> 32;
            v6 = v25 + v23;
            v9 = (__PAIR64__(v30, v5) + v29) >> 32;
            v8 = v5 + v29;
            if ( !--a3 )
              goto LABEL_42;
          }
        }
      }
    }
  }
  else
  {
    if ( v4 != 43 )
      goto LABEL_9;
    if ( --a3 )
    {
      ++a2;
      goto LABEL_9;
    }
  }
  *(_BYTE *)(result + 1) = 1;
  *(_BYTE *)result = 1;
  return result;
}
