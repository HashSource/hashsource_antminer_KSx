int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v3; // r5
  const char *v6; // r0
  const char *v7; // r7
  const char **v8; // r4
  int v9; // r8
  char *v10; // r5
  char *v11; // r0
  const char *v12; // r0
  int v13; // r7

  if ( argc <= 1 )
    goto LABEL_21;
  v3 = (int)argv[1];
  if ( *(_BYTE *)v3 == 45 )
  {
    v13 = *(unsigned __int8 *)(v3 + 1);
    if ( v13 == 63 )
    {
      if ( !*(_BYTE *)(v3 + 2) )
        goto LABEL_25;
    }
    else if ( v13 == 104 )
    {
      if ( !*(_BYTE *)(v3 + 2) )
        goto LABEL_25;
      goto LABEL_3;
    }
    if ( !strcmp((const char *)v3, "--help") )
      goto LABEL_25;
    if ( v13 != 111 || *(_BYTE *)(v3 + 2) )
      goto LABEL_4;
    if ( argc != 2 )
      v3 = 2;
    dword_22080 = 1;
    if ( argc != 2 )
      goto LABEL_5;
LABEL_21:
    v10 = "127.0.0.1";
    v7 = "summary";
    return callapi((int)v7, v10);
  }
LABEL_3:
  if ( strcmp(argv[1], "--help") )
  {
LABEL_4:
    v3 = 1;
LABEL_5:
    v6 = (const char *)sub_10C7C(argv[v3]);
    v7 = "summary";
    if ( *v6 )
      v7 = v6;
    if ( argc <= v3 + 1 )
    {
      v10 = "127.0.0.1";
    }
    else
    {
      v8 = &argv[v3];
      v9 = v3 + 2;
      v10 = "127.0.0.1";
      v11 = (char *)sub_10C7C(v8[1]);
      if ( *v11 )
        v10 = v11;
      if ( argc > v9 )
      {
        v12 = (const char *)sub_10C7C(v8[2]);
        if ( *v12 )
          strtol(v12, 0, 10);
      }
    }
    return callapi((int)v7, v10);
  }
LABEL_25:
  fprintf((FILE *)stderr, "usAge: %s [command [ip/host [port]]]\n", *argv);
  return 1;
}
