int __fastcall tsensor_read(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, char *a4, int a5)
{
  int v7; // r0
  int result; // r0
  int v9; // r8
  int v10; // r0
  int v11; // r0
  int v12; // r2
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  unsigned __int8 v19; // [sp+16h] [bp-1802h] BYREF
  unsigned __int8 v20; // [sp+17h] [bp-1801h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _BYTE v22[4072]; // [sp+818h] [bp-1000h] BYREF

  v20 = a2;
  v19 = a3;
  if ( a1 > 0xF )
  {
    v9 = -2147482111;
    v15 = snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK(v15);
    v16 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v16);
    v12 = 155;
    goto LABEL_9;
  }
  v7 = sub_11F6A0(a1, v20);
  if ( v7 != -2147482112 )
    goto LABEL_3;
  v9 = tsensor_open(a1, &v20, 1u);
  if ( v9 < 0 )
  {
    v13 = snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v20);
    V_LOCK(v13);
    v14 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v14);
    v12 = 164;
    goto LABEL_9;
  }
  v7 = sub_11F6A0(a1, v20);
  if ( v7 == -2147482112 )
  {
    v10 = snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v20);
    V_LOCK(v10);
    v11 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v11);
    v12 = 171;
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_read",
      12,
      v12,
      100,
      v22);
    return v9;
  }
LABEL_3:
  result = iic_read_reg(*(_DWORD *)&byte_3115B8[68 * a1 + 8 + 8 * v7], &v19, 2u, a4, a5);
  if ( result != a5 )
  {
    v9 = -2147482112;
    v17 = snprintf(s, 0x800u, "fail to read tsensor by iic, chain: %d, slave: %d, addr: %d", a1, v20, v19);
    V_LOCK(v17);
    v18 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v18);
    v12 = 196;
    goto LABEL_9;
  }
  return result;
}
