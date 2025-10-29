unsigned int __fastcall sub_198E14(int *a1)
{
  int v1; // r2
  int v2; // r1
  int v3; // r4
  int i; // r2
  unsigned int v5; // r12
  int v6; // r1
  int j; // r2
  int v8; // r4
  int v9; // r3
  int v11; // r1

  v1 = a1[8];
  if ( !v1 )
    return 0;
  v2 = *a1;
  a1[8] = v1 - 1;
  if ( v2 )
  {
    if ( v2 == 2 )
      core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2C9528);
    v3 = a1[1];
    i = a1[2];
    v5 = a1[3];
    if ( v5 >= *(unsigned __int16 *)(i + 270) )
      goto LABEL_5;
  }
  else
  {
    v11 = a1[1];
    for ( i = a1[2]; v11; --v11 )
      i = *(_DWORD *)(i + 272);
    v5 = 0;
    v3 = 0;
    *a1 = 1;
    a1[1] = 0;
    a1[2] = i;
    a1[3] = 0;
    if ( !*(_WORD *)(i + 270) )
    {
      do
      {
LABEL_5:
        v6 = *(_DWORD *)i;
        if ( !*(_DWORD *)i )
          core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2C9508);
        v5 = *(unsigned __int16 *)(i + 268);
        ++v3;
        i = *(_DWORD *)i;
      }
      while ( v5 >= *(unsigned __int16 *)(v6 + 270) );
      j = v5 + 1;
      if ( v3 )
        goto LABEL_8;
      goto LABEL_16;
    }
  }
  v6 = i;
  j = v5 + 1;
  if ( v3 )
  {
LABEL_8:
    v8 = v3 - 1;
    v9 = *(_DWORD *)(v6 + 4 * j + 272);
    for ( j = 0; v8; --v8 )
      v9 = *(_DWORD *)(v9 + 272);
    goto LABEL_17;
  }
LABEL_16:
  v9 = v6;
LABEL_17:
  a1[2] = v9;
  a1[1] = 0;
  a1[3] = j;
  return v6 + 12 * v5 + 4;
}
