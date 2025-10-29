int __fastcall get_working_voltage_base(int a1)
{
  int temp; // r4
  int v3; // r11
  int working_voltage; // r0
  int v5; // r9
  int v6; // r7
  int (__fastcall *v7)(int, int); // r2
  int v8; // r10
  int v9; // r6
  int v10; // r0
  int result; // r0
  _BYTE v12[24]; // [sp+18h] [bp-1004h] BYREF
  int v13; // [sp+30h] [bp-FECh]

  temp = get_temp(1);
  v3 = get_temp(2);
  working_voltage = get_working_voltage();
  v5 = working_voltage;
  if ( temp == -64 )
  {
    v9 = working_voltage;
  }
  else
  {
    if ( dword_2E4DE8 - temp > 5 )
    {
      if ( ++dword_2E8350 <= 1 )
        v6 = 0;
      else
        v6 = 20;
    }
    else
    {
      v6 = 0;
      dword_2E8350 = 0;
    }
    v7 = *(int (__fastcall **)(int, int))a1;
    dword_2E4DE8 = temp;
    v8 = v7(a1, temp);
    platform_get_fan_control_info(v12);
    working_voltage = (*(int (__fastcall **)(int, int, int, int))(a1 + 4))(a1, temp, v3, v13);
    v9 = v5 + v8 + v6 + working_voltage;
  }
  V_LOCK(working_voltage);
  v10 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
    187,
    "get_working_voltage_base",
    24,
    326,
    20,
    v12);
  result = *(_DWORD *)(a1 + 100);
  if ( v9 < result )
    return v9;
  return result;
}
