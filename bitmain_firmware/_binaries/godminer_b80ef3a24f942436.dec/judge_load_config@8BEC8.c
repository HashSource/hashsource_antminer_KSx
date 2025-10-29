int __fastcall judge_load_config(char *a1)
{
  int v2; // r0
  int v3; // r0
  double *file; // r0
  double *v5; // r6
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
  const char *v19; // r0
  unsigned int v20; // r7
  char *v21; // r9
  _DWORD *v22; // r0
  _DWORD *v23; // r8
  unsigned int v24; // r6
  int v25; // r6
  _DWORD *v26; // r0
  int v27; // r0
  _DWORD *v28; // r0
  int v29; // r0
  _DWORD *v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  const char *v34; // r11
  int v35; // r9
  int v36; // r8
  int v37; // r10
  int v38; // r0
  const char *v39; // r1
  int v40; // r7
  int v41; // t1
  double *v42; // [sp+28h] [bp-110Ch]
  char v43[92]; // [sp+34h] [bp-1100h] BYREF
  _BYTE v44[4100]; // [sp+130h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v44, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/pool.c",
         150,
         "judge_load_config",
         17,
         657,
         20,
         v44);
  if ( a1 )
  {
    file = json_load_file(a1, 0, v43);
    v5 = file;
    if ( !file || *(_DWORD *)file )
    {
      V_LOCK(file);
      v6 = logfmt_raw((int)v44, 0x1000u);
      v7 = 0;
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "judge_load_config",
        17,
        672,
        100,
        v44);
      return v7;
    }
    V_LOCK(file);
    v9 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/pool.c",
      150,
      "judge_load_config",
      17,
      675,
      20,
      v44);
    v10 = (_DWORD *)json_object_get(v5, "pools");
    v11 = v10;
    if ( !v10 || *v10 != 1 )
      goto LABEL_8;
    v20 = 0;
    v21 = (char *)&unk_2F2EA0;
    v42 = v5;
    dword_2F2E9C = json_array_size(v10);
    while ( json_array_size(v11) > v20 )
    {
      v22 = json_array_get(v11, v20);
      v23 = v22;
      if ( !v22 )
        break;
      v24 = __clz(v20 - 3);
      ++v20;
      v25 = v24 >> 5;
      if ( *v22 )
        v25 = 1;
      if ( v25 )
        break;
      v26 = (_DWORD *)json_object_get(v22, "url");
      if ( !v26 )
        break;
      if ( *v26 != 2 )
        break;
      v27 = json_string_value(v26);
      snprintf(v21, 0x100u, "%s", v27);
      v28 = (_DWORD *)json_object_get(v23, "user");
      if ( !v28 )
        break;
      if ( *v28 != 2 )
        break;
      v29 = json_string_value(v28);
      snprintf(v21 + 256, 0x100u, "%s", v29);
      v30 = (_DWORD *)json_object_get(v23, "pass");
      if ( !v30 || *v30 != 2 )
        break;
      v31 = json_string_value(v30);
      v32 = snprintf(v21 + 512, 0x100u, "%s", v31);
      V_LOCK(v32);
      v21 += 768;
      v33 = logfmt_raw((int)v44, 0x1000u);
      V_UNLOCK(v33);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "judge_load_config",
        17,
        699,
        20,
        v44);
    }
    v5 = v42;
    v34 = (const char *)&unk_2F2EA0;
    v35 = total_pools;
    if ( total_pools == dword_2F2E9C )
    {
      if ( total_pools <= 0 )
      {
LABEL_8:
        v7 = 0;
        goto LABEL_9;
      }
      v36 = 0;
      v37 = pools - 4;
      while ( 1 )
      {
        v41 = *(_DWORD *)(v37 + 4);
        v37 += 4;
        v40 = v41;
        ++v36;
        if ( strcmp(*(const char **)(v41 + 12), v34) )
          break;
        v38 = strcmp(*(const char **)(v40 + 16), v34 + 256);
        v39 = v34 + 512;
        v34 += 768;
        if ( v38 || strcmp(*(const char **)(v40 + 20), v39) )
          break;
        if ( v35 == v36 )
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
        v19 = (const char *)json_string_value(v13);
        v13 = (_DWORD *)strtol(v19, 0, 10);
        if ( (_DWORD *)fan_pwm != v13 )
        {
          fan_pwm = (int)v13;
          v7 |= 8u;
        }
      }
    }
    if ( *((_DWORD *)v5 + 1) != -1 )
    {
      v14 = (unsigned int *)v5 + 1;
      __dmb(0xBu);
      do
      {
        v15 = __ldrex(v14);
        v16 = v15 - 1;
      }
      while ( __strex(v16, v14) );
      if ( !v16 )
        json_delete(v5);
    }
    V_LOCK(v13);
    v17 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/pool.c",
      150,
      "judge_load_config",
      17,
      758,
      20,
      v44);
    return v7;
  }
  V_LOCK(v3);
  v18 = logfmt_raw((int)v44, 0x1000u);
  V_UNLOCK(v18);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/pool.c",
    150,
    "judge_load_config",
    17,
    666,
    100,
    v44);
  return 0;
}
