int __fastcall sub_219C0C(int a1)
{
  int v1; // r7
  unsigned int v3; // r5
  unsigned int v4; // r6
  int v5; // r8
  unsigned int v6; // r10
  char v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r0
  int *v10; // r2
  int v11; // r9
  int *v12; // r2
  int *v13; // r2
  char *v14; // r0
  int *v15; // r2
  unsigned int v16; // r1
  char *v17; // r0
  int *v18; // r2
  int *v19; // r2
  int v20; // r7
  int *v22; // r6
  unsigned int v23; // r1
  char *v24; // r0
  int *v25; // r2
  int v26; // r1
  int *v27; // r2
  char v28; // r5
  char *v29; // r0
  unsigned int v30; // r1
  int v31; // r0
  int *v32; // r2
  unsigned int v33; // r1
  int v34; // r1
  __int64 v35; // r6
  int *v36; // r2
  int *v37; // r2
  int v38; // r1
  int *v39; // r2
  int v40; // r0
  int *v41; // r2
  bool v42; // zf
  char v43; // [sp+0h] [bp-10h] BYREF
  char v44; // [sp+1h] [bp-Fh]
  __int64 v45; // [sp+8h] [bp-8h]

  v1 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    v15 = *(int **)(a1 + 16);
    if ( !v15 )
      return 0;
    v16 = 1;
    v17 = asc_29BED9;
    return <str as core::fmt::Display>::fmt(v17, v16, v15);
  }
  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 >= v3 )
  {
    v18 = *(int **)(a1 + 16);
    if ( !v18 || (v11 = 1, !<str as core::fmt::Display>::fmt(aInvalidSyntax, 0x10u, v18)) )
    {
LABEL_21:
      *(_BYTE *)(a1 + 4) = 0;
LABEL_27:
      *(_DWORD *)a1 = 0;
      return 0;
    }
    return v11;
  }
  v5 = *(unsigned __int8 *)(v1 + v4);
  v6 = v4 + 1;
  *(_DWORD *)(a1 + 8) = v4 + 1;
  v7 = v5 - 97;
  v8 = (unsigned __int8)(v5 - 97);
  if ( v8 >= 0x1A || ((0x3BCFBBFu >> v8) & 1) == 0 )
  {
    v9 = *(_DWORD *)(a1 + 12) + 1;
    *(_DWORD *)(a1 + 12) = v9;
    if ( v9 <= 0x1F4 )
    {
      switch ( v5 )
      {
        case 'A':
        case 'S':
          v10 = *(int **)(a1 + 16);
          if ( v10 )
          {
            v11 = 1;
            if ( <str as core::fmt::Display>::fmt(asc_29BEEB, 1u, v10) )
              return v11;
          }
          v11 = 1;
          if ( sub_219C0C(a1) )
            return v11;
          if ( v5 == 65 )
          {
            v12 = *(int **)(a1 + 16);
            if ( v12 )
            {
              if ( <str as core::fmt::Display>::fmt(asc_29BEF0, 2u, v12) )
                return v11;
            }
            v11 = 1;
            if ( sub_21AD6C((int *)a1, 1) )
              return v11;
          }
          v13 = *(int **)(a1 + 16);
          if ( !v13 )
            goto LABEL_87;
          v14 = asc_29BEEC;
          goto LABEL_69;
        case 'B':
          v31 = sub_217B44((_DWORD *)a1);
          goto LABEL_85;
        case 'D':
          v32 = *(int **)(a1 + 16);
          if ( v32 )
          {
            v11 = 1;
            if ( <str as core::fmt::Display>::fmt(aDyn, 4u, v32) )
              return v11;
          }
          v11 = 1;
          if ( sub_218540(a1) )
            return v11;
          if ( *(_DWORD *)a1
            && (v33 = *(_DWORD *)(a1 + 8), v33 < *(_DWORD *)(a1 + 4))
            && *(_BYTE *)(*(_DWORD *)a1 + v33) == 76 )
          {
            *(_DWORD *)(a1 + 8) = v33 + 1;
            sub_21761C((int)&v43, (int *)a1);
            if ( v43 )
            {
LABEL_40:
              v27 = *(int **)(a1 + 16);
              v28 = v44;
              if ( !v27 )
                goto LABEL_46;
              v29 = aInvalidSyntax;
              if ( v44 )
                v29 = aRecursionLimit;
              v30 = 25;
              if ( !v44 )
                v30 = 16;
              v11 = 1;
              if ( !<str as core::fmt::Display>::fmt(v29, v30, v27) )
              {
LABEL_46:
                *(_BYTE *)(a1 + 4) = v28;
                goto LABEL_27;
              }
            }
            else
            {
              v35 = v45;
              if ( !v45 )
                goto LABEL_87;
              v36 = *(int **)(a1 + 16);
              if ( !v36 || !<str as core::fmt::Display>::fmt(asc_29BEED, 3u, v36) )
              {
                v31 = sub_218408(a1, v34, v35, SHIDWORD(v35));
LABEL_86:
                if ( !v31 )
                {
LABEL_87:
                  if ( *(_DWORD *)a1 )
                    --*(_DWORD *)(a1 + 12);
                  return 0;
                }
              }
            }
          }
          else
          {
            v41 = *(int **)(a1 + 16);
            if ( !v41 || !<str as core::fmt::Display>::fmt(aInvalidSyntax, 0x10u, v41) )
              goto LABEL_21;
          }
          break;
        case 'F':
          v31 = sub_218900((_DWORD *)a1);
          goto LABEL_85;
        case 'O':
        case 'P':
          v22 = *(int **)(a1 + 16);
          if ( !v22 )
            goto LABEL_84;
          v11 = 1;
          if ( <str as core::fmt::Display>::fmt(asc_29BD04, 1u, *(int **)(a1 + 16)) )
            return v11;
          if ( v5 == 80 )
          {
            v23 = 6;
            v24 = aConst;
          }
          else
          {
            v23 = 4;
            v24 = aMut;
          }
          v40 = <str as core::fmt::Display>::fmt(v24, v23, v22);
          goto LABEL_83;
        case 'Q':
        case 'R':
          v25 = *(int **)(a1 + 16);
          if ( v25 )
          {
            v11 = 1;
            if ( <str as core::fmt::Display>::fmt(asc_29BD07, 1u, v25) )
              return v11;
          }
          if ( v6 >= v3 || *(_BYTE *)(v1 + v6) != 76 )
            goto LABEL_79;
          *(_DWORD *)(a1 + 8) = v4 + 2;
          sub_21761C((int)&v43, (int *)a1);
          if ( v43 )
            goto LABEL_40;
          v25 = (int *)v45;
          if ( v45 )
          {
            v11 = 1;
            if ( sub_218408(a1, v26, v45, SHIDWORD(v45)) )
              return v11;
            v25 = *(int **)(a1 + 16);
            if ( v25 )
            {
              v11 = 1;
              if ( <str as core::fmt::Display>::fmt(asc_29BEF8, 1u, v25) )
                return v11;
            }
          }
LABEL_79:
          v42 = v5 == 82;
          if ( v5 != 82 )
          {
            v25 = *(int **)(a1 + 16);
            v42 = v25 == 0;
          }
          if ( !v42 )
          {
            v40 = <str as core::fmt::Display>::fmt(aMut, 4u, v25);
            v11 = 1;
LABEL_83:
            if ( v40 )
              return v11;
          }
LABEL_84:
          v31 = sub_219C0C(a1);
LABEL_85:
          v11 = 1;
          goto LABEL_86;
        case 'T':
          v37 = *(int **)(a1 + 16);
          if ( v37 )
          {
            v11 = 1;
            if ( <str as core::fmt::Display>::fmt(asc_29BD10, 1u, v37) )
              return v11;
          }
          v11 = 1;
          if ( sub_218EDC((int *)a1) )
            return v11;
          if ( v38 != 1 )
            goto LABEL_67;
          v39 = *(int **)(a1 + 16);
          if ( !v39 )
            goto LABEL_87;
          v11 = 1;
          if ( <str as core::fmt::Display>::fmt(asc_29BD15, 1u, v39) )
            return v11;
LABEL_67:
          v13 = *(int **)(a1 + 16);
          if ( !v13 )
            goto LABEL_87;
          v14 = asc_29BD13;
LABEL_69:
          v11 = 1;
          v31 = <str as core::fmt::Display>::fmt(v14, 1u, v13);
          goto LABEL_86;
        default:
          *(_DWORD *)(a1 + 8) = v4;
          v31 = sub_2191A4((int *)a1, 0);
          goto LABEL_85;
      }
      return v11;
    }
    v19 = *(int **)(a1 + 16);
    if ( !v19 || (v11 = 1, !<str as core::fmt::Display>::fmt(aRecursionLimit, 0x19u, v19)) )
    {
      *(_BYTE *)(a1 + 4) = 1;
      goto LABEL_27;
    }
    return v11;
  }
  v15 = *(int **)(a1 + 16);
  if ( v15 )
  {
    v20 = v7;
    v17 = (char *)*(&off_2CDCCC + v7);
    v16 = dword_29BFF0[v20];
    return <str as core::fmt::Display>::fmt(v17, v16, v15);
  }
  return 0;
}
