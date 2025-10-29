unsigned int __fastcall sub_1B7704(_DWORD *a1, int *a2)
{
  int v3; // r1
  int v5; // r0
  int v6; // r6
  int i; // r0
  unsigned int v8; // r7
  int v9; // r4
  unsigned int result; // r0
  int v11; // r2
  int v12; // r1
  int v13; // r1
  int v14; // r4
  _DWORD *v15; // r0
  bool v16; // zf
  int v17; // r1
  _DWORD *v18; // r5

  v3 = a2[8];
  if ( v3 )
  {
    v5 = *a2;
    a2[8] = v3 - 1;
    if ( v5 )
    {
      if ( v5 == 2 )
        core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2E9518);
      v6 = a2[1];
      i = a2[2];
      v8 = a2[3];
      if ( v8 >= *(unsigned __int16 *)(i + 1238) )
        goto LABEL_5;
    }
    else
    {
      v17 = a2[1];
      for ( i = a2[2]; v17; --v17 )
        i = *(_DWORD *)(i + 1240);
      v8 = 0;
      v6 = 0;
      *a2 = 1;
      a2[1] = 0;
      a2[2] = i;
      a2[3] = 0;
      if ( !*(_WORD *)(i + 1238) )
      {
        do
        {
LABEL_5:
          v9 = *(_DWORD *)(i + 1232);
          if ( !v9 )
          {
            _rust_dealloc((void *)i);
            core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2E94F8);
          }
          v8 = *(unsigned __int16 *)(i + 1236);
          _rust_dealloc((void *)i);
          ++v6;
          i = v9;
        }
        while ( v8 >= *(unsigned __int16 *)(v9 + 1238) );
        result = v8 + 1;
        if ( v6 )
          goto LABEL_8;
        goto LABEL_19;
      }
    }
    v9 = i;
    result = v8 + 1;
    if ( v6 )
    {
LABEL_8:
      v11 = v6 - 1;
      v12 = *(_DWORD *)(v9 + 4 * result + 1240);
      result = 0;
      if ( v6 != 1 )
      {
        do
        {
          v12 = *(_DWORD *)(v12 + 1240);
          --v11;
        }
        while ( v11 );
      }
      goto LABEL_20;
    }
LABEL_19:
    v12 = v9;
LABEL_20:
    a2[2] = v12;
    a2[1] = 0;
    a2[3] = result;
    *a1 = v6;
    a1[1] = v9;
    a1[2] = v8;
    return result;
  }
  v13 = *a2;
  v14 = a2[1];
  v15 = (_DWORD *)a2[2];
  v16 = *a2 == 0;
  *a2 = 2;
  if ( v16 )
  {
    for ( ; v14; --v14 )
      v15 = (_DWORD *)v15[310];
    v14 = 0;
  }
  else if ( v13 != 1 || !v15 )
  {
    goto LABEL_25;
  }
  do
  {
    v18 = (_DWORD *)v15[308];
    _rust_dealloc(v15);
    ++v14;
    v15 = v18;
  }
  while ( v18 );
LABEL_25:
  a1[1] = 0;
  return 0;
}
