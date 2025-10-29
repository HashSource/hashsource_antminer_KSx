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
  float v12[1025]; // [sp+18h] [bp-1004h] BYREF

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
    if ( dword_2F09B4 - temp > 5 )
    {
      if ( ++dword_2F3B48 <= 1 )
        v6 = 0;
      else
        v6 = 20;
    }
    else
    {
      v6 = 0;
      dword_2F3B48 = 0;
    }
    v7 = *(int (__fastcall **)(int, int))a1;
    dword_2F09B4 = temp;
    v8 = v7(a1, temp);
    platform_get_fan_control_info(v12);
    working_voltage = (*(int (__fastcall **)(int, int, int, _DWORD))(a1 + 4))(a1, temp, v3, LODWORD(v12[6]));
    v9 = v5 + v8 + v6 + working_voltage;
  }
  V_LOCK(working_voltage);
  v10 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
    182,
    "get_working_voltage_base",
    24,
    331,
    20,
    v12);
  result = *(_DWORD *)(a1 + 96);
  if ( v9 < result )
    return v9;
  return result;
}
