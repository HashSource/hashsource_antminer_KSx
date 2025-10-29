int __fastcall serdes_internal_loop_ate_init(int a1, unsigned int a2, int a3, int a4)
{
  unsigned __int8 *v7; // r8
  char *v8; // r3
  int v9; // r3
  _DWORD v12[7]; // [sp+48h] [bp-E0h] BYREF
  int v13; // [sp+64h] [bp-C4h]
  _DWORD v14[7]; // [sp+68h] [bp-C0h] BYREF
  int v15; // [sp+84h] [bp-A4h]
  _DWORD v16[7]; // [sp+88h] [bp-A0h] BYREF
  int v17; // [sp+A4h] [bp-84h]
  _DWORD v18[7]; // [sp+A8h] [bp-80h] BYREF
  int v19; // [sp+C4h] [bp-64h]
  _DWORD v20[7]; // [sp+C8h] [bp-60h] BYREF
  int v21; // [sp+E4h] [bp-44h]
  _DWORD v22[7]; // [sp+E8h] [bp-40h] BYREF
  int v23; // [sp+104h] [bp-24h]
  _DWORD v24[7]; // [sp+108h] [bp-20h] BYREF
  int v25; // [sp+124h] [bp-4h]
  char v26[4100]; // [sp+128h] [bp+0h] BYREF

  V_LOCK();
  V_INT((int)v12, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v26,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "%s ...",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    151,
    60,
    v26);
  v7 = (unsigned __int8 *)malloc(0x600u);
  sub_CF420(a1, a3, 240, 0x80000000);
  sub_CF470(a1, (unsigned __int16)a3, 240, v7);
  V_LOCK();
  V_INT((int)v14, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v26,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    "%s core %d reg %04x rdata %08x",
    "serdes_internal_loop_ate_init",
    v7[8],
    240,
    *(_DWORD *)v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    158,
    60,
    v26);
  sub_CF420(a1, a3, 86, 67634184);
  sub_CF470(a1, (unsigned __int16)a3, 86, v7);
  V_LOCK();
  V_INT((int)v16, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v26,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    "%s core %d reg %04x rdata %08x",
    "serdes_internal_loop_ate_init",
    v7[8],
    86,
    *(_DWORD *)v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    162,
    60,
    v26);
  sub_CF420(a1, a3, 64, 256);
  sub_CF420(a1, a3, 80, 33423870);
  sub_CF420(a1, a3, 81, 832516511);
  sub_CF420(a1, a3, 88, -1);
  sub_CF420(a1, a3, 86, 201853960);
  V_LOCK();
  V_INT((int)v18, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v26,
    0x1000u,
    0,
    v19,
    v18[0],
    v18[1],
    v18[2],
    v18[3],
    v18[4],
    v18[5],
    v18[6],
    v19,
    "%s PHY core %02x sram ext load done",
    "serdes_internal_loop_ate_init",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    172,
    60,
    v26);
  sub_CF420(a1, a3, 77, 196611);
  sub_CF420(a1, a3, 78, -2144272046);
  serdes_apb_read(a1, a2, a3, 338);
  sub_CF420(a1, a3, 77, 33554944);
  sub_CF420(a1, a3, 78, -2144247742);
  serdes_apb_read(a1, a2, a3, 24642);
  sub_CF420(a1, a3, 77, 100664832);
  sub_CF420(a1, a3, 78, -2144247742);
  sub_CF420(a1, a3, 77, 65537);
  sub_CF420(a1, a3, 78, -2144272003);
  sub_CF994(a1, a3, 24642, a4 | 0x600);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144247741);
  sub_CF994(a1, a3, 24644, a4 << 7);
  sub_CF994(a1, a3, 24642, a4 | 7);
  sub_CF420(a1, a3, 77, 16777472);
  sub_CF420(a1, a3, 78, -2144247741);
  sub_CF994(a1, a3, 24644, (a4 << 7) | 0x8000);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144251892);
  sub_CF420(a1, a3, 77, 268439552);
  sub_CF420(a1, a3, 78, -2144251892);
  sub_CF420(a1, a3, 77, 33489407);
  sub_CF420(a1, a3, 78, -2144272086);
  sub_CF420(a1, a3, 77, 268374015);
  sub_CF420(a1, a3, 78, -2144272085);
  sub_CF994(a1, a3, 24644, (a4 << 7) | 0x8020);
  sub_CF994(a1, a3, 24644, (a4 << 7) | 0x8060);
  sub_CF420(a1, a3, 77, -1);
  sub_CF420(a1, a3, 78, -2144247719);
  sub_CF420(a1, a3, 77, -8388737);
  sub_CF420(a1, a3, 78, -2144247718);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144247776);
  sub_CF420(a1, a3, 77, -2136964960);
  sub_CF420(a1, a3, 78, -2144247776);
  if ( a4 == 2 )
  {
    sub_CF420(a1, a3, 77, 272633920);
    sub_CF420(a1, a3, 78, -2144247722);
    sub_CF420(a1, a3, 77, -1);
    sub_CF420(a1, a3, 78, -2144247718);
    sub_CF420(a1, a3, 77, 0);
    sub_CF420(a1, a3, 78, -2144247771);
    sub_CF420(a1, a3, 77, (int)&loc_140014);
    sub_CF420(a1, a3, 78, -2144247771);
    sub_CF420(a1, a3, 77, 33554944);
    sub_CF420(a1, a3, 78, -2144247760);
    sub_CF420(a1, a3, 77, 122947412);
    sub_CF420(a1, a3, 78, -2144247760);
    sub_CF420(a1, a3, 77, 1073758208);
    sub_CF420(a1, a3, 78, -2144247770);
    sub_CF420(a1, a3, 77, -1072381932);
    sub_CF420(a1, a3, 78, -2144247770);
    v8 = "num6bignum5tests6Big8x37is_zero17he9d1683f90a9b0edE";
  }
  else
  {
    sub_CF420(a1, a3, 77, 271585328);
    sub_CF420(a1, a3, 78, -2144247722);
    sub_CF420(a1, a3, 77, -1);
    sub_CF420(a1, a3, 78, -2144247718);
    sub_CF420(a1, a3, 77, 0);
    sub_CF420(a1, a3, 78, -2144247771);
    sub_CF420(a1, a3, 77, (int)&loc_140014);
    sub_CF420(a1, a3, 78, -2144247771);
    sub_CF420(a1, a3, 77, 33554944);
    sub_CF420(a1, a3, 78, -2144247760);
    sub_CF420(a1, a3, 77, 122947412);
    sub_CF420(a1, a3, 78, -2144247760);
    sub_CF420(a1, a3, 77, 1073758208);
    sub_CF420(a1, a3, 78, -2144247770);
    sub_CF420(a1, a3, 77, -1072381932);
    sub_CF420(a1, a3, 78, -2144247770);
    v8 = "_ZN58_$LT$libc..unix..utimbuf$u20$as$u20$core..clone..Clone$GT$5clone17hc0de32827086aebdE" + 29;
  }
  sub_CF420(a1, a3, 77, (int)v8);
  sub_CF420(a1, a3, 78, -2144247739);
  sub_CF420(a1, a3, 77, -1);
  sub_CF420(a1, a3, 78, -2144247732);
  sub_CF420(a1, a3, 77, 268439552);
  sub_CF420(a1, a3, 78, -2144247769);
  sub_CF420(a1, a3, 77, 805318656);
  sub_CF420(a1, a3, 78, -2144247769);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144247751);
  sub_CF420(a1, a3, 77, 5505108);
  sub_CF420(a1, a3, 78, -2144247751);
  sub_CF420(a1, a3, 77, (int)&dword_10000 + 1);
  sub_CF420(a1, a3, 78, -2144251903);
  sub_CF420(a1, a3, 77, (int)&loc_230020 + 3);
  sub_CF420(a1, a3, 78, -2144251903);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144251872);
  sub_CF420(a1, a3, 77, (int)&loc_80008);
  sub_CF420(a1, a3, 78, -2144251872);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144272111);
  sub_CF420(a1, a3, 77, 1073692671);
  sub_CF420(a1, a3, 78, -2144272088);
  sub_CF420(a1, a3, 77, 234884608);
  sub_CF420(a1, a3, 78, -2144272382);
  sub_CF420(a1, a3, 77, 235408904);
  sub_CF420(a1, a3, 78, -2144272382);
  sub_CF420(a1, a3, 77, 234884608);
  sub_CF420(a1, a3, 78, -2144272381);
  sub_CF420(a1, a3, 77, 235408904);
  sub_CF420(a1, a3, 78, -2144272381);
  sub_CF420(a1, a3, 77, (int)&loc_180018);
  sub_CF420(a1, a3, 78, -2144272353);
  sub_CF420(a1, a3, 77, 22348117);
  sub_CF420(a1, a3, 78, -2144272044);
  sub_CF420(a1, a3, 77, 67044351);
  sub_CF420(a1, a3, 78, -2144272044);
  sub_CF420(a1, a3, 77, 61277095);
  sub_CF420(a1, a3, 78, -2144272380);
  sub_CF420(a1, a3, 77, 65471463);
  sub_CF420(a1, a3, 78, -2144272380);
  sub_CF420(a1, a3, 77, 235408904);
  sub_CF420(a1, a3, 78, -2144272382);
  sub_CF420(a1, a3, 77, 252186376);
  sub_CF420(a1, a3, 78, -2144272382);
  sub_CF420(a1, a3, 77, 235408904);
  sub_CF420(a1, a3, 78, -2144272381);
  sub_CF420(a1, a3, 77, 252186376);
  sub_CF420(a1, a3, 78, -2144272381);
  sub_CF420(a1, a3, 77, (int)"num6bignum5tests6Big8x37is_zero17he9d1683f90a9b0edE");
  sub_CF420(a1, a3, 78, -2144272379);
  sub_CF420(a1, a3, 77, (int)&loc_C000C);
  sub_CF420(a1, a3, 78, -2144272379);
  sub_CF420(a1, a3, 77, (int)"num6bignum5tests6Big8x37is_zero17he9d1683f90a9b0edE");
  sub_CF420(a1, a3, 78, -2144272378);
  sub_CF420(a1, a3, 77, (int)&loc_C000C);
  sub_CF420(a1, a3, 78, -2144272378);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144272372);
  sub_CF420(a1, a3, 77, (int)&loc_100010);
  sub_CF420(a1, a3, 78, -2144272372);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144272360);
  sub_CF420(a1, a3, 77, (int)&loc_100010);
  sub_CF420(a1, a3, 78, -2144272360);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144272114);
  sub_CF420(a1, a3, 77, 710158932);
  sub_CF420(a1, a3, 78, -2144272114);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144272124);
  sub_CF420(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_CF420(a1, a3, 78, -2144272124);
  if ( a4 == 2 )
    LOWORD(v9) = 498;
  else
    LOWORD(v9) = 501;
  if ( a4 == 2 )
    HIWORD(v9) = 498;
  else
    HIWORD(v9) = 501;
  sub_CF420(a1, a3, 77, v9);
  sub_CF420(a1, a3, 78, -2144247559);
  sub_CF420(a1, a3, 77, 25166208);
  sub_CF420(a1, a3, 78, -2144251901);
  sub_CF420(a1, a3, 77, 92800392);
  sub_CF420(a1, a3, 78, -2144251901);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144251900);
  sub_CF420(a1, a3, 77, 541073472);
  sub_CF420(a1, a3, 78, -2144251900);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144247761);
  sub_CF420(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_CF420(a1, a3, 78, -2144247761);
  sub_CF420(a1, a3, 77, 537010178);
  sub_CF420(a1, a3, 78, -2144247750);
  sub_CF420(a1, a3, 77, 872428544);
  sub_CF420(a1, a3, 78, -2144247769);
  sub_CF420(a1, a3, 77, 1006648320);
  sub_CF420(a1, a3, 78, -2144247769);
  sub_CF420(a1, a3, 77, (int)&loc_80008);
  sub_CF420(a1, a3, 78, -2144247745);
  sub_CF420(a1, a3, 77, (int)&loc_180018);
  sub_CF420(a1, a3, 78, -2144247745);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144247798);
  sub_CF420(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_CF420(a1, a3, 78, -2144247798);
  sub_CF420(a1, a3, 77, (int)&dword_10000 + 1);
  sub_CF420(a1, a3, 78, -2144247604);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144247796);
  sub_CF420(a1, a3, 77, 268439552);
  sub_CF420(a1, a3, 78, -2144247796);
  sub_CF420(a1, a3, 77, 0);
  sub_CF420(a1, a3, 78, -2144243666);
  sub_CF420(a1, a3, 77, (int)&stru_20000.st_name + 2);
  sub_CF420(a1, a3, 78, -2144243666);
  sub_CF420(a1, a3, 77, 4259905);
  sub_CF420(a1, a3, 78, -2144251869);
  sub_CF420(a1, a3, 77, 13304011);
  sub_CF420(a1, a3, 78, -2144251869);
  sub_CF420(a1, a3, 77, (int)"num6bignum5tests6Big8x37is_zero17he9d1683f90a9b0edE");
  sub_CF420(a1, a3, 78, -2144243609);
  sub_CF420(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_CF420(a1, a3, 78, -2144247768);
  sub_CF420(a1, a3, 77, (int)"rch..arm_shared..neon..uint8x8_t$u20$as$u20$core..fmt..Debug$GT$3fmt17h36b73b959a5f5a1bE");
  sub_CF420(a1, a3, 78, -2144272078);
  serdes_apb_read(a1, a2, a3, 306);
  sub_CF420(a1, a3, 77, -2136964960);
  sub_CF420(a1, a3, 78, -2144247776);
  serdes_apb_read(a1, a2, a3, 24608);
  sub_CF420(a1, a3, 77, -2136309590);
  sub_CF420(a1, a3, 78, -2144247776);
  serdes_apb_read(a1, a2, a3, 24608);
  V_LOCK();
  V_INT((int)v20, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v26,
    0x1000u,
    0,
    v21,
    v20[0],
    v20[1],
    v20[2],
    v20[3],
    v20[4],
    v20[5],
    v20[6],
    v21,
    "%s Waiting for PHY power up...",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    291,
    60,
    v26);
  serdes_wait_status(a1, a2, a3, 12308, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status(a1, a2, a3, 12820, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status(a1, a2, a3, 13332, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status(a1, a2, a3, 13844, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status(a1, a2, a3, 4156, 80);
  serdes_wait_status(a1, a2, a3, 4668, 80);
  serdes_wait_status(a1, a2, a3, 5180, 80);
  serdes_wait_status(a1, a2, a3, 5692, 80);
  serdes_wait_status(a1, a2, a3, 8217, 0);
  serdes_wait_status(a1, a2, a3, 8729, 0);
  serdes_wait_status(a1, a2, a3, 9241, 0);
  serdes_wait_status(a1, a2, a3, 9753, 0);
  serdes_wait_status(a1, a2, a3, 4114, 0);
  serdes_wait_status(a1, a2, a3, 4626, 0);
  serdes_wait_status(a1, a2, a3, 5138, 0);
  serdes_wait_status(a1, a2, a3, 5650, 0);
  serdes_wait_status(a1, a2, a3, 8196, 0);
  serdes_wait_status(a1, a2, a3, 8708, 0);
  serdes_wait_status(a1, a2, a3, 9220, 0);
  serdes_wait_status(a1, a2, a3, 9732, 0);
  sub_CF420(a1, a3, 77, (int)&dword_10000 + 1);
  sub_CF420(a1, a3, 78, -2144251791);
  sub_CF420(a1, a3, 77, (int)&loc_E000C + 2);
  sub_CF420(a1, a3, 78, -2144247768);
  sub_CF420(a1, a3, 77, (int)&loc_E000C + 2);
  sub_CF420(a1, a3, 78, -2144247768);
  sub_CF420(a1, a3, 77, (int)"$u20$as$u20$core..clone..Clone$GT$5clone17hc0de32827086aebdE");
  sub_CF420(a1, a3, 78, -2144243377);
  sub_CF420(a1, a3, 77, (int)"$u20$as$u20$core..clone..Clone$GT$5clone17hc0de32827086aebdE");
  sub_CF420(a1, a3, 78, -2144243377);
  sub_CF420(a1, a3, 77, (int)"rch..arm_shared..neon..uint8x8_t$u20$as$u20$core..fmt..Debug$GT$3fmt17h36b73b959a5f5a1bE");
  sub_CF420(a1, a3, 78, -2144243377);
  sub_CF420(a1, a3, 77, -2136244053);
  sub_CF420(a1, a3, 78, -2144247776);
  sub_CF420(a1, a3, 77, -2136244053);
  sub_CF420(a1, a3, 78, -2144247776);
  usleep(0x2710u);
  serdes_wait_status(a1, a2, a3, 4156, 93);
  serdes_wait_status(a1, a2, a3, 4668, 93);
  serdes_wait_status(a1, a2, a3, 5180, 93);
  serdes_wait_status(a1, a2, a3, 5692, 93);
  sub_CF420(a1, a3, 77, -2136309590);
  sub_CF420(a1, a3, 78, -2144247776);
  sub_CF420(a1, a3, 77, -2136309590);
  sub_CF420(a1, a3, 78, -2144247776);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  serdes_wait_status(a1, a2, a3, 4156, 92);
  serdes_wait_status(a1, a2, a3, 4668, 92);
  serdes_wait_status(a1, a2, a3, 5180, 92);
  serdes_wait_status(a1, a2, a3, 5692, 92);
  usleep(0xEA60u);
  sub_CF420(a1, a3, 77, -1062551382);
  sub_CF420(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  serdes_wait_status(a1, a2, a3, 4156, 94);
  serdes_wait_status(a1, a2, a3, 4668, 94);
  serdes_wait_status(a1, a2, a3, 5180, 94);
  serdes_wait_status(a1, a2, a3, 5692, 94);
  if ( a4 == 2 )
  {
    sub_CF420(a1, a3, 77, 196611);
    sub_CF420(a1, a3, 78, -2144247798);
    sub_CF420(a1, a3, 77, 196611);
    sub_CF420(a1, a3, 78, -2144247798);
    usleep(0x3E8u);
    serdes_wait_status(a1, a2, a3, 8218, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status(a1, a2, a3, 8730, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status(a1, a2, a3, 9242, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status(a1, a2, a3, 9754, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    sub_CF420(a1, a3, 77, 131074);
    sub_CF420(a1, a3, 78, -2144247798);
    sub_CF420(a1, a3, 77, 131074);
    sub_CF420(a1, a3, 78, -2144247798);
    usleep((__useconds_t)&elf_hash_chain[4398]);
    serdes_wait_status(a1, a2, a3, 8218, 0);
    serdes_wait_status(a1, a2, a3, 8730, 0);
    serdes_wait_status(a1, a2, a3, 9242, 0);
    serdes_wait_status(a1, a2, a3, 9754, 0);
  }
  sub_CF420(a1, a3, 77, -2136309590);
  sub_CF420(a1, a3, 78, -2144247776);
  sub_CF420(a1, a3, 77, -1062551382);
  sub_CF420(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  V_LOCK();
  V_INT((int)v22, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v26,
    0x1000u,
    0,
    v23,
    v22[0],
    v22[1],
    v22[2],
    v22[3],
    v22[4],
    v22[5],
    v22[6],
    v23,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    375,
    60,
    v26);
  serdes_wait_status(a1, a2, a3, 4156, 94);
  serdes_wait_status(a1, a2, a3, 4668, 94);
  serdes_wait_status(a1, a2, a3, 5180, 94);
  serdes_wait_status(a1, a2, a3, 5692, 94);
  V_LOCK();
  V_INT((int)v24, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v26,
    0x1000u,
    0,
    v25,
    v24[0],
    v24[1],
    v24[2],
    v24[3],
    v24[4],
    v24[5],
    v24[6],
    v25,
    "%s Enabling RX LBERT in LFSR31 and setting RX LBERT SYNC to 1",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_internal_loop_ate_init",
    29,
    380,
    60,
    v26);
  sub_CF420(a1, a3, 77, 65537);
  sub_CF420(a1, a3, 78, -2144251757);
  sub_CF420(a1, a3, 77, 65537);
  sub_CF420(a1, a3, 78, -2144251757);
  sub_CF420(a1, a3, 77, 1114129);
  sub_CF420(a1, a3, 78, -2144251757);
  sub_CF420(a1, a3, 77, 65537);
  sub_CF420(a1, a3, 78, -2144251757);
  sub_CF420(a1, a3, 77, 1114129);
  sub_CF420(a1, a3, 78, -2144251757);
  sub_CF420(a1, a3, 77, 65537);
  sub_CF420(a1, a3, 78, -2144251757);
  usleep(0x2710u);
  return 0;
}
