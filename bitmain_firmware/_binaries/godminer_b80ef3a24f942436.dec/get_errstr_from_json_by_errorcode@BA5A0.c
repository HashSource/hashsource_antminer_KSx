int __fastcall get_errstr_from_json_by_errorcode(const char *a1, char *a2, size_t a3)
{
  int result; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r0
  unsigned int v10; // r4
  _DWORD *v11; // r0
  _DWORD *v12; // r6
  _DWORD *v13; // r0
  const char *v14; // r11
  _DWORD *v15; // r0
  unsigned int v16; // r1
  int v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  const char *v21; // r4
  _DWORD *v22; // r0
  const char *v23; // r0
  _BYTE v24[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_2F42C8 || (result = miner_6060info_errorcode_init()) != 0 )
  {
    v7 = (_DWORD *)json_object_get((_DWORD *)dword_2F42CC, "errorcode");
    v8 = v7;
    if ( !v7 || *v7 != 1 )
    {
      V_LOCK(v7);
      v9 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
        185,
        "get_errstr_from_json_by_errorcode",
        33,
        209,
        100,
        v24);
    }
    v10 = 0;
    do
    {
      v15 = json_array_size(v8);
      v16 = v10;
      if ( (unsigned int)v15 <= v10++ )
      {
        V_LOCK(v8);
        v18 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v18);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          185,
          "get_errstr_from_json_by_errorcode",
          33,
          237,
          100,
          v24);
        return 0;
      }
      v11 = json_array_get(v8, v16);
      v12 = v11;
      if ( !v11 || *v11 )
      {
        V_LOCK(v11);
        v19 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v19);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          185,
          "get_errstr_from_json_by_errorcode",
          33,
          218,
          100,
          v24);
        return 0;
      }
      v13 = (_DWORD *)json_object_get(v11, "code");
      v14 = (const char *)json_string_value(v13);
    }
    while ( strcmp(a1, v14) );
    v20 = (_DWORD *)json_object_get(v12, "reason");
    v21 = (const char *)json_string_value(v20);
    v22 = (_DWORD *)json_object_get(v12, "suggestion");
    v23 = (const char *)json_string_value(v22);
    snprintf(a2, a3, "%s; %s; %s", v14, v21, v23);
    return 1;
  }
  return result;
}
