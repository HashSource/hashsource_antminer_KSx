int __fastcall set_voltage_by_steps(int a1, int a2, unsigned int a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r4
  int v8; // r5
  unsigned int v9; // r2
  unsigned int v10; // r6
  signed int v11; // r8
  int v13; // r0
  _BYTE v14[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 )
  {
    V_LOCK(a1);
    v5 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v5);
    v6 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
           171,
           "set_voltage_by_steps",
           20,
           477,
           40,
           v14);
    if ( byte_2E95D8 )
      v7 = dword_2E95F4;
    else
      v7 = sub_B51D8(v6);
    v8 = a1 - v7;
    if ( a1 != v7 )
    {
      if ( a3 >= 0x64 )
        v9 = 100;
      else
        v9 = a3;
      v10 = v9 / 0xA;
      if ( v8 < 0 )
        v10 = -v10;
      v11 = abs32(v10);
      while ( (int)abs32(v8) > v11 )
      {
        v7 += v10;
        v8 -= v10;
        sub_B52E4(v7);
      }
      if ( a1 != v7 )
        sub_B52E4(a1);
    }
    return 0;
  }
  else
  {
    V_LOCK(a1);
    v13 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
      171,
      "set_voltage_by_steps",
      20,
      473,
      100,
      v14);
    return -1;
  }
}
