int __fastcall sub_21AD6C(int *a1, int a2)
{
  int v2; // r2
  unsigned int v4; // r3
  unsigned int v5; // r0
  unsigned int v6; // r7
  int v7; // r8
  unsigned int v8; // r5
  int *v9; // r2
  int v10; // r5
  int v11; // r5
  int *v13; // r2
  int *v14; // r2
  int *v15; // r2
  int *v16; // r2
  int v17; // r7
  int *v18; // r2
  int *v19; // r2
  int *v20; // r2
  __int64 v21; // r2
  int *v22; // r2
  unsigned int v23; // r1
  char *v24; // r0
  int *v25; // r2
  int v26; // r0
  int v27; // r3
  int v28; // r2
  int v29; // r1
  int *v30; // r2
  int *v31; // r2
  char *v32; // r0
  int *v33; // r2
  char v34; // r6
  char *v35; // r0
  unsigned int v36; // r1
  bool v37; // zf
  int v38; // r0
  char *v39; // r0
  int v40; // r1
  unsigned int v41; // r1
  unsigned int v42; // r1
  int v43; // r0
  int *v44; // r2
  bool v45; // zf
  int *v46; // r2
  int *v47; // r2
  int *v48; // r2
  int v49; // [sp+0h] [bp-8h] BYREF
  int v50; // [sp+4h] [bp-4h]

  v2 = *a1;
  if ( !*a1 )
  {
    v13 = (int *)a1[4];
    if ( v13 )
      return <str as core::fmt::Display>::fmt(asc_29BED9, 1u, v13);
    else
      return 0;
  }
  v4 = a1[1];
  v5 = a1[2];
  if ( v5 >= v4 )
  {
    v14 = (int *)a1[4];
    if ( v14 )
    {
      v11 = 1;
      if ( <str as core::fmt::Display>::fmt(aInvalidSyntax, 0x10u, v14) )
        return v11;
    }
    *((_BYTE *)a1 + 4) = 0;
    *a1 = 0;
    return 0;
  }
  else
  {
    v6 = v5 + 1;
    v7 = *(unsigned __int8 *)(v2 + v5);
    v8 = a1[3] + 1;
    a1[2] = v5 + 1;
    a1[3] = v8;
    if ( v8 <= 0x1F4 )
    {
      switch ( v7 )
      {
        case 'A':
          v18 = (int *)a1[4];
          v17 = 0;
          if ( a2 )
            goto LABEL_37;
          if ( v18 )
          {
            v10 = 1;
            if ( <str as core::fmt::Display>::fmt(asc_29BF1A, 1u, v18) )
              return v10 != 0;
            v18 = (int *)a1[4];
            v17 = 1;
LABEL_37:
            if ( v18 )
            {
              v10 = 1;
              if ( <str as core::fmt::Display>::fmt(asc_29BEEB, 1u, v18) )
                return v10 != 0;
            }
          }
          else
          {
            v17 = 1;
          }
          v10 = 1;
          if ( sub_219050(a1) )
            return v10 != 0;
          v31 = (int *)a1[4];
          if ( v31 )
          {
            v39 = asc_29BEEC;
            goto LABEL_105;
          }
          goto LABEL_120;
        case 'B':
          v10 = 1;
          if ( !sub_217FC8(a1, a2) )
            goto LABEL_125;
          return v10 != 0;
        case 'Q':
        case 'R':
          if ( v7 == 82 && v6 < v4 && *(_BYTE *)(v2 + v6) == 101 )
          {
            a1[2] = v5 + 2;
            v10 = 1;
            if ( sub_21B8DC((int)a1) )
              return v10 != 0;
            goto LABEL_125;
          }
          v16 = (int *)a1[4];
          v17 = 0;
          if ( a2 )
            goto LABEL_30;
          if ( v16 )
          {
            v10 = 1;
            if ( <str as core::fmt::Display>::fmt(asc_29BF1A, 1u, v16) )
              return v10 != 0;
            v16 = (int *)a1[4];
            v17 = 1;
LABEL_30:
            if ( v16 )
            {
              v10 = 1;
              if ( <str as core::fmt::Display>::fmt(asc_29BD07, 1u, v16) )
                return v10 != 0;
            }
          }
          else
          {
            v17 = 1;
          }
          v37 = v7 == 82;
          if ( v7 != 82 )
          {
            v16 = (int *)a1[4];
            v37 = v16 == 0;
          }
          if ( v37 || (v10 = 1, !<str as core::fmt::Display>::fmt(aMut, 4u, v16)) )
          {
            v10 = 1;
            v38 = sub_21AD6C(a1, 1);
            goto LABEL_119;
          }
          return v10 != 0;
        case 'T':
          v19 = (int *)a1[4];
          v17 = 0;
          if ( a2 )
            goto LABEL_46;
          if ( v19 )
          {
            v10 = 1;
            if ( <str as core::fmt::Display>::fmt(asc_29BF1A, 1u, v19) )
              return v10 != 0;
            v19 = (int *)a1[4];
            v17 = 1;
LABEL_46:
            if ( v19 )
            {
              v10 = 1;
              if ( <str as core::fmt::Display>::fmt(asc_29BD10, 1u, v19) )
                return v10 != 0;
            }
          }
          else
          {
            v17 = 1;
          }
          v10 = 1;
          if ( sub_218F8C(a1) )
            return v10 != 0;
          if ( v40 != 1 )
            goto LABEL_103;
          v31 = (int *)a1[4];
          if ( !v31 )
            goto LABEL_120;
          v10 = 1;
          if ( !<str as core::fmt::Display>::fmt(asc_29BD15, 1u, v31) )
            goto LABEL_103;
          return v10 != 0;
        case 'V':
          v17 = 0;
          if ( a2 )
            goto LABEL_108;
          v20 = (int *)a1[4];
          if ( v20 )
          {
            v10 = 1;
            v17 = 1;
            if ( <str as core::fmt::Display>::fmt(asc_29BF1A, 1u, v20) )
              return v10 != 0;
          }
          else
          {
            v17 = 1;
          }
LABEL_108:
          v10 = 1;
          if ( sub_2191A4(a1, 1) )
            return v10 != 0;
          if ( !*a1 )
          {
            v46 = (int *)a1[4];
            if ( v46 )
              v10 = <str as core::fmt::Display>::fmt(asc_29BED9, 1u, v46);
            else
              v10 = 0;
            return v10 != 0;
          }
          v31 = (int *)a1[1];
          v42 = a1[2];
          if ( v42 >= (unsigned int)v31 )
          {
LABEL_114:
            v44 = (int *)a1[4];
            if ( !v44 || !<str as core::fmt::Display>::fmt(aInvalidSyntax, 0x10u, v44) )
            {
LABEL_62:
              v10 = 0;
              *((_BYTE *)a1 + 4) = 0;
              *a1 = 0;
            }
            return v10 != 0;
          }
          v43 = *(unsigned __int8 *)(*a1 + v42);
          a1[2] = v42 + 1;
          switch ( v43 )
          {
            case 'S':
              v47 = (int *)a1[4];
              if ( v47 && <str as core::fmt::Display>::fmt(asc_29BF10, 3u, v47) || sub_218BBC((int)a1) )
                return v10 != 0;
              v31 = (int *)a1[4];
              if ( !v31 )
                goto LABEL_120;
              v41 = 2;
              v39 = asc_29BF13;
              break;
            case 'T':
              v48 = (int *)a1[4];
              if ( v48 )
              {
                v10 = 1;
                if ( <str as core::fmt::Display>::fmt(asc_29BD10, 1u, v48) )
                  return v10 != 0;
              }
              v10 = 1;
              if ( sub_219050(a1) )
                return v10 != 0;
LABEL_103:
              v31 = (int *)a1[4];
              if ( !v31 )
                goto LABEL_120;
              v39 = asc_29BD13;
LABEL_105:
              v10 = 1;
              v41 = 1;
              break;
            case 'U':
LABEL_120:
              v45 = v17 == 0;
              if ( v17 )
              {
                v31 = (int *)a1[4];
                v45 = v31 == 0;
              }
              if ( v45 )
                goto LABEL_125;
              v32 = asc_29BDDC;
LABEL_124:
              v10 = 1;
              if ( !<str as core::fmt::Display>::fmt(v32, 1u, v31) )
              {
LABEL_125:
                if ( *a1 )
                  --a1[3];
                return 0;
              }
              return v10 != 0;
            default:
              goto LABEL_114;
          }
          v38 = <str as core::fmt::Display>::fmt(v39, v41, v31);
          goto LABEL_119;
        case 'a':
        case 'i':
        case 'l':
        case 'n':
        case 's':
        case 'x':
          if ( v6 >= v4 )
            goto LABEL_9;
          if ( *(_BYTE *)(v2 + v6) != 110 )
            goto LABEL_9;
          v9 = (int *)a1[4];
          a1[2] = v5 + 2;
          if ( !v9 )
            goto LABEL_9;
          v10 = 1;
          if ( !<str as core::fmt::Display>::fmt(asc_29BDDB, 1u, v9) )
            goto LABEL_9;
          return v10 != 0;
        case 'b':
          sub_21750C(&v49, (int)a1);
          if ( !v49 )
            goto LABEL_79;
          if ( sub_2172A8(v49, v50) != 1 )
            goto LABEL_59;
          if ( v21 )
          {
            if ( v21 != 1 )
            {
LABEL_59:
              v25 = (int *)a1[4];
              goto LABEL_60;
            }
            v22 = (int *)a1[4];
            if ( !v22 )
              goto LABEL_125;
            v23 = 4;
            v24 = aTrue_0;
          }
          else
          {
            v22 = (int *)a1[4];
            if ( !v22 )
              goto LABEL_125;
            v23 = 5;
            v24 = aFalse;
          }
          v10 = 1;
          if ( !<str as core::fmt::Display>::fmt(v24, v23, v22) )
            goto LABEL_125;
          return v10 != 0;
        case 'c':
          sub_21750C(&v49, (int)a1);
          if ( !v49 )
          {
LABEL_79:
            v33 = (int *)a1[4];
            v34 = v50;
            if ( !v33 )
              goto LABEL_85;
            v35 = aInvalidSyntax;
            if ( (_BYTE)v50 )
              v35 = aRecursionLimit;
            v36 = 25;
            if ( !(_BYTE)v50 )
              v36 = 16;
            v10 = 1;
            if ( !<str as core::fmt::Display>::fmt(v35, v36, v33) )
            {
LABEL_85:
              v10 = 0;
              *((_BYTE *)a1 + 4) = v34;
              *a1 = 0;
            }
            return v10 != 0;
          }
          v26 = sub_2172A8(v49, v50);
          v29 = v28;
          v25 = (int *)a1[4];
          if ( v26 && !v27 && (v29 ^ 0xD800u) - 1114112 >= 0xFFEF0800 && v29 != 1114112 )
          {
            v10 = 1;
            if ( sub_218214((_DWORD *)a1[4], v29) )
              return v10 != 0;
            goto LABEL_125;
          }
LABEL_60:
          if ( v25 )
          {
            v10 = 1;
            if ( <str as core::fmt::Display>::fmt(aInvalidSyntax, 0x10u, v25) )
              return v10 != 0;
          }
          goto LABEL_62;
        case 'e':
          v30 = (int *)a1[4];
          v17 = 0;
          if ( a2 )
            goto LABEL_74;
          if ( v30 )
          {
            v10 = 1;
            if ( <str as core::fmt::Display>::fmt(asc_29BF1A, 1u, v30) )
              return v10 != 0;
            v30 = (int *)a1[4];
            v17 = 1;
LABEL_74:
            if ( v30 )
            {
              v10 = 1;
              if ( <str as core::fmt::Display>::fmt(asc_29BD04, 1u, v30) )
                return v10 != 0;
            }
          }
          else
          {
            v17 = 1;
          }
          v38 = sub_21B8DC((int)a1);
          v10 = 1;
LABEL_119:
          if ( !v38 )
            goto LABEL_120;
          return v10 != 0;
        case 'h':
        case 'j':
        case 'm':
        case 'o':
        case 't':
        case 'y':
LABEL_9:
          v10 = 1;
          if ( sub_21B68C((int)a1, v7) )
            return v10 != 0;
          goto LABEL_125;
        case 'p':
          v31 = (int *)a1[4];
          if ( !v31 )
            goto LABEL_125;
          v32 = asc_29BE75;
          goto LABEL_124;
        default:
          goto LABEL_59;
      }
    }
    v15 = (int *)a1[4];
    if ( v15 )
    {
      v11 = 1;
      if ( <str as core::fmt::Display>::fmt(aRecursionLimit, 0x19u, v15) )
        return v11;
    }
    *((_BYTE *)a1 + 4) = 1;
    *a1 = 0;
    return 0;
  }
}
