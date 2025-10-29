int __fastcall runtime_ctrl(int a1)
{
  int v1; // r5
  int v2; // r3
  int v4; // r0
  _BYTE v5[4100]; // [sp+18h] [bp-1004h] BYREF

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
      v1 = runtime_ctrl_rvn_2044();
      goto LABEL_3;
    case 11:
      v1 = runtime_ctrl_kas_2380();
      goto LABEL_3;
    case 12:
      v1 = runtime_ctrl_ks5_2382();
LABEL_3:
      if ( v1 )
      {
        pthread_mutex_lock((pthread_mutex_t *)&unk_2F67F0);
        v2 = dword_2F6808++;
        *((_DWORD *)&unk_2F67F0 + v2 + 7) = v1;
        *(_DWORD *)(v1 + 244) = v2;
        pthread_mutex_unlock((pthread_mutex_t *)&unk_2F67F0);
      }
      break;
    default:
      V_LOCK(a1);
      v4 = logfmt_raw((int)v5, 0x1000u);
      v1 = 0;
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_interface.c",
        176,
        "runtime_ctrl",
        12,
        65,
        100,
        v5);
      break;
  }
  return v1;
}
