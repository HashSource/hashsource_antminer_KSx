int set_working_voltage_and_runtime_freq()
{
  int working_voltage; // r8
  int current_voltage; // r7
  int result; // r0
  int v3; // r10
  unsigned __int8 v4; // r11
  int v5; // r3
  int v6; // r3
  int v7; // r9
  int v8; // r4
  int v9; // r5
  int v10; // r0
  int v11; // t1
  _BOOL4 v12; // r6
  int v13; // r9
  int v14; // r4
  int v15; // r5
  int v16; // r6
  int v17; // t1
  int i; // r4
  int v19; // t1
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int all_created_runtime; // [sp+14h] [bp-1018h]
  int v24; // [sp+18h] [bp-1014h]
  int v25; // [sp+24h] [bp-1008h] BYREF
  _DWORD v26[1025]; // [sp+28h] [bp-1004h] BYREF

  working_voltage = get_working_voltage();
  current_voltage = get_current_voltage();
  v25 = 0;
  all_created_runtime = get_all_created_runtime(&v25);
  result = is_power_init();
  v3 = result;
  if ( result )
  {
    if ( opt_algo == 8 )
    {
      v4 = 0;
      if ( working_voltage < current_voltage )
        v5 = -7;
      else
        v5 = 7;
      v24 = v5;
LABEL_19:
      if ( v25 > 0 )
      {
        v13 = 0;
        v14 = 0;
        v15 = all_created_runtime - 4;
        v16 = all_created_runtime - 4;
        do
        {
          v17 = *(_DWORD *)(v16 + 4);
          v16 += 4;
          ++v14;
          v13 |= (*(int (**)(void))(v17 + 184))();
        }
        while ( v25 > v14 );
        v12 = v13 == 0;
        if ( v13 )
        {
          usleep((__useconds_t)"ore..iter..traits..iterator..Iterator$GT$4last17hc978315af0f81255E");
          if ( v25 > 0 )
          {
            for ( i = 0; i < v25; ++i )
            {
              v19 = *(_DWORD *)(v15 + 4);
              v15 += 4;
              v13 |= (*(int (**)(void))(v19 + 184))();
            }
            v12 = v13 == 0;
          }
        }
      }
      else
      {
        v12 = v3;
      }
      while ( 1 )
      {
        v6 = current_voltage - working_voltage;
        if ( current_voltage - working_voltage < 0 )
          v6 = working_voltage - current_voltage;
        if ( v6 > 7 )
        {
          current_voltage += v24;
          set_voltage(current_voltage, 1);
          if ( working_voltage == current_voltage )
          {
            v7 = v12;
            v4 = v3;
          }
          else
          {
            v7 = v12 & v4;
          }
        }
        else
        {
          if ( working_voltage != current_voltage )
            set_voltage(working_voltage, 1);
          v7 = v12;
          current_voltage = working_voltage;
          v4 = v3;
        }
        v8 = 0;
        v26[0] = 0;
        result = get_all_created_runtime(v26);
        if ( v26[0] > 0 )
        {
          v9 = result - 4;
          do
          {
            v10 = dev_ctrl(result);
            v11 = *(_DWORD *)(v9 + 4);
            v9 += 4;
            ++v8;
            result = (*(int (__fastcall **)(_DWORD))(v10 + 80))(*(_DWORD *)(v11 + 244));
          }
          while ( v8 < v26[0] );
        }
        if ( v7 )
          break;
        if ( !v12 )
          goto LABEL_19;
      }
    }
  }
  else
  {
    V_LOCK(0);
    v20 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v20);
    v21 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "set_working_voltage_and_runtime_freq",
            36,
            1477,
            100,
            v26);
    V_LOCK(v21);
    v22 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/god-miner.c",
      160,
      "set_working_voltage_and_runtime_freq",
      36,
      1478,
      100,
      v26);
    return -1;
  }
  return result;
}
