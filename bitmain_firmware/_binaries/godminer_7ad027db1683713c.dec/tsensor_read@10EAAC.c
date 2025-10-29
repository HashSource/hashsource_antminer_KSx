int __fastcall tsensor_read(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, char *a4, int a5)
{
  int v7; // r0
  int result; // r0
  int v9; // r8
  unsigned __int8 v10; // [sp+16h] [bp-1802h] BYREF
  unsigned __int8 v11; // [sp+17h] [bp-1801h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v13[4072]; // [sp+818h] [bp-1000h] BYREF

  v11 = a2;
  v10 = a3;
  if ( a1 > 0xF )
  {
    v9 = -2147482111;
    snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_read",
      12,
      155,
      100,
      v13);
    return v9;
  }
  v7 = sub_10E448(a1, v11);
  if ( v7 != -2147482112 )
    goto LABEL_3;
  v9 = tsensor_open(a1, &v11, 1u);
  if ( v9 < 0 )
  {
    snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v11);
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_read",
      12,
      164,
      100,
      v13);
    return v9;
  }
  v7 = sub_10E448(a1, v11);
  if ( v7 == -2147482112 )
  {
    snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v11);
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_read",
      12,
      171,
      100,
      v13);
    return v9;
  }
LABEL_3:
  result = iic_read_reg(dword_2E8C48[17 * a1 + 2 + 2 * v7], &v10, 2u, a4, a5);
  if ( result != a5 )
  {
    v9 = -2147482112;
    snprintf(s, 0x800u, "fail to read tsensor by iic, chain: %d, slave: %d, addr: %d", a1, v11, v10);
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_read",
      12,
      196,
      100,
      v13);
    return v9;
  }
  return result;
}
