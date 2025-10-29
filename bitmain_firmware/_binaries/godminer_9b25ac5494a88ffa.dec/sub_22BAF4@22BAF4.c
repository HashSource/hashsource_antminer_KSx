int __fastcall sub_22BAF4(_DWORD *a1)
{
  int v1; // r7
  unsigned int v3; // r5
  unsigned int v4; // r6
  int v5; // r8
  unsigned int v6; // r10
  char v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r0
  int v10; // r2
  int v11; // r9
  int v12; // r2
  int v13; // r2
  const char *v14; // r0
  int v15; // r2
  int v16; // r1
  const char *v17; // r0
  int v18; // r2
  int v19; // r2
  int v20; // r7
  int v22; // r6
  int v23; // r1
  const char *v24; // r0
  int v25; // r2
  int v26; // r1
  int v27; // r2
  char v28; // r5
  const char *v29; // r0
  int v30; // r1
  int v31; // r0
  int v32; // r2
  unsigned int v33; // r1
  int v34; // r1
  __int64 v35; // r6
  int v36; // r2
  int v37; // r2
  int v38; // r1
  int v39; // r2
  int v40; // r0
  int v41; // r2
  bool v42; // zf
  char v43; // [sp+0h] [bp-10h] BYREF
  char v44; // [sp+1h] [bp-Fh]
  __int64 v45; // [sp+8h] [bp-8h]

  v1 = *a1;
  if ( !*a1 )
  {
    v15 = a1[4];
    if ( !v15 )
      return 0;
    v16 = 1;
    v17 = asc_2B0689;
    return <str as core::fmt::Display>::fmt(v17, v16, v15);
  }
  v3 = a1[1];
  v4 = a1[2];
  if ( v4 >= v3 )
  {
    v18 = a1[4];
    if ( !v18 || (v11 = 1, !<str as core::fmt::Display>::fmt(&unk_2B0669, 16, v18)) )
    {
LABEL_21:
      *((_BYTE *)a1 + 4) = 0;
LABEL_27:
      *a1 = 0;
      return 0;
    }
    return v11;
  }
  v5 = *(unsigned __int8 *)(v1 + v4);
  v6 = v4 + 1;
  a1[2] = v4 + 1;
  v7 = v5 - 97;
  v8 = (unsigned __int8)(v5 - 97);
  if ( v8 >= 0x1A || ((0x3BCFBBFu >> v8) & 1) == 0 )
  {
    v9 = a1[3] + 1;
    a1[3] = v9;
    if ( v9 <= 0x1F4 )
    {
      switch ( v5 )
      {
        case 'A':
        case 'S':
          v10 = a1[4];
          if ( v10 )
          {
            v11 = 1;
            if ( <str as core::fmt::Display>::fmt(asc_2B069B, 1, v10) )
              return v11;
          }
          v11 = 1;
          if ( sub_22BAF4(a1) )
            return v11;
          if ( v5 == 65 )
          {
            v12 = a1[4];
            if ( v12 )
            {
              if ( <str as core::fmt::Display>::fmt(asc_2B06A0, 2, v12) )
                return v11;
            }
            v11 = 1;
            if ( sub_22CC54(a1, 1) )
              return v11;
          }
          v13 = a1[4];
          if ( !v13 )
            goto LABEL_87;
          v14 = asc_2B069C;
          goto LABEL_69;
        case 'B':
          v31 = sub_229A2C(a1);
          goto LABEL_85;
        case 'D':
          v32 = a1[4];
          if ( v32 )
          {
            v11 = 1;
            if ( <str as core::fmt::Display>::fmt(aDyn, 4, v32) )
              return v11;
          }
          v11 = 1;
          if ( sub_22A428(a1) )
            return v11;
          if ( *a1 && (v33 = a1[2], v33 < a1[1]) && *(_BYTE *)(*a1 + v33) == 76 )
          {
            a1[2] = v33 + 1;
            sub_229504((int)&v43, a1);
            if ( v43 )
            {
LABEL_40:
              v27 = a1[4];
              v28 = v44;
              if ( !v27 )
                goto LABEL_46;
              v29 = (const char *)&unk_2B0669;
              if ( v44 )
                v29 = aRecursionLimit;
              v30 = 25;
              if ( !v44 )
                v30 = 16;
              v11 = 1;
              if ( !<str as core::fmt::Display>::fmt(v29, v30, v27) )
              {
LABEL_46:
                *((_BYTE *)a1 + 4) = v28;
                goto LABEL_27;
              }
            }
            else
            {
              v35 = v45;
              if ( !v45 )
                goto LABEL_87;
              v36 = a1[4];
              if ( !v36 || !<str as core::fmt::Display>::fmt(asc_2B069D, 3, v36) )
              {
                v31 = sub_22A2F0((int)a1, v34, v35, SHIDWORD(v35));
LABEL_86:
                if ( !v31 )
                {
LABEL_87:
                  if ( *a1 )
                    --a1[3];
                  return 0;
                }
              }
            }
          }
          else
          {
            v41 = a1[4];
            if ( !v41 || !<str as core::fmt::Display>::fmt(&unk_2B0669, 16, v41) )
              goto LABEL_21;
          }
          break;
        case 'F':
          v31 = sub_22A7E8(a1);
          goto LABEL_85;
        case 'O':
        case 'P':
          v22 = a1[4];
          if ( !v22 )
            goto LABEL_84;
          v11 = 1;
          if ( <str as core::fmt::Display>::fmt(asc_2B04B4, 1, a1[4]) )
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
          v25 = a1[4];
          if ( v25 )
          {
            v11 = 1;
            if ( <str as core::fmt::Display>::fmt(asc_2B04B7, 1, v25) )
              return v11;
          }
          if ( v6 >= v3 || *(_BYTE *)(v1 + v6) != 76 )
            goto LABEL_79;
          a1[2] = v4 + 2;
          sub_229504((int)&v43, a1);
          if ( v43 )
            goto LABEL_40;
          v25 = v45;
          if ( v45 )
          {
            v11 = 1;
            if ( sub_22A2F0((int)a1, v26, v45, SHIDWORD(v45)) )
              return v11;
            v25 = a1[4];
            if ( v25 )
            {
              v11 = 1;
              if ( <str as core::fmt::Display>::fmt(asc_2B06A8, 1, v25) )
                return v11;
            }
          }
LABEL_79:
          v42 = v5 == 82;
          if ( v5 != 82 )
          {
            v25 = a1[4];
            v42 = v25 == 0;
          }
          if ( !v42 )
          {
            v40 = <str as core::fmt::Display>::fmt(aMut, 4, v25);
            v11 = 1;
LABEL_83:
            if ( v40 )
              return v11;
          }
LABEL_84:
          v31 = sub_22BAF4(a1);
LABEL_85:
          v11 = 1;
          goto LABEL_86;
        case 'T':
          v37 = a1[4];
          if ( v37 )
          {
            v11 = 1;
            if ( <str as core::fmt::Display>::fmt(asc_2B04C0, 1, v37) )
              return v11;
          }
          v11 = 1;
          if ( sub_22ADC4(a1) )
            return v11;
          if ( v38 != 1 )
            goto LABEL_67;
          v39 = a1[4];
          if ( !v39 )
            goto LABEL_87;
          v11 = 1;
          if ( <str as core::fmt::Display>::fmt(asc_2B04C5, 1, v39) )
            return v11;
LABEL_67:
          v13 = a1[4];
          if ( !v13 )
            goto LABEL_87;
          v14 = asc_2B04C3;
LABEL_69:
          v11 = 1;
          v31 = <str as core::fmt::Display>::fmt(v14, 1, v13);
          goto LABEL_86;
        default:
          a1[2] = v4;
          v31 = sub_22B08C((int)a1, 0);
          goto LABEL_85;
      }
      return v11;
    }
    v19 = a1[4];
    if ( !v19 || (v11 = 1, !<str as core::fmt::Display>::fmt(aRecursionLimit, 25, v19)) )
    {
      *((_BYTE *)a1 + 4) = 1;
      goto LABEL_27;
    }
    return v11;
  }
  v15 = a1[4];
  if ( v15 )
  {
    v20 = v7;
    v17 = (const char *)*(&off_2E1CCC + v7);
    v16 = dword_2B07A0[v20];
    return <str as core::fmt::Display>::fmt(v17, v16, v15);
  }
  return 0;
}
