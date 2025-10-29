int __fastcall sub_22BD1C(int a1, int a2)
{
  int v3; // r0
  unsigned int v5; // r1
  int v6; // r2
  int v7; // r5
  int v8; // r2
  unsigned int v10; // r1
  unsigned int v11; // r3
  int v12; // r8
  unsigned int v13; // r2
  unsigned int v14; // r2
  int v15; // r0
  int v16; // r6
  int v17; // r2
  const char *v18; // r0
  int v19; // r1
  int v20; // r5
  int v21; // r2
  bool v22; // zf
  int v23; // r2
  char *v24; // r10
  unsigned int v25; // r0
  int v26; // r2
  unsigned __int64 v27; // kr18_8
  int v28; // r7
  unsigned __int8 v29; // r10
  unsigned int v30; // r5
  __int64 v31; // r6
  unsigned int v32; // r3
  int v33; // r1
  int v34; // r0
  char *v35; // r8
  int v36; // r9
  int v37; // r2
  char *v38; // r6
  int v39; // r7
  char *v40; // r5
  int v41; // r11
  bool v42; // zf
  int v43; // r1
  int v44; // r2
  unsigned __int64 v45; // kr20_8
  int v46; // r2
  int v47; // r2
  int v48; // r2
  int v49; // r2
  int v50; // r2
  int v51; // r2
  int v52; // r2
  int v53; // r1
  const char *v54; // r0
  int v55; // r0
  int v56; // r1
  bool v57; // zf
  int v58; // r2
  int v59; // r1
  int v60; // r2
  int v61; // r1
  int v62; // r2
  char *v63; // [sp+4h] [bp-30h]
  _DWORD v64[6]; // [sp+8h] [bp-2Ch] BYREF
  char *v65; // [sp+20h] [bp-14h] BYREF
  int v66; // [sp+24h] [bp-10h]
  char *v67; // [sp+28h] [bp-Ch]
  int v68; // [sp+2Ch] [bp-8h]

  v3 = *(_DWORD *)a1;
  if ( !v3 )
  {
    v8 = *(_DWORD *)(a1 + 16);
    if ( v8 )
      return <str as core::fmt::Display>::fmt(asc_2B15C9, 1, v8);
    else
      return 0;
  }
  v5 = *(_DWORD *)(a1 + 12) + 1;
  *(_DWORD *)(a1 + 12) = v5;
  if ( v5 > 0x1F4 )
  {
    v6 = *(_DWORD *)(a1 + 16);
    if ( !v6 || (v7 = 1, !<str as core::fmt::Display>::fmt(aRecursionLimit, 25, v6)) )
    {
      v7 = 0;
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)a1 = 0;
    }
    return v7;
  }
  v10 = *(_DWORD *)(a1 + 4);
  v11 = *(_DWORD *)(a1 + 8);
  if ( v11 < v10 )
  {
    v12 = *(unsigned __int8 *)(v3 + v11);
    v13 = v11 + 1;
    *(_DWORD *)(a1 + 8) = v11 + 1;
    switch ( v12 )
    {
      case 'B':
        v15 = sub_22A8F4((_DWORD *)a1, a2);
        v7 = 1;
        goto LABEL_98;
      case 'C':
        sub_22A2B4((int)&v65, (int *)a1);
        if ( (_BYTE)v65 )
          goto LABEL_18;
        v64[0] = v67;
        v22 = *(_DWORD *)a1 == 0;
        v64[1] = v68;
        if ( v22 )
          goto LABEL_80;
        sub_22A40C((int)&v65, (int *)a1);
        if ( !v65 )
          goto LABEL_84;
        v64[2] = v65;
        v64[3] = v66;
        v64[4] = v67;
        v64[5] = v68;
        v33 = *(_DWORD *)(a1 + 16);
        if ( !v33 )
          goto LABEL_99;
        v20 = 1;
        if ( <rustc_demangle::v0::Ident as core::fmt::Display>::fmt(&v65, v33) )
          return v20 != 0;
        v34 = *(_DWORD *)(a1 + 16);
        if ( !v34 || core::fmt::Formatter::alternate(v34) )
          goto LABEL_99;
        v7 = 1;
        if ( <core::fmt::Formatter as core::fmt::Write>::write_str(*(_DWORD *)(a1 + 16), asc_2B15DB, 1)
          || core::fmt::num::<impl core::fmt::LowerHex for u64>::fmt(v64, *(_DWORD *)(a1 + 16)) )
        {
          return v7;
        }
        v15 = <core::fmt::Formatter as core::fmt::Write>::write_str(*(_DWORD *)(a1 + 16), asc_2B15DC, 1);
        goto LABEL_98;
      case 'I':
        v7 = 1;
        if ( sub_22BD1C(a1, a2) )
          return v7;
        v22 = a2 == 0;
        if ( a2 )
        {
          v21 = *(_DWORD *)(a1 + 16);
          v22 = v21 == 0;
        }
        if ( !v22 && <str as core::fmt::Display>::fmt(asc_2B13EA, 2, v21) )
          return v7;
        v23 = *(_DWORD *)(a1 + 16);
        if ( v23 )
        {
          v7 = 1;
          if ( <str as core::fmt::Display>::fmt(asc_2B13FA, 1, v23) )
            return v7;
        }
        v7 = 1;
        if ( sub_22BC78((int *)a1) )
          return v7;
        goto LABEL_96;
      case 'M':
      case 'X':
        if ( v13 >= v10 || *(_BYTE *)(v3 + v13) != 115 )
          goto LABEL_88;
        v14 = v11 + 2;
        *(_DWORD *)(a1 + 8) = v11 + 2;
        if ( v11 + 2 < v10 && *(_BYTE *)(v3 + v14) == 95 )
        {
          *(_DWORD *)(a1 + 8) = v11 + 3;
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
            *(_DWORD *)(a1 + 8) = ++v14;
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
          *(_DWORD *)(a1 + 8) = v14 + 1;
          v45 = __CFADD__((_DWORD)v27, 1) + (unsigned __int64)HIDWORD(v27);
          if ( HIDWORD(v45) || (((_DWORD)v27 + 1) & (unsigned int)v45) == 0xFFFFFFFF )
            break;
        }
LABEL_88:
        sub_22A650(a1);
LABEL_89:
        v46 = *(_DWORD *)(a1 + 16);
        if ( v46 )
        {
          v7 = 1;
          if ( <str as core::fmt::Display>::fmt(asc_2B13FA, 1, v46) )
            return v7;
        }
        v7 = 1;
        if ( sub_22C784(a1) )
          return v7;
        if ( v12 != 77 )
        {
          v47 = *(_DWORD *)(a1 + 16);
          if ( v47 )
          {
            if ( <str as core::fmt::Display>::fmt(aAs, 4, v47) )
              return v7;
          }
          if ( sub_22BD1C(a1, 0) )
            return v7;
        }
LABEL_96:
        v48 = *(_DWORD *)(a1 + 16);
        if ( !v48 )
          goto LABEL_99;
        v7 = 1;
        v15 = <str as core::fmt::Display>::fmt(asc_2B13FD, 1, v48);
LABEL_98:
        if ( !v15 )
          goto LABEL_99;
        return v7;
      case 'N':
        if ( v13 >= v10
          || (v24 = (char *)*(unsigned __int8 *)(v3 + v13),
              *(_DWORD *)(a1 + 8) = v11 + 2,
              (unsigned int)(v24 - 65) >= 0x1A)
          && (v25 = (unsigned int)(v24 - 97), v24 = (_BYTE *)&loc_110000, v25 >= 0x1A) )
        {
          v26 = *(_DWORD *)(a1 + 16);
          if ( v26 )
          {
            v20 = 1;
            if ( <str as core::fmt::Display>::fmt(&unk_2B15A9, 16, v26) )
              return v20 != 0;
          }
          v20 = 0;
          *(_BYTE *)(a1 + 4) = 0;
          goto LABEL_42;
        }
        if ( sub_22BD1C(a1, a2) )
        {
LABEL_38:
          v20 = 1;
          return v20 != 0;
        }
        if ( !*(_DWORD *)a1 )
        {
          v50 = *(_DWORD *)(a1 + 16);
          v20 = 0;
          if ( !v50 )
            return v20 != 0;
          if ( <str as core::fmt::Display>::fmt(asc_2B13EA, 2, v50) )
            goto LABEL_38;
          if ( !*(_DWORD *)a1 )
          {
            v44 = *(_DWORD *)(a1 + 16);
            if ( !v44 )
              return v20 != 0;
LABEL_81:
            v20 = <str as core::fmt::Display>::fmt(asc_2B15C9, 1, v44);
            return v20 != 0;
          }
        }
        sub_22A2B4((int)&v65, (int *)a1);
        if ( (_BYTE)v65 )
        {
LABEL_18:
          v16 = BYTE1(v65);
          v17 = *(_DWORD *)(a1 + 16);
          if ( !v17 )
          {
LABEL_24:
            *(_BYTE *)(a1 + 4) = v16;
            v20 = 0;
LABEL_42:
            *(_DWORD *)a1 = 0;
            return v20 != 0;
          }
        }
        else
        {
          if ( !*(_DWORD *)a1 )
          {
LABEL_80:
            v44 = *(_DWORD *)(a1 + 16);
            if ( !v44 )
            {
              v20 = 0;
              return v20 != 0;
            }
            goto LABEL_81;
          }
          v35 = v67;
          v36 = v68;
          sub_22A40C((int)&v65, (int *)a1);
          v38 = v65;
          if ( v65 )
          {
            v39 = v66;
            v40 = v67;
            v41 = v68;
            if ( v24 == (char *)&loc_110000 )
            {
              v42 = v66 == 0;
              if ( !v66 )
                v42 = v68 == 0;
              if ( !v42 )
              {
                v37 = *(_DWORD *)(a1 + 16);
                v42 = v37 == 0;
              }
              if ( !v42 )
              {
                if ( <str as core::fmt::Display>::fmt(asc_2B13EA, 2, v37) )
                  goto LABEL_38;
                v43 = *(_DWORD *)(a1 + 16);
                v68 = v41;
                v67 = v40;
                v66 = v39;
                v65 = v38;
                if ( v43 )
                {
                  v20 = 1;
                  if ( <rustc_demangle::v0::Ident as core::fmt::Display>::fmt(&v65, v43) )
                    return v20 != 0;
                }
              }
              goto LABEL_99;
            }
            v51 = *(_DWORD *)(a1 + 16);
            if ( v51 && <str as core::fmt::Display>::fmt(asc_2B15CF, 3, v51) )
              goto LABEL_38;
            v63 = v40;
            if ( v24 == (char *)67 )
            {
              v52 = *(_DWORD *)(a1 + 16);
              if ( !v52 )
                goto LABEL_124;
              v53 = 7;
              v54 = aClosure;
            }
            else
            {
              if ( v24 != (char *)83 )
              {
                v56 = *(_DWORD *)(a1 + 16);
                v65 = v24;
                if ( !v56 )
                  goto LABEL_124;
                v55 = <char as core::fmt::Display>::fmt(&v65, v56);
LABEL_123:
                v20 = 1;
                if ( v55 )
                  return v20 != 0;
LABEL_124:
                v57 = v39 == 0;
                if ( !v39 )
                  v57 = v41 == 0;
                if ( !v57 )
                {
                  v58 = *(_DWORD *)(a1 + 16);
                  if ( !v58 )
                    goto LABEL_99;
                  v20 = 1;
                  if ( <str as core::fmt::Display>::fmt(asc_2B15D9, 1, v58) )
                    return v20 != 0;
                  v59 = *(_DWORD *)(a1 + 16);
                  v68 = v41;
                  v67 = v63;
                  v66 = v39;
                  v65 = v38;
                  if ( !v59 )
                    goto LABEL_99;
                  if ( <rustc_demangle::v0::Ident as core::fmt::Display>::fmt(&v65, v59) )
                    return v20 != 0;
                }
                v60 = *(_DWORD *)(a1 + 16);
                if ( v60 )
                {
                  v20 = 1;
                  if ( <str as core::fmt::Display>::fmt(asc_2B15DA, 1, v60) )
                    return v20 != 0;
                  v61 = *(_DWORD *)(a1 + 16);
                  v66 = v36;
                  v65 = v35;
                  if ( v61 )
                  {
                    if ( core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt(&v65, v61) )
                      return v20 != 0;
                    v62 = *(_DWORD *)(a1 + 16);
                    if ( v62 )
                    {
                      v20 = 1;
                      if ( <str as core::fmt::Display>::fmt(asc_2B14CC, 1, v62) )
                        return v20 != 0;
                    }
                  }
                }
LABEL_99:
                if ( *(_DWORD *)a1 )
                  --*(_DWORD *)(a1 + 12);
                return 0;
              }
              v52 = *(_DWORD *)(a1 + 16);
              if ( !v52 )
                goto LABEL_124;
              v53 = 4;
              v54 = aShim;
            }
            v55 = <str as core::fmt::Display>::fmt(v54, v53, v52);
            goto LABEL_123;
          }
LABEL_84:
          v16 = (unsigned __int8)v66;
          v17 = *(_DWORD *)(a1 + 16);
          if ( !v17 )
            goto LABEL_24;
        }
        v18 = (const char *)&unk_2B15A9;
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
  v49 = *(_DWORD *)(a1 + 16);
  if ( v49 )
  {
    v7 = 1;
    if ( <str as core::fmt::Display>::fmt(&unk_2B15A9, 16, v49) )
      return v7;
  }
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
  return 0;
}
