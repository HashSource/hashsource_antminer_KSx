int __fastcall set_json_info_by_errorcode_and_time(_DWORD *a1, const char *a2, time_t a3)
{
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  _DWORD *v9; // r5
  char *v10; // r0
  char *v11; // r0
  char *v12; // r0
  char *v13; // r0
  time_t timer; // [sp+1Ch] [bp-334h] BYREF
  struct tm tp; // [sp+24h] [bp-32Ch] BYREF
  char v16[256]; // [sp+50h] [bp-300h] BYREF
  char v17[256]; // [sp+150h] [bp-200h] BYREF
  char s[256]; // [sp+250h] [bp-100h] BYREF

  timer = a3;
  if ( byte_2EBDBC || (result = miner_6060info_errorcode_init()) != 0 )
  {
    result = get_reason_suggestion_from_json_by_errorcode(a2, v16, v17, 0x100u);
    if ( result )
    {
      v9 = json_object(result, v6, v7, v8);
      v10 = (char *)json_string(a2);
      json_object_set_new(v9, "code", v10);
      v11 = (char *)json_string(v16);
      json_object_set_new(v9, "cause", v11);
      v12 = (char *)json_string(v17);
      json_object_set_new(v9, "suggestion", v12);
      localtime_r(&timer, &tp);
      snprintf(
        s,
        0x100u,
        "%d%02d%02d%02d%02d%02d",
        tp.tm_year + 1900,
        tp.tm_mon + 1,
        tp.tm_mday,
        tp.tm_hour,
        tp.tm_min,
        tp.tm_sec);
      v13 = (char *)json_string(s);
      json_object_set_new(v9, "timestamp", v13);
      return json_array_append_new(a1, v9);
    }
  }
  return result;
}
