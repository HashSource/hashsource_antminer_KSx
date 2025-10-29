unsigned int __fastcall sub_1A2AA4(_DWORD *a1, int *a2)
{
  int v3; // r1
  int v5; // r0
  int v6; // r6
  unsigned __int16 *i; // r0
  unsigned int v8; // r7
  unsigned __int16 *v9; // r4
  unsigned int result; // r0
  int v11; // r2
  unsigned __int16 *v12; // r1
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
        core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2CA518);
      v6 = a2[1];
      i = (unsigned __int16 *)a2[2];
      v8 = a2[3];
      if ( v8 >= i[135] )
        goto LABEL_5;
    }
    else
    {
      v17 = a2[1];
      for ( i = (unsigned __int16 *)a2[2]; v17; --v17 )
        i = (unsigned __int16 *)*((_DWORD *)i + 68);
      v8 = 0;
      v6 = 0;
      *a2 = 1;
      a2[1] = 0;
      a2[2] = (int)i;
      a2[3] = 0;
      if ( !i[135] )
      {
        do
        {
LABEL_5:
          v9 = *(unsigned __int16 **)i;
          if ( !*(_DWORD *)i )
          {
            _rust_dealloc(i);
            core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2CA4F8);
          }
          v8 = i[134];
          _rust_dealloc(i);
          ++v6;
          i = v9;
        }
        while ( v8 >= v9[135] );
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
      v12 = *(unsigned __int16 **)&v9[2 * result + 136];
      result = 0;
      if ( v6 != 1 )
      {
        do
        {
          v12 = (unsigned __int16 *)*((_DWORD *)v12 + 68);
          --v11;
        }
        while ( v11 );
      }
      goto LABEL_20;
    }
LABEL_19:
    v12 = v9;
LABEL_20:
    a2[2] = (int)v12;
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
      v15 = (_DWORD *)v15[68];
    v14 = 0;
  }
  else if ( v13 != 1 || !v15 )
  {
    goto LABEL_25;
  }
  do
  {
    v18 = (_DWORD *)*v15;
    _rust_dealloc(v15);
    ++v14;
    v15 = v18;
  }
  while ( v18 );
LABEL_25:
  a1[1] = 0;
  return 0;
}
