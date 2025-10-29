char *__fastcall display(char *result)
{
  const char *v1; // r4
  char *v2; // r6
  int v3; // r7
  char *v4; // r5
  char *v5; // r0
  char *v6; // r11
  char *v7; // r2
  char *v8; // r0
  const char *v9; // r2

  v1 = result;
  if ( !result )
    return result;
  do
  {
    result = strchr(v1, 124);
    v2 = result;
    if ( result )
    {
      *result = 0;
      v2 = result + 1;
      if ( !*v1 )
      {
        v1 = result + 1;
        continue;
      }
    }
    else if ( !*v1 )
    {
      return result;
    }
    v3 = 0;
    while ( 1 )
    {
      v8 = strchr(v1, 44);
      v4 = v8;
      if ( !v8 )
        break;
      *v8 = 0;
      v4 = v8 + 1;
      if ( !*v1 )
      {
        v1 = v8 + 1;
        goto LABEL_20;
      }
LABEL_12:
      v5 = strchr(v1, 61);
      v6 = v5;
      if ( !v5 )
      {
        if ( !v3 )
LABEL_27:
          printf("[%s%s] =>\n(\n", v1, "");
LABEL_25:
        v9 = v1;
        v1 = v4;
        printf("   [%d] => %s\n", v3, v9);
        goto LABEL_20;
      }
      *v5 = 0;
      if ( v3 )
      {
        if ( v5 == (char *)-1 )
          goto LABEL_25;
      }
      else
      {
        if ( v5 == (char *)-1 )
          goto LABEL_27;
        if ( ((*_ctype_b_loc())[(unsigned __int8)v5[1]] & 0x800) != 0 )
          v7 = v6 + 1;
        else
          v7 = "";
        printf("[%s%s] =>\n(\n", v1, v7);
      }
      printf("   [%s] => %s\n", v1, v6 + 1);
      v1 = v4;
LABEL_20:
      ++v3;
      if ( !v4 )
        goto LABEL_23;
    }
    if ( *v1 )
      goto LABEL_12;
LABEL_23:
    result = (char *)puts(")");
    v1 = v2;
  }
  while ( v2 );
  return result;
}
