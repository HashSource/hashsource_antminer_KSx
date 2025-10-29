int __fastcall sub_7ED40(_DWORD *a1, int a2, const char *a3)
{
  _BOOL4 v3; // r4
  _DWORD *v6; // r9
  int v7; // r7
  int v8; // r0
  int v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  int v13; // r0
  _BYTE v14[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = a1 == 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(a1);
    v13 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "reset_fpga_baud_old",
      19,
      2251,
      100,
      v14);
    return -2147483646;
  }
  else
  {
    sub_7E9FC((int)a1, 1, 79, *(_DWORD *)(a2 + 8));
    v6 = json_array();
    v7 = strtol(a3, 0, 10);
    V_LOCK(v7);
    v8 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v8);
    v9 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/api_new.c",
           153,
           "reset_fpga_baud_old",
           19,
           2258,
           100,
           v14);
    v10 = dev_ctrl(v9);
    (*(void (__fastcall **)(int))(v10 + 20))(v7);
    json_object_set_new(a1, "FPGA_BAUD", v6);
    v11 = json_integer(1);
    json_object_set_new(a1, "id", v11);
    return 0;
  }
}
