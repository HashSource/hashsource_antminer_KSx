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
  int *v18; // r3
  int v19; // r2
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  unsigned int v24; // [sp+14h] [bp-1810h]
  unsigned int v25; // [sp+18h] [bp-180Ch] BYREF
  __int16 v26; // [sp+1Ch] [bp-1808h]
  char v27; // [sp+1Eh] [bp-1806h]
  char v28; // [sp+1Fh] [bp-1805h]
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v30[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v20 = snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    v12 = -2147482111;
    V_LOCK(v20);
    v21 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v21);
    v18 = &g_zc;
    v19 = 55;
  }
  else if ( a3 > 7 )
  {
    v22 = snprintf(s, 0x800u, " Bad T-sensor param, input num is %d", a3);
    v12 = -2147482111;
    V_LOCK(v22);
    v23 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v23);
    v18 = &g_zc;
    v19 = 56;
  }
  else
  {
    if ( !a3 )
      return 0;
    v4 = a2;
    v5 = (char *)&unk_3115B8 + 68 * a1;
    v6 = &a2[(unsigned __int8)(a3 - 1) + 1];
    v24 = 68 * a1;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = sub_11F6A0(a1, *v4);
        v8 = v4++;
        if ( v7 == -2147482112 )
          break;
        if ( v4 == v6 )
          return 0;
      }
      v9 = *(v4 - 1);
      v25 = a1;
      v10 = v9 + a1;
      v26 = 0;
      v27 = (v10 >> 3) & 0xF;
      v28 = v10 & 7;
      v11 = iic_init((int)&v25);
      v12 = v11;
      if ( v11 < 0 )
        break;
      v13 = (unsigned __int8)*v5;
      *v5 = v13 + 1;
      v14 = (char *)&unk_3115B8 + 8 * v13 + v24;
      v14[4] = *(v4 - 1);
      *((_DWORD *)v14 + 2) = v11;
      if ( v4 == v6 )
        return 0;
    }
    v16 = snprintf(s, 0x800u, " open T-sensor error, chain is %d,slave addr is %d", a1, *v8);
    V_LOCK(v16);
    v17 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v17);
    v18 = &g_zc;
    v19 = 75;
  }
  zlog(
    *v18,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
    188,
    "tsensor_open",
    12,
    v19,
    100,
    v30);
  return v12;
}
