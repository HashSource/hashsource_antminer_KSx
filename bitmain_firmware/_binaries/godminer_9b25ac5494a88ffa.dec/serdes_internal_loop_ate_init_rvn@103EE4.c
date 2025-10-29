int __fastcall serdes_internal_loop_ate_init_rvn(int a1, unsigned int a2, int a3, int a4)
{
  int v7; // r0
  void *v8; // r8
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  char *v15; // r3
  int v16; // r3
  int rvn; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  _BYTE v25[32]; // [sp+48h] [bp-E0h] BYREF
  _BYTE v26[32]; // [sp+68h] [bp-C0h] BYREF
  _BYTE v27[32]; // [sp+88h] [bp-A0h] BYREF
  _BYTE v28[32]; // [sp+A8h] [bp-80h] BYREF
  _BYTE v29[32]; // [sp+C8h] [bp-60h] BYREF
  _BYTE v30[32]; // [sp+E8h] [bp-40h] BYREF
  _BYTE v31[32]; // [sp+108h] [bp-20h] BYREF
  _BYTE v32[4100]; // [sp+128h] [bp+0h] BYREF

  V_LOCK(a1);
  V_INT((int)v25, "chain");
  v7 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_internal_loop_ate_init_rvn",
    33,
    151,
    60,
    v32);
  v8 = malloc(0x300u);
  sub_1035C4(a1, a3, 240, 0x80000000);
  v9 = sub_103614(a1, (unsigned __int16)a3, 240, v8);
  V_LOCK(v9);
  V_INT((int)v26, "chain");
  v10 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_internal_loop_ate_init_rvn",
    33,
    158,
    60,
    v32);
  sub_1035C4(a1, a3, 86, 67634184);
  v11 = sub_103614(a1, (unsigned __int16)a3, 86, v8);
  V_LOCK(v11);
  V_INT((int)v27, "chain");
  v12 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_internal_loop_ate_init_rvn",
    33,
    162,
    60,
    v32);
  sub_1035C4(a1, a3, 64, 256);
  sub_1035C4(a1, a3, 80, 33423870);
  sub_1035C4(a1, a3, 81, 832516511);
  sub_1035C4(a1, a3, 88, -1);
  v13 = sub_1035C4(a1, a3, 86, 201853960);
  V_LOCK(v13);
  V_INT((int)v28, "chain");
  v14 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_internal_loop_ate_init_rvn",
    33,
    172,
    60,
    v32);
  sub_1035C4(a1, a3, 77, 196611);
  sub_1035C4(a1, a3, 78, -2144272046);
  serdes_apb_read_rvn(a1, a2, a3, 338);
  sub_1035C4(a1, a3, 77, 33554944);
  sub_1035C4(a1, a3, 78, -2144247742);
  serdes_apb_read_rvn(a1, a2, a3, 24642);
  sub_1035C4(a1, a3, 77, 100664832);
  sub_1035C4(a1, a3, 78, -2144247742);
  sub_1035C4(a1, a3, 77, 65537);
  sub_1035C4(a1, a3, 78, -2144272003);
  sub_103B34(a1, a3, 24642, a4 | 0x600);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144247741);
  sub_103B34(a1, a3, 24644, a4 << 7);
  sub_103B34(a1, a3, 24642, a4 | 7);
  sub_1035C4(a1, a3, 77, 16777472);
  sub_1035C4(a1, a3, 78, -2144247741);
  sub_103B34(a1, a3, 24644, (a4 << 7) | 0x8000);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144251892);
  sub_1035C4(a1, a3, 77, 268439552);
  sub_1035C4(a1, a3, 78, -2144251892);
  sub_1035C4(a1, a3, 77, 33489407);
  sub_1035C4(a1, a3, 78, -2144272086);
  sub_1035C4(a1, a3, 77, 268374015);
  sub_1035C4(a1, a3, 78, -2144272085);
  sub_103B34(a1, a3, 24644, (a4 << 7) | 0x8020);
  sub_103B34(a1, a3, 24644, (a4 << 7) | 0x8060);
  sub_1035C4(a1, a3, 77, -1);
  sub_1035C4(a1, a3, 78, -2144247719);
  sub_1035C4(a1, a3, 77, -8388737);
  sub_1035C4(a1, a3, 78, -2144247718);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144247776);
  sub_1035C4(a1, a3, 77, -2136964960);
  sub_1035C4(a1, a3, 78, -2144247776);
  if ( a4 == 2 )
  {
    sub_1035C4(a1, a3, 77, 272633920);
    sub_1035C4(a1, a3, 78, -2144247722);
    sub_1035C4(a1, a3, 77, -1);
    sub_1035C4(a1, a3, 78, -2144247718);
    sub_1035C4(a1, a3, 77, 0);
    sub_1035C4(a1, a3, 78, -2144247771);
    sub_1035C4(a1, a3, 77, (int)&loc_140014);
    sub_1035C4(a1, a3, 78, -2144247771);
    sub_1035C4(a1, a3, 77, 33554944);
    sub_1035C4(a1, a3, 78, -2144247760);
    sub_1035C4(a1, a3, 77, 122947412);
    sub_1035C4(a1, a3, 78, -2144247760);
    sub_1035C4(a1, a3, 77, 1073758208);
    sub_1035C4(a1, a3, 78, -2144247770);
    sub_1035C4(a1, a3, 77, -1072381932);
    sub_1035C4(a1, a3, 78, -2144247770);
    v15 = "$LT$std..backtrace..BacktraceStatus$u20$as$u20$core..fmt..Debug$GT$3fmt17h850c777f35e3350cE";
  }
  else
  {
    sub_1035C4(a1, a3, 77, 271585328);
    sub_1035C4(a1, a3, 78, -2144247722);
    sub_1035C4(a1, a3, 77, -1);
    sub_1035C4(a1, a3, 78, -2144247718);
    sub_1035C4(a1, a3, 77, 0);
    sub_1035C4(a1, a3, 78, -2144247771);
    sub_1035C4(a1, a3, 77, (int)&loc_140014);
    sub_1035C4(a1, a3, 78, -2144247771);
    sub_1035C4(a1, a3, 77, 33554944);
    sub_1035C4(a1, a3, 78, -2144247760);
    sub_1035C4(a1, a3, 77, 122947412);
    sub_1035C4(a1, a3, 78, -2144247760);
    sub_1035C4(a1, a3, 77, 1073758208);
    sub_1035C4(a1, a3, 78, -2144247770);
    sub_1035C4(a1, a3, 77, -1072381932);
    sub_1035C4(a1, a3, 78, -2144247770);
    v15 = "dhash_content_dash_1766" + 15;
  }
  sub_1035C4(a1, a3, 77, (int)v15);
  sub_1035C4(a1, a3, 78, -2144247739);
  sub_1035C4(a1, a3, 77, -1);
  sub_1035C4(a1, a3, 78, -2144247732);
  sub_1035C4(a1, a3, 77, 268439552);
  sub_1035C4(a1, a3, 78, -2144247769);
  sub_1035C4(a1, a3, 77, 805318656);
  sub_1035C4(a1, a3, 78, -2144247769);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144247751);
  sub_1035C4(a1, a3, 77, 5505108);
  sub_1035C4(a1, a3, 78, -2144247751);
  sub_1035C4(a1, a3, 77, (int)&dword_10000 + 1);
  sub_1035C4(a1, a3, 78, -2144251903);
  sub_1035C4(a1, a3, 77, (int)&off_230020 + 3);
  sub_1035C4(a1, a3, 78, -2144251903);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144251872);
  sub_1035C4(a1, a3, 77, (int)sub_80008);
  sub_1035C4(a1, a3, 78, -2144251872);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144272111);
  sub_1035C4(a1, a3, 77, 1073692671);
  sub_1035C4(a1, a3, 78, -2144272088);
  sub_1035C4(a1, a3, 77, 234884608);
  sub_1035C4(a1, a3, 78, -2144272382);
  sub_1035C4(a1, a3, 77, 235408904);
  sub_1035C4(a1, a3, 78, -2144272382);
  sub_1035C4(a1, a3, 77, 234884608);
  sub_1035C4(a1, a3, 78, -2144272381);
  sub_1035C4(a1, a3, 77, 235408904);
  sub_1035C4(a1, a3, 78, -2144272381);
  sub_1035C4(a1, a3, 77, (int)&loc_180018);
  sub_1035C4(a1, a3, 78, -2144272353);
  sub_1035C4(a1, a3, 77, 22348117);
  sub_1035C4(a1, a3, 78, -2144272044);
  sub_1035C4(a1, a3, 77, 67044351);
  sub_1035C4(a1, a3, 78, -2144272044);
  sub_1035C4(a1, a3, 77, 61277095);
  sub_1035C4(a1, a3, 78, -2144272380);
  sub_1035C4(a1, a3, 77, 65471463);
  sub_1035C4(a1, a3, 78, -2144272380);
  sub_1035C4(a1, a3, 77, 235408904);
  sub_1035C4(a1, a3, 78, -2144272382);
  sub_1035C4(a1, a3, 77, 252186376);
  sub_1035C4(a1, a3, 78, -2144272382);
  sub_1035C4(a1, a3, 77, 235408904);
  sub_1035C4(a1, a3, 78, -2144272381);
  sub_1035C4(a1, a3, 77, 252186376);
  sub_1035C4(a1, a3, 78, -2144272381);
  sub_1035C4(
    a1,
    a3,
    77,
    (int)"$LT$std..backtrace..BacktraceStatus$u20$as$u20$core..fmt..Debug$GT$3fmt17h850c777f35e3350cE");
  sub_1035C4(a1, a3, 78, -2144272379);
  sub_1035C4(a1, a3, 77, (int)&loc_C000C);
  sub_1035C4(a1, a3, 78, -2144272379);
  sub_1035C4(
    a1,
    a3,
    77,
    (int)"$LT$std..backtrace..BacktraceStatus$u20$as$u20$core..fmt..Debug$GT$3fmt17h850c777f35e3350cE");
  sub_1035C4(a1, a3, 78, -2144272378);
  sub_1035C4(a1, a3, 77, (int)&loc_C000C);
  sub_1035C4(a1, a3, 78, -2144272378);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144272372);
  sub_1035C4(a1, a3, 77, (int)&loc_100010);
  sub_1035C4(a1, a3, 78, -2144272372);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144272360);
  sub_1035C4(a1, a3, 77, (int)&loc_100010);
  sub_1035C4(a1, a3, 78, -2144272360);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144272114);
  sub_1035C4(a1, a3, 77, 710158932);
  sub_1035C4(a1, a3, 78, -2144272114);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144272124);
  sub_1035C4(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_1035C4(a1, a3, 78, -2144272124);
  if ( a4 == 2 )
    LOWORD(v16) = 498;
  else
    LOWORD(v16) = 501;
  if ( a4 == 2 )
    HIWORD(v16) = 498;
  else
    HIWORD(v16) = 501;
  sub_1035C4(a1, a3, 77, v16);
  sub_1035C4(a1, a3, 78, -2144247559);
  sub_1035C4(a1, a3, 77, 25166208);
  sub_1035C4(a1, a3, 78, -2144251901);
  sub_1035C4(a1, a3, 77, 92800392);
  sub_1035C4(a1, a3, 78, -2144251901);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144251900);
  sub_1035C4(a1, a3, 77, 541073472);
  sub_1035C4(a1, a3, 78, -2144251900);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144247761);
  sub_1035C4(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_1035C4(a1, a3, 78, -2144247761);
  sub_1035C4(a1, a3, 77, 537010178);
  sub_1035C4(a1, a3, 78, -2144247750);
  sub_1035C4(a1, a3, 77, 872428544);
  sub_1035C4(a1, a3, 78, -2144247769);
  sub_1035C4(a1, a3, 77, 1006648320);
  sub_1035C4(a1, a3, 78, -2144247769);
  sub_1035C4(a1, a3, 77, (int)sub_80008);
  sub_1035C4(a1, a3, 78, -2144247745);
  sub_1035C4(a1, a3, 77, (int)&loc_180018);
  sub_1035C4(a1, a3, 78, -2144247745);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144247798);
  sub_1035C4(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_1035C4(a1, a3, 78, -2144247798);
  sub_1035C4(a1, a3, 77, (int)&dword_10000 + 1);
  sub_1035C4(a1, a3, 78, -2144247604);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144247796);
  sub_1035C4(a1, a3, 77, 268439552);
  sub_1035C4(a1, a3, 78, -2144247796);
  sub_1035C4(a1, a3, 77, 0);
  sub_1035C4(a1, a3, 78, -2144243666);
  sub_1035C4(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_1035C4(a1, a3, 78, -2144243666);
  sub_1035C4(a1, a3, 77, 4259905);
  sub_1035C4(a1, a3, 78, -2144251869);
  sub_1035C4(a1, a3, 77, 13304011);
  sub_1035C4(a1, a3, 78, -2144251869);
  sub_1035C4(
    a1,
    a3,
    77,
    (int)"$LT$std..backtrace..BacktraceStatus$u20$as$u20$core..fmt..Debug$GT$3fmt17h850c777f35e3350cE");
  sub_1035C4(a1, a3, 78, -2144243609);
  sub_1035C4(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_1035C4(a1, a3, 78, -2144247768);
  sub_1035C4(a1, a3, 77, (int)"bf9faE");
  sub_1035C4(a1, a3, 78, -2144272078);
  serdes_apb_read_rvn(a1, a2, a3, 306);
  sub_1035C4(a1, a3, 77, -2136964960);
  sub_1035C4(a1, a3, 78, -2144247776);
  serdes_apb_read_rvn(a1, a2, a3, 24608);
  sub_1035C4(a1, a3, 77, -2136309590);
  sub_1035C4(a1, a3, 78, -2144247776);
  rvn = serdes_apb_read_rvn(a1, a2, a3, 24608);
  V_LOCK(rvn);
  V_INT((int)v29, "chain");
  v18 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v18);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_internal_loop_ate_init_rvn",
    33,
    291,
    60,
    v32);
  serdes_wait_status_rvn(a1, a2, a3, 12308, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 12820, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 13332, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 13844, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 4156, 80);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 80);
  serdes_wait_status_rvn(a1, a2, a3, 8217, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8729, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9241, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9753, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4114, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4626, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5138, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5650, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8196, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8708, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9220, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9732, 0);
  sub_1035C4(a1, a3, 77, (int)&dword_10000 + 1);
  sub_1035C4(a1, a3, 78, -2144251791);
  sub_1035C4(a1, a3, 77, (int)&loc_E000C + 2);
  sub_1035C4(a1, a3, 78, -2144247768);
  sub_1035C4(a1, a3, 77, (int)&loc_E000C + 2);
  sub_1035C4(a1, a3, 78, -2144247768);
  sub_1035C4(a1, a3, 77, (int)"ash_1766");
  sub_1035C4(a1, a3, 78, -2144243377);
  sub_1035C4(a1, a3, 77, (int)"ash_1766");
  sub_1035C4(a1, a3, 78, -2144243377);
  sub_1035C4(a1, a3, 77, (int)"bf9faE");
  sub_1035C4(a1, a3, 78, -2144243377);
  sub_1035C4(a1, a3, 77, -2136244053);
  sub_1035C4(a1, a3, 78, -2144247776);
  sub_1035C4(a1, a3, 77, -2136244053);
  sub_1035C4(a1, a3, 78, -2144247776);
  usleep(0x2710u);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 93);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 93);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 93);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 93);
  sub_1035C4(a1, a3, 77, -2136309590);
  sub_1035C4(a1, a3, 78, -2144247776);
  sub_1035C4(a1, a3, 77, -2136309590);
  sub_1035C4(a1, a3, 78, -2144247776);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 92);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 92);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 92);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 92);
  usleep(0xEA60u);
  sub_1035C4(a1, a3, 77, -1062551382);
  sub_1035C4(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 94);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 94);
  if ( a4 == 2 )
  {
    sub_1035C4(a1, a3, 77, 196611);
    sub_1035C4(a1, a3, 78, -2144247798);
    sub_1035C4(a1, a3, 77, 196611);
    sub_1035C4(a1, a3, 78, -2144247798);
    usleep(0x3E8u);
    serdes_wait_status_rvn(a1, a2, a3, 8218, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status_rvn(a1, a2, a3, 8730, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status_rvn(a1, a2, a3, 9242, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status_rvn(a1, a2, a3, 9754, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    sub_1035C4(a1, a3, 77, 131074);
    sub_1035C4(a1, a3, 78, -2144247798);
    sub_1035C4(a1, a3, 77, 131074);
    sub_1035C4(a1, a3, 78, -2144247798);
    usleep((__useconds_t)&elf_hash_chain[4398]);
    serdes_wait_status_rvn(a1, a2, a3, 8218, 0);
    serdes_wait_status_rvn(a1, a2, a3, 8730, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9242, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9754, 0);
  }
  sub_1035C4(a1, a3, 77, -2136309590);
  sub_1035C4(a1, a3, 78, -2144247776);
  sub_1035C4(a1, a3, 77, -1062551382);
  sub_1035C4(a1, a3, 78, -2144247776);
  v19 = usleep(0xC350u);
  V_LOCK(v19);
  V_INT((int)v30, "chain");
  v20 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v20);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_internal_loop_ate_init_rvn",
    33,
    375,
    60,
    v32);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 94);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 94);
  v21 = serdes_wait_status_rvn(a1, a2, a3, 5692, 94);
  V_LOCK(v21);
  V_INT((int)v31, "chain");
  v22 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v22);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "serdes_internal_loop_ate_init_rvn",
    33,
    380,
    60,
    v32);
  sub_1035C4(a1, a3, 77, 65537);
  sub_1035C4(a1, a3, 78, -2144251757);
  sub_1035C4(a1, a3, 77, 65537);
  sub_1035C4(a1, a3, 78, -2144251757);
  sub_1035C4(a1, a3, 77, 1114129);
  sub_1035C4(a1, a3, 78, -2144251757);
  sub_1035C4(a1, a3, 77, 65537);
  sub_1035C4(a1, a3, 78, -2144251757);
  sub_1035C4(a1, a3, 77, 1114129);
  sub_1035C4(a1, a3, 78, -2144251757);
  sub_1035C4(a1, a3, 77, 65537);
  sub_1035C4(a1, a3, 78, -2144251757);
  usleep(0x2710u);
  return 0;
}
