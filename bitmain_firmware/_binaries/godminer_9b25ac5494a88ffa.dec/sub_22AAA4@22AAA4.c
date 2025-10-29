int __fastcall sub_22AAA4(int *a1)
{
  int v2; // r0
  int v3; // r8
  int v4; // r6
  unsigned int v5; // r2
  unsigned int v6; // r1
  bool v7; // zf
  unsigned int v8; // r12
  unsigned int v9; // r3
  unsigned int v10; // r2
  int v11; // r2
  unsigned __int64 v12; // kr20_8
  int v13; // r7
  unsigned __int8 v14; // r5
  unsigned int v15; // r3
  int v16; // r6
  unsigned int v17; // r7
  int v18; // r6
  int v19; // r2
  char v20; // r5
  const char *v21; // r0
  int v22; // r1
  int v24; // r2
  char *v25; // [sp+10h] [bp-14h] BYREF
  char v26; // [sp+14h] [bp-10h]

  v2 = *a1;
  if ( !v2 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v5 = a1[1];
    v6 = a1[2];
    if ( v6 < v5 )
    {
      v5 = *(unsigned __int8 *)(v2 + v6);
      if ( v5 == 69 )
        break;
    }
    v7 = v3 == 0;
    if ( v3 )
    {
      v5 = a1[4];
      v7 = v5 == 0;
    }
    if ( v7 )
      goto LABEL_11;
    if ( <str as core::fmt::Display>::fmt(asc_2B068B, 2, v5) )
      return 1;
    v2 = *a1;
    if ( *a1 )
    {
LABEL_11:
      v8 = a1[1];
      v9 = a1[2];
      if ( v9 < v8 && *(_BYTE *)(v2 + v9) == 115 )
      {
        v10 = v9 + 1;
        a1[2] = v9 + 1;
        if ( v9 + 1 >= v8 || *(_BYTE *)(v2 + v10) != 95 )
        {
          v12 = 0;
          while ( v10 < v8 )
          {
            v13 = *(unsigned __int8 *)(v2 + v10);
            if ( v13 == 95 )
            {
              a1[2] = v10 + 1;
              if ( !__CFADD__(v12 == -1, HIDWORD(v12))
                && (((_DWORD)v12 + 1) & (__CFADD__((_DWORD)v12, 1) + HIDWORD(v12))) != 0xFFFFFFFF )
              {
                goto LABEL_36;
              }
              break;
            }
            v14 = v13 - 48;
            if ( (unsigned __int8)(v13 - 48) >= 0xAu )
            {
              if ( (unsigned __int8)(v13 - 97) >= 0x1Au )
              {
                if ( (unsigned __int8)(v13 - 65) >= 0x1Au )
                  break;
                v14 = v13 - 29;
              }
              else
              {
                v14 = v13 - 87;
              }
            }
            v15 = 62 * v12;
            a1[2] = ++v10;
            v16 = (62 * (unsigned __int64)HIDWORD(v12)) >> 32;
            v17 = (62 * v12) >> 32;
            if ( !is_mul_ok(HIDWORD(v12), 0x3Eu) )
              v16 = 1;
            if ( !(v16 | ((((62 * (unsigned __int64)(unsigned int)v12) >> 32) + (unsigned int)(62 * HIDWORD(v12))) >> 32)) )
            {
              v12 = __PAIR64__(v17, v15) + v14;
              if ( !__CFADD__(__CFADD__(v15, v14), v17) )
                continue;
            }
            break;
          }
          v24 = a1[4];
          if ( !v24 || (v4 = 1, !<str as core::fmt::Display>::fmt(&unk_2B0669, 16, v24)) )
          {
            v4 = 0;
            *((_BYTE *)a1 + 4) = 0;
            *a1 = 0;
          }
          return v4;
        }
        a1[2] = v9 + 2;
      }
LABEL_36:
      sub_22977C((int)&v25, a1);
      if ( v25 )
      {
        v18 = a1[4];
        if ( v18
          && (<rustc_demangle::v0::Ident as core::fmt::Display>::fmt(&v25, v18)
           || <str as core::fmt::Display>::fmt(asc_2B06CB, 2, v18)) )
        {
          return 1;
        }
        v4 = 1;
        if ( sub_22CC54(a1, 1) )
          return v4;
        goto LABEL_4;
      }
      v19 = a1[4];
      v20 = v26;
      if ( v19 )
      {
        v21 = aRecursionLimit;
        if ( !v26 )
          v21 = (const char *)&unk_2B0669;
        v22 = 25;
        if ( !v26 )
          v22 = 16;
        if ( <str as core::fmt::Display>::fmt(v21, v22, v19) )
          return 1;
      }
      *((_BYTE *)a1 + 4) = v20;
      *a1 = 0;
      v2 = *a1;
      ++v3;
      if ( !*a1 )
        return 0;
    }
    else
    {
      v11 = a1[4];
      if ( !v11 )
        return 0;
      v4 = 1;
      if ( <str as core::fmt::Display>::fmt(asc_2B0689, 1, v11) )
        return v4;
LABEL_4:
      v2 = *a1;
      ++v3;
      if ( !*a1 )
        return 0;
    }
  }
  a1[2] = v6 + 1;
  return 0;
}
