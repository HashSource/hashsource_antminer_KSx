int __fastcall set_frequency_with_voltage_zec(int a1)
{
  char *all_created_runtime; // r8
  float v3; // s17
  float v4; // s16
  int working_voltage; // r0
  int v6; // r10
  float v7; // s19
  int v8; // r0
  char *v9; // r4
  int v10; // r0
  int v11; // r0
  char *v12; // r7
  int v13; // r11
  int v14; // t1
  int v15; // r0
  int v16; // r0
  char *v17; // r7
  int v18; // r4
  int v19; // t1
  int result; // r0
  char *v21; // r8
  int v22; // r4
  int v23; // t1
  int v24; // r0
  int current_voltage; // [sp+10h] [bp-101Ch]
  int v26; // [sp+14h] [bp-1018h]
  int v27; // [sp+18h] [bp-1014h]
  int v28; // [sp+1Ch] [bp-1010h]
  int v29; // [sp+24h] [bp-1008h] BYREF
  _BYTE v30[4100]; // [sp+28h] [bp-1004h] BYREF

  v29 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v29);
  v3 = *(float *)(*(_DWORD *)all_created_runtime + 976);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 972);
  if ( v3 > *(float *)(a1 + 104) )
    v3 = *(float *)(a1 + 104);
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v6 = working_voltage;
  if ( *(_DWORD *)(a1 + 92) != -64 )
  {
    working_voltage = (*(int (__fastcall **)(int))a1)(a1);
    v6 += working_voltage;
  }
  v7 = *(float *)(a1 + 112);
  V_LOCK(working_voltage);
  v8 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    195,
    "set_frequency_with_voltage_zec",
    30,
    220,
    60,
    v30);
  v9 = (char *)calloc(1u, 0xD8u);
  *(_QWORD *)v9 = -1;
  strcpy(v9 + 8, "a fake work");
  *((_DWORD *)v9 + 45) = 64;
  V_LOCK(*(_DWORD *)"a fake work");
  v10 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    195,
    "set_frequency_with_voltage_zec",
    30,
    229,
    60,
    v30);
  if ( v29 > 0 )
  {
    ++v9[40];
    v11 = *(_DWORD *)all_created_runtime;
    if ( !*(_DWORD *)all_created_runtime )
      goto LABEL_20;
    v12 = all_created_runtime;
    v13 = 0;
    while ( 1 )
    {
      (*(void (__fastcall **)(int, char *))(v11 + 32))(v11, v9);
      if ( v29 <= ++v13 )
        break;
      ++v9[40];
      v14 = *((_DWORD *)v12 + 1);
      v12 += 4;
      v11 = v14;
      if ( !v14 )
        goto LABEL_20;
    }
  }
  free(v9);
  v26 = (int)(float)((float)(v3 - v4) / 6.25);
  if ( v26 <= 0 )
  {
LABEL_27:
    if ( v3 == v4 || v29 <= 0 )
    {
LABEL_33:
      V_LOCK(v15);
      v24 = logfmt_raw((int)v30, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
        195,
        "set_frequency_with_voltage_zec",
        30,
        268,
        60,
        v30);
      return 0;
    }
    else
    {
      v21 = all_created_runtime - 4;
      v22 = 0;
      while ( 1 )
      {
        v23 = *((_DWORD *)v21 + 1);
        v21 += 4;
        ++v22;
        result = (*(int (**)(void))(v23 + 188))();
        if ( result )
          break;
        v15 = usleep(*(_DWORD *)(a1 + 100));
        if ( v29 <= v22 )
          goto LABEL_33;
      }
    }
    return result;
  }
  v15 = 0;
  v27 = 0;
  v28 = v26 - (current_voltage - v6) / 10;
  while ( 1 )
  {
    v4 = v4 + 6.25;
    if ( v29 > 0 )
      break;
LABEL_21:
    if ( v6 + 20 < current_voltage && (float)(v7 * v3) < v4 && v28 <= v27 )
    {
      current_voltage -= 10;
      result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( result )
        return result;
      v15 = usleep((__useconds_t)"ersion12VersionIndex5index17hb28023ac069c5199E");
    }
    if ( v26 == ++v27 )
      goto LABEL_27;
  }
  v16 = *(_DWORD *)all_created_runtime;
  if ( !*(_DWORD *)all_created_runtime )
  {
LABEL_20:
    printf("invalid pointer(%s)!\n", "be_runtimes[b]");
    return 3;
  }
  v17 = all_created_runtime;
  v18 = 0;
  while ( 1 )
  {
    ++v18;
    result = (*(int (__fastcall **)(int, _DWORD))(v16 + 188))(v16, 0);
    if ( result )
      return result;
    v15 = usleep(*(_DWORD *)(a1 + 100));
    if ( v29 <= v18 )
      goto LABEL_21;
    v19 = *((_DWORD *)v17 + 1);
    v17 += 4;
    v16 = v19;
    if ( !v19 )
      goto LABEL_20;
  }
}
