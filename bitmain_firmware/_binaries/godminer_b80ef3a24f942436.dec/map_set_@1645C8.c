int __fastcall map_set_(_DWORD *a1, char *s2, size_t a3, size_t a4)
{
  const char *v4; // r4
  int v8; // r0
  size_t v10; // r0
  size_t v11; // r10
  int v12; // r5
  int *v13; // r0
  int *v14; // r7
  int v15; // r2
  int v16; // r3
  int v17; // t1
  char *v18; // r0
  unsigned int v19; // r3
  unsigned int v20; // r12
  char *v21; // r2
  char *v22; // r0
  bool v23; // zf
  char *v24; // r12
  _DWORD *v25; // r4
  _DWORD *v26; // r3
  _DWORD *v27; // t1
  _DWORD *v28; // r1
  void *v29; // r0
  void *v30; // r8
  _DWORD *v31; // r1
  int v32; // r3
  int v33; // r12

  v4 = s2;
  v8 = sub_1644AC(a1, a1 + 1, s2);
  if ( v8 )
  {
    memcpy(*(void **)(*(_DWORD *)v8 + 4), (const void *)a3, a4);
    return 0;
  }
  v10 = strlen(v4);
  v11 = v10 + 1;
  v12 = (~(_BYTE)v10 & 3) + v10 + 1;
  v13 = (int *)malloc(a4 + 12 + v12);
  v14 = v13;
  if ( !v13 )
    return -1;
  memcpy(v13 + 3, v4, v11);
  v15 = *(unsigned __int8 *)v4;
  v16 = 5381;
  if ( *v4 )
  {
    do
    {
      v16 = (33 * v16) ^ v15;
      v17 = *(unsigned __int8 *)++v4;
      v15 = v17;
    }
    while ( v17 );
  }
  *v14 = v16;
  v18 = (char *)v14 + v12 + 12;
  v14[1] = (int)v18;
  memcpy(v18, (const void *)a3, a4);
  v19 = a1[2];
  v20 = a1[1];
  if ( v19 < v20 )
  {
    v21 = (char *)*a1;
LABEL_25:
    v33 = (v20 - 1) & *v14;
    v14[2] = *(_DWORD *)&v21[4 * v33];
    *(_DWORD *)&v21[4 * v33] = v14;
    a1[2] = v19 + 1;
    return 0;
  }
  v22 = (char *)*a1;
  v23 = v20 == 0;
  if ( v20 )
  {
    v12 = 2 * v20;
    a3 = 8 * v20;
  }
  v24 = &v22[4 * v20];
  if ( v23 )
  {
    a3 = 4;
    v12 = 1;
  }
  v25 = 0;
  while ( v22 != v24 )
  {
    v27 = (_DWORD *)*((_DWORD *)v24 - 1);
    v24 -= 4;
    v26 = v27;
    if ( v27 )
    {
      while ( 1 )
      {
        v28 = (_DWORD *)v26[2];
        v26[2] = v25;
        v25 = v26;
        if ( !v28 )
          break;
        v26 = v28;
      }
      v25 = v26;
    }
  }
  v29 = realloc(v22, a3);
  v30 = v29;
  if ( v29 )
  {
    *a1 = v29;
    a1[1] = v12;
    memset(v29, 0, a3);
    if ( !v25 )
    {
      v21 = (char *)*a1;
      v20 = a1[1];
LABEL_24:
      v19 = a1[2];
      goto LABEL_25;
    }
    goto LABEL_21;
  }
  if ( *a1 )
  {
    memset((void *)*a1, 0, 4 * a1[1]);
    if ( v25 )
    {
LABEL_21:
      v21 = (char *)*a1;
      v20 = a1[1];
      do
      {
        v31 = (_DWORD *)v25[2];
        v32 = *v25 & (v20 - 1);
        v25[2] = *(_DWORD *)&v21[4 * v32];
        *(_DWORD *)&v21[4 * v32] = v25;
        v25 = v31;
      }
      while ( v31 );
      if ( v30 )
        goto LABEL_24;
    }
  }
  free(v14);
  return -1;
}
