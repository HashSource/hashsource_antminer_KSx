int __fastcall tsensor_write(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, char *a4, int a5)
{
  int v8; // r0
  char *v9; // r8
  _DWORD *v10; // r6
  int v11; // r0
  char *v12; // r3
  int v13; // r6
  unsigned __int8 v15[8]; // [sp+17h] [bp-1809h] BYREF
  unsigned __int8 v16; // [sp+1Fh] [bp-1801h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v18[4096]; // [sp+820h] [bp-1000h] BYREF

  v15[0] = a2;
  if ( a1 > 0xF )
  {
    v13 = -2147482111;
    snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_write",
      13,
      112,
      100,
      v18);
    return v13;
  }
  v8 = sub_10E448(a1, v15[0]);
  if ( v8 != -2147482112 )
    goto LABEL_3;
  v13 = tsensor_open(a1, v15, 1u);
  if ( v13 < 0 )
  {
    snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v15[0]);
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_write",
      13,
      121,
      100,
      v18);
    return v13;
  }
  v8 = sub_10E448(a1, v15[0]);
  if ( v8 == -2147482112 )
  {
    snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v15[0]);
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_write",
      13,
      128,
      100,
      v18);
    return v13;
  }
LABEL_3:
  if ( a5 )
  {
    v9 = &a4[a5];
    v10 = &dword_2E8C48[17 * a1 + 2 * v8];
    while ( 1 )
    {
      v11 = v10[2];
      v12 = a4;
      v16 = a3;
      ++a4;
      ++a3;
      if ( iic_write_reg(v11, &v16, 1, v12, 1u) != 1 )
        break;
      if ( a4 == v9 )
        return a5;
    }
    v13 = -2147482112;
    snprintf(s, 0x800u, "fail to write tsensor by iic, chain:%d, slave: %d, addr: %d", a1, v15[0], v16);
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_write",
      13,
      140,
      100,
      v18);
    return v13;
  }
  return a5;
}
