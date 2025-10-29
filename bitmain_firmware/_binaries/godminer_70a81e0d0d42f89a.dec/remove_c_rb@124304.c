int *__fastcall remove_c_rb(int a1, int a2)
{
  int *v2; // r4
  int *v3; // r7
  int v6; // r5
  int *v7; // r3
  int *v8; // r5
  int *v9; // r7
  int **v10; // r3
  int v11; // r1
  int v12; // r3
  int v13; // r2
  int *v14; // r3
  int *v16; // r3
  int v17; // r12
  int *v18; // r2
  int v19; // r1
  int v20; // r0
  int v21; // r12
  int v22; // r0
  void *ptr; // [sp+4h] [bp-4h] BYREF

  v3 = (int *)(a1 + 4);
  v2 = *(int **)a1;
  if ( a1 + 4 == *(_DWORD *)a1 )
    return 0;
  while ( 1 )
  {
    get_raw_clib_object(v2[4], &ptr);
    v6 = (*(int (__fastcall **)(int, void *))(a1 + 36))(a2, ptr);
    free(ptr);
    v7 = (int *)*v2;
    if ( !v6 )
      break;
    v2 = (int *)v2[1];
    if ( v6 < 0 )
      v2 = v7;
    if ( v2 == v3 )
      return 0;
  }
  v8 = (int *)v2[1];
  if ( v3 != v7 )
  {
    if ( v3 != v8 )
    {
      while ( v3 != (int *)*v8 )
        v8 = (int *)*v8;
      v9 = v8;
      v8 = (int *)v8[1];
      goto LABEL_14;
    }
    v8 = (int *)*v2;
  }
  v9 = v2;
LABEL_14:
  v8[2] = v9[2];
  v10 = (int **)v9[2];
  if ( v10 )
  {
    if ( v9 == *v10 )
      *v10 = v8;
    else
      v10[1] = v8;
  }
  else
  {
    *(_DWORD *)a1 = v8;
  }
  if ( v9 != v2 )
  {
    v11 = v2[4];
    v12 = v2[5];
    v13 = v9[5];
    v2[4] = v9[4];
    v9[4] = v11;
    v2[5] = v13;
    v9[5] = v12;
  }
  if ( !v9[3] )
  {
    v14 = *(int **)a1;
LABEL_29:
    if ( v8 != v14 )
    {
      while ( !v8[3] )
      {
        v18 = (int *)v8[2];
        v16 = (int *)*v18;
        if ( v8 == (int *)*v18 )
        {
          v16 = (int *)v18[1];
          if ( v16[3] == 1 )
          {
            v16[3] = 0;
            v18[3] = 1;
            sub_123DE0((int **)a1, v18);
            v18 = (int *)v8[2];
            v16 = (int *)v18[1];
          }
          v21 = v16[1];
          v22 = *(_DWORD *)(v21 + 12);
          if ( *(_DWORD *)(*v16 + 12) )
          {
            if ( v22 )
            {
              v8 = v18;
            }
            else
            {
              *(_DWORD *)(*v16 + 12) = 0;
              v16[3] = 1;
              sub_123E34((_DWORD *)a1, v16);
              v8 = (int *)v8[2];
              v16 = (int *)v8[1];
              v21 = v16[1];
            }
LABEL_42:
            v16[3] = v8[3];
            v8[3] = 0;
            *(_DWORD *)(v21 + 12) = 0;
            sub_123DE0((int **)a1, v8);
            v8 = *(int **)a1;
            v14 = *(int **)a1;
            goto LABEL_29;
          }
          v8 = v18;
          if ( v22 )
            goto LABEL_42;
        }
        else
        {
          if ( v16[3] == 1 )
          {
            v16[3] = 0;
            v18[3] = 1;
            sub_123E34((_DWORD *)a1, v18);
            v18 = (int *)v8[2];
            v16 = (int *)*v18;
          }
          v19 = v16[1];
          v17 = *v16;
          v20 = *(_DWORD *)(*v16 + 12);
          if ( *(_DWORD *)(v19 + 12) )
          {
            if ( v20 )
            {
              v8 = v18;
            }
            else
            {
              *(_DWORD *)(v19 + 12) = 0;
              v16[3] = 1;
              sub_123DE0((int **)a1, v16);
              v8 = (int *)v8[2];
              v16 = (int *)*v8;
              v17 = *(_DWORD *)*v8;
            }
LABEL_28:
            v16[3] = v8[3];
            v8[3] = 0;
            *(_DWORD *)(v17 + 12) = 0;
            sub_123E34((_DWORD *)a1, v8);
            v8 = *(int **)a1;
            v14 = *(int **)a1;
            goto LABEL_29;
          }
          v8 = v18;
          if ( v20 )
            goto LABEL_28;
        }
        v16[3] = 1;
        if ( v8 == *(int **)a1 )
          break;
      }
    }
    v8[3] = 0;
  }
  sub_123F54((_DWORD *)a1);
  return v9;
}
