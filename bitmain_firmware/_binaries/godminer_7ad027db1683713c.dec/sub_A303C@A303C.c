unsigned int __fastcall sub_A303C(int a1, int a2, int a3, int a4)
{
  unsigned int v6; // r5
  int v8; // r3
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 >= a4 || dword_2D0710 > 120 )
  {
    dword_2D0710 = 0;
LABEL_4:
    v6 = 0;
    goto LABEL_5;
  }
  if ( !dword_2D0710 )
    goto LABEL_4;
  v8 = dword_2D0710 + 1;
  if ( !a2 )
  {
LABEL_11:
    v6 = 20;
    dword_2D0710 = v8;
    goto LABEL_5;
  }
  ++dword_2D0710;
  v6 = 10 * ((a4 - a3 + 10) / 5u);
  if ( a2 <= 0 && v8 )
  {
    ++v8;
    goto LABEL_11;
  }
LABEL_5:
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "initial_cnt:%d, temp_max:%d, target_temp:%d, voltage_bias:%d", dword_2D0710, a3, a4, v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    195,
    "calc_voltage_bias_kas_2380",
    26,
    117,
    20,
    v9);
  return v6;
}
