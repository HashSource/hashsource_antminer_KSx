int __fastcall setup_all_chip_ltc(_DWORD *a1)
{
  int v2; // r8
  int v3; // r5
  unsigned int v4; // r0
  int v5; // r1
  char v6; // r3
  void (__fastcall *v7)(_DWORD *, int, int); // r3
  int v8; // r5
  int v10; // [sp+0h] [bp-1014h]
  char v11[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "setup_all_chip_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    187,
    "setup_all_chip_ltc",
    18,
    577,
    40,
    v11);
  v2 = a1[78];
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "%s", "setup_all_chip_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    187,
    "setup_all_chip_ltc",
    18,
    580,
    60,
    v11);
  if ( !sub_E8C10((int)a1) )
    return 12;
  v3 = a1[116];
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
    while ( v3 - 1 + (unsigned __int8)v2 != v5 );
    v3 = a1[116];
  }
  v7 = (void (__fastcall *)(_DWORD *, int, int))a1[60];
  a1[101] = v4;
  v7(a1, v3, v2);
  sub_E67A8((int)a1, 0);
  chip_setting_ticket_mask_ltc(a1, 0xFFFFFFFF);
  if ( (int)a1[79] > 0 )
  {
    v8 = 0;
    do
    {
      v10 = v8++;
      chip_setting_working_mode_ltc((int)a1, 1, 0, 0, v10, 0xFFu);
    }
    while ( a1[79] > v8 );
  }
  a1[110] = 900;
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "get addr after open cores and set frequency.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    187,
    "setup_all_chip_ltc",
    18,
    649,
    60,
    v11);
  if ( !sub_E8C10((int)a1) )
    return 12;
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "setup_all_chip_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    187,
    "setup_all_chip_ltc",
    18,
    653,
    40,
    v11);
  return 0;
}
