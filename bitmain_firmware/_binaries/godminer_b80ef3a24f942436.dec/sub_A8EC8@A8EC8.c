unsigned int __fastcall sub_A8EC8(int a1, int a2, int a3, int a4)
{
  unsigned int v5; // r5
  int v6; // r0
  int v8; // r3
  _BYTE v9[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 >= a4 || dword_2F0740 > 120 )
  {
    dword_2F0740 = 0;
LABEL_4:
    v5 = 0;
    goto LABEL_5;
  }
  if ( !dword_2F0740 )
    goto LABEL_4;
  v8 = dword_2F0740 + 1;
  if ( !a2 )
  {
LABEL_11:
    v5 = 20;
    dword_2F0740 = v8;
    goto LABEL_5;
  }
  ++dword_2F0740;
  a1 = -858993459 * (a4 - a3 + 10);
  v5 = 10 * ((a4 - a3 + 10) / 5u);
  if ( a2 <= 0 && v8 )
  {
    ++v8;
    goto LABEL_11;
  }
LABEL_5:
  V_LOCK(a1);
  v6 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v6);
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
  return v5;
}
