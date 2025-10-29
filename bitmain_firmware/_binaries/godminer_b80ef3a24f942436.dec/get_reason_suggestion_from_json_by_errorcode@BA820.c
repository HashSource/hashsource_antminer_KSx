int __fastcall get_reason_suggestion_from_json_by_errorcode(const char *a1, char *a2, char *a3, size_t a4)
{
  int result; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r5
  int v11; // r0
  unsigned int v12; // r4
  _DWORD *v13; // r0
  _DWORD *v14; // r6
  _DWORD *v15; // r0
  const char *v16; // r0
  _DWORD *v17; // r0
  unsigned int v18; // r1
  int v20; // r0
  int v21; // r0
  _DWORD *v22; // r0
  const char *v23; // r0
  _DWORD *v24; // r0
  const char *v25; // r0
  _BYTE v26[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_2F42C8 || (result = miner_6060info_errorcode_init()) != 0 )
  {
    v9 = (_DWORD *)json_object_get((_DWORD *)dword_2F42CC, "errorcode");
    v10 = v9;
    if ( !v9 || *v9 != 1 )
    {
      V_LOCK(v9);
      v11 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
        185,
        "get_reason_suggestion_from_json_by_errorcode",
        44,
        256,
        100,
        v26);
    }
    v12 = 0;
    do
    {
      v17 = json_array_size(v10);
      v18 = v12;
      if ( (unsigned int)v17 <= v12++ )
      {
        V_LOCK(v10);
        v20 = logfmt_raw((int)v26, 0x1000u);
        V_UNLOCK(v20);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          185,
          "get_reason_suggestion_from_json_by_errorcode",
          44,
          286,
          100,
          v26);
        return 0;
      }
      v13 = json_array_get(v10, v18);
      v14 = v13;
      if ( !v13 || *v13 )
      {
        V_LOCK(v13);
        v21 = logfmt_raw((int)v26, 0x1000u);
        V_UNLOCK(v21);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          185,
          "get_reason_suggestion_from_json_by_errorcode",
          44,
          265,
          100,
          v26);
        return 0;
      }
      v15 = (_DWORD *)json_object_get(v13, "code");
      v16 = (const char *)json_string_value(v15);
    }
    while ( strcmp(a1, v16) );
    v22 = (_DWORD *)json_object_get(v14, "reason");
    v23 = (const char *)json_string_value(v22);
    snprintf(a2, a4, v23);
    v24 = (_DWORD *)json_object_get(v14, "suggestion");
    v25 = (const char *)json_string_value(v24);
    snprintf(a3, a4, v25);
    return 1;
  }
  return result;
}
