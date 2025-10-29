void __fastcall __noreturn check_working_voltage(int a1)
{
  int current_voltage; // r6
  int v3; // r0
  int v4; // r3
  int v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // [sp+1Ch] [bp-4h] BYREF
  _BYTE v10[4100]; // [sp+20h] [bp+0h] BYREF

  v9 = 0;
  get_all_created_runtime(&v9);
  while ( 1 )
  {
    current_voltage = get_current_voltage();
    v3 = (*(int (__fastcall **)(int))(a1 + 8))(a1);
    v4 = current_voltage - v3;
    v5 = v3;
    if ( current_voltage - v3 < 0 )
      v4 = v3 - current_voltage;
    if ( v4 > 9 )
    {
      V_LOCK(v3);
      v6 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "check_working_voltage",
        21,
        352,
        40,
        v10);
      if ( opt_algo == 9 )
      {
        (*(void (__fastcall **)(int, int))(a1 + 28))(a1, v5);
      }
      else if ( opt_algo == 11 )
      {
        v8 = is_power_init(a1, v5);
        set_voltage_by_steps(v5, v8, 20);
      }
      else
      {
        v7 = is_power_init(a1, v5);
        set_voltage_by_steps(v5, v7, 100);
      }
    }
    sleep(1u);
  }
}
