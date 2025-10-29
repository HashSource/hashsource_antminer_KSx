int __fastcall tsensor_write(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, char *a4, int a5)
{
  int v8; // r0
  char *v9; // r8
  char *v10; // r6
  int v11; // r0
  const void *v12; // r3
  int v13; // r6
  int v14; // r0
  int v15; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  unsigned __int8 v23[8]; // [sp+17h] [bp-1809h] BYREF
  unsigned __int8 v24; // [sp+1Fh] [bp-1801h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v26[4096]; // [sp+820h] [bp-1000h] BYREF

  v23[0] = a2;
  if ( a1 > 0xF )
  {
    v13 = -2147482111;
    v21 = snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK(v21);
    v22 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
      193,
      "tsensor_write",
      13,
      112,
      100,
      v26);
    return v13;
  }
  v8 = sub_11BEC4(a1, v23[0]);
  if ( v8 != -2147482112 )
    goto LABEL_3;
  v13 = tsensor_open(a1, v23, 1u);
  if ( v13 < 0 )
  {
    v19 = snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v23[0]);
    V_LOCK(v19);
    v20 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
      193,
      "tsensor_write",
      13,
      121,
      100,
      v26);
    return v13;
  }
  v8 = sub_11BEC4(a1, v23[0]);
  if ( v8 == -2147482112 )
  {
    v17 = snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v23[0]);
    V_LOCK(v17);
    v18 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
      193,
      "tsensor_write",
      13,
      128,
      100,
      v26);
    return v13;
  }
LABEL_3:
  if ( a5 )
  {
    v9 = &a4[a5];
    v10 = (char *)&unk_306D94 + 68 * a1 + 8 * v8;
    while ( 1 )
    {
      v11 = *((_DWORD *)v10 + 2);
      v12 = a4;
      v24 = a3;
      ++a4;
      ++a3;
      if ( iic_write_reg(v11, &v24, 1, v12, 1u) != 1 )
        break;
      if ( a4 == v9 )
        return a5;
    }
    v13 = -2147482112;
    v14 = snprintf(s, 0x800u, "fail to write tsensor by iic, chain:%d, slave: %d, addr: %d", a1, v23[0], v24);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
      193,
      "tsensor_write",
      13,
      140,
      100,
      v26);
    return v13;
  }
  return a5;
}
