int __fastcall tsensor_read(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v7; // r0
  int result; // r0
  int v9; // r8
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  unsigned __int8 v18; // [sp+16h] [bp-1802h] BYREF
  unsigned __int8 v19; // [sp+17h] [bp-1801h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _BYTE v21[4072]; // [sp+818h] [bp-1000h] BYREF

  v19 = a2;
  v18 = a3;
  if ( a1 > 0xF )
  {
    v9 = -2147482111;
    v14 = snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
      193,
      "tsensor_read",
      12,
      155,
      100,
      v21);
    return v9;
  }
  v7 = sub_11BDCC(a1, v19);
  if ( v7 != -2147482112 )
    goto LABEL_3;
  v9 = tsensor_open(a1, &v19, 1u);
  if ( v9 < 0 )
  {
    v12 = snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v19);
    V_LOCK(v12);
    v13 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
      193,
      "tsensor_read",
      12,
      164,
      100,
      v21);
    return v9;
  }
  v7 = sub_11BDCC(a1, v19);
  if ( v7 == -2147482112 )
  {
    v10 = snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v19);
    V_LOCK(v10);
    v11 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
      193,
      "tsensor_read",
      12,
      171,
      100,
      v21);
    return v9;
  }
LABEL_3:
  result = iic_read_reg(dword_306D94[17 * a1 + 2 + 2 * v7], &v18, 2, a4, a5);
  if ( result != a5 )
  {
    v9 = -2147482112;
    v16 = snprintf(s, 0x800u, "fail to read tsensor by iic, chain: %d, slave: %d, addr: %d", a1, v19, v18);
    V_LOCK(v16);
    v17 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
      193,
      "tsensor_read",
      12,
      196,
      100,
      v21);
    return v9;
  }
  return result;
}
