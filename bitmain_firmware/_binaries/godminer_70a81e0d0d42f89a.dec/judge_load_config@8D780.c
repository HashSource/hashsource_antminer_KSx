int __fastcall judge_load_config(int a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD *file; // r0
  _DWORD *v5; // r6
  int v6; // r0
  int v7; // r8
  int v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r10
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  int v17; // r0
  int v18; // r0
  int v19; // r0
  const char *v20; // r0
  unsigned int v21; // r7
  char *v22; // r9
  _DWORD *v23; // r0
  _DWORD *v24; // r8
  unsigned int v25; // r6
  int v26; // r6
  _DWORD *v27; // r0
  int v28; // r0
  _DWORD *v29; // r0
  int v30; // r0
  _DWORD *v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  const char *v35; // r11
  int v36; // r9
  int v37; // r8
  int v38; // r10
  int v39; // r0
  const char *v40; // r1
  int v41; // r7
  int v42; // t1
  _DWORD *v43; // [sp+28h] [bp-110Ch]
  char v44[92]; // [sp+34h] [bp-1100h] BYREF
  _BYTE v45[4100]; // [sp+130h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v45, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/pool.c",
         155,
         "judge_load_config",
         17,
         686,
         20,
         v45);
  if ( a1 )
  {
    file = (_DWORD *)json_load_file(a1, 0, v44);
    v5 = file;
    if ( !file || *file )
    {
      V_LOCK(file);
      v6 = logfmt_raw((int)v45, 0x1000u);
      v7 = 0;
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/pool.c",
        155,
        "judge_load_config",
        17,
        701,
        100,
        v45);
      return v7;
    }
    V_LOCK(file);
    v9 = logfmt_raw((int)v45, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/pool.c",
      155,
      "judge_load_config",
      17,
      704,
      20,
      v45);
    v10 = (_DWORD *)json_object_get(v5, "pools");
    v11 = v10;
    if ( !v10 || *v10 != 1 )
      goto LABEL_8;
    v21 = 0;
    v22 = (char *)&unk_2EAA18;
    v43 = v5;
    dword_2EAA14 = json_array_size(v10);
    while ( json_array_size(v11) > v21 )
    {
      v23 = (_DWORD *)json_array_get(v11, v21);
      v24 = v23;
      if ( !v23 )
        break;
      v25 = __clz(v21 - 3);
      ++v21;
      v26 = v25 >> 5;
      if ( *v23 )
        v26 = 1;
      if ( v26 )
        break;
      v27 = (_DWORD *)json_object_get(v23, "url");
      if ( !v27 )
        break;
      if ( *v27 != 2 )
        break;
      v28 = json_string_value(v27);
      snprintf(v22, 0x100u, "%s", v28);
      v29 = (_DWORD *)json_object_get(v24, "user");
      if ( !v29 )
        break;
      if ( *v29 != 2 )
        break;
      v30 = json_string_value(v29);
      snprintf(v22 + 256, 0x100u, "%s", v30);
      v31 = (_DWORD *)json_object_get(v24, "pass");
      if ( !v31 || *v31 != 2 )
        break;
      v32 = json_string_value(v31);
      v33 = snprintf(v22 + 512, 0x100u, "%s", v32);
      V_LOCK(v33);
      v22 += 768;
      v34 = logfmt_raw((int)v45, 0x1000u);
      V_UNLOCK(v34);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/pool.c",
        155,
        "judge_load_config",
        17,
        728,
        20,
        v45);
    }
    v5 = v43;
    v35 = (const char *)&unk_2EAA18;
    v36 = total_pools;
    if ( total_pools == dword_2EAA14 )
    {
      if ( total_pools <= 0 )
      {
LABEL_8:
        v7 = 0;
        goto LABEL_9;
      }
      v37 = 0;
      v38 = pools - 4;
      while ( 1 )
      {
        v42 = *(_DWORD *)(v38 + 4);
        v38 += 4;
        v41 = v42;
        ++v37;
        if ( strcmp(*(const char **)(v42 + 12), v35) )
          break;
        v39 = strcmp(*(const char **)(v41 + 16), v35 + 256);
        v40 = v35 + 512;
        v35 += 768;
        if ( v39 || strcmp(*(const char **)(v41 + 20), v40) )
          break;
        if ( v36 == v37 )
          goto LABEL_8;
      }
    }
    v7 = 1;
LABEL_9:
    json_object_get(v5, "bitmain-freq-level");
    v12 = (_DWORD *)json_object_get(v5, "bitmain-fan-ctrl");
    if ( v12 && (unsigned int)(*v12 - 5) <= 1 && fan_pwm_fixed != (*v12 == 5) )
    {
      fan_pwm_fixed = *v12 == 5;
      v7 |= 4u;
    }
    v13 = (_DWORD *)json_object_get(v5, "bitmain-fan-pwm");
    if ( v13 )
    {
      if ( *v13 == 2 )
      {
        v20 = (const char *)json_string_value(v13);
        v13 = (_DWORD *)strtol(v20, 0, 10);
        if ( (_DWORD *)fan_pwm != v13 )
        {
          fan_pwm = (int)v13;
          v7 |= 8u;
        }
      }
    }
    if ( v5[1] != -1 )
    {
      v14 = v5 + 1;
      __dmb(0xBu);
      do
      {
        v15 = __ldrex(v14);
        v16 = v15 - 1;
      }
      while ( __strex(v16, v14) );
      if ( !v16 )
        v13 = (_DWORD *)json_delete(v5);
    }
    V_LOCK(v13);
    v17 = logfmt_raw((int)v45, 0x1000u);
    V_UNLOCK(v17);
    v18 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/pool.c",
            155,
            "judge_load_config",
            17,
            787,
            20,
            v45);
    if ( opt_algo == 12 )
    {
      if ( fan_pwm_fixed )
        sub_8BD60(v18);
    }
    return v7;
  }
  V_LOCK(v3);
  v19 = logfmt_raw((int)v45, 0x1000u);
  V_UNLOCK(v19);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/pool.c",
    155,
    "judge_load_config",
    17,
    695,
    100,
    v45);
  return 0;
}
