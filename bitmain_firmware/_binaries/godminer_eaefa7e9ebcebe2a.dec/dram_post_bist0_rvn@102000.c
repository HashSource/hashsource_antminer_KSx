int __fastcall dram_post_bist0_rvn(int a1, char a2)
{
  int v4; // r0
  _BYTE v6[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "dram_post_bist0_rvn",
    19,
    3067,
    40,
    v6);
  sub_F9838(a1, a2, 15, 3);
  sub_F9838(a1, a2, 28, 2);
  sub_F9838(a1, a2, 244, 1208484609);
  sub_F9838(a1, a2, 243, 24);
  sub_F9838(a1, a2, 242, -65536);
  sub_F9838(a1, a2, 241, 4096);
  sub_F9838(a1, a2, 245, 0);
  sub_F9838(a1, a2, 246, 0);
  sub_F9838(a1, a2, 247, 0);
  sub_F9838(a1, a2, 248, 0);
  sub_F9838(a1, a2, 249, 0);
  sub_F9838(a1, a2, 250, 0);
  sub_F9838(a1, a2, 251, 0);
  sub_F9838(a1, a2, 252, 0);
  sub_F9838(a1, a2, 253, 0);
  sub_F9838(a1, a2, 254, 0);
  sub_F9838(a1, a2, 255, 4);
  sub_F9838(a1, a2, 240, 769);
  sub_F9838(a1, a2, 245, 0);
  sub_F9838(a1, a2, 246, 0);
  sub_F9838(a1, a2, 247, 0);
  sub_F9838(a1, a2, 248, 0);
  sub_F9838(a1, a2, 249, 0);
  sub_F9838(a1, a2, 250, 0);
  sub_F9838(a1, a2, 251, 0);
  sub_F9838(a1, a2, 252, 0);
  sub_F9838(a1, a2, 253, 0);
  sub_F9838(a1, a2, 254, (int)"h14a15a6f068937c9E");
  sub_F9838(a1, a2, 255, 401425);
  sub_F9838(a1, a2, 240, 769);
  usleep(0x4Cu);
  sub_F9838(a1, a2, 245, 0);
  sub_F9838(a1, a2, 246, 0);
  sub_F9838(a1, a2, 247, 0);
  sub_F9838(a1, a2, 248, 0);
  sub_F9838(a1, a2, 249, 0);
  sub_F9838(a1, a2, 250, 0);
  sub_F9838(a1, a2, 251, 0);
  sub_F9838(a1, a2, 252, 0);
  sub_F9838(a1, a2, 253, 0);
  sub_F9838(a1, a2, 254, 0);
  sub_F9838(a1, a2, 255, 8);
  sub_F9838(a1, a2, 240, 769);
  sub_F9838(a1, a2, 245, 0);
  sub_F9838(a1, a2, 246, 268445696);
  sub_F9838(a1, a2, 247, 268437504);
  sub_F9838(a1, a2, 248, 268445696);
  sub_F9838(a1, a2, 249, 536872960);
  sub_F9838(a1, a2, 250, 0);
  sub_F9838(a1, a2, 251, 0);
  sub_F9838(a1, a2, 252, 0);
  sub_F9838(a1, a2, 253, 0);
  sub_F9838(a1, a2, 254, 14948360);
  sub_F9838(a1, a2, 255, 14948361);
  sub_F9838(a1, a2, 240, 769);
  usleep(0x249u);
  sub_F9838(a1, a2, 245, 16711935);
  sub_F9838(a1, a2, 246, 268445696);
  sub_F9838(a1, a2, 247, 268437504);
  sub_F9838(a1, a2, 248, 268445696);
  sub_F9838(a1, a2, 249, 536872960);
  sub_F9838(a1, a2, 250, 0);
  sub_F9838(a1, a2, 251, 0);
  sub_F9838(a1, a2, 252, 0);
  sub_F9838(a1, a2, 253, 0);
  sub_F9838(a1, a2, 254, 14948360);
  sub_F9838(a1, a2, 255, 14948361);
  sub_F9838(a1, a2, 240, 769);
  usleep(0x249u);
  sub_F9838(a1, a2, 245, -16711936);
  sub_F9838(a1, a2, 246, 268445696);
  sub_F9838(a1, a2, 247, 268437504);
  sub_F9838(a1, a2, 248, 268445696);
  sub_F9838(a1, a2, 249, 536872960);
  sub_F9838(a1, a2, 250, 0);
  sub_F9838(a1, a2, 251, 0);
  sub_F9838(a1, a2, 252, 0);
  sub_F9838(a1, a2, 253, 0);
  sub_F9838(a1, a2, 254, 14948360);
  sub_F9838(a1, a2, 255, 14948361);
  sub_F9838(a1, a2, 240, 769);
  usleep(0x249u);
  sub_F9838(a1, a2, 245, -1);
  sub_F9838(a1, a2, 246, 268445696);
  sub_F9838(a1, a2, 247, 268437504);
  sub_F9838(a1, a2, 248, 268445696);
  sub_F9838(a1, a2, 249, 536872960);
  sub_F9838(a1, a2, 250, 0);
  sub_F9838(a1, a2, 251, 0);
  sub_F9838(a1, a2, 252, 0);
  sub_F9838(a1, a2, 253, 0);
  sub_F9838(a1, a2, 254, 14948360);
  sub_F9838(a1, a2, 255, 14948361);
  sub_F9838(a1, a2, 240, 769);
  usleep(0x249u);
  sub_F9838(a1, a2, 245, 0x40000);
  sub_F9838(a1, a2, 246, (int)"io..StdinLock$u20$as$u20$std..io..BufRead$GT$7consume17h6350c30d2981b974E");
  sub_F9838(a1, a2, 247, (int)".io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$7consume17h6350c30d2981b974E");
  sub_F9838(a1, a2, 248, 6);
  sub_F9838(a1, a2, 240, 18287369);
  usleep(0x9C4u);
  return 0;
}
