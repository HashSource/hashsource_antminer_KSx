int __fastcall core::num::dec2flt::parse::parse_number(int a1, unsigned __int8 *a2, int a3, char a4)
{
  int v4; // r10
  unsigned __int8 *v5; // r8
  int v6; // r5
  unsigned int v7; // r4
  unsigned int v8; // r12
  int v9; // r6
  unsigned int v10; // lr
  unsigned int v11; // lr
  int v12; // r7
  unsigned int v13; // r6
  int v14; // r9
  int v15; // r9
  unsigned __int8 *v16; // r11
  unsigned int v17; // r7
  int v18; // lr
  int v19; // r10
  unsigned __int8 *v20; // r0
  int v21; // r11
  int v22; // r5
  int v23; // r0
  _BYTE *v24; // r7
  int v26; // r8
  int v27; // r10
  unsigned int v28; // r6
  unsigned int v29; // r3
  int v30; // r8
  int v31; // r4
  char v32; // r0
  unsigned int v33; // lr
  int v34; // r3
  int v36; // r0
  int v38; // r4
  unsigned __int8 *v39; // r6
  bool v41; // zf
  int v45; // r11
  unsigned __int8 *v46; // r10
  unsigned int v47; // r7
  unsigned int v48; // kr30_4
  __int64 v49; // r0
  int v50; // r4
  int v51; // r1
  int v52; // r7
  unsigned int v53; // r0
  unsigned int v54; // kr38_4
  unsigned __int64 v56; // kr48_8
  unsigned __int64 v57; // kr50_8
  unsigned __int64 v58; // kr58_8
  unsigned __int64 v59; // kr68_8
  int v60; // [sp+0h] [bp-10h]
  int v61; // [sp+0h] [bp-10h]
  char v62; // [sp+4h] [bp-Ch]
  char v63; // [sp+4h] [bp-Ch]
  int v64; // [sp+8h] [bp-8h]
  int v65; // [sp+8h] [bp-8h]
  int v67; // [sp+Ch] [bp-4h]

  v4 = a1;
  if ( a3 )
  {
    v5 = &a2[a3];
    v6 = 0;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = a2[-v6];
      v10 = (unsigned __int8)(v9 - 48);
      if ( v10 > 9 )
        break;
      --v6;
      v8 = (10LL * v7 + __PAIR64__(10 * v8, v10)) >> 32;
      v11 = 10 * v7 + v10;
      v7 = v11;
      if ( !(a3 + v6) )
      {
        v12 = 0;
        v13 = 0;
        v14 = 0;
        goto LABEL_12;
      }
    }
    v12 = a3 + v6;
    if ( v9 == 46 )
    {
      v15 = a3 + v6;
      v16 = &a2[-v6];
      v13 = a3 + v6 - 1;
      v5 = &a2[-v6 + 1];
      if ( v13 < 8 )
      {
        v11 = v7;
        if ( a3 + v6 == 1 )
          goto LABEL_77;
      }
      else
      {
        v64 = a3 + v6;
        v17 = *(_DWORD *)&a2[-v6 + 5];
        v18 = *(_DWORD *)v5 - 808464432;
        v19 = __CFADD__(*(_DWORD *)v5, -808464432) + v17 - 808464433;
        if ( (((*(_DWORD *)v5 + 1179010630)
             | v18
             | ((__PAIR64__(v17, *(_DWORD *)v5) + 0x4646464646464646LL) >> 32)
             | (unsigned int)v19)
            & 0x80808080) != 0 )
        {
          v20 = &a2[-v6 + 1];
          v4 = a1;
          goto LABEL_34;
        }
        v5 = v16 + 9;
        v56 = 10 * __PAIR64__(v19, v18) + (__PAIR64__(v19, v18) >> 8);
        v13 = v15 - 9;
        v57 = 100000000LL * v7
            + __PAIR64__(
                100000000 * v8,
                10000 * BYTE2(v56)
              + (unsigned __int8)__ROR4__(HIDWORD(v56), 16)
              + 100 * BYTE4(v56)
              + 1000000 * (unsigned int)(unsigned __int8)(10 * v18 + BYTE1(v18)));
        v8 = HIDWORD(v57);
        if ( (unsigned int)(v15 - 9) < 8 )
        {
          v11 = v57;
        }
        else
        {
          v58 = *(_QWORD *)v5 - 0x3030303030303030LL;
          if ( ((*(_DWORD *)v5 + 1179010630) | (unsigned int)v58) & 0x80808080
             | (((unsigned __int64)(*(_QWORD *)v5 + 0x4646464646464646LL) >> 32) | HIDWORD(v58)) & 0x80808080 )
          {
            v20 = v16 + 9;
            v7 = v57;
            v4 = a1;
LABEL_34:
            v5 = &v20[v13];
            while ( 1 )
            {
              v33 = (unsigned __int8)(*v20 - 48);
              if ( v33 > 9 )
                break;
              --v13;
              ++v20;
              v8 = (10LL * v7 + __PAIR64__(10 * v8, v33)) >> 32;
              v11 = 10 * v7 + v33;
              v7 = v11;
              if ( !v13 )
              {
                v13 = 0;
                goto LABEL_39;
              }
            }
            v11 = v7;
            v5 = v20;
LABEL_39:
            v12 = v64;
LABEL_78:
            v14 = v13 - a3 - v6 + 1;
            v67 = v14 >> 31;
            v65 = v12;
            v21 = a3 - v13 + v6 - 1 + a3 - v12;
            if ( !v21 )
              goto LABEL_69;
            goto LABEL_13;
          }
          v5 = v16 + 17;
          v13 = v15 - 17;
          v59 = 100000000LL * (unsigned int)v57
              + __PAIR64__(
                  100000000 * HIDWORD(v57),
                  10000 * (unsigned __int8)((10 * (_DWORD)v58 + (unsigned int)(v58 >> 8)) >> 16)
                + (unsigned __int8)__ROR4__((10 * v58 + (v58 >> 8)) >> 32, 16)
                + 100 * (unsigned __int8)((10 * v58 + (v58 >> 8)) >> 32)
                + 1000000 * (unsigned int)(unsigned __int8)(10 * v58 + BYTE1(v58)));
          v8 = HIDWORD(v59);
          v11 = v59;
        }
        v4 = a1;
        v12 = a3 + v6;
        if ( !v13 )
        {
LABEL_77:
          v13 = 0;
          goto LABEL_78;
        }
      }
      v20 = v5;
      v7 = v11;
      v64 = v12;
      goto LABEL_34;
    }
    v5 = &a2[-v6];
    v14 = 0;
    v11 = v7;
    v13 = a3 + v6;
  }
  else
  {
    v12 = 0;
    v11 = 0;
    v8 = 0;
    v13 = 0;
    v5 = a2;
    v14 = 0;
  }
LABEL_12:
  v67 = 0;
  v65 = v12;
  v21 = a3 - v12;
  if ( a3 == v12 )
    goto LABEL_69;
LABEL_13:
  if ( v13 )
  {
    if ( (*v5 | 0x20) == 0x65 )
    {
      v22 = v13 - 1;
      if ( v13 != 1 )
      {
        v24 = v5 + 1;
        v23 = v5[1];
        v60 = v23;
        _ZF = v23 == 45;
        if ( v23 != 45 )
          _ZF = v23 == 43;
        if ( _ZF )
        {
          v22 = v13 - 2;
          if ( v13 == 2 )
            goto LABEL_69;
          v23 = v5[2];
          v24 = v5 + 2;
        }
        if ( (unsigned int)(v23 - 48) <= 9 )
        {
          v26 = v4;
          v27 = 0;
          v28 = 0;
          v62 = a4;
          while ( 1 )
          {
            v29 = (unsigned __int8)(*v24 - 48);
            if ( v29 > 9 )
              break;
            if ( __SPAIR64__(v28, v27) <= 0xFFFF )
            {
              v28 = (10LL * (unsigned int)v27 + __PAIR64__(10 * v28, v29)) >> 32;
              v27 = 10 * v27 + v29;
            }
            --v22;
            ++v24;
            if ( !v22 )
            {
              v22 = 0;
              break;
            }
          }
          v34 = -v27;
          v31 = (unsigned __int64)-__SPAIR64__(v28, v27) >> 32;
          if ( v60 != 45 )
          {
            v34 = v27;
            v31 = v28;
          }
          _CF = __CFADD__(v34, v14);
          v14 += v34;
          v4 = v26;
          v30 = v34;
          v67 += _CF + v31;
          a4 = v62;
          if ( v21 >= 20 )
            goto LABEL_44;
LABEL_31:
          v32 = 0;
          goto LABEL_68;
        }
      }
LABEL_69:
      *(_BYTE *)(v4 + 16) = 2;
      return 2;
    }
    v30 = 0;
    v22 = 1;
    v31 = 0;
    if ( v21 < 20 )
      goto LABEL_31;
  }
  else
  {
    v22 = 0;
    v30 = 0;
    v31 = 0;
    if ( v21 < 20 )
      goto LABEL_31;
  }
LABEL_44:
  v61 = v31;
  v63 = a4;
  if ( !a3 )
    goto LABEL_52;
  v36 = v21 - 19;
  _R3 = 47;
  v38 = a3;
  v39 = a2;
  do
  {
    _R7 = *v39;
    v41 = _R7 == 46;
    if ( _R7 != 46 )
      v41 = _R7 == 48;
    if ( !v41 )
      break;
    __asm { UQSUB8          R7, R7, R3 }
    --v38;
    ++v39;
    v36 -= (unsigned __int8)_R7;
  }
  while ( v38 );
  if ( v36 < 1 )
  {
    v32 = 0;
    a4 = v63;
  }
  else
  {
LABEL_52:
    v45 = v4;
    v46 = &a2[a3];
    v11 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( !a3 )
      {
        v50 = v30;
        goto LABEL_59;
      }
      v47 = (unsigned __int8)(*a2 - 48);
      if ( v47 > 9 )
        break;
      --a3;
      ++a2;
      v48 = 10 * v11 + v47;
      v8 = (10LL * v11 + __PAIR64__(10 * v8, v47)) >> 32;
      v11 = v48;
      if ( __PAIR64__(v8, v48) >= 0xDE0B6B3A7640000LL )
      {
        v11 = v48;
        a4 = v63;
        v4 = v45;
        LODWORD(v49) = a3 - v65;
        goto LABEL_67;
      }
    }
    v50 = v30;
    v46 = a2;
LABEL_59:
    v51 = -1;
    while ( 1 )
    {
      v52 = a3 + v51;
      if ( !(a3 + v51) )
        break;
      v53 = (unsigned __int8)(v46[-v51] - 48);
      if ( v53 > 9 )
        goto LABEL_66;
      --v51;
      v54 = 10 * v11 + v53;
      v8 = (10LL * v11 + __PAIR64__(10 * v8, v53)) >> 32;
      v11 = v54;
      if ( __PAIR64__(v8, v54) >= 0xDE0B6B3A7640000LL )
      {
        v52 = a3 + v51;
        v11 = v54;
        goto LABEL_66;
      }
    }
    v52 = 0;
LABEL_66:
    LODWORD(v49) = v52 - (a3 - 1);
    v4 = v45;
    a4 = v63;
    v30 = v50;
LABEL_67:
    HIDWORD(v49) = v61;
    v14 = v30 + v49;
    v67 = (__PAIR64__((int)v49 >> 31, v30) + v49) >> 32;
    v32 = 1;
  }
LABEL_68:
  if ( v22 )
    goto LABEL_69;
  *(_BYTE *)(v4 + 17) = v32;
  *(_BYTE *)(v4 + 16) = a4;
  *(_DWORD *)v4 = v14;
  *(_DWORD *)(v4 + 4) = v67;
  *(_DWORD *)(v4 + 8) = v11;
  *(_DWORD *)(v4 + 12) = v8;
  return v67;
}
