_DWORD *__fastcall machine_runtime_init(int a1, int a2)
{
  int v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r6
  int v6; // r0
  _BYTE v8[4096]; // [sp+10h] [bp-1000h] BYREF

  switch ( a2 )
  {
    case 1:
      v4 = machine_runtime_ctrl_ckb_2042();
      v5 = v4;
      break;
    case 2:
      v4 = machine_runtime_ctrl_kda_2110();
      v5 = v4;
      break;
    case 3:
      v4 = machine_runtime_ctrl_hns_2130();
      v5 = v4;
      break;
    case 4:
      v4 = machine_runtime_ctrl_dcr_1727();
      v5 = v4;
      break;
    case 5:
      v4 = machine_runtime_ctrl_dash_1766();
      v5 = v4;
      break;
    case 6:
      v4 = machine_runtime_ctrl_eth_2280();
      v5 = v4;
      break;
    case 7:
      v4 = machine_runtime_ctrl_eth_2282();
      v5 = v4;
      break;
    case 8:
      v4 = machine_runtime_ctrl_ltc_1489(a1);
      v5 = v4;
      break;
    case 9:
      v4 = (_DWORD *)machine_runtime_ctrl_zec_1746();
      v5 = v4;
      break;
    case 10:
      v4 = (_DWORD *)machine_runtime_ctrl_rvn_2020();
      v5 = v4;
      break;
    case 11:
      v4 = machine_runtime_ctrl_kas_2380();
      v5 = v4;
      break;
    default:
      V_LOCK(a1);
      v3 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_interface.c",
        187,
        "machine_runtime_init",
        20,
        65,
        100,
        v8);
      MEMORY[0x48] = 0;
      __und(0);
  }
  v5[18] = a2;
  V_LOCK(v4);
  v6 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/machine_runtime_interface.c",
    187,
    "machine_runtime_init",
    20,
    69,
    40,
    v8);
  return v5;
}
