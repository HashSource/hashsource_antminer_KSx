int __fastcall insert_c_rb(int a1, int a2, int a3, int a4, int a5)
{
  int *v9; // r5
  int v11; // r1
  int v12; // r8
  int v13; // r0
  int *v14; // r4
  __int64 v15; // r2
  int v16; // r7
  int v17; // r7
  int *v18; // r4
  int v19; // r3
  int *v20; // r7
  int v21; // r0
  int *v22; // r2
  void *ptr; // [sp+0h] [bp-Ch] BYREF
  void *v24[2]; // [sp+4h] [bp-8h] BYREF

  v9 = (int *)malloc(0x18u);
  if ( !v9 )
    return 2;
  v11 = a3;
  v12 = a1 + 4;
  *v9 = a1 + 4;
  v9[1] = a1 + 4;
  v9[3] = 1;
  v13 = new_clib_object(a2, v11);
  if ( !a4 )
    v9[5] = 0;
  v9[4] = v13;
  if ( a4 )
    v9[5] = new_clib_object(a4, a5);
  v14 = *(int **)a1;
  if ( v12 == *(_DWORD *)a1 )
  {
    *(_DWORD *)a1 = v9;
    v22 = v9;
    v9[2] = 0;
  }
  else
  {
    while ( 1 )
    {
      get_raw_clib_object(v14[4], &ptr);
      get_raw_clib_object(v9[4], v24);
      v16 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v24[0], ptr);
      free(ptr);
      free(v24[0]);
      if ( !v16 )
        return 401;
      v15 = *(_QWORD *)v14;
      if ( v16 < 0 )
        HIDWORD(v15) = *v14;
      if ( v12 == HIDWORD(v15) )
        break;
      v14 = (int *)HIDWORD(v15);
    }
    v9[2] = (int)v14;
    get_raw_clib_object(v14[4], &ptr);
    get_raw_clib_object(v9[4], v24);
    v17 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v24[0], ptr);
    free(ptr);
    free(v24[0]);
    v22 = *(int **)a1;
    if ( v17 >= 0 )
      v14[1] = (int)v9;
    else
      *v14 = (int)v9;
LABEL_18:
    if ( v9 != v22 )
    {
      do
      {
        v18 = (int *)v9[2];
        if ( v18[3] != 1 )
          break;
        v19 = v18[2];
        v20 = *(int **)v19;
        if ( v18 == *(int **)v19 )
        {
          v21 = *(_DWORD *)(v19 + 4);
          if ( *(_DWORD *)(v21 + 12) == 1 )
          {
            v18[3] = 0;
            v9 = (int *)v19;
            *(_DWORD *)(v21 + 12) = 0;
            *(_DWORD *)(v19 + 12) = 1;
          }
          else
          {
            if ( (int *)v20[1] == v9 )
            {
              sub_123DE0((int **)a1, *(int **)v19);
              v20 = (int *)v20[2];
              v9 = v18;
              v19 = v20[2];
            }
            v20[3] = 0;
            *(_DWORD *)(v19 + 12) = 1;
            sub_123E34((_DWORD *)a1, (_DWORD *)v19);
            v22 = *(int **)a1;
          }
          goto LABEL_18;
        }
        if ( v20[3] == 1 )
        {
          v18[3] = 0;
          v9 = (int *)v19;
          v20[3] = 0;
          *(_DWORD *)(v19 + 12) = 1;
          goto LABEL_18;
        }
        if ( v9 == (int *)*v18 )
        {
          sub_123E34((_DWORD *)a1, (_DWORD *)v9[2]);
          v9 = v18;
          v19 = *(_DWORD *)(v18[2] + 8);
          v18 = (int *)v18[2];
        }
        v18[3] = 0;
        *(_DWORD *)(v19 + 12) = 1;
        sub_123DE0((int **)a1, (int *)v19);
        v22 = *(int **)a1;
      }
      while ( v9 != *(int **)a1 );
    }
  }
  v22[3] = 0;
  sub_123F54((_DWORD *)a1);
  return 0;
}
