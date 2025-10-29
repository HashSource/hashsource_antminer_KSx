int __fastcall sub_2191A4(int *a1, int a2)
{
  int v3; // r0
  unsigned int v5; // r1
  int *v6; // r2
  int v7; // r5
  int *v8; // r2
  unsigned int v10; // r1
  unsigned int v11; // r3
  int v12; // r8
  unsigned int v13; // r2
  unsigned int v14; // r2
  int v15; // r0
  int v16; // r6
  int *v17; // r2
  char *v18; // r0
  unsigned int v19; // r1
  int v20; // r5
  int *v21; // r2
  bool v22; // zf
  int *v23; // r2
  int v24; // r10
  unsigned int v25; // r0
  int *v26; // r2
  unsigned __int64 v27; // kr18_8
  int v28; // r7
  unsigned __int8 v29; // r10
  unsigned int v30; // r5
  __int64 v31; // r6
  unsigned int v32; // r3
  int *v33; // r1
  int v34; // r0
  unsigned __int64 v35; // r8
  int *v36; // r2
  __int64 v37; // r6
  unsigned int v38; // r5
  unsigned int v39; // r11
  bool v40; // zf
  int *v41; // r1
  int *v42; // r2
  unsigned __int64 v43; // kr28_8
  int *v44; // r2
  int *v45; // r2
  int *v46; // r2
  int *v47; // r2
  int *v48; // r2
  int *v49; // r2
  int *v50; // r2
  unsigned int v51; // r1
  char *v52; // r0
  int v53; // r0
  int *v54; // r1
  bool v55; // zf
  int *v56; // r2
  int *v57; // r1
  int *v58; // r2
  int v59; // r1
  int *v60; // r2
  unsigned int v61; // [sp+4h] [bp-30h]
  __int64 v62[3]; // [sp+8h] [bp-2Ch] BYREF
  __int64 v63; // [sp+20h] [bp-14h] BYREF
  unsigned __int64 v64; // [sp+28h] [bp-Ch]

  v3 = *a1;
  if ( !v3 )
  {
    v8 = (int *)a1[4];
    if ( v8 )
      return <str as core::fmt::Display>::fmt(asc_29BED9, 1u, v8);
    else
      return 0;
  }
  v5 = a1[3] + 1;
  a1[3] = v5;
  if ( v5 > 0x1F4 )
  {
    v6 = (int *)a1[4];
    if ( !v6 || (v7 = 1, !<str as core::fmt::Display>::fmt(aRecursionLimit, 0x19u, v6)) )
    {
      v7 = 0;
      *((_BYTE *)a1 + 4) = 1;
      *a1 = 0;
    }
    return v7;
  }
  v10 = a1[1];
  v11 = a1[2];
  if ( v11 < v10 )
  {
    v12 = *(unsigned __int8 *)(v3 + v11);
    v13 = v11 + 1;
    a1[2] = v11 + 1;
    switch ( v12 )
    {
      case 'B':
        v15 = sub_217D7C(a1, a2);
        v7 = 1;
        goto LABEL_98;
      case 'C':
        sub_21773C((int)&v63, a1);
        if ( (_BYTE)v63 )
          goto LABEL_18;
        v62[0] = v64;
        if ( !*a1 )
          goto LABEL_80;
        sub_217894((int)&v63, (char **)a1);
        if ( !(_DWORD)v63 )
          goto LABEL_84;
        v62[1] = v63;
        v62[2] = v64;
        v33 = (int *)a1[4];
        if ( !v33 )
          goto LABEL_99;
        v20 = 1;
        if ( <rustc_demangle::v0::Ident as core::fmt::Display>::fmt((char **)&v63, v33) )
          return v20 != 0;
        v34 = a1[4];
        if ( !v34 || core::fmt::Formatter::alternate(v34) )
          goto LABEL_99;
        v7 = 1;
        if ( <core::fmt::Formatter as core::fmt::Write>::write_str((_DWORD *)a1[4])
          || core::fmt::num::<impl core::fmt::LowerHex for u64>::fmt(v62, a1[4]) )
        {
          return v7;
        }
        v15 = <core::fmt::Formatter as core::fmt::Write>::write_str((_DWORD *)a1[4]);
        goto LABEL_98;
      case 'I':
        v7 = 1;
        if ( sub_2191A4((int)a1, a2) )
          return v7;
        v22 = a2 == 0;
        if ( a2 )
        {
          v21 = (int *)a1[4];
          v22 = v21 == 0;
        }
        if ( !v22 && <str as core::fmt::Display>::fmt(asc_29BCFA, 2u, v21) )
          return v7;
        v23 = (int *)a1[4];
        if ( v23 )
        {
          v7 = 1;
          if ( <str as core::fmt::Display>::fmt(asc_29BD0A, 1u, v23) )
            return v7;
        }
        v7 = 1;
        if ( sub_219100(a1) )
          return v7;
        goto LABEL_96;
      case 'M':
      case 'X':
        if ( v13 >= v10 || *(_BYTE *)(v3 + v13) != 115 )
          goto LABEL_88;
        v14 = v11 + 2;
        a1[2] = v11 + 2;
        if ( v11 + 2 < v10 && *(_BYTE *)(v3 + v14) == 95 )
        {
          a1[2] = v11 + 3;
        }
        else
        {
          v27 = 0;
          while ( 1 )
          {
            if ( v14 >= v10 )
              goto LABEL_102;
            v28 = *(unsigned __int8 *)(v3 + v14);
            if ( v28 == 95 )
              break;
            v29 = v28 - 48;
            if ( (unsigned __int8)(v28 - 48) >= 0xAu )
            {
              if ( (unsigned __int8)(v28 - 97) >= 0x1Au )
              {
                if ( (unsigned __int8)(v28 - 65) >= 0x1Au )
                  goto LABEL_102;
                v29 = v28 - 29;
              }
              else
              {
                v29 = v28 - 87;
              }
            }
            v30 = 62 * v27;
            a1[2] = ++v14;
            LODWORD(v31) = (62 * (unsigned __int64)HIDWORD(v27)) >> 32;
            v32 = (62 * v27) >> 32;
            if ( !is_mul_ok(HIDWORD(v27), 0x3Eu) )
              LODWORD(v31) = 1;
            HIDWORD(v31) = (((62 * (unsigned __int64)(unsigned int)v27) >> 32) + (unsigned int)(62 * HIDWORD(v27))) >> 32;
            if ( !v31 )
            {
              v27 = __PAIR64__(v32, v30) + v29;
              if ( !__CFADD__(__CFADD__(v30, v29), v32) )
                continue;
            }
            goto LABEL_102;
          }
          a1[2] = v14 + 1;
          v43 = __CFADD__((_DWORD)v27, 1) + (unsigned __int64)HIDWORD(v27);
          if ( HIDWORD(v43) || (((_DWORD)v27 + 1) & (unsigned int)v43) == 0xFFFFFFFF )
            break;
        }
LABEL_88:
        sub_217AD8((int)a1);
LABEL_89:
        v44 = (int *)a1[4];
        if ( v44 )
        {
          v7 = 1;
          if ( <str as core::fmt::Display>::fmt(asc_29BD0A, 1u, v44) )
            return v7;
        }
        v7 = 1;
        if ( sub_219C0C((int)a1) )
          return v7;
        if ( v12 != 77 )
        {
          v45 = (int *)a1[4];
          if ( v45 )
          {
            if ( <str as core::fmt::Display>::fmt(aAs, 4u, v45) )
              return v7;
          }
          if ( sub_2191A4((int)a1, 0) )
            return v7;
        }
LABEL_96:
        v46 = (int *)a1[4];
        if ( !v46 )
          goto LABEL_99;
        v7 = 1;
        v15 = <str as core::fmt::Display>::fmt(asc_29BD0D, 1u, v46);
LABEL_98:
        if ( !v15 )
          goto LABEL_99;
        return v7;
      case 'N':
        if ( v13 >= v10
          || (v24 = *(unsigned __int8 *)(v3 + v13), a1[2] = v11 + 2, (unsigned int)(v24 - 65) >= 0x1A)
          && (v25 = v24 - 97, v24 = 1114112, v25 >= 0x1A) )
        {
          v26 = (int *)a1[4];
          if ( v26 )
          {
            v20 = 1;
            if ( <str as core::fmt::Display>::fmt(aInvalidSyntax, 0x10u, v26) )
              return v20 != 0;
          }
          v20 = 0;
          *((_BYTE *)a1 + 4) = 0;
          goto LABEL_42;
        }
        if ( sub_2191A4((int)a1, a2) )
        {
LABEL_38:
          v20 = 1;
          return v20 != 0;
        }
        if ( !*a1 )
        {
          v48 = (int *)a1[4];
          v20 = 0;
          if ( !v48 )
            return v20 != 0;
          if ( <str as core::fmt::Display>::fmt(asc_29BCFA, 2u, v48) )
            goto LABEL_38;
          if ( !*a1 )
          {
            v42 = (int *)a1[4];
            if ( !v42 )
              return v20 != 0;
LABEL_81:
            v20 = <str as core::fmt::Display>::fmt(asc_29BED9, 1u, v42);
            return v20 != 0;
          }
        }
        sub_21773C((int)&v63, a1);
        if ( (_BYTE)v63 )
        {
LABEL_18:
          v16 = BYTE1(v63);
          v17 = (int *)a1[4];
          if ( !v17 )
          {
LABEL_24:
            *((_BYTE *)a1 + 4) = v16;
            v20 = 0;
LABEL_42:
            *a1 = 0;
            return v20 != 0;
          }
        }
        else
        {
          if ( !*a1 )
          {
LABEL_80:
            v42 = (int *)a1[4];
            if ( !v42 )
            {
              v20 = 0;
              return v20 != 0;
            }
            goto LABEL_81;
          }
          v35 = v64;
          sub_217894((int)&v63, (char **)a1);
          LODWORD(v37) = v63;
          if ( (_DWORD)v63 )
          {
            HIDWORD(v37) = HIDWORD(v63);
            v39 = HIDWORD(v64);
            v38 = v64;
            if ( v24 == 1114112 )
            {
              v40 = HIDWORD(v63) == 0;
              if ( !HIDWORD(v63) )
                v40 = HIDWORD(v64) == 0;
              if ( !v40 )
              {
                v36 = (int *)a1[4];
                v40 = v36 == 0;
              }
              if ( !v40 )
              {
                if ( <str as core::fmt::Display>::fmt(asc_29BCFA, 2u, v36) )
                  goto LABEL_38;
                v41 = (int *)a1[4];
                v64 = __PAIR64__(v39, v38);
                v63 = v37;
                if ( v41 )
                {
                  v20 = 1;
                  if ( <rustc_demangle::v0::Ident as core::fmt::Display>::fmt((char **)&v63, v41) )
                    return v20 != 0;
                }
              }
              goto LABEL_99;
            }
            v49 = (int *)a1[4];
            if ( v49 && <str as core::fmt::Display>::fmt(asc_29BEDF, 3u, v49) )
              goto LABEL_38;
            v61 = v38;
            if ( v24 == 67 )
            {
              v50 = (int *)a1[4];
              if ( !v50 )
                goto LABEL_124;
              v51 = 7;
              v52 = aClosure;
            }
            else
            {
              if ( v24 != 83 )
              {
                v54 = (int *)a1[4];
                LODWORD(v63) = v24;
                if ( !v54 )
                  goto LABEL_124;
                v53 = <char as core::fmt::Display>::fmt((unsigned int *)&v63, v54);
LABEL_123:
                v20 = 1;
                if ( v53 )
                  return v20 != 0;
LABEL_124:
                v55 = HIDWORD(v37) == 0;
                if ( !HIDWORD(v37) )
                  v55 = v39 == 0;
                if ( !v55 )
                {
                  v56 = (int *)a1[4];
                  if ( !v56 )
                    goto LABEL_99;
                  v20 = 1;
                  if ( <str as core::fmt::Display>::fmt(asc_29BEE9, 1u, v56) )
                    return v20 != 0;
                  v57 = (int *)a1[4];
                  v64 = __PAIR64__(v39, v61);
                  v63 = v37;
                  if ( !v57 )
                    goto LABEL_99;
                  if ( <rustc_demangle::v0::Ident as core::fmt::Display>::fmt((char **)&v63, v57) )
                    return v20 != 0;
                }
                v58 = (int *)a1[4];
                if ( v58 )
                {
                  v20 = 1;
                  if ( <str as core::fmt::Display>::fmt(asc_29BEEA, 1u, v58) )
                    return v20 != 0;
                  v59 = a1[4];
                  v63 = v35;
                  if ( v59 )
                  {
                    if ( core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt((unsigned int *)&v63, v59) )
                      return v20 != 0;
                    v60 = (int *)a1[4];
                    if ( v60 )
                    {
                      v20 = 1;
                      if ( <str as core::fmt::Display>::fmt(asc_29BDDC, 1u, v60) )
                        return v20 != 0;
                    }
                  }
                }
LABEL_99:
                if ( *a1 )
                  --a1[3];
                return 0;
              }
              v50 = (int *)a1[4];
              if ( !v50 )
                goto LABEL_124;
              v51 = 4;
              v52 = aShim;
            }
            v53 = <str as core::fmt::Display>::fmt(v52, v51, v50);
            goto LABEL_123;
          }
LABEL_84:
          v16 = BYTE4(v63);
          v17 = (int *)a1[4];
          if ( !v17 )
            goto LABEL_24;
        }
        v18 = aInvalidSyntax;
        if ( v16 )
          v18 = aRecursionLimit;
        v19 = 25;
        if ( !v16 )
          v19 = 16;
        v20 = 1;
        if ( <str as core::fmt::Display>::fmt(v18, v19, v17) )
          return v20 != 0;
        goto LABEL_24;
      case 'Y':
        goto LABEL_89;
      default:
        break;
    }
  }
LABEL_102:
  v47 = (int *)a1[4];
  if ( v47 )
  {
    v7 = 1;
    if ( <str as core::fmt::Display>::fmt(aInvalidSyntax, 0x10u, v47) )
      return v7;
  }
  *((_BYTE *)a1 + 4) = 0;
  *a1 = 0;
  return 0;
}
