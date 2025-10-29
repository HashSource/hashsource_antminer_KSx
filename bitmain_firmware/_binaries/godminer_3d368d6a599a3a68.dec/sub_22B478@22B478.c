int __fastcall sub_22B478(_DWORD *a1)
{
  int v2; // r0
  unsigned int v3; // r8
  unsigned int v4; // r3
  unsigned __int64 v5; // kr28_8
  unsigned int v6; // r2
  __int64 v7; // r0
  int v8; // r2
  int result; // r0
  unsigned int v10; // r6
  unsigned int v11; // r5
  int v12; // r7
  unsigned __int8 v13; // r3
  __int64 v14; // kr08_8
  int v15; // r7
  unsigned __int64 v16; // kr18_8
  unsigned __int64 v17; // kr10_8
  int v18; // r2
  int v19; // r2
  unsigned __int64 v20; // kr30_8
  int v21; // r2
  int v22; // r0
  int v23; // r1
  bool v24; // zf
  int v25; // r0
  int v26; // r2

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    v4 = a1[2];
    v5 = 0;
    if ( v4 < v3 )
    {
      v5 = 0;
      if ( *(_BYTE *)(v2 + v4) == 71 )
      {
        v6 = v4 + 1;
        a1[2] = v4 + 1;
        if ( v4 + 1 >= v3 || *(_BYTE *)(v2 + v6) != 95 )
        {
          v10 = 0;
          v11 = 0;
          while ( v6 < v3 )
          {
            v12 = *(unsigned __int8 *)(v2 + v6);
            if ( v12 == 95 )
            {
              a1[2] = v6 + 1;
              LODWORD(v7) = v10 + 1;
              HIDWORD(v7) = __CFADD__(v10, 1) + v11;
              if ( (__CFADD__(v10, 1) + (unsigned __int64)v11) >> 32 )
                break;
              goto LABEL_24;
            }
            v13 = v12 - 48;
            if ( (unsigned __int8)(v12 - 48) >= 0xAu )
            {
              if ( (unsigned __int8)(v12 - 97) >= 0x1Au )
              {
                if ( (unsigned __int8)(v12 - 65) >= 0x1Au )
                  break;
                v13 = v12 - 29;
              }
              else
              {
                v13 = v12 - 87;
              }
            }
            v14 = 62LL * v10;
            a1[2] = ++v6;
            v15 = (62 * (unsigned __int64)v11) >> 32;
            v16 = HIDWORD(v14) + (unsigned __int64)(62 * v11);
            if ( !is_mul_ok(v11, 0x3Eu) )
              v15 = 1;
            if ( !(v15 | HIDWORD(v16)) )
            {
              v17 = v14 + __PAIR64__(62 * v11, v13);
              v11 = HIDWORD(v17);
              v10 = v17;
              if ( !__CFADD__(__CFADD__((_DWORD)v14, v13), (_DWORD)v16) )
                continue;
            }
            break;
          }
LABEL_25:
          v18 = a1[4];
          if ( !v18 || !<str as core::fmt::Display>::fmt(&unk_2B15A9, 16, v18) )
          {
            *((_BYTE *)a1 + 4) = 0;
            *a1 = 0;
            return 0;
          }
          return 1;
        }
        a1[2] = v4 + 2;
        v7 = 0;
LABEL_24:
        v5 = v7 + 1;
        if ( __CFADD__(__CFADD__((_DWORD)v7, 1), HIDWORD(v7)) )
          goto LABEL_25;
      }
    }
    v19 = a1[4];
    if ( v19 )
    {
      if ( v5 )
      {
        if ( <str as core::fmt::Display>::fmt(aFor, 4, v19) )
          return 1;
        v20 = 0;
        while ( 1 )
        {
          v21 = (v20 - v5) >> 32;
          if ( v20 >= v5 )
            break;
          v22 = HIDWORD(v20);
          v23 = v20++;
          v25 = v23 | v22;
          v24 = v25 == 0;
          if ( v25 )
          {
            v21 = a1[4];
            v24 = v21 == 0;
          }
          if ( v24 || !<str as core::fmt::Display>::fmt(asc_2B15CB, 2, v21) )
          {
            ++a1[5];
            if ( !sub_22AF80((int)a1, v23, 1u, 0) )
              continue;
          }
          return 1;
        }
        v26 = a1[4];
        if ( v26 )
        {
          if ( <str as core::fmt::Display>::fmt(asc_2B15CD, 2, v26) )
            return 1;
        }
      }
      result = sub_22CD94(a1);
      a1[5] -= v5;
    }
    else
    {
      return sub_22CD94(a1);
    }
  }
  else
  {
    v8 = a1[4];
    if ( v8 )
      return <str as core::fmt::Display>::fmt(asc_2B15C9, 1, v8);
    else
      return 0;
  }
  return result;
}
