int __fastcall dram_pre_bist0_rvn(int a1, char a2)
{
  int v4; // r0
  _BYTE v6[4100]; // [sp+20h] [bp-1004h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "dram_pre_bist0_rvn",
    18,
    2823,
    40,
    v6);
  sub_F9570(a1, a2, 15, 3);
  sub_F9570(a1, a2, 28, 2);
  sub_F9570(a1, a2, 244, 1208484609);
  sub_F9570(a1, a2, 243, 24);
  sub_F9570(a1, a2, 242, -65536);
  sub_F9570(a1, a2, 241, 4096);
  sub_F9570(a1, a2, 245, 0);
  sub_F9570(a1, a2, 246, 0);
  sub_F9570(a1, a2, 247, 0);
  sub_F9570(a1, a2, 248, 0);
  sub_F9570(a1, a2, 249, 0);
  sub_F9570(a1, a2, 250, 0);
  sub_F9570(a1, a2, 251, 0);
  sub_F9570(a1, a2, 252, 0);
  sub_F9570(a1, a2, 253, 0);
  sub_F9570(a1, a2, 254, 0);
  sub_F9570(a1, a2, 255, 4);
  sub_F9570(a1, a2, 240, 769);
  sub_F9570(a1, a2, 245, 0);
  sub_F9570(a1, a2, 246, 0);
  sub_F9570(a1, a2, 247, 0);
  sub_F9570(a1, a2, 248, 0);
  sub_F9570(a1, a2, 249, 0);
  sub_F9570(a1, a2, 250, 0);
  sub_F9570(a1, a2, 251, 0);
  sub_F9570(a1, a2, 252, 0);
  sub_F9570(a1, a2, 253, 0);
  sub_F9570(a1, a2, 254, (int)"3fmt17hd85479c3a470fcecE");
  sub_F9570(a1, a2, 255, 401425);
  sub_F9570(a1, a2, 240, 769);
  usleep(0x4Cu);
  sub_F9570(a1, a2, 245, 0);
  sub_F9570(a1, a2, 246, 0);
  sub_F9570(a1, a2, 247, 0);
  sub_F9570(a1, a2, 248, 0);
  sub_F9570(a1, a2, 249, 0);
  sub_F9570(a1, a2, 250, 0);
  sub_F9570(a1, a2, 251, 0);
  sub_F9570(a1, a2, 252, 0);
  sub_F9570(a1, a2, 253, 0);
  sub_F9570(a1, a2, 254, 0);
  sub_F9570(a1, a2, 255, 8);
  sub_F9570(a1, a2, 240, 769);
  sub_F9570(a1, a2, 245, 0);
  sub_F9570(a1, a2, 246, 268445696);
  sub_F9570(a1, a2, 247, 268437504);
  sub_F9570(a1, a2, 248, 268445696);
  sub_F9570(a1, a2, 249, 536872960);
  sub_F9570(a1, a2, 250, 268437504);
  sub_F9570(a1, a2, 251, 268445696);
  sub_F9570(a1, a2, 252, 268437504);
  sub_F9570(a1, a2, 253, 536881152);
  sub_F9570(a1, a2, 254, 6697992);
  sub_F9570(a1, a2, 255, 6697993);
  sub_F9570(a1, a2, 240, 769);
  usleep(0x249u);
  sub_F9570(a1, a2, 245, 16711935);
  sub_F9570(a1, a2, 246, 268445696);
  sub_F9570(a1, a2, 247, 268437504);
  sub_F9570(a1, a2, 248, 268445696);
  sub_F9570(a1, a2, 249, 536872960);
  sub_F9570(a1, a2, 250, 268437760);
  sub_F9570(a1, a2, 251, 268445952);
  sub_F9570(a1, a2, 252, 268437760);
  sub_F9570(a1, a2, 253, 536881280);
  sub_F9570(a1, a2, 254, 6697992);
  sub_F9570(a1, a2, 255, 6697993);
  sub_F9570(a1, a2, 240, 769);
  usleep(0x249u);
  sub_F9570(a1, a2, 245, -16711936);
  sub_F9570(a1, a2, 246, 268445696);
  sub_F9570(a1, a2, 247, 268437504);
  sub_F9570(a1, a2, 248, 268445696);
  sub_F9570(a1, a2, 249, 536872960);
  sub_F9570(a1, a2, 250, 268437760);
  sub_F9570(a1, a2, 251, 268445952);
  sub_F9570(a1, a2, 252, 268437760);
  sub_F9570(a1, a2, 253, 536881280);
  sub_F9570(a1, a2, 254, 6697992);
  sub_F9570(a1, a2, 255, 6697993);
  sub_F9570(a1, a2, 240, 769);
  usleep(0x249u);
  sub_F9570(a1, a2, 245, -1);
  sub_F9570(a1, a2, 246, 268445696);
  sub_F9570(a1, a2, 247, 268437504);
  sub_F9570(a1, a2, 248, 268445696);
  sub_F9570(a1, a2, 249, 536872960);
  sub_F9570(a1, a2, 250, 268437504);
  sub_F9570(a1, a2, 251, 268445696);
  sub_F9570(a1, a2, 252, 268437504);
  sub_F9570(a1, a2, 253, 536881152);
  sub_F9570(a1, a2, 254, 6697992);
  sub_F9570(a1, a2, 255, 6697993);
  sub_F9570(a1, a2, 240, 769);
  usleep(0x249u);
  sub_F9570(a1, a2, 245, 270336);
  sub_F9570(a1, a2, 246, (int)"..UpperExp$u20$for$u20$u128$GT$3fmt17h0ef7e8ef8b103f63E");
  sub_F9570(a1, a2, 247, (int)"ore..fmt..UpperExp$u20$for$u20$u128$GT$3fmt17h0ef7e8ef8b103f63E");
  sub_F9570(a1, a2, 248, 6);
  sub_F9570(a1, a2, 240, 18287369);
  usleep(0x9C4u);
  return 0;
}
