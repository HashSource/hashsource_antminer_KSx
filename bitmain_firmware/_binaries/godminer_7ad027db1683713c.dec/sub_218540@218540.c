int __fastcall sub_218540(int a1)
{
  char *v2; // r0
  unsigned int v3; // r8
  unsigned int v4; // r9
  unsigned __int64 v5; // r2
  int v6; // r10
  unsigned int v7; // r1
  int *v8; // r2
  unsigned int v10; // r6
  unsigned int v11; // r5
  int v12; // r7
  unsigned __int8 v13; // r3
  __int64 v14; // kr08_8
  int v15; // r7
  unsigned __int64 v16; // kr18_8
  unsigned __int64 v17; // kr10_8
  int *v18; // r2
  int *v19; // r2
  int i; // r6
  int *v21; // r2
  unsigned int v22; // r1
  bool v23; // zf
  unsigned __int64 v24; // kr28_8
  int *v25; // r2
  int v26; // r0
  int v27; // r1
  bool v28; // zf
  int v29; // r0
  int *v30; // r2
  char *v31; // r0
  int v32; // r6
  int *v33; // r2
  unsigned int v34; // r1
  bool v35; // zf
  int v36; // r5

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    v4 = 0;
    HIDWORD(v5) = *(_DWORD *)(a1 + 8);
    v6 = 0;
    if ( HIDWORD(v5) < v3 )
    {
      v4 = 0;
      v6 = 0;
      if ( v2[HIDWORD(v5)] == 71 )
      {
        LODWORD(v5) = HIDWORD(v5) + 1;
        *(_DWORD *)(a1 + 8) = HIDWORD(v5) + 1;
        if ( HIDWORD(v5) + 1 >= v3 || v2[v5] != 95 )
        {
          v10 = 0;
          v11 = 0;
          while ( (unsigned int)v5 < v3 )
          {
            v12 = (unsigned __int8)v2[v5];
            if ( v12 == 95 )
            {
              *(_DWORD *)(a1 + 8) = v5 + 1;
              v7 = v10 + 1;
              v5 = __CFADD__(v10, 1) + (unsigned __int64)v11;
              if ( HIDWORD(v5) )
                break;
              goto LABEL_23;
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
            LODWORD(v5) = v5 + 1;
            *(_DWORD *)(a1 + 8) = v5;
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
LABEL_24:
          v18 = *(int **)(a1 + 16);
          if ( !v18 || !<str as core::fmt::Display>::fmt(aInvalidSyntax, 0x10u, v18) )
          {
            *(_BYTE *)(a1 + 4) = 0;
            *(_DWORD *)a1 = 0;
            return 0;
          }
          return 1;
        }
        *(_DWORD *)(a1 + 8) = HIDWORD(v5) + 2;
        v7 = 0;
        LODWORD(v5) = 0;
LABEL_23:
        v4 = v7 + 1;
        v6 = __CFADD__(v7, 1) + (_DWORD)v5;
        if ( (__CFADD__(v7, 1) + (unsigned __int64)(unsigned int)v5) >> 32 )
          goto LABEL_24;
      }
    }
    v19 = *(int **)(a1 + 16);
    if ( v19 )
    {
      if ( v4 | v6 )
      {
        if ( <str as core::fmt::Display>::fmt(aFor, 4u, v19) )
          return 1;
        v24 = 0;
        while ( 1 )
        {
          v25 = (int *)((v24 - __PAIR64__(v6, v4)) >> 32);
          if ( v24 >= __PAIR64__(v6, v4) )
            break;
          v26 = HIDWORD(v24);
          v27 = v24++;
          v29 = v27 | v26;
          v28 = v29 == 0;
          if ( v29 )
          {
            v25 = *(int **)(a1 + 16);
            v28 = v25 == 0;
          }
          if ( v28 || !<str as core::fmt::Display>::fmt(asc_29BEDB, 2u, v25) )
          {
            ++*(_DWORD *)(a1 + 20);
            if ( !sub_218408(a1, v27, 1u, 0) )
              continue;
          }
          return 1;
        }
        v30 = *(int **)(a1 + 16);
        if ( v30 )
        {
          if ( <str as core::fmt::Display>::fmt(asc_29BEDD, 2u, v30) )
            return 1;
        }
      }
      v31 = *(char **)a1;
      if ( *(_DWORD *)a1 )
      {
        v32 = 0;
        while ( 1 )
        {
          v33 = *(int **)(a1 + 4);
          v34 = *(_DWORD *)(a1 + 8);
          if ( v34 < (unsigned int)v33 && v31[v34] == 69 )
            break;
          v35 = v32 == 0;
          if ( v32 )
          {
            v33 = *(int **)(a1 + 16);
            v35 = v33 == 0;
          }
          if ( !v35 && <str as core::fmt::Display>::fmt(asc_29BEED, 3u, v33) || sub_21AB04((char **)a1) )
          {
            v36 = 1;
            goto LABEL_66;
          }
          v31 = *(char **)a1;
          --v32;
          if ( !*(_DWORD *)a1 )
            goto LABEL_65;
        }
        *(_DWORD *)(a1 + 8) = v34 + 1;
      }
LABEL_65:
      v36 = 0;
LABEL_66:
      *(_DWORD *)(a1 + 20) -= v4;
      return v36;
    }
    else
    {
      for ( i = 0; ; --i )
      {
        v21 = *(int **)(a1 + 4);
        v22 = *(_DWORD *)(a1 + 8);
        if ( v22 < (unsigned int)v21 && v2[v22] == 69 )
          break;
        v23 = i == 0;
        if ( i )
        {
          v21 = *(int **)(a1 + 16);
          v23 = v21 == 0;
        }
        if ( !v23 && <str as core::fmt::Display>::fmt(asc_29BEED, 3u, v21) || sub_21AB04((char **)a1) )
          return 1;
        v2 = *(char **)a1;
        if ( !*(_DWORD *)a1 )
          return 0;
      }
      *(_DWORD *)(a1 + 8) = v22 + 1;
      return 0;
    }
  }
  else
  {
    v8 = *(int **)(a1 + 16);
    if ( v8 )
      return <str as core::fmt::Display>::fmt(asc_29BED9, 1u, v8);
    else
      return 0;
  }
}
