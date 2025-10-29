int __fastcall sub_7E868(int result, const char **a2, int a3)
{
  bool v3; // zf
  int v5; // r5
  int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  __int64 v11; // [sp+0h] [bp-20h] BYREF
  __int64 v12; // [sp+8h] [bp-18h]
  char v13[16]; // [sp+10h] [bp-10h] BYREF

  v3 = a2 == 0;
  if ( a2 )
    v3 = result == 0;
  v11 = 0;
  v12 = 0;
  memset(v13, 0, sizeof(v13));
  if ( !v3 )
  {
    v5 = result;
    v6 = json_object(result, a2, a3, v13, v11, HIDWORD(v11), v12, HIDWORD(v12));
    v7 = json_string("S");
    json_object_set_new(v6, "STATUS", v7);
    v8 = json_integer(dword_2E6F68, dword_2E6F68 >> 31);
    json_object_set_new(v6, "when", v8);
    snprintf((char *)&v11, 0x10u, "%s", *a2);
    v9 = json_string(&v11);
    json_object_set_new(v6, "Msg", v9);
    snprintf(v13, 0x10u, "%s", a2[1]);
    v10 = json_string(v13);
    json_object_set_new(v6, "api_version", v10);
    return json_object_set_new(v5, "STATUS", v6);
  }
  return result;
}
