_DWORD *__fastcall runtime_ctrl(int a1)
{
  _DWORD *v1; // r5
  int v2; // r3
  char v5[4100]; // [sp+18h] [bp-1004h] BYREF

  switch ( a1 )
  {
    case 1:
      v1 = runtime_ctrl_ckb_2042();
      goto LABEL_3;
    case 2:
      v1 = runtime_ctrl_kda_2110();
      goto LABEL_3;
    case 3:
      v1 = runtime_ctrl_hns_2130();
      goto LABEL_3;
    case 4:
      v1 = runtime_ctrl_dcr_1727();
      goto LABEL_3;
    case 5:
      v1 = runtime_ctrl_dash_1766();
      goto LABEL_3;
    case 6:
      v1 = runtime_ctrl_eth_2280();
      goto LABEL_3;
    case 8:
      v1 = runtime_ctrl_ltc_1489();
      goto LABEL_3;
    case 9:
      v1 = runtime_ctrl_zec_1746();
      goto LABEL_3;
    case 10:
      v1 = runtime_ctrl_rvn_2020();
      goto LABEL_3;
    case 11:
      v1 = runtime_ctrl_kas_2380();
LABEL_3:
      if ( v1 )
      {
        pthread_mutex_lock(&stru_2E02F8);
        v2 = dword_2E0310++;
        *((_DWORD *)&stru_2E02F8 + v2 + 7) = v1;
        v1[57] = v2;
        pthread_mutex_unlock(&stru_2E02F8);
      }
      break;
    default:
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "ALGO %d does not define backend_runtime", a1);
      v1 = 0;
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_interface.c",
        171,
        "runtime_ctrl",
        12,
        62,
        100,
        v5);
      break;
  }
  return v1;
}
