_DWORD *__fastcall sub_7D134(_DWORD *result, int a2, int a3, int a4)
{
  bool v4; // zf
  _DWORD *v8; // r7
  _DWORD *v9; // r9
  _DWORD *v10; // r0
  __int16 v11; // r3
  _DWORD *v12; // r5
  char *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  int v16; // r2
  int v17; // r3
  char *v18; // r0
  char *v19; // r0
  _DWORD *v20; // r0
  __int16 v21; // [sp+4h] [bp-38h] BYREF
  double s[6]; // [sp+8h] [bp-34h] BYREF

  v4 = a4 == 0;
  if ( a4 )
    v4 = result == 0;
  memset(s, 0, sizeof(s));
  v21 = 0;
  if ( !v4 )
  {
    v8 = result;
    v9 = json_array();
    v10 = json_object();
    if ( a2 )
      v11 = 83;
    else
      v11 = 69;
    v12 = v10;
    v21 = v11;
    v13 = BUFX_strdup((char *)&v21);
    json_object_set_new(v12, "STATUS", v13);
    v14 = json_integer(dword_2D2388);
    json_object_set_new(v12, "When", v14);
    v15 = json_integer(a3);
    json_object_set_new(v12, "Code", v15);
    if ( a3 == 7 )
      v17 = 9616;
    else
      v16 = 31268;
    if ( a3 == 7 )
      v16 = a4;
    else
      v17 = a4;
    if ( a3 == 7 )
      HIWORD(v17) = 45;
    else
      HIWORD(v16) = 39;
    if ( a3 == 7 )
      v17 = *(_DWORD *)v17;
    snprintf((char *)s, 0x30u, (const char *)v16, v17);
    v18 = BUFX_strdup((char *)s);
    json_object_set_new(v12, "Msg", v18);
    v19 = BUFX_strdup(opt_api_description);
    json_object_set_new(v12, "Description", v19);
    json_array_append_new(v9, v12);
    result = (_DWORD *)json_object_set_new(v8, "STATUS", v9);
    if ( !a2 )
    {
      v20 = json_integer(1);
      return (_DWORD *)json_object_set_new(v8, "id", v20);
    }
  }
  return result;
}
