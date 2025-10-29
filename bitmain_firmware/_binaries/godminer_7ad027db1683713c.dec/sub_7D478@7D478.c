int __fastcall sub_7D478(_DWORD *a1, int a2, const char *a3)
{
  _BOOL4 v3; // r4
  _DWORD *v6; // r9
  int v7; // r7
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  char v12[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = a1 == 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "%s: input bad api param", "reset_fpga_baud_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "reset_fpga_baud_old",
      19,
      2113,
      100,
      v12);
    return -2147483646;
  }
  else
  {
    sub_7D134(a1, 1, 79, *(_DWORD *)(a2 + 8));
    v6 = json_array();
    v7 = strtol(a3, 0, 10);
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "parameter = \"%s\", config = %d.", a3, v7);
    V_UNLOCK();
    v8 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/api_new.c",
           153,
           "reset_fpga_baud_old",
           19,
           2120,
           100,
           v12);
    v9 = dev_ctrl(v8);
    (*(void (__fastcall **)(int))(v9 + 16))(v7);
    json_object_set_new(a1, "FPGA_BAUD", v6);
    v10 = json_integer(1);
    json_object_set_new(a1, "id", v10);
    return 0;
  }
}
