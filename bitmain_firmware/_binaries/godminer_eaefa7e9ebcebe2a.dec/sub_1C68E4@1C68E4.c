unsigned int __fastcall sub_1C68E4(
        unsigned int result,
        int a2,
        char a3,
        int a4,
        unsigned int a5,
        int a6,
        int *a7,
        int a8)
{
  int v8; // r3
  int v9; // r1
  unsigned int v10; // r1
  int v11; // r8
  unsigned int v12; // r5
  unsigned int v13; // r7
  unsigned int v14; // r9
  bool v15; // cf
  unsigned int v16; // r7
  unsigned int v17; // r6
  int v18; // r4
  unsigned int v19; // r7
  unsigned int v20; // r9
  unsigned int v21; // r7
  unsigned int v22; // r6
  int v23; // r4

  if ( !a8 )
    goto LABEL_16;
  v8 = (int)a7;
  v9 = a3 & 0x3F;
  if ( v9 == 13 )
    return sub_1C55BC(result, a6, a5, (int)a7);
  if ( v9 != 14 )
  {
    if ( v9 == 15 )
    {
      v8 = *a7;
      if ( *a7 )
      {
        v10 = *(_DWORD *)(v8 + 24);
        if ( v10 )
        {
          v11 = *(_DWORD *)(v8 + 20);
          v12 = 0;
          v13 = *(_DWORD *)(v8 + 24);
          v14 = v13;
          while ( 1 )
          {
            while ( 1 )
            {
              v16 = v12 + (v13 >> 1);
              v17 = *(_DWORD *)(v11 + 336 * v16 + 328);
              v18 = v17 != a5;
              if ( v17 < a5 )
                v18 = -1;
              if ( v18 != 1 )
                break;
              v14 = v16;
              v15 = v16 >= v12;
              v13 = v16 - v12;
              if ( v13 == 0 || !v15 )
                goto LABEL_27;
            }
            if ( (unsigned __int8)v18 != 255 )
              break;
            v12 = v16 + 1;
            v15 = v14 >= v16 + 1;
            v13 = v14 - (v16 + 1);
            if ( v13 == 0 || !v15 )
              goto LABEL_27;
          }
        }
LABEL_30:
        *(_BYTE *)result = 55;
        return result;
      }
    }
LABEL_16:
    *(_BYTE *)result = 75;
    *(_DWORD *)(result + 4) = 0;
    return result;
  }
  v10 = a7[6];
  if ( !v10 )
    goto LABEL_30;
  v11 = a7[5];
  v12 = 0;
  v19 = a7[6];
  v20 = v19;
  do
  {
    while ( 1 )
    {
      v21 = v12 + (v19 >> 1);
      v22 = *(_DWORD *)(v11 + 336 * v21 + 328);
      v23 = v22 != a5;
      if ( v22 < a5 )
        v23 = -1;
      if ( v23 != 1 )
        break;
      v20 = v21;
      v15 = v21 >= v12;
      v19 = v21 - v12;
      if ( v19 == 0 || !v15 )
        goto LABEL_27;
    }
    if ( (unsigned __int8)v23 != 255 )
      goto LABEL_30;
    v12 = v21 + 1;
    v15 = v20 >= v21 + 1;
    v19 = v20 - (v21 + 1);
  }
  while ( v19 != 0 && v15 );
LABEL_27:
  if ( !v12 )
    goto LABEL_30;
  if ( v12 - 1 >= v10 )
    core::panicking::panic_bounds_check(v12 - 1, v10, (int)&off_2DE6C8);
  return sub_1C55BC(result, v11 + 336 * (v12 - 1) + 48, a5 - *(_DWORD *)(v11 + 336 * (v12 - 1) + 328), v8);
}
