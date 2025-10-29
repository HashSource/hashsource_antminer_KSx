_BYTE *__fastcall sub_247318(_BYTE *result, unsigned __int8 *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r7
  unsigned int v6; // r12
  unsigned int v7; // lr
  int v8; // r8
  int v9; // r4
  unsigned __int64 v10; // kr08_8
  unsigned __int64 v11; // kr10_8
  unsigned __int64 v12; // kr18_8
  unsigned __int64 v13; // kr20_8
  unsigned __int64 v14; // kr28_8
  unsigned int v15; // r8
  unsigned __int64 v16; // kr40_8
  int v18; // r6
  int v22; // off
  int v23; // r7
  int v24; // t1
  _BOOL4 v25; // r5
  unsigned int v26; // r4
  int v27; // kr38_4
  char v28; // r1
  unsigned int v29; // r10
  bool v30; // cf
  unsigned __int8 *v31; // r9
  int v32; // r6
  unsigned __int64 v33; // kr48_8
  int v34; // r5
  unsigned int v35; // r7
  unsigned __int64 v36; // kr58_8
  unsigned __int64 v37; // kr60_8
  int v38; // r8
  int v40; // r1
  int v41; // r6
  unsigned __int64 v42; // kr70_8
  int v43; // r5
  int v44; // r1
  int v45; // t1
  _BOOL4 v46; // r5
  unsigned int v47; // r4
  __int64 v48; // r6
  int v49; // r9
  int v50; // r12
  int v51; // lr
  int v52; // kr88_4
  unsigned int v53; // r5
  unsigned int v54; // r4
  unsigned int v55; // r10
  int v56; // r12
  unsigned __int64 v57; // krC0_8
  int v58; // r5
  int v59; // r9
  unsigned int v60; // r8
  unsigned int v61; // r10
  unsigned __int64 v62; // kr50_8
  int v63; // r6
  int v64; // r4
  int v65; // t1
  unsigned int v66; // r5
  int v67; // r7
  unsigned int v68; // r1
  unsigned __int64 v69; // krD0_8
  unsigned int v70; // r12
  __int128 v71; // krD8_16
  int v72; // r4
  int v73; // r2
  int v74; // r7
  int v75; // t1
  unsigned int v76; // r1
  unsigned int v77; // r12
  unsigned int v78; // kr30_4
  unsigned int v79; // r2
  unsigned int v80; // r6
  unsigned int v81; // r5
  int v82; // r1
  unsigned int v83; // r7
  _BYTE *v84; // [sp+4h] [bp-30h]
  int v85; // [sp+8h] [bp-2Ch]
  unsigned int v86; // [sp+8h] [bp-2Ch]
  int v87; // [sp+Ch] [bp-28h]
  int v88; // [sp+Ch] [bp-28h]
  unsigned int v89; // [sp+10h] [bp-24h] BYREF
  _DWORD v90[6]; // [sp+14h] [bp-20h] BYREF
  _DWORD v91[2]; // [sp+2Ch] [bp-8h] BYREF

  v89 = a4;
  if ( a4 - 2 > 0x22 )
  {
    v90[3] = 1;
    v90[5] = 1;
    v90[4] = v91;
    v90[0] = 0;
    v90[2] = &off_2EEF14;
    v91[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v91[0] = &v89;
    core::panicking::panic_fmt((int)v90, (int)&off_2EEF1C);
  }
  if ( !a3 )
  {
    v28 = 0;
    goto LABEL_61;
  }
  v4 = *a2;
  if ( v4 != 45 )
  {
    if ( v4 != 43 )
    {
LABEL_7:
      _CF = a4 >= 0x10;
      v84 = result;
      if ( a4 <= 0x10 )
        _CF = a3 >= 0x20;
      if ( !_CF )
      {
        v6 = 0;
        v7 = 0;
        v8 = 0;
        v9 = 0;
        if ( a4 > 0xA )
        {
          while ( 1 )
          {
            v55 = (v6 * (unsigned __int64)a4) >> 32;
            v56 = v6 * a4;
            v57 = v7 * (unsigned __int64)a4;
            v59 = (a4 * (unsigned __int64)(unsigned int)v8) >> 32;
            v58 = a4 * v8;
            _CF = __CFADD__((_DWORD)v57, v55);
            v62 = v57 + __PAIR64__(a4 * v8, v55);
            v60 = HIDWORD(v62);
            v61 = v62;
            v63 = a4 * v9;
            v65 = *a2++;
            v64 = v65;
            _CF = __CFADD__(_CF, v58) | __CFADD__(HIDWORD(v57), _CF + v58);
            v66 = v65 - 48;
            v67 = v63 + _CF + v59;
            if ( (unsigned int)(v65 - 48) >= 0xA )
            {
              v66 = (v64 | 0x20) - 87;
              if ( (v64 | 0x20u) - 97 >= 0xFFFFFFF6 )
                v66 = -1;
              if ( v66 >= a4 )
                break;
            }
            _CF = __CFADD__(v56, v66);
            v7 = (__PAIR64__(v61, v56) + v66) >> 32;
            v6 = v56 + v66;
            v9 = (__PAIR64__(v67, __CFADD__(_CF, v61)) + v60) >> 32;
            v8 = __CFADD__(_CF, v61) + v60;
            if ( !--a3 )
              goto LABEL_51;
          }
        }
        else
        {
          while ( 1 )
          {
            LODWORD(v48) = *a2 - 48;
            if ( (unsigned int)v48 >= a4 )
              break;
            v49 = (v6 * (unsigned __int64)a4) >> 32;
            v50 = v6 * a4;
            ++a2;
            v52 = v7 * a4;
            v51 = (v7 * (unsigned __int64)a4) >> 32;
            HIDWORD(v48) = v52 + v49;
            v53 = v51 + __CFADD__(v52, v49) + a4 * v8;
            v54 = a4 * v9
                + (__CFADD__(__CFADD__(v52, v49), a4 * v8) | __CFADD__(v51, __CFADD__(v52, v49) + a4 * v8))
                + ((a4 * (unsigned __int64)(unsigned int)v8) >> 32);
            _CF = __CFADD__(__CFADD__(v50, (_DWORD)v48), v52 + v49);
            v7 = ((unsigned __int64)(unsigned int)v50 + v48) >> 32;
            v6 = v50 + v48;
            v9 = (__PAIR64__(v54, _CF) + v53) >> 32;
            v8 = _CF + v53;
            if ( !--a3 )
              goto LABEL_51;
          }
        }
LABEL_57:
        result = v84;
        goto LABEL_58;
      }
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        v10 = (unsigned int)v8 * (unsigned __int64)a4;
        v11 = a4 * (unsigned __int64)(unsigned int)(v9 >> 31);
        v12 = v6 * (unsigned __int64)a4;
        v13 = v7 * (unsigned __int64)a4;
        v87 = v6 * a4;
        v14 = (unsigned int)v9 * (unsigned __int64)a4 + HIDWORD(v10);
        v16 = v13 + __PAIR64__(v10, HIDWORD(v12));
        v15 = HIDWORD(v16);
        v85 = v16;
        _R0 = __get_CPSR();
        v18 = (__CFADD__(__CFADD__((_DWORD)v13, HIDWORD(v12)), (_DWORD)v10)
             | __CFADD__(HIDWORD(v13), __CFADD__((_DWORD)v13, HIDWORD(v12)) + (_DWORD)v10))
            + v14;
        __asm { MSR             CPSR_f, R0 }
        v22 = __CFADD__(_CF, HIDWORD(v14)) | __CFADD__((_DWORD)v11, _CF + HIDWORD(v14));
        v24 = *a2++;
        v23 = v24;
        v25 = (((__PAIR64__(
                   v11,
                   __CFADD__(__CFADD__((_DWORD)v13, HIDWORD(v12)), (_DWORD)v10)
                 | (unsigned __int8)__CFADD__(HIDWORD(v13), __CFADD__((_DWORD)v13, HIDWORD(v12)) + (_DWORD)v10))
               + v14) >> 32)
             ^ (unsigned int)(v18 >> 31)
             | (__CFADD__(v22, a4 * (v9 >> 31) + HIDWORD(v11))
              + HIDWORD(v11)
              + __CFADD__((_DWORD)v11, HIDWORD(v11))
              + (_DWORD)v11)
             ^ (unsigned int)(v18 >> 31)
             | (v22 + (int)v11 + HIDWORD(v11)) ^ (v18 >> 31)
             | ((__PAIR64__(
                   (v9 >> 31) * a4
                 + (__CFADD__(__CFADD__((_DWORD)v11, HIDWORD(v11)), HIDWORD(v11))
                  | __CFADD__((_DWORD)v11, (v11 + __PAIR64__(v11, HIDWORD(v11))) >> 32))
                 + HIDWORD(v11),
                   __CFADD__(v22, a4 * (v9 >> 31) + HIDWORD(v11)))
               + HIDWORD(v11)
               + __CFADD__((_DWORD)v11, HIDWORD(v11))
               + (unsigned int)v11) >> 32)
             ^ (unsigned int)(v18 >> 31)) != 0;
        v26 = v24 - 48;
        if ( a4 >= 0xB )
        {
          if ( v26 < 0xA )
            goto LABEL_17;
          v26 = (v23 | 0x20) - 87;
          if ( (v23 | 0x20u) - 97 >= 0xFFFFFFF6 )
            v26 = -1;
        }
        if ( v26 >= a4 )
          goto LABEL_57;
LABEL_17:
        if ( v25
          || (v6 = v87 + v26,
              v7 = __CFADD__(v87, v26) + v85,
              v27 = __CFADD__(__CFADD__(v87, v26), v85) + v15,
              v9 = (__PAIR64__(v18, __CFADD__(__CFADD__(v87, v26), v85)) + v15) >> 32,
              v8 = v27,
              ((v18 ^ v9) & ~v18) < 0) )
        {
          v28 = 2;
          goto LABEL_60;
        }
        if ( !--a3 )
          goto LABEL_51;
      }
    }
    if ( --a3 )
    {
      ++a2;
      goto LABEL_7;
    }
LABEL_58:
    result[1] = 1;
    *result = 1;
    return result;
  }
  v29 = a3 - 1;
  if ( a3 == 1 )
    goto LABEL_58;
  v30 = a4 >= 0x10;
  v31 = a2 + 1;
  if ( a4 <= 0x10 )
    v30 = v29 >= 0x20;
  v84 = result;
  if ( !v30 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    if ( a4 > 0xA )
    {
      while ( 1 )
      {
        v73 = (v7 * (unsigned __int64)a4) >> 32;
        v75 = *v31++;
        v74 = v75;
        v78 = v6;
        v76 = (v6 * (unsigned __int64)a4) >> 32;
        v77 = v6 * a4;
        v80 = (__PAIR64__(v7, v78) * a4) >> 32;
        _CF = __CFADD__(__CFADD__(v7 * a4, v76), a4 * v8) | __CFADD__(v73, (__PAIR64__(a4 * v8, v7 * a4) + v76) >> 32);
        v79 = v73 + ((__PAIR64__(a4 * v8, v7 * a4) + v76) >> 32);
        v81 = v75 - 48;
        v82 = a4 * v9 + _CF + ((a4 * (unsigned __int64)(unsigned int)v8) >> 32);
        if ( (unsigned int)(v75 - 48) >= 0xA )
        {
          v83 = (v74 | 0x20) - 97;
          v81 = v83 + 10;
          if ( v83 >= 0xFFFFFFF6 )
            v81 = -1;
          if ( v81 >= a4 )
            break;
        }
        _CF = v77 >= v81;
        v7 = (__PAIR64__(v80, v77) - v81) >> 32;
        v6 = v77 - v81;
        _CF = __PAIR64__(v79, v80) >= !_CF;
        v8 = v79 - !_CF;
        v9 = v82 - !_CF;
        if ( !--v29 )
          goto LABEL_51;
      }
    }
    else
    {
      while ( 1 )
      {
        v68 = *v31 - 48;
        if ( v68 >= a4 )
          break;
        v69 = v7 * (unsigned __int64)a4;
        ++v31;
        *(_QWORD *)&v71 = v6 * (unsigned __int64)a4;
        v70 = v6 * a4;
        DWORD2(v71) = a4 * v8;
        v72 = a4 * v9
            + (__CFADD__(__CFADD__((_DWORD)v69, DWORD1(v71)), a4 * v8)
             | __CFADD__(HIDWORD(v69), (v69 + *(_QWORD *)((char *)&v71 + 4)) >> 32))
            + ((a4 * (unsigned __int64)(unsigned int)v8) >> 32);
        _CF = v70 >= v68;
        v7 = (__PAIR64__((int)v69 + DWORD1(v71), v70) - v68) >> 32;
        v6 = v70 - v68;
        _CF = v69 + *(_QWORD *)((char *)&v71 + 4) >= !_CF;
        v8 = ((v69 + *(_QWORD *)((char *)&v71 + 4)) >> 32) - !_CF;
        v9 = v72 - !_CF;
        if ( !--v29 )
          goto LABEL_51;
      }
    }
    goto LABEL_57;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v32 = (v6 * (unsigned __int64)a4) >> 32;
    v33 = (unsigned int)v8 * (unsigned __int64)a4;
    v88 = v6 * a4;
    v35 = (a4 * (unsigned __int64)(unsigned int)(v9 >> 31)) >> 32;
    v34 = a4 * (v9 >> 31);
    v36 = v7 * (unsigned __int64)a4;
    v37 = (unsigned int)v9 * (unsigned __int64)a4 + HIDWORD(v33);
    v38 = HIDWORD(v36) + __CFADD__((_DWORD)v36, v32) + (_DWORD)v33;
    v86 = (__PAIR64__(v7, v6) * a4) >> 32;
    _R0 = __get_CPSR();
    v40 = (__PAIR64__(
             v34,
             __CFADD__(__CFADD__((_DWORD)v36, v32), (_DWORD)v33)
           | (unsigned __int8)__CFADD__(HIDWORD(v36), __CFADD__((_DWORD)v36, v32) + (_DWORD)v33))
         + v37) >> 32;
    v41 = (__CFADD__(__CFADD__((_DWORD)v36, v32), (_DWORD)v33)
         | __CFADD__(HIDWORD(v36), __CFADD__((_DWORD)v36, v32) + (_DWORD)v33))
        + v37;
    __asm { MSR             CPSR_f, R0 }
    v42 = __PAIR64__(
            v34
          + (__CFADD__(__CFADD__(v34, v35), v35)
           | __CFADD__(v34, (a4 * (unsigned __int64)(unsigned int)(v9 >> 31) + __PAIR64__(v34, v35)) >> 32))
          + v35,
            __CFADD__(__CFADD__(_CF, HIDWORD(v37)) | __CFADD__(v34, _CF + HIDWORD(v37)), v34 + v35))
        + v35
        + __CFADD__(v34, v35)
        + v34;
    v43 = v40 ^ (v41 >> 31)
        | v42 ^ (v41 >> 31)
        | ((__CFADD__(_CF, HIDWORD(v37)) | __CFADD__(v34, _CF + HIDWORD(v37))) + v34 + v35) ^ (v41 >> 31)
        | HIDWORD(v42) ^ (v41 >> 31);
    v45 = *v31++;
    v44 = v45;
    v46 = v43 != 0;
    v47 = v45 - 48;
    if ( a4 >= 0xB )
    {
      if ( v47 < 0xA )
        goto LABEL_33;
      v47 = (v44 | 0x20) - 87;
      if ( (v44 | 0x20u) - 97 >= 0xFFFFFFF6 )
        v47 = -1;
    }
    if ( v47 >= a4 )
      goto LABEL_57;
LABEL_33:
    if ( v46 )
      break;
    v7 = (__PAIR64__(v86, v88) - v47) >> 32;
    v6 = v88 - v47;
    _CF = __CFSUB__(v38, 0, __PAIR64__(v86, v88) >= v47);
    v8 = v38 - (__PAIR64__(v86, v88) < v47);
    v9 = v41 - !_CF;
    if ( (v41 & (v41 ^ v9)) < 0 )
      break;
    if ( !--v29 )
    {
LABEL_51:
      *((_DWORD *)v84 + 2) = v6;
      *((_DWORD *)v84 + 3) = v7;
      *((_DWORD *)v84 + 4) = v8;
      *((_DWORD *)v84 + 5) = v9;
      *v84 = 0;
      return v84;
    }
  }
  v28 = 3;
LABEL_60:
  result = v84;
LABEL_61:
  result[1] = v28;
  *result = 1;
  return result;
}
