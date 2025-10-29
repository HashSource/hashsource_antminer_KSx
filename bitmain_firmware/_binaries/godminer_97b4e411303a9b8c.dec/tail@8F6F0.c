int __fastcall tail(FILE *a1, int a2, void (__fastcall *a3)(char *))
{
  char *v5; // r0
  char *v6; // r9
  int v7; // r7
  int v8; // r4
  int v9; // r5
  char *v10; // r11
  char *v11; // r0
  _BOOL4 v12; // r3
  char v13; // r10

  v5 = (char *)malloc(0x8000u);
  v6 = v5;
  if ( v5 )
  {
    v7 = 0;
    v5[0x7FFF] = 0;
    fseek(a1, 0, 2);
    v8 = ftell(a1);
    if ( v8 )
    {
      v9 = 0x7FFF;
      v10 = v6 + 32766;
      while ( 1 )
      {
        fseek(a1, --v8, 0);
        v13 = fgetc(a1);
        if ( v13 == 10 )
          break;
        if ( a2 > v7 )
          goto LABEL_11;
LABEL_5:
        --v9;
        v11 = v10;
        *v10-- = v13;
        if ( v8 )
          v12 = v9 != 0;
        else
          v12 = 0;
        if ( !v12 )
          goto LABEL_13;
      }
      if ( ++v7 >= a2 )
      {
        v11 = &v6[v9];
        goto LABEL_13;
      }
LABEL_11:
      fseek(a1, v8, 0);
      goto LABEL_5;
    }
    v11 = v6 + 0x7FFF;
LABEL_13:
    a3(v11);
    free(v6);
    return 0;
  }
  else
  {
    fwrite("Memory allocation failed\n", 1u, 0x19u, (FILE *)stderr);
    return -1;
  }
}
