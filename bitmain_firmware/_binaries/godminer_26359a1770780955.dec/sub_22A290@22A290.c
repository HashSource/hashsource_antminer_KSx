int __fastcall sub_22A290(_DWORD *a1, int a2)
{
  int v2; // r9
  unsigned int v4; // r10
  unsigned int v5; // r12
  unsigned int v6; // r0
  unsigned int v7; // r2
  int v8; // r4
  unsigned int v9; // r7
  unsigned int v10; // r6
  int v11; // r11
  int v12; // r5
  unsigned __int8 v13; // r2
  __int64 v14; // kr08_8
  char v15; // r5
  int v16; // r3
  unsigned __int64 v17; // kr18_8
  unsigned __int64 v18; // kr10_8
  int v19; // r2
  int result; // r0
  int v21; // r2
  unsigned int v22; // r2
  int v23; // r3
  int v24; // r7
  int v25; // r5
  int v26; // r6
  const char *v27; // r0
  int v28; // r1
  int v29; // r1
  int v30; // [sp+0h] [bp-14h]

  v2 = *a1;
  if ( !*a1 )
  {
    v19 = a1[4];
    if ( v19 )
      return <str as core::fmt::Display>::fmt(asc_2B0B29, 1, v19);
    return 0;
  }
  v4 = a1[1];
  v5 = a1[2];
  if ( v5 < v4 && *(_BYTE *)(v2 + v5) == 95 )
  {
    a1[2] = v5 + 1;
    v6 = 0;
    v7 = 0;
  }
  else
  {
    if ( v5 > v4 )
      v4 = a1[2];
    v8 = a1[2];
    v9 = 0;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      if ( v4 == v8 )
      {
LABEL_22:
        v15 = 0;
        v21 = a1[4];
        if ( v21 )
          goto LABEL_36;
        goto LABEL_41;
      }
      v12 = *(unsigned __int8 *)(v2 + v8);
      if ( v12 == 95 )
        break;
      v13 = v12 - 48;
      if ( (unsigned __int8)(v12 - 48) >= 0xAu )
      {
        if ( (unsigned __int8)(v12 - 97) >= 0x1Au )
        {
          if ( (unsigned __int8)(v12 - 65) >= 0x1Au )
            goto LABEL_22;
          v13 = v12 - 29;
        }
        else
        {
          v13 = v12 - 87;
        }
      }
      v14 = 62LL * v9;
      ++v8;
      v15 = 0;
      a1[2] = v8;
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
      goto LABEL_35;
    }
    a1[2] = v8 + 1;
    v6 = v9 + 1;
    v15 = 0;
    v7 = __CFADD__(v9, 1) + v10;
    if ( (__CFADD__(v9, 1) + (unsigned __int64)v10) >> 32 )
      goto LABEL_35;
  }
  if ( __PAIR64__(v7, v6) >= v5 - 1 )
  {
    v15 = 0;
    v11 = 1;
    v21 = a1[4];
    if ( v21 )
      goto LABEL_36;
LABEL_41:
    *((_BYTE *)a1 + 4) = v15;
    *a1 = 0;
    return 0;
  }
  v22 = a1[3] + 1;
  if ( v22 <= 0x1F4 )
  {
    if ( a1[4] )
    {
      v23 = *a1;
      v24 = a1[1];
      a2 = (unsigned __int8)a2;
      v25 = a1[3];
      if ( (_BYTE)a2 )
        a2 = 1;
      v26 = a1[2];
      a1[2] = v6;
      a1[3] = v22;
      v30 = v23;
      result = sub_22D034(a1, a2);
      *a1 = v30;
      a1[1] = v24;
      a1[2] = v26;
      a1[3] = v25;
      return result;
    }
    return 0;
  }
  v15 = 1;
  v11 = 0;
LABEL_35:
  v21 = a1[4];
  if ( !v21 )
    goto LABEL_41;
LABEL_36:
  v27 = (const char *)&unk_2B0B09;
  if ( !v11 )
    v27 = aRecursionLimit;
  v28 = 25;
  if ( v11 )
    v28 = 16;
  v29 = <str as core::fmt::Display>::fmt(v27, v28, v21);
  result = 1;
  if ( !v29 )
    goto LABEL_41;
  return result;
}
