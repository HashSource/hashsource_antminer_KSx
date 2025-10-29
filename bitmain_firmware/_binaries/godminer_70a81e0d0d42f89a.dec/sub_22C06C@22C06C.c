int __fastcall sub_22C06C(_DWORD *a1)
{
  int v1; // r9
  unsigned int v3; // r10
  unsigned int v4; // r12
  unsigned __int64 v5; // kr20_8
  int v6; // r0
  __int64 v7; // r6
  int v8; // r1
  int v9; // r5
  unsigned __int8 v10; // r4
  unsigned int v11; // r2
  unsigned int v12; // kr08_4
  char v13; // r5
  unsigned int v14; // kr00_4
  __int64 v15; // r2
  __int64 v16; // r6
  int v17; // kr18_4
  bool v18; // cf
  int v19; // r2
  int result; // r0
  int v21; // r2
  unsigned int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r7
  int v26; // r6
  bool v27; // zf
  int v28; // r1
  const char *v29; // r0
  int v30; // r1
  int v31; // [sp+0h] [bp-10h]
  int v32; // [sp+4h] [bp-Ch]

  v1 = *a1;
  if ( !*a1 )
  {
    v19 = a1[4];
    if ( v19 )
      return <str as core::fmt::Display>::fmt(asc_2B30E9, 1, v19);
    return 0;
  }
  v3 = a1[1];
  v4 = a1[2];
  if ( v4 < v3 && *(_BYTE *)(v1 + v4) == 95 )
  {
    a1[2] = v4 + 1;
    v5 = 0;
  }
  else
  {
    if ( v4 > v3 )
      v3 = a1[2];
    v6 = a1[2];
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      if ( v3 == v6 )
      {
LABEL_22:
        v13 = 0;
        v21 = a1[4];
        if ( v21 )
          goto LABEL_34;
        goto LABEL_39;
      }
      v9 = *(unsigned __int8 *)(v1 + v6);
      if ( v9 == 95 )
        break;
      v10 = v9 - 48;
      if ( (unsigned __int8)(v9 - 48) >= 0xAu )
      {
        if ( (unsigned __int8)(v9 - 97) >= 0x1Au )
        {
          if ( (unsigned __int8)(v9 - 65) >= 0x1Au )
            goto LABEL_22;
          v10 = v9 - 29;
        }
        else
        {
          v10 = v9 - 87;
        }
      }
      v12 = v7;
      v11 = (62 * (unsigned __int64)(unsigned int)v7) >> 32;
      LODWORD(v7) = 62 * v7;
      ++v6;
      v13 = 0;
      a1[2] = v6;
      v14 = HIDWORD(v7);
      HIDWORD(v15) = (62 * (unsigned __int64)HIDWORD(v7)) >> 32;
      v17 = (62 * __PAIR64__(HIDWORD(v7), v12)) >> 32;
      LODWORD(v15) = (v11 + (unsigned __int64)(unsigned int)(62 * HIDWORD(v7))) >> 32;
      HIDWORD(v16) = v17;
      if ( !is_mul_ok(v14, 0x3Eu) )
        HIDWORD(v15) = 1;
      if ( !v15 )
      {
        v18 = __CFADD__(__CFADD__((_DWORD)v16, v10), v17);
        v7 = v16 + v10;
        v13 = 0;
        if ( !v18 )
          continue;
      }
      goto LABEL_33;
    }
    a1[2] = v6 + 1;
    v13 = 0;
    v5 = v7 + 1;
    if ( __CFADD__(v7 == -1, HIDWORD(v7)) )
      goto LABEL_33;
  }
  if ( v5 >= v4 - 1 )
  {
    v13 = 0;
    v8 = 1;
    v21 = a1[4];
    if ( !v21 )
    {
LABEL_39:
      *((_BYTE *)a1 + 4) = v13;
      *a1 = 0;
      return 0;
    }
  }
  else
  {
    v22 = a1[3] + 1;
    if ( v22 <= 0x1F4 )
    {
      if ( a1[4] )
      {
        v23 = *a1;
        v24 = a1[1];
        v25 = a1[2];
        v26 = a1[3];
        a1[2] = v5;
        a1[3] = v22;
        v31 = v23;
        v32 = v24;
        result = sub_22E134(a1);
        *a1 = v31;
        a1[1] = v32;
        a1[2] = v25;
        a1[3] = v26;
        return result;
      }
      return 0;
    }
    v13 = 1;
    v8 = 0;
LABEL_33:
    v21 = a1[4];
    if ( !v21 )
      goto LABEL_39;
  }
LABEL_34:
  v27 = v8 == 0;
  v28 = 25;
  if ( !v27 )
    v28 = 16;
  v29 = (const char *)&unk_2B30C9;
  if ( v27 )
    v29 = aRecursionLimit;
  v30 = <str as core::fmt::Display>::fmt(v29, v28, v21);
  result = 1;
  if ( !v30 )
    goto LABEL_39;
  return result;
}
