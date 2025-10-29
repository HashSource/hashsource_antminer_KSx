int __fastcall stop_mining_ks5(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  _BYTE v6[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "stop_mining_ks5",
    15,
    1352,
    60,
    v6);
  v3 = (*(int (__fastcall **)(int))(a1 + 56))(a1);
  v4 = dev_ctrl(v3);
  (*(void (__fastcall **)(_DWORD))(v4 + 44))(*(_DWORD *)(a1 + 244));
  *(_BYTE *)(a1 + 253) = 0;
  *(_BYTE *)(a1 + 254) = 0;
  sub_EECD8(a1, 127);
  set_reset_ks5(a1);
  set_core_reset_ks5(a1);
  set_inactive_ks5(a1);
  return 0;
}
