int __fastcall stop_mining_rvn(int a1)
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
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    187,
    "stop_mining_rvn",
    15,
    2140,
    60,
    v6);
  v3 = (*(int (__fastcall **)(int))(a1 + 56))(a1);
  v4 = dev_ctrl(v3);
  (*(void (__fastcall **)(_DWORD))(v4 + 56))(*(_DWORD *)(a1 + 240));
  *(_BYTE *)(a1 + 253) = 0;
  *(_BYTE *)(a1 + 254) = 0;
  set_ticketmask_rvn(a1, 63);
  set_reset_rvn(a1);
  set_core_reset_rvn(a1);
  set_inactive_rvn(a1);
  return 0;
}
