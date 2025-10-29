int __fastcall top_init_kda(int a1)
{
  int v2; // r9
  int v3; // r4
  unsigned int v4; // r0
  int v5; // r1
  char v6; // r3
  void (__fastcall *v7)(int, int, int); // r3
  _DWORD v9[2]; // [sp+28h] [bp-1054h] BYREF
  __int64 v10; // [sp+30h] [bp-104Ch]
  _DWORD v11[7]; // [sp+38h] [bp-1044h] BYREF
  int v12; // [sp+54h] [bp-1028h]
  _DWORD v13[7]; // [sp+58h] [bp-1024h] BYREF
  int v14; // [sp+74h] [bp-1008h]
  char v15[4100]; // [sp+78h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v11, "chain", *(int *)(a1 + 232));
  logfmt_raw(v15, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, "top_init_kda");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
    187,
    "top_init_kda",
    12,
    462,
    40,
    v15);
  v2 = *(_DWORD *)(a1 + 312);
  v3 = *(_DWORD *)(a1 + 464);
  v4 = sub_25A970(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    v5 = v3 - 1;
    v6 = 0;
    do
    {
      *(_BYTE *)++v5 = v6;
      v6 += v4;
    }
    while ( v5 != v3 - 1 + (unsigned __int8)v2 );
    v3 = *(_DWORD *)(a1 + 464);
  }
  v7 = *(void (__fastcall **)(int, int, int))(a1 + 240);
  *(_DWORD *)(a1 + 404) = v4;
  v7(a1, v3, v2);
  sub_E243C(a1, 0);
  v9[1] = 0;
  v9[0] = 5381904;
  v10 = 1835009;
  V_LOCK();
  V_INT((int)v13, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v15,
    0x1000u,
    0,
    v14,
    v13[0],
    v13[1],
    v13[2],
    v13[3],
    v13[4],
    v13[5],
    v13[6],
    v14,
    "set misc ctrl %08x",
    5381904);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_misc_ctrl_KDA_2110",
    30,
    218,
    40,
    v15);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v9);
  usleep(0x2710u);
  return 0;
}
