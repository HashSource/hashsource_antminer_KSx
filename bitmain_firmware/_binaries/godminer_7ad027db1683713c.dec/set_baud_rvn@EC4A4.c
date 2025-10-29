int __fastcall set_baud_rvn(int a1, int a2)
{
  int v4; // r4
  _DWORD v6[7]; // [sp+28h] [bp-1024h] BYREF
  int v7; // [sp+44h] [bp-1008h]
  char v8[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 232));
  logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "set baudrate to %d", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "set_baud_rvn",
    12,
    1173,
    60,
    v8);
  v4 = sub_EC3A4(a1, 1187600);
  usleep(0x2710u);
  return v4 | sub_EC3A4(a1, 1187601);
}
