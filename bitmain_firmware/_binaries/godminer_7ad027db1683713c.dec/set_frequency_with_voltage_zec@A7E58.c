int __fastcall set_frequency_with_voltage_zec(int a1)
{
  char *all_created_runtime; // r8
  float v3; // s17
  float v4; // s16
  int working_voltage; // r10
  float v6; // s19
  char *v7; // r4
  int v8; // r0
  char *v9; // r7
  int v10; // r11
  int v11; // t1
  int v12; // r0
  char *v13; // r7
  int v14; // r4
  int v15; // t1
  int result; // r0
  char *v17; // r8
  int v18; // r4
  int v19; // t1
  int current_voltage; // [sp+10h] [bp-101Ch]
  int v21; // [sp+14h] [bp-1018h]
  int v22; // [sp+18h] [bp-1014h]
  int v23; // [sp+1Ch] [bp-1010h]
  int v24; // [sp+24h] [bp-1008h] BYREF
  char v25[4100]; // [sp+28h] [bp-1004h] BYREF

  v24 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v24);
  v3 = *(float *)(*(_DWORD *)all_created_runtime + 940);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 936);
  if ( v3 > *(float *)(a1 + 104) )
    v3 = *(float *)(a1 + 104);
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 92) != -64 )
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
  v6 = *(float *)(a1 + 112);
  V_LOCK();
  logfmt_raw(v25, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 1 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    195,
    "set_frequency_with_voltage_zec",
    30,
    218,
    60,
    v25);
  v7 = (char *)calloc(1u, 0xD8u);
  *(_QWORD *)v7 = -1;
  strcpy(v7 + 8, "a fake work");
  *((_DWORD *)v7 + 45) = 64;
  V_LOCK();
  logfmt_raw(v25, 0x1000u, 0, "send a fake work to start asic");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    195,
    "set_frequency_with_voltage_zec",
    30,
    227,
    60,
    v25);
  if ( v24 > 0 )
  {
    ++v7[40];
    v8 = *(_DWORD *)all_created_runtime;
    if ( !*(_DWORD *)all_created_runtime )
      goto LABEL_20;
    v9 = all_created_runtime;
    v10 = 0;
    while ( 1 )
    {
      (*(void (__fastcall **)(int, char *))(v8 + 32))(v8, v7);
      if ( v24 <= ++v10 )
        break;
      ++v7[40];
      v11 = *((_DWORD *)v9 + 1);
      v9 += 4;
      v8 = v11;
      if ( !v11 )
        goto LABEL_20;
    }
  }
  free(v7);
  v21 = (int)(float)((float)(v3 - v4) / 6.25);
  if ( v21 <= 0 )
  {
LABEL_27:
    if ( v3 == v4 || v24 <= 0 )
    {
LABEL_33:
      V_LOCK();
      logfmt_raw(v25, 0x1000u, 0, "set freq to %.2f, current voltage %d", v3, current_voltage);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
        195,
        "set_frequency_with_voltage_zec",
        30,
        266,
        60,
        v25);
      return 0;
    }
    else
    {
      v17 = all_created_runtime - 4;
      v18 = 0;
      while ( 1 )
      {
        v19 = *((_DWORD *)v17 + 1);
        v17 += 4;
        ++v18;
        result = (*(int (**)(void))(v19 + 188))();
        if ( result )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v24 <= v18 )
          goto LABEL_33;
      }
    }
    return result;
  }
  v22 = 0;
  v23 = v21 - (current_voltage - working_voltage) / 10;
  while ( 1 )
  {
    v4 = v4 + 6.25;
    if ( v24 > 0 )
      break;
LABEL_21:
    if ( working_voltage + 20 < current_voltage && (float)(v6 * v3) < v4 && v23 <= v22 )
    {
      current_voltage -= 10;
      result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( result )
        return result;
      usleep((__useconds_t)"d_power17h7a6a23e613986a08E");
    }
    if ( v21 == ++v22 )
      goto LABEL_27;
  }
  v12 = *(_DWORD *)all_created_runtime;
  if ( !*(_DWORD *)all_created_runtime )
  {
LABEL_20:
    printf("invalid pointer(%s)!\n", "be_runtimes[b]");
    return 3;
  }
  v13 = all_created_runtime;
  v14 = 0;
  while ( 1 )
  {
    ++v14;
    result = (*(int (__fastcall **)(int, _DWORD))(v12 + 188))(v12, 0);
    if ( result )
      return result;
    usleep(*(_DWORD *)(a1 + 100));
    if ( v24 <= v14 )
      goto LABEL_21;
    v15 = *((_DWORD *)v13 + 1);
    v13 += 4;
    v12 = v15;
    if ( !v15 )
      goto LABEL_20;
  }
}
