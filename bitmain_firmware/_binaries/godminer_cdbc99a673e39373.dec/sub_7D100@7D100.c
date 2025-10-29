int __fastcall sub_7D100(int result, int a2, int a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r0
  __int64 v8; // [sp+0h] [bp-C4h] BYREF
  __int64 v9; // [sp+8h] [bp-BCh]
  double v10; // [sp+10h] [bp-B4h]
  double v11; // [sp+18h] [bp-ACh]
  double v12; // [sp+20h] [bp-A4h]
  double v13; // [sp+28h] [bp-9Ch]
  double v14; // [sp+30h] [bp-94h]
  double v15; // [sp+38h] [bp-8Ch]
  double v16[8]; // [sp+40h] [bp-84h] BYREF
  double s[8]; // [sp+80h] [bp-44h] BYREF

  v3 = result;
  v8 = 0;
  v9 = 0;
  memset(v16, 0, sizeof(v16));
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  v15 = 0.0;
  memset(s, 0, sizeof(s));
  if ( result )
  {
    v4 = json_object(result, a2, a3, s, v8, HIDWORD(v8), v9, HIDWORD(v9));
    snprintf((char *)&v8, 0x40u, "%s", g_miner_version);
    v5 = json_string(&v8);
    json_object_set_new(v4, "miner_version", v5);
    snprintf((char *)v16, 0x40u, "%s", g_miner_compiletime);
    v6 = json_string(v16);
    json_object_set_new(v4, "CompileTime", v6);
    snprintf((char *)s, 0x40u, "%s", g_miner_type);
    v7 = json_string(s);
    json_object_set_new(v4, "type", v7);
    return json_object_set_new(v3, "INFO", v4);
  }
  return result;
}
