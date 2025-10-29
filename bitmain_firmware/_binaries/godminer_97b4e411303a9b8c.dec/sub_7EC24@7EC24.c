int __fastcall sub_7EC24(int result, int a2, int a3, int a4)
{
  bool v4; // zf
  int v8; // r7
  __int64 v9; // r0
  int v10; // r9
  int v11; // r2
  int v12; // r3
  int v13; // r0
  __int16 v14; // r3
  int v15; // r5
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r2
  int v20; // r3
  int v21; // r0
  int v22; // r0
  int v23; // r0
  __int16 v24; // [sp+4h] [bp-38h] BYREF
  double s[6]; // [sp+8h] [bp-34h] BYREF

  v4 = a4 == 0;
  if ( a4 )
    v4 = result == 0;
  memset(s, 0, sizeof(s));
  v24 = 0;
  if ( !v4 )
  {
    v8 = result;
    v9 = json_array();
    v10 = v9;
    v13 = json_object(v9, HIDWORD(v9), v11, v12);
    if ( a2 )
      v14 = 83;
    else
      v14 = 69;
    v15 = v13;
    v24 = v14;
    v16 = json_string(&v24);
    json_object_set_new(v15, "STATUS", v16);
    v17 = json_integer(dword_2E8F80, dword_2E8F80 >> 31);
    json_object_set_new(v15, "When", v17);
    v18 = json_integer(a3, a3 >> 31);
    json_object_set_new(v15, "Code", v18);
    if ( a3 == 7 )
      v20 = 38360;
    else
      v19 = 47332;
    if ( a3 == 7 )
      v19 = a4;
    else
      v20 = a4;
    if ( a3 == 7 )
      HIWORD(v20) = 46;
    else
      HIWORD(v19) = 40;
    if ( a3 == 7 )
      v20 = *(_DWORD *)v20;
    snprintf((char *)s, 0x30u, (const char *)v19, v20);
    v21 = json_string(s);
    json_object_set_new(v15, "Msg", v21);
    v22 = json_string(opt_api_description);
    json_object_set_new(v15, "Description", v22);
    json_array_append_new(v10, v15);
    result = json_object_set_new(v8, "STATUS", v10);
    if ( !a2 )
    {
      v23 = json_integer(1, 0);
      return json_object_set_new(v8, "id", v23);
    }
  }
  return result;
}
