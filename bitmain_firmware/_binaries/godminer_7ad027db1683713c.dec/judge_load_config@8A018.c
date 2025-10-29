int __fastcall judge_load_config(char *a1)
{
  double *file; // r0
  double *v3; // r6
  int v4; // r8
  _DWORD *v6; // r0
  _DWORD *v7; // r10
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  const char *v13; // r0
  int v14; // r0
  unsigned int v15; // r7
  char *v16; // r9
  _DWORD *v17; // r0
  _DWORD *v18; // r8
  unsigned int v19; // r6
  int v20; // r6
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  const char *v27; // r11
  int v28; // r9
  int v29; // r8
  int v30; // r10
  int v31; // r0
  const char *v32; // r1
  int v33; // r7
  int v34; // t1
  char *v35; // [sp+0h] [bp-1134h]
  char *v36; // [sp+4h] [bp-1130h]
  char *v37; // [sp+8h] [bp-112Ch]
  double *v38; // [sp+28h] [bp-110Ch]
  char v39[92]; // [sp+34h] [bp-1100h] BYREF
  char v40[160]; // [sp+90h] [bp-10A4h] BYREF
  char v41[4100]; // [sp+130h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v41, 0x1000u, 0, "start %s", "judge_load_config");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/pool.c",
    150,
    "judge_load_config",
    17,
    634,
    20,
    v41);
  if ( a1 )
  {
    file = json_load_file(a1, 0, v39);
    v3 = file;
    if ( !file || *(_DWORD *)file )
    {
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "%s: JSON decode of file '%s' failed %s", "judge_load_config", a1, v40);
      v4 = 0;
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "judge_load_config",
        17,
        649,
        100,
        v41);
      return v4;
    }
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "%s: after json_load_file", "judge_load_config");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/pool.c",
      150,
      "judge_load_config",
      17,
      652,
      20,
      v41);
    v6 = (_DWORD *)json_object_get(v3, "pools");
    v7 = v6;
    if ( !v6 || *v6 != 1 )
      goto LABEL_8;
    v15 = 0;
    v16 = (char *)&unk_2D26C8;
    v38 = v3;
    dword_2D26C4 = (int)json_array_size(v6);
    while ( (unsigned int)json_array_size(v7) > v15 )
    {
      v17 = json_array_get(v7, v15);
      v18 = v17;
      if ( !v17 )
        break;
      v19 = __clz(v15 - 3);
      ++v15;
      v20 = v19 >> 5;
      if ( *v17 )
        v20 = 1;
      if ( v20 )
        break;
      v21 = (_DWORD *)json_object_get(v17, "url");
      if ( !v21 )
        break;
      if ( *v21 != 2 )
        break;
      v22 = json_string_value(v21);
      snprintf(v16, 0x100u, "%s", v22);
      v23 = (_DWORD *)json_object_get(v18, "user");
      if ( !v23 )
        break;
      if ( *v23 != 2 )
        break;
      v24 = json_string_value(v23);
      snprintf(v16 + 256, 0x100u, "%s", v24);
      v25 = (_DWORD *)json_object_get(v18, "pass");
      if ( !v25 || *v25 != 2 )
        break;
      v26 = json_string_value(v25);
      snprintf(v16 + 512, 0x100u, "%s", v26);
      V_LOCK();
      v35 = v16;
      v37 = v16 + 512;
      v36 = v16 + 256;
      v16 += 768;
      logfmt_raw(v41, 0x1000u, 0, "%s %s %s", v35, v36, v37);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "judge_load_config",
        17,
        676,
        20,
        v41);
    }
    v3 = v38;
    v27 = (const char *)&unk_2D26C8;
    v28 = total_pools;
    if ( total_pools == dword_2D26C4 )
    {
      if ( total_pools <= 0 )
      {
LABEL_8:
        v4 = 0;
        goto LABEL_9;
      }
      v29 = 0;
      v30 = pools - 4;
      while ( 1 )
      {
        v34 = *(_DWORD *)(v30 + 4);
        v30 += 4;
        v33 = v34;
        ++v29;
        if ( strcmp(*(const char **)(v34 + 12), v27) )
          break;
        v31 = strcmp(*(const char **)(v33 + 16), v27 + 256);
        v32 = v27 + 512;
        v27 += 768;
        if ( v31 || strcmp(*(const char **)(v33 + 20), v32) )
          break;
        if ( v28 == v29 )
          goto LABEL_8;
      }
    }
    v4 = 1;
LABEL_9:
    json_object_get(v3, "bitmain-freq-level");
    v8 = (_DWORD *)json_object_get(v3, "bitmain-fan-ctrl");
    if ( v8 && (unsigned int)(*v8 - 5) <= 1 && fan_pwm_fixed != (*v8 == 5) )
    {
      fan_pwm_fixed = *v8 == 5;
      v4 |= 4u;
    }
    v9 = (_DWORD *)json_object_get(v3, "bitmain-fan-pwm");
    if ( v9 )
    {
      if ( *v9 == 2 )
      {
        v13 = (const char *)json_string_value(v9);
        v14 = strtol(v13, 0, 10);
        if ( fan_pwm != v14 )
        {
          fan_pwm = v14;
          v4 |= 8u;
        }
      }
    }
    if ( *((_DWORD *)v3 + 1) != -1 )
    {
      v10 = (unsigned int *)v3 + 1;
      __dmb(0xBu);
      do
      {
        v11 = __ldrex(v10);
        v12 = v11 - 1;
      }
      while ( __strex(v12, v10) );
      if ( !v12 )
        json_delete(v3);
    }
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "ret = 0x%x", v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/pool.c",
      150,
      "judge_load_config",
      17,
      735,
      20,
      v41);
    return v4;
  }
  V_LOCK();
  logfmt_raw(v41, 0x1000u, 0, "%s: bad param", "judge_load_config");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/pool.c",
    150,
    "judge_load_config",
    17,
    643,
    100,
    v41);
  return 0;
}
