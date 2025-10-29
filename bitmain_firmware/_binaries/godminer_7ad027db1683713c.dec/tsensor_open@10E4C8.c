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
  _DWORD *v14; // r2
  unsigned int v16; // [sp+14h] [bp-1810h]
  unsigned int v17; // [sp+18h] [bp-180Ch] BYREF
  __int16 v18; // [sp+1Ch] [bp-1808h]
  char v19; // [sp+1Eh] [bp-1806h]
  char v20; // [sp+1Fh] [bp-1805h]
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v22[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    v12 = -2147482111;
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_open",
      12,
      55,
      100,
      v22);
  }
  else if ( a3 > 7 )
  {
    snprintf(s, 0x800u, " Bad T-sensor param, input num is %d", a3);
    v12 = -2147482111;
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_open",
      12,
      56,
      100,
      v22);
  }
  else
  {
    if ( !a3 )
      return 0;
    v4 = a2;
    v5 = &dword_2E8C48[17 * a1];
    v6 = &a2[(unsigned __int8)(a3 - 1) + 1];
    v16 = 17 * a1;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = sub_10E448(a1, *v4);
        v8 = v4++;
        if ( v7 == -2147482112 )
          break;
        if ( v4 == v6 )
          return 0;
      }
      v9 = *(v4 - 1);
      v17 = a1;
      v10 = v9 + a1;
      v18 = 0;
      v19 = (v10 >> 3) & 0xF;
      v20 = v10 & 7;
      v11 = iic_init((int *)&v17);
      v12 = v11;
      if ( v11 < 0 )
        break;
      v13 = (unsigned __int8)*v5;
      *v5 = v13 + 1;
      v14 = &dword_2E8C48[2 * v13 + v16];
      *((_BYTE *)v14 + 4) = *(v4 - 1);
      v14[2] = v11;
      if ( v4 == v6 )
        return 0;
    }
    snprintf(s, 0x800u, " open T-sensor error, chain is %d,slave addr is %d", a1, *v8);
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_open",
      12,
      75,
      100,
      v22);
  }
  return v12;
}
