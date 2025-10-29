int __fastcall sub_7E8C0(int result)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  char *v3; // r0
  char *v4; // r0
  char *v5; // r0
  double v6[8]; // [sp+0h] [bp-C4h] BYREF
  double v7[8]; // [sp+40h] [bp-84h] BYREF
  double s[8]; // [sp+80h] [bp-44h] BYREF

  v1 = (_DWORD *)result;
  memset(v6, 0, sizeof(v6));
  memset(v7, 0, sizeof(v7));
  memset(s, 0, sizeof(s));
  if ( result )
  {
    v2 = json_object();
    snprintf((char *)v6, 0x40u, "%s", g_miner_version);
    v3 = BUFX_strdup((char *)v6);
    json_object_set_new(v2, "miner_version", v3);
    snprintf((char *)v7, 0x40u, "%s", g_miner_compiletime);
    v4 = BUFX_strdup((char *)v7);
    json_object_set_new(v2, "CompileTime", v4);
    snprintf((char *)s, 0x40u, "%s", g_miner_type);
    v5 = BUFX_strdup((char *)s);
    json_object_set_new(v2, "type", v5);
    return json_object_set_new(v1, "INFO", v2);
  }
  return result;
}
