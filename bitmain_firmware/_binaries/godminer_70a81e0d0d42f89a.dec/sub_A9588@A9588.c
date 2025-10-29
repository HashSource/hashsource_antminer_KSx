int __fastcall sub_A9588(int a1, int a2, int a3, int a4)
{
  int v6; // r1
  int v7; // s15
  int v8; // r12
  __int64 v9; // r2
  bool v10; // cc
  int v11; // r5
  int v12; // r0
  int v13; // r0
  _BYTE v15[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a4 + 2 < a3 )
  {
    v6 = 0;
    v11 = 0;
    dword_2E7B94 = 0;
    goto LABEL_14;
  }
  v6 = dword_2E7B94;
  if ( dword_2E7B94 > 60 )
  {
    v6 = 0;
    dword_2E7B94 = 0;
    v11 = 0;
    goto LABEL_14;
  }
  if ( !dword_2E7B94 )
  {
    v11 = 0;
    if ( a2 > 0 )
      goto LABEL_14;
    goto LABEL_12;
  }
  if ( !a2 )
  {
LABEL_16:
    ++v6;
    v11 = 200;
    dword_2E7B94 = v6;
    goto LABEL_14;
  }
  v7 = dword_2E7B94;
  v8 = 80;
  v6 = ++dword_2E7B94;
  HIDWORD(v9) = 80 * (int)((60.0 - (double)v7) / 60.0 * 1000.0) / 1000;
  LODWORD(v9) = (((a4 + 3 - a3) & ~((a4 + 3 - a3) >> 31)) + 10) * HIDWORD(v9);
  v10 = (int)v9 < -9;
  if ( (int)v9 < -9 )
  {
    v11 = 0;
  }
  else
  {
    v11 = (int)v9 >> 31;
    v8 = 10;
    v9 = 1374389535LL * (int)v9;
  }
  if ( !v10 )
    v11 = v8 * ((SHIDWORD(v9) >> 5) - v11);
  if ( a2 <= 0 )
  {
    if ( !v6 )
    {
LABEL_12:
      v6 = 0;
      goto LABEL_14;
    }
    goto LABEL_16;
  }
LABEL_14:
  v12 = printf("%d\n", v6);
  V_LOCK(v12);
  v13 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    200,
    "calc_voltage_bias_ks5_2382",
    26,
    130,
    20,
    v15);
  return v11;
}
