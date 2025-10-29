int __fastcall dram_pre_bist0_rvn(int a1, char a2)
{
  int v4; // r0
  _BYTE v6[4100]; // [sp+20h] [bp-1004h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    187,
    "dram_pre_bist0_rvn",
    18,
    2823,
    40,
    v6);
  sub_FD268(a1, a2, 15, 3);
  sub_FD268(a1, a2, 28, 2);
  sub_FD268(a1, a2, 244, 1208484609);
  sub_FD268(a1, a2, 243, 24);
  sub_FD268(a1, a2, 242, -65536);
  sub_FD268(a1, a2, 241, 4096);
  sub_FD268(a1, a2, 245, 0);
  sub_FD268(a1, a2, 246, 0);
  sub_FD268(a1, a2, 247, 0);
  sub_FD268(a1, a2, 248, 0);
  sub_FD268(a1, a2, 249, 0);
  sub_FD268(a1, a2, 250, 0);
  sub_FD268(a1, a2, 251, 0);
  sub_FD268(a1, a2, 252, 0);
  sub_FD268(a1, a2, 253, 0);
  sub_FD268(a1, a2, 254, 0);
  sub_FD268(a1, a2, 255, 4);
  sub_FD268(a1, a2, 240, 769);
  sub_FD268(a1, a2, 245, 0);
  sub_FD268(a1, a2, 246, 0);
  sub_FD268(a1, a2, 247, 0);
  sub_FD268(a1, a2, 248, 0);
  sub_FD268(a1, a2, 249, 0);
  sub_FD268(a1, a2, 250, 0);
  sub_FD268(a1, a2, 251, 0);
  sub_FD268(a1, a2, 252, 0);
  sub_FD268(a1, a2, 253, 0);
  sub_FD268(a1, a2, 254, (int)"et_nonblocking17h34c62529bb5927f4E");
  sub_FD268(a1, a2, 255, 401425);
  sub_FD268(a1, a2, 240, 769);
  usleep(0x4Cu);
  sub_FD268(a1, a2, 245, 0);
  sub_FD268(a1, a2, 246, 0);
  sub_FD268(a1, a2, 247, 0);
  sub_FD268(a1, a2, 248, 0);
  sub_FD268(a1, a2, 249, 0);
  sub_FD268(a1, a2, 250, 0);
  sub_FD268(a1, a2, 251, 0);
  sub_FD268(a1, a2, 252, 0);
  sub_FD268(a1, a2, 253, 0);
  sub_FD268(a1, a2, 254, 0);
  sub_FD268(a1, a2, 255, 8);
  sub_FD268(a1, a2, 240, 769);
  sub_FD268(a1, a2, 245, 0);
  sub_FD268(a1, a2, 246, 268445696);
  sub_FD268(a1, a2, 247, 268437504);
  sub_FD268(a1, a2, 248, 268445696);
  sub_FD268(a1, a2, 249, 536872960);
  sub_FD268(a1, a2, 250, 268437504);
  sub_FD268(a1, a2, 251, 268445696);
  sub_FD268(a1, a2, 252, 268437504);
  sub_FD268(a1, a2, 253, 536881152);
  sub_FD268(a1, a2, 254, 6697992);
  sub_FD268(a1, a2, 255, 6697993);
  sub_FD268(a1, a2, 240, 769);
  usleep(0x249u);
  sub_FD268(a1, a2, 245, 16711935);
  sub_FD268(a1, a2, 246, 268445696);
  sub_FD268(a1, a2, 247, 268437504);
  sub_FD268(a1, a2, 248, 268445696);
  sub_FD268(a1, a2, 249, 536872960);
  sub_FD268(a1, a2, 250, 268437760);
  sub_FD268(a1, a2, 251, 268445952);
  sub_FD268(a1, a2, 252, 268437760);
  sub_FD268(a1, a2, 253, 536881280);
  sub_FD268(a1, a2, 254, 6697992);
  sub_FD268(a1, a2, 255, 6697993);
  sub_FD268(a1, a2, 240, 769);
  usleep(0x249u);
  sub_FD268(a1, a2, 245, -16711936);
  sub_FD268(a1, a2, 246, 268445696);
  sub_FD268(a1, a2, 247, 268437504);
  sub_FD268(a1, a2, 248, 268445696);
  sub_FD268(a1, a2, 249, 536872960);
  sub_FD268(a1, a2, 250, 268437760);
  sub_FD268(a1, a2, 251, 268445952);
  sub_FD268(a1, a2, 252, 268437760);
  sub_FD268(a1, a2, 253, 536881280);
  sub_FD268(a1, a2, 254, 6697992);
  sub_FD268(a1, a2, 255, 6697993);
  sub_FD268(a1, a2, 240, 769);
  usleep(0x249u);
  sub_FD268(a1, a2, 245, -1);
  sub_FD268(a1, a2, 246, 268445696);
  sub_FD268(a1, a2, 247, 268437504);
  sub_FD268(a1, a2, 248, 268445696);
  sub_FD268(a1, a2, 249, 536872960);
  sub_FD268(a1, a2, 250, 268437504);
  sub_FD268(a1, a2, 251, 268445696);
  sub_FD268(a1, a2, 252, 268437504);
  sub_FD268(a1, a2, 253, 536881152);
  sub_FD268(a1, a2, 254, 6697992);
  sub_FD268(a1, a2, 255, 6697993);
  sub_FD268(a1, a2, 240, 769);
  usleep(0x249u);
  sub_FD268(a1, a2, 245, 270336);
  sub_FD268(a1, a2, 246, (int)"read4unit20allow_section_offset17h36a1d10c35335136E");
  sub_FD268(a1, a2, 247, (int)"N5gimli4read4unit20allow_section_offset17h36a1d10c35335136E");
  sub_FD268(a1, a2, 248, 6);
  sub_FD268(a1, a2, 240, 18287369);
  usleep(0x9C4u);
  return 0;
}
