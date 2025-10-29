int __fastcall sub_B15E4(int a1)
{
  int v1; // r0
  _BYTE v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/dhash_content/rvn/rvn_2044/rvn_2044_content.c",
    194,
    "nonce_pop_handler_rvn_2044",
    26,
    115,
    80,
    v3);
  return 1;
}
