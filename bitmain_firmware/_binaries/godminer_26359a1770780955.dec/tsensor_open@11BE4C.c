int __fastcall tsensor_open(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v4; // r11
  _BYTE *v5; // r10
  unsigned __int8 *v6; // r5
  int v7; // r0
  unsigned __int8 *v8; // r4
  int v9; // r2
  unsigned int v10; // r2
  int v11; // r0
  int v12; // r8
  int v13; // r2
  char *v14; // r2
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // [sp+14h] [bp-1810h]
  unsigned int v23; // [sp+18h] [bp-180Ch] BYREF
  __int16 v24; // [sp+1Ch] [bp-1808h]
  char v25; // [sp+1Eh] [bp-1806h]
  char v26; // [sp+1Fh] [bp-1805h]
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v28[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v18 = snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    v12 = -2147482111;
    V_LOCK(v18);
    v19 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
      193,
      "tsensor_open",
      12,
      55,
      100,
      v28);
  }
  else if ( a3 > 7 )
  {
    v20 = snprintf(s, 0x800u, " Bad T-sensor param, input num is %d", a3);
    v12 = -2147482111;
    V_LOCK(v20);
    v21 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
      193,
      "tsensor_open",
      12,
      56,
      100,
      v28);
  }
  else
  {
    if ( !a3 )
      return 0;
    v4 = a2;
    v5 = (char *)&unk_306D94 + 68 * a1;
    v6 = &a2[(unsigned __int8)(a3 - 1) + 1];
    v22 = 68 * a1;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = sub_11BDCC(a1, *v4);
        v8 = v4++;
        if ( v7 == -2147482112 )
          break;
        if ( v4 == v6 )
          return 0;
      }
      v9 = *(v4 - 1);
      v23 = a1;
      v10 = v9 + a1;
      v24 = 0;
      v25 = (v10 >> 3) & 0xF;
      v26 = v10 & 7;
      v11 = iic_init((int)&v23);
      v12 = v11;
      if ( v11 < 0 )
        break;
      v13 = (unsigned __int8)*v5;
      *v5 = v13 + 1;
      v14 = (char *)&unk_306D94 + 8 * v13 + v22;
      v14[4] = *(v4 - 1);
      *((_DWORD *)v14 + 2) = v11;
      if ( v4 == v6 )
        return 0;
    }
    v16 = snprintf(s, 0x800u, " open T-sensor error, chain is %d,slave addr is %d", a1, *v8);
    V_LOCK(v16);
    v17 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
      193,
      "tsensor_open",
      12,
      75,
      100,
      v28);
  }
  return v12;
}
