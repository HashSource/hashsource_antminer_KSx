_DWORD *__fastcall sub_1A73F8(_DWORD *a1, int *a2, unsigned int a3, _BYTE *a4)
{
  unsigned int v5; // r0
  unsigned int v7; // r1
  int v8; // r8
  void *v9; // r9
  bool v10; // cc
  const void *v11; // r11
  int v12; // r1
  unsigned int v13; // r7
  int v14; // r5
  char *v16; // r0
  char *v17; // r10
  size_t v18; // r2
  char *v19; // r7
  int v20; // r1
  int v21; // r3
  size_t v22; // r8
  char *v23; // r7
  int v24; // [sp+0h] [bp-Ch]

  v5 = a2[2];
  v7 = a2[1];
  v8 = *a2;
  v9 = (void *)a2[3];
  if ( a3 >= v5 )
    a3 = v5;
  v10 = a3 > v7;
  v11 = (const void *)a2[5];
  v12 = a2[4];
  v13 = a2[6];
  if ( !v10 )
    goto LABEL_8;
  v14 = a3 + v8;
  if ( a3 + v8 > 0x100000 )
  {
    *a1 = v9;
    a1[1] = v12;
    a1[2] = v11;
    a1[3] = v13;
    a1[4] = v8;
    *a4 = 0;
    return a1;
  }
  v24 = a2[4];
  v16 = (char *)malloc(a3 + v8);
  v12 = v24;
  v17 = v16;
  if ( !v16 )
  {
    *a4 = 0;
LABEL_8:
    *a1 = v9;
    a1[1] = v12;
    a1[2] = v11;
    a1[3] = v13;
    a1[4] = v8;
    return a1;
  }
  if ( (unsigned int)v11 >= v13 )
  {
    v22 = v13 - (_DWORD)v9;
    v23 = &v16[v24 - (_DWORD)v11];
    memcpy(v16, v11, v24 - (_DWORD)v11);
    memcpy(v23, v9, v22);
    v19 = &v23[v22];
  }
  else
  {
    v18 = v13 - (_DWORD)v11;
    v19 = &v16[v13 - (_DWORD)v11];
    memcpy(v16, v11, v18);
  }
  a2[6] = (int)v19;
  free(v9);
  v20 = a2[6];
  v21 = *a2;
  a2[3] = (int)v17;
  a2[4] = (int)&v17[v14];
  a1[1] = &v17[v14];
  a2[5] = (int)v17;
  *a1 = v17;
  a1[2] = v17;
  a1[3] = v20;
  a1[4] = v21;
  return a1;
}
