char *__fastcall sub_22D894(int a1, char **a2)
{
  unsigned int v3; // r1
  unsigned int v4; // r2
  int v6; // r12
  unsigned __int8 v7; // r3
  unsigned int v8; // r0
  unsigned int v9; // r2
  char *v10; // r5
  unsigned int v11; // r3
  unsigned int v12; // r4
  int v13; // r0
  unsigned int v14; // kr00_4
  bool v15; // cf
  unsigned int v16; // r3
  char *result; // r0
  char *v18; // r0
  unsigned int v19; // r5
  char *v20; // r6
  unsigned int v21; // r7
  char *v22; // r9
  int v23; // r1
  int v24; // r1
  int v25; // r8
  unsigned int v26; // r1

  v3 = (unsigned int)a2[1];
  v4 = (unsigned int)a2[2];
  v6 = 0;
  if ( v4 < v3 && (*a2)[v4] == 117 )
  {
    ++v4;
    v6 = 1;
    a2[2] = (char *)v4;
  }
  if ( v4 >= v3 )
    goto LABEL_21;
  v7 = (*a2)[v4] - 48;
  v8 = v7;
  if ( v7 > 9u )
    goto LABEL_21;
  v9 = v4 + 1;
  a2[2] = (char *)v9;
  if ( v7 )
  {
    v10 = *a2;
    v11 = v3;
    if ( v9 > v3 )
      v11 = v9;
    while ( v11 != v9 )
    {
      v12 = (unsigned __int8)(v10[v9] - 48);
      if ( v12 > 9 )
        break;
      v14 = v8;
      v13 = 10 * v8;
      a2[2] = (char *)++v9;
      if ( is_mul_ok(v14, 0xAu) )
      {
        v15 = __CFADD__(v13, v12);
        v8 = v13 + v12;
        if ( !v15 )
          continue;
      }
      goto LABEL_21;
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v9 < v3 && (*a2)[v9] == 95 )
    a2[2] = (char *)++v9;
  v16 = v9 + v8;
  if ( __CFADD__(v9, v8) )
    goto LABEL_21;
  a2[2] = (char *)v16;
  if ( v16 > v3 )
    goto LABEL_21;
  v18 = *a2;
  if ( v9 )
  {
    if ( v9 >= v3 )
    {
      if ( v9 != v3 )
        goto LABEL_30;
    }
    else if ( v18[v9] < -64 )
    {
LABEL_30:
      core::str::slice_error_fail(v18, v3, v9, v16, (int)&off_2EDC24);
    }
  }
  if ( v16 )
  {
    if ( v16 >= v3 )
    {
      if ( v16 != v3 )
        goto LABEL_30;
    }
    else if ( v18[v16] <= -65 )
    {
      goto LABEL_30;
    }
  }
  v19 = v16 - v9;
  v20 = &v18[v9];
  if ( v6 )
  {
    v21 = v16 - v9;
    result = v20 - 1;
    v22 = aRustc9eb3afe9e_2;
    while ( v21 )
    {
      v23 = (unsigned __int8)result[v21--];
      if ( v23 == 95 )
      {
        v22 = sub_22B784(v21, v20, v16 - v9, (int)&off_2EDC34);
        v25 = v24;
        result = sub_22B7E0(v21 + 1, v20, v19, (int)&off_2EDC44);
        v20 = result;
        v19 = v26;
        goto LABEL_39;
      }
    }
    v25 = 0;
LABEL_39:
    if ( !v19 )
    {
LABEL_21:
      *(_DWORD *)a1 = 0;
      *(_BYTE *)(a1 + 4) = 0;
      return 0;
    }
    *(_DWORD *)a1 = v22;
    *(_DWORD *)(a1 + 4) = v25;
    *(_DWORD *)(a1 + 8) = v20;
    *(_DWORD *)(a1 + 12) = v19;
  }
  else
  {
    *(_DWORD *)a1 = v20;
    *(_DWORD *)(a1 + 4) = v19;
    *(_DWORD *)(a1 + 8) = aRustc9eb3afe9e_2;
    *(_DWORD *)(a1 + 12) = 0;
    return aRustc9eb3afe9e_2;
  }
  return result;
}
