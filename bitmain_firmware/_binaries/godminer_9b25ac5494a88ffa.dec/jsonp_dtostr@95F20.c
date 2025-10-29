int __fastcall jsonp_dtostr(char *a1, size_t a2, int a3)
{
  double v3; // d0
  int v5; // r3
  unsigned int v7; // r0
  unsigned int v8; // r6
  int v9; // r1
  char *v10; // r0
  char *v11; // r5
  char *v12; // r0
  unsigned __int8 *v13; // r4
  int v14; // r3
  unsigned __int8 *v15; // r5
  int v16; // t1
  char *v18; // r3

  if ( a3 )
    v5 = a3;
  else
    v5 = 17;
  v7 = snprintf(a1, a2, "%.*g", v5, v3);
  if ( a2 > v7 )
  {
    v8 = v7;
    v9 = *(unsigned __int8 *)localeconv()->decimal_point;
    if ( v9 != 46 )
    {
      v10 = strchr(a1, v9);
      if ( v10 )
        *v10 = 46;
    }
    v11 = strchr(a1, 46);
    v12 = strchr(a1, 101);
    if ( v11 )
    {
LABEL_9:
      if ( !v12 )
        return v8;
      goto LABEL_10;
    }
    if ( v12 )
    {
LABEL_10:
      v13 = (unsigned __int8 *)(v12 + 2);
      v14 = (unsigned __int8)v12[2];
      if ( v12[1] != 45 )
      {
        v15 = (unsigned __int8 *)(v12 + 1);
        if ( v14 != 48 )
        {
LABEL_13:
          if ( v13 != v15 )
          {
            memmove(v15, v13, v8 - (v13 - (unsigned __int8 *)a1));
            v8 -= v13 - v15;
          }
          return v8;
        }
        do
LABEL_12:
          v16 = *++v13;
        while ( v16 == 48 );
        goto LABEL_13;
      }
      if ( v14 == 48 )
      {
        v15 = (unsigned __int8 *)(v12 + 2);
        goto LABEL_12;
      }
      return v8;
    }
    if ( v8 + 3 < a2 )
    {
      a1[v8] = 46;
      v18 = &a1[v8];
      v8 += 2;
      v18[1] = 48;
      a1[v8] = 0;
      v12 = strchr(a1, 101);
      goto LABEL_9;
    }
  }
  return -1;
}
