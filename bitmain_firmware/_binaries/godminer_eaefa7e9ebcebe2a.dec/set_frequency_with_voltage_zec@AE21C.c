int __fastcall set_frequency_with_voltage_zec(int a1)
{
  int all_created_runtime; // r0
  _DWORD *v3; // r8
  float v4; // s17
  float v5; // s16
  int working_voltage; // r0
  int v7; // r10
  float v8; // s19
  int v9; // r0
  char *v10; // r4
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r7
  int v14; // r11
  int v15; // t1
  int v16; // r0
  int v17; // r0
  _DWORD *v18; // r7
  int v19; // r4
  int v20; // t1
  int result; // r0
  _DWORD *v22; // r8
  int v23; // r4
  int v24; // t1
  int v25; // r0
  int current_voltage; // [sp+10h] [bp-101Ch]
  int v27; // [sp+14h] [bp-1018h]
  int v28; // [sp+18h] [bp-1014h]
  int v29; // [sp+1Ch] [bp-1010h]
  int v30; // [sp+24h] [bp-1008h] BYREF
  _BYTE v31[4100]; // [sp+28h] [bp-1004h] BYREF

  v30 = 0;
  all_created_runtime = get_all_created_runtime(&v30);
  v3 = (_DWORD *)all_created_runtime;
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 964);
  v5 = *(float *)(*(_DWORD *)all_created_runtime + 960);
  if ( v4 > *(float *)(a1 + 108) )
    v4 = *(float *)(a1 + 108);
  current_voltage = get_current_voltage(all_created_runtime);
  working_voltage = get_working_voltage();
  v7 = working_voltage;
  if ( *(_DWORD *)(a1 + 96) != -64 )
  {
    working_voltage = (*(int (__fastcall **)(int))a1)(a1);
    v7 += working_voltage;
  }
  v8 = *(float *)(a1 + 116);
  V_LOCK(working_voltage);
  v9 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    200,
    "set_frequency_with_voltage_zec",
    30,
    220,
    60,
    v31);
  v10 = (char *)calloc(1u, 0xD8u);
  *(_QWORD *)v10 = -1;
  strcpy(v10 + 8, "a fake work");
  *((_DWORD *)v10 + 45) = 64;
  V_LOCK(*(_DWORD *)"a fake work");
  v11 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    200,
    "set_frequency_with_voltage_zec",
    30,
    229,
    60,
    v31);
  if ( v30 > 0 )
  {
    ++v10[40];
    v12 = *v3;
    if ( !*v3 )
      goto LABEL_20;
    v13 = v3;
    v14 = 0;
    while ( 1 )
    {
      (*(void (__fastcall **)(int, char *))(v12 + 32))(v12, v10);
      if ( v30 <= ++v14 )
        break;
      ++v10[40];
      v15 = v13[1];
      ++v13;
      v12 = v15;
      if ( !v15 )
        goto LABEL_20;
    }
  }
  free(v10);
  v27 = (int)(float)((float)(v4 - v5) / 6.25);
  if ( v27 <= 0 )
  {
LABEL_27:
    if ( v4 == v5 || v30 <= 0 )
    {
LABEL_33:
      V_LOCK(v16);
      v25 = logfmt_raw((int)v31, 0x1000u);
      V_UNLOCK(v25);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
        200,
        "set_frequency_with_voltage_zec",
        30,
        268,
        60,
        v31);
      return 0;
    }
    else
    {
      v22 = v3 - 1;
      v23 = 0;
      while ( 1 )
      {
        v24 = v22[1];
        ++v22;
        ++v23;
        result = (*(int (**)(void))(v24 + 188))();
        if ( result )
          break;
        v16 = usleep(*(_DWORD *)(a1 + 104));
        if ( v30 <= v23 )
          goto LABEL_33;
      }
    }
    return result;
  }
  v16 = 0;
  v28 = 0;
  v29 = v27 - (current_voltage - v7) / 10;
  while ( 1 )
  {
    v5 = v5 + 6.25;
    if ( v30 > 0 )
      break;
LABEL_21:
    if ( v7 + 20 < current_voltage && (float)(v8 * v4) < v5 && v29 <= v28 )
    {
      current_voltage -= 10;
      result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( result )
        return result;
      v16 = usleep((__useconds_t)"t..LowerHex$u20$for$u20$u8$GT$3fmt17hbb583368dc481f64E");
    }
    if ( v27 == ++v28 )
      goto LABEL_27;
  }
  v17 = *v3;
  if ( !*v3 )
  {
LABEL_20:
    printf("invalid pointer(%s)!\n", "be_runtimes[b]");
    return 3;
  }
  v18 = v3;
  v19 = 0;
  while ( 1 )
  {
    ++v19;
    result = (*(int (__fastcall **)(int, _DWORD))(v17 + 188))(v17, 0);
    if ( result )
      return result;
    v16 = usleep(*(_DWORD *)(a1 + 104));
    if ( v30 <= v19 )
      goto LABEL_21;
    v20 = v18[1];
    ++v18;
    v17 = v20;
    if ( !v20 )
      goto LABEL_20;
  }
}
