int __fastcall softreset_all_chip_one_by_one_ks5(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r6
  int v5; // r0
  void (__fastcall *v6)(_DWORD *, _DWORD *); // r2
  char v7; // r3
  int v9; // [sp+28h] [bp-1024h] BYREF
  _DWORD v10[2]; // [sp+48h] [bp-1004h] BYREF
  __int64 v11; // [sp+50h] [bp-FFCh]

  V_LOCK(a1);
  V_INT((int)&v9, "chain");
  v2 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
         192,
         "softreset_all_chip_one_by_one_ks5",
         33,
         899,
         40,
         v10);
  if ( (int)a1[83] > 0 )
  {
    v4 = 0;
    do
    {
      V_LOCK(v3);
      v5 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
        171,
        "ChipSetting_software_reset_one_asic_KS5_2382",
        44,
        136,
        20,
        v10);
      v6 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[66];
      v7 = a1[107] * v4;
      v10[1] = 0;
      v10[0] = 3;
      ++v4;
      v11 = 4456448;
      BYTE1(v11) = v7;
      v6(a1, v10);
      v3 = usleep(0x3E8u);
    }
    while ( a1[83] > v4 );
  }
  sub_EF3F0((int)a1, 10, 0);
  sub_EF7A0((int)a1, 127);
  return 0;
}
