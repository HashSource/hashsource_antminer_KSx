int __fastcall sub_21A7A0(_DWORD *a1)
{
  int v1; // r2
  unsigned int v3; // r9
  unsigned int v4; // lr
  unsigned int v5; // r6
  unsigned __int64 v6; // kr20_8
  int v7; // r6
  int result; // r0
  unsigned int v9; // r0
  unsigned int v10; // r7
  int v11; // r10
  int v12; // r5
  unsigned __int8 v13; // r4
  __int64 v14; // kr08_8
  char v15; // r5
  int v16; // r1
  unsigned __int64 v17; // kr18_8
  unsigned __int64 v18; // kr10_8
  int *v19; // r2
  int *v20; // r2
  unsigned int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r7
  int v25; // r6
  int v26; // r0
  int i; // r7
  int *v28; // r2
  unsigned int v29; // r1
  bool v30; // zf
  char *v31; // r0
  unsigned int v32; // r1
  int v33; // [sp+0h] [bp-10h]
  int v34; // [sp+4h] [bp-Ch]

  v1 = *a1;
  if ( !*a1 )
    goto LABEL_10;
  v3 = a1[1];
  v4 = a1[2];
  if ( v4 >= v3 )
    goto LABEL_10;
  if ( *(_BYTE *)(v1 + v4) == 66 )
  {
    v5 = v4 + 1;
    a1[2] = v4 + 1;
    if ( v4 + 1 < v3 && *(_BYTE *)(v1 + v5) == 95 )
    {
      a1[2] = v4 + 2;
      v6 = 0;
    }
    else
    {
      if ( v5 > v3 )
        v3 = v4 + 1;
      v9 = 0;
      v10 = 0;
      v11 = 1;
      while ( 1 )
      {
        if ( v3 == v5 )
        {
LABEL_31:
          v15 = 0;
          v20 = (int *)a1[4];
          if ( v20 )
            goto LABEL_51;
          goto LABEL_58;
        }
        v12 = *(unsigned __int8 *)(v1 + v5);
        if ( v12 == 95 )
          break;
        v13 = v12 - 48;
        if ( (unsigned __int8)(v12 - 48) >= 0xAu )
        {
          if ( (unsigned __int8)(v12 - 97) >= 0x1Au )
          {
            if ( (unsigned __int8)(v12 - 65) >= 0x1Au )
              goto LABEL_31;
            v13 = v12 - 29;
          }
          else
          {
            v13 = v12 - 87;
          }
        }
        v14 = 62LL * v9;
        v15 = 0;
        a1[2] = ++v5;
        v16 = (62 * (unsigned __int64)v10) >> 32;
        v17 = HIDWORD(v14) + (unsigned __int64)(62 * v10);
        if ( !is_mul_ok(v10, 0x3Eu) )
          v16 = 1;
        if ( !(v16 | HIDWORD(v17)) )
        {
          v18 = v14 + __PAIR64__(62 * v10, v13);
          v10 = HIDWORD(v18);
          v9 = v18;
          v15 = 0;
          if ( !__CFADD__(__CFADD__((_DWORD)v14, v13), (_DWORD)v17) )
            continue;
        }
        goto LABEL_50;
      }
      a1[2] = v5 + 1;
      v6 = __PAIR64__(v10, v9) + 1;
      v15 = 0;
      if ( __CFADD__(__CFADD__(v9, 1), v10) )
        goto LABEL_50;
    }
    if ( v6 >= v4 )
    {
      v15 = 0;
      v11 = 1;
LABEL_50:
      v20 = (int *)a1[4];
      if ( !v20 )
        goto LABEL_58;
    }
    else
    {
      v21 = a1[3] + 1;
      if ( v21 <= 0x1F4 )
      {
        if ( !a1[4] )
          return 0;
        v22 = *a1;
        v23 = a1[1];
        v24 = a1[2];
        v25 = a1[3];
        a1[2] = v6;
        a1[3] = v21;
        v33 = v22;
        v34 = v23;
        result = (unsigned __int8)sub_21A7A0(a1);
        *a1 = v33;
        a1[1] = v34;
        a1[2] = v24;
        a1[3] = v25;
        return result;
      }
      v15 = 1;
      v11 = 0;
      v20 = (int *)a1[4];
      if ( !v20 )
      {
LABEL_58:
        *((_BYTE *)a1 + 4) = v15;
        *a1 = 0;
        return 0;
      }
    }
LABEL_51:
    v31 = aInvalidSyntax;
    if ( !v11 )
      v31 = aRecursionLimit;
    v32 = 25;
    if ( v11 )
      v32 = 16;
    if ( !<str as core::fmt::Display>::fmt(v31, v32, v20) )
      goto LABEL_58;
    return 2;
  }
  if ( *(_BYTE *)(v1 + v4) == 73 )
  {
    a1[2] = v4 + 1;
    if ( sub_2191A4(a1, 0) )
      return 2;
    v19 = (int *)a1[4];
    if ( v19 )
    {
      if ( <str as core::fmt::Display>::fmt(asc_29BD0A, 1u, v19) )
        return 2;
    }
    v26 = *a1;
    if ( *a1 )
    {
      for ( i = 0; ; --i )
      {
        v28 = (int *)a1[1];
        v29 = a1[2];
        if ( v29 < (unsigned int)v28 && *(_BYTE *)(v26 + v29) == 69 )
          break;
        v30 = i == 0;
        if ( i )
        {
          v28 = (int *)a1[4];
          v30 = v28 == 0;
        }
        if ( !v30 && <str as core::fmt::Display>::fmt(asc_29BEDB, 2u, v28) || sub_219A6C(a1, v29) )
          return 2;
        v26 = *a1;
        if ( !*a1 )
          return 1;
      }
      a1[2] = v29 + 1;
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
LABEL_10:
    v7 = sub_2191A4(a1, 0);
    if ( v7 )
      return 2;
    return v7;
  }
}
