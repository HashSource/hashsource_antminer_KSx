int __fastcall get_working_voltage_ks5(int a1)
{
  int temp; // r4
  int v3; // r5
  int working_voltage; // r0
  int v5; // r10
  int v6; // r8
  int (__fastcall *v7)(int, int); // r2
  int v8; // r11
  int v9; // r6
  int v10; // r5
  int v11; // r0
  int result; // r0
  _BYTE v13[24]; // [sp+10h] [bp-1004h] BYREF
  int v14; // [sp+28h] [bp-FECh]

  temp = get_temp(1);
  v3 = get_temp(4);
  working_voltage = get_working_voltage();
  v5 = working_voltage;
  if ( temp == -64 )
  {
    v10 = working_voltage;
    v9 = 20;
  }
  else
  {
    if ( dword_2E6B94 - temp > 5 )
    {
      if ( ++dword_2EA364 <= 1 )
        v6 = 0;
      else
        v6 = 20;
    }
    else
    {
      v6 = 0;
      dword_2EA364 = 0;
    }
    v7 = *(int (__fastcall **)(int, int))a1;
    dword_2E6B94 = temp;
    v8 = v7(a1, temp);
    platform_get_fan_control_info(v13);
    working_voltage = (*(int (__fastcall **)(int, int, int, int))(a1 + 4))(a1, temp, v3, v14);
    if ( temp > 40 )
      v9 = 0;
    else
      v9 = 20;
    v10 = v5 + v8 + v6 + working_voltage;
  }
  V_LOCK(working_voltage);
  v11 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    200,
    "get_working_voltage_ks5",
    23,
    673,
    20,
    v13);
  result = v9 + *(_DWORD *)(a1 + 100);
  if ( result >= v10 )
    return v10;
  return result;
}
