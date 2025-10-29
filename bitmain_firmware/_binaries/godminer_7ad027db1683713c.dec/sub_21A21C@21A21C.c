int __fastcall sub_21A21C(int a1)
{
  int v1; // r6
  char *v2; // r1
  unsigned int v4; // r2
  int v5; // r5
  unsigned int v6; // r0
  char *v7; // r7
  int *v8; // r2
  int v9; // r5
  int *v10; // r11
  unsigned int v11; // r1
  char *v12; // r0
  int *v13; // r2
  int *v14; // r2
  char v15; // r6
  char *v16; // r0
  unsigned int v17; // r1
  bool v19; // zf
  int *v20; // r2
  char *v21; // r0
  int v22; // r6
  int *v23; // r2
  unsigned int v24; // r1
  bool v25; // zf
  int *v26; // r2
  unsigned int v27; // r1
  int *v28; // r2
  int *v29; // r5
  int v30; // r7
  char *v31; // r7
  unsigned int v32; // r6
  bool v33; // zf
  int v34; // [sp+0h] [bp-5Ch]
  char *v35; // [sp+8h] [bp-54h] BYREF
  int v36; // [sp+Ch] [bp-50h]
  int v37; // [sp+10h] [bp-4Ch]
  int v38; // [sp+14h] [bp-48h]
  int v39; // [sp+18h] [bp-44h]
  int v40; // [sp+1Ch] [bp-40h]
  int v41; // [sp+20h] [bp-3Ch]
  int v42; // [sp+24h] [bp-38h]
  char *v43; // [sp+28h] [bp-34h] BYREF
  int v44; // [sp+2Ch] [bp-30h]
  char *v45; // [sp+30h] [bp-2Ch] BYREF
  int v46; // [sp+34h] [bp-28h]
  int v47; // [sp+38h] [bp-24h]
  int v48; // [sp+3Ch] [bp-20h]
  int v49; // [sp+40h] [bp-1Ch]
  int v50; // [sp+44h] [bp-18h]
  int v51; // [sp+48h] [bp-14h]
  int v52; // [sp+4Ch] [bp-10h]
  _DWORD v53[3]; // [sp+50h] [bp-Ch] BYREF

  v2 = *(char **)a1;
  if ( !*(_DWORD *)a1 )
    goto LABEL_45;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 < v4 && v2[v6] == 85 )
  {
    ++v6;
    v5 = 1;
    *(_DWORD *)(a1 + 8) = v6;
  }
  if ( v6 < v4 && v2[v6] == 75 )
  {
    *(_DWORD *)(a1 + 8) = v6 + 1;
    if ( v6 + 1 < v4 && v2[v6 + 1] == 67 )
    {
      v1 = 1;
      *(_DWORD *)(a1 + 8) = v6 + 2;
      v7 = (char *)&unk_29BD14;
    }
    else
    {
      sub_217894((int)&v43, (char **)a1);
      v7 = v43;
      if ( !v43 )
      {
        v14 = *(int **)(a1 + 16);
        v15 = v44;
        if ( !v14 )
          goto LABEL_34;
        v16 = aInvalidSyntax;
        if ( (_BYTE)v44 )
          v16 = aRecursionLimit;
        v17 = 25;
        if ( !(_BYTE)v44 )
          v17 = 16;
        v9 = 1;
        if ( !<str as core::fmt::Display>::fmt(v16, v17, v14) )
        {
LABEL_34:
          *(_BYTE *)(a1 + 4) = v15;
          *(_DWORD *)a1 = 0;
          return 0;
        }
        return v9;
      }
      v1 = v44;
      if ( !v44 || v46 )
      {
        v13 = *(int **)(a1 + 16);
        if ( !v13 || (v9 = 1, !<str as core::fmt::Display>::fmt(aInvalidSyntax, 0x10u, v13)) )
        {
          v9 = 0;
          *(_BYTE *)(a1 + 4) = 0;
          *(_DWORD *)a1 = 0;
        }
        return v9;
      }
    }
    if ( !v5 )
      goto LABEL_15;
  }
  else
  {
    if ( !v5 )
      goto LABEL_45;
    v7 = 0;
  }
  v8 = *(int **)(a1 + 16);
  if ( v8 )
  {
    v9 = 1;
    if ( <str as core::fmt::Display>::fmt(aUnsafe, 7u, v8) )
      return v9;
  }
  if ( v7 )
  {
LABEL_15:
    v10 = *(int **)(a1 + 16);
    if ( v10 )
    {
      v9 = 1;
      if ( <str as core::fmt::Display>::fmt(aExtern, 8u, *(int **)(a1 + 16)) )
        return v9;
    }
    LOWORD(v42) = 1;
    v39 = 1;
    v41 = 95;
    v40 = 95;
    v37 = 0;
    v34 = 0;
    v35 = v7;
    v38 = v1;
    v36 = v1;
    sub_215E4C(&v43, (int *)&v35);
    if ( v43 )
    {
      v34 = (int)v45;
      v11 = v44;
      v12 = v7;
      if ( !v10 )
      {
LABEL_41:
        v43 = (char *)v34;
        v44 = v1;
        v45 = v35;
        v46 = v36;
        v47 = v37;
        v48 = v38;
        v49 = v39;
        v50 = v40;
        v51 = v41;
        v52 = v42;
        if ( BYTE1(v42) )
        {
LABEL_42:
          if ( v10 && <str as core::fmt::Display>::fmt(asc_29BF08, 2u, v10) )
            return 1;
          goto LABEL_45;
        }
        v29 = v10;
        while ( 1 )
        {
          v30 = (int)v45;
          sub_215E4C(v53, (int *)&v45);
          if ( v53[0] )
          {
            v31 = &v43[v30];
            v32 = v53[1] - (_DWORD)v43;
            v43 = (char *)v53[2];
            if ( !v29 )
              goto LABEL_71;
          }
          else
          {
            if ( BYTE1(v52) )
              goto LABEL_42;
            v33 = (unsigned __int8)v52 == 0;
            BYTE1(v52) = 1;
            if ( !(_BYTE)v52 )
              v33 = v44 == (_DWORD)v43;
            if ( v33 )
              goto LABEL_42;
            v32 = v44 - (_DWORD)v43;
            v31 = &v43[(_DWORD)v45];
            if ( !v29 )
            {
LABEL_71:
              v29 = 0;
              goto LABEL_72;
            }
          }
          if ( <str as core::fmt::Display>::fmt(asc_29BDDB, 1u, v29) )
            return 1;
          v29 = 0;
          if ( v10 )
          {
            v29 = v10;
            if ( <str as core::fmt::Display>::fmt(v31, v32, v10) )
              return 1;
          }
LABEL_72:
          if ( BYTE1(v52) )
            goto LABEL_42;
        }
      }
    }
    else
    {
      if ( BYTE1(v42) )
        goto LABEL_85;
      v19 = (unsigned __int8)v42 == 0;
      if ( !(_BYTE)v42 )
        v19 = v1 == 0;
      BYTE1(v42) = 1;
      if ( v19 )
LABEL_85:
        core::panicking::panic((int)aCalledOptionUn_1, 43, (int)&off_2CDC64);
      v11 = v1;
      v12 = v35;
      if ( !v10 )
        goto LABEL_41;
    }
    if ( <str as core::fmt::Display>::fmt(v12, v11, v10) )
      return 1;
    goto LABEL_41;
  }
LABEL_45:
  v20 = *(int **)(a1 + 16);
  if ( v20 )
  {
    v9 = 1;
    if ( <str as core::fmt::Display>::fmt(aFn_0, 3u, v20) )
      return v9;
  }
  v21 = *(char **)a1;
  if ( *(_DWORD *)a1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = *(int **)(a1 + 4);
      v24 = *(_DWORD *)(a1 + 8);
      if ( v24 < (unsigned int)v23 )
      {
        v23 = (int *)(unsigned __int8)v21[v24];
        if ( v23 == (int *)69 )
          break;
      }
      v25 = v22 == 0;
      if ( v22 )
      {
        v23 = *(int **)(a1 + 16);
        v25 = v23 == 0;
      }
      if ( !v25 && <str as core::fmt::Display>::fmt(asc_29BEDB, 2u, v23) || sub_219C0C(a1) )
        return 1;
      v21 = *(char **)a1;
      --v22;
      if ( !*(_DWORD *)a1 )
        goto LABEL_57;
    }
    *(_DWORD *)(a1 + 8) = v24 + 1;
    v26 = *(int **)(a1 + 16);
    if ( !v26 )
    {
LABEL_62:
      if ( !v21 )
        goto LABEL_66;
      goto LABEL_63;
    }
  }
  else
  {
LABEL_57:
    v21 = 0;
    v26 = *(int **)(a1 + 16);
    if ( !v26 )
      goto LABEL_62;
  }
  v9 = 1;
  if ( <str as core::fmt::Display>::fmt(asc_29BD13, 1u, v26) )
    return v9;
  v21 = *(char **)a1;
  if ( *(_DWORD *)a1 )
  {
LABEL_63:
    v27 = *(_DWORD *)(a1 + 8);
    if ( v27 < *(_DWORD *)(a1 + 4) && v21[v27] == 117 )
    {
      *(_DWORD *)(a1 + 8) = v27 + 1;
      return 0;
    }
  }
LABEL_66:
  v28 = *(int **)(a1 + 16);
  if ( v28 )
  {
    v9 = 1;
    if ( <str as core::fmt::Display>::fmt(asc_29BCF2, 4u, v28) )
      return v9;
  }
  return sub_219C0C(a1);
}
