int __fastcall top_init_ltc(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r9
  int v6; // r4
  int v7; // r0
  int v8; // r1
  char v9; // r3
  void (__fastcall *v10)(_DWORD *, int, int); // r3
  int v11; // r0
  int v12; // r0
  int v14; // [sp+28h] [bp-1024h] BYREF
  _BYTE v15[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
         192,
         "top_init_ltc",
         12,
         505,
         40,
         v15);
  V_LOCK(v3);
  V_INT((int)&v14, "chain");
  v4 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
    192,
    "top_init_ltc",
    12,
    506,
    40,
    v15);
  v5 = a1[82];
  v6 = a1[120];
  v7 = sub_26C858(256, (unsigned __int8)v5);
  if ( (_BYTE)v5 )
  {
    v8 = v6 - 1;
    v9 = 0;
    do
    {
      *(_BYTE *)++v8 = v9;
      v9 += v7;
    }
    while ( v8 != v6 - 1 + (unsigned __int8)v5 );
    v6 = a1[120];
  }
  v10 = (void (__fastcall *)(_DWORD *, int, int))a1[63];
  a1[105] = v7;
  v10(a1, v6, v5);
  sub_F3CC0((int)a1, 0);
  v11 = sub_F7260((int)a1);
  V_LOCK(v11);
  v12 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
    192,
    "top_init_ltc",
    12,
    519,
    40,
    v15);
  return 0;
}
