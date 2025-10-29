int __fastcall sub_1AACF8(int *a1)
{
  int v1; // r2
  int v2; // r1
  int v3; // r4
  int *i; // r2
  unsigned int v5; // r12
  int *v6; // r1
  unsigned int j; // r2
  int v8; // r4
  int *v9; // r3
  int v11; // r1

  v1 = a1[8];
  if ( !v1 )
    return 0;
  v2 = *a1;
  a1[8] = v1 - 1;
  if ( v2 )
  {
    if ( v2 == 2 )
      core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2DD528);
    v3 = a1[1];
    i = (int *)a1[2];
    v5 = a1[3];
    if ( v5 >= *((unsigned __int16 *)i + 135) )
      goto LABEL_5;
  }
  else
  {
    v11 = a1[1];
    for ( i = (int *)a1[2]; v11; --v11 )
      i = (int *)i[68];
    v5 = 0;
    v3 = 0;
    *a1 = 1;
    a1[1] = 0;
    a1[2] = (int)i;
    a1[3] = 0;
    if ( !*((_WORD *)i + 135) )
    {
      do
      {
LABEL_5:
        v6 = (int *)*i;
        if ( !*i )
          core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2DD508);
        v5 = *((unsigned __int16 *)i + 134);
        ++v3;
        i = (int *)*i;
      }
      while ( v5 >= *((unsigned __int16 *)v6 + 135) );
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
    v9 = (int *)v6[j + 68];
    for ( j = 0; v8; --v8 )
      v9 = (int *)v9[68];
    goto LABEL_17;
  }
LABEL_16:
  v9 = v6;
LABEL_17:
  a1[2] = (int)v9;
  a1[1] = 0;
  a1[3] = j;
  return (int)&v6[3 * v5 + 1];
}
