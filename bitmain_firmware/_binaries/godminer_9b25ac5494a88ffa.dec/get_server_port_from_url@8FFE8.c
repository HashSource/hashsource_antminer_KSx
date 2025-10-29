bool __fastcall get_server_port_from_url(const char *a1, char *a2, _WORD *a3)
{
  char *v6; // r0
  _BOOL4 v7; // r5
  int v9; // r9
  const char *v10; // r6
  int v11; // [sp+4h] [bp-8h] BYREF

  if ( !a1 )
    return 0;
  v6 = strchr(a1, 58);
  v7 = a1 != v6;
  if ( !v6 )
    v7 = 0;
  if ( !v7 )
    return 0;
  v9 = v6 - a1;
  v10 = v6 + 1;
  strncpy(a2, a1, v6 - a1);
  a2[v9] = 0;
  if ( v10 - a1 >= strlen(a1) )
    return 0;
  sub_8F1B0(v10, &v11);
  *a3 = v11;
  return v7;
}
