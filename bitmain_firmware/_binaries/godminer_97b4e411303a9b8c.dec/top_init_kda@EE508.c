int __fastcall top_init_kda(int a1)
{
  int v2; // r0
  int v3; // r9
  int v4; // r4
  int v5; // r0
  int v6; // r1
  char v7; // r3
  void (__fastcall *v8)(int, int, int); // r3
  int v9; // r0
  int v10; // r0
  _DWORD v12[2]; // [sp+28h] [bp-1054h] BYREF
  __int64 v13; // [sp+30h] [bp-104Ch]
  _BYTE v14[32]; // [sp+38h] [bp-1044h] BYREF
  int v15; // [sp+58h] [bp-1024h] BYREF
  _BYTE v16[4100]; // [sp+78h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v14, "chain");
  v2 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_kda_2110/backend_kda_2110.c",
    192,
    "top_init_kda",
    12,
    462,
    40,
    v16);
  v3 = *(_DWORD *)(a1 + 332);
  v4 = *(_DWORD *)(a1 + 488);
  v5 = sub_26D748(256, (unsigned __int8)v3);
  if ( (_BYTE)v3 )
  {
    v6 = v4 - 1;
    v7 = 0;
    do
    {
      *(_BYTE *)++v6 = v7;
      v7 += v5;
    }
    while ( v6 != v4 - 1 + (unsigned __int8)v3 );
    v4 = *(_DWORD *)(a1 + 488);
  }
  v8 = *(void (__fastcall **)(int, int, int))(a1 + 256);
  *(_DWORD *)(a1 + 428) = v5;
  v8(a1, v4, v3);
  v9 = sub_EAC9C(a1, 0);
  v12[1] = 0;
  v12[0] = 5381904;
  v13 = 1835009;
  V_LOCK(v9);
  V_INT((int)&v15, "chain");
  v10 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_misc_ctrl_KDA_2110",
    30,
    229,
    40,
    v16);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v12);
  usleep(0x2710u);
  return 0;
}
