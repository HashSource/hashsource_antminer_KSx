int __fastcall bitmain_power_read(int a1, int a2, int a3)
{
  unsigned int v3; // r0
  __int64 *v4; // r3
  unsigned int v6; // r0
  int v7; // r5
  int v8; // r3
  int v9; // r0
  int v10; // r0
  unsigned __int8 *v11; // r8
  int v12; // r5
  int v13; // t1
  int v14; // r0
  int v15; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v22; // [sp+1Ch] [bp-1848h]
  int v23; // [sp+24h] [bp-1840h] BYREF
  char v24; // [sp+28h] [bp-183Ch]
  char v25; // [sp+29h] [bp-183Bh]
  char v26; // [sp+2Ah] [bp-183Ah]
  char v27; // [sp+2Bh] [bp-1839h]
  unsigned __int8 v28[32]; // [sp+2Ch] [bp-1838h] BYREF
  __int64 v29; // [sp+4Ch] [bp-1818h]
  __int16 v30; // [sp+54h] [bp-1810h]
  __int64 v31; // [sp+56h] [bp-180Eh] BYREF
  char s[2048]; // [sp+60h] [bp-1804h] BYREF
  _BYTE v33[4100]; // [sp+860h] [bp-1004h] BYREF

  v24 = a1;
  v3 = a1 + 12 + a3;
  memset(v28, 0, 16);
  v4 = &v31;
  v25 = a3;
  v26 = v3;
  v6 = v3 >> 8;
  v30 = 0;
  v31 = 0;
  if ( dword_30BCF4 )
    v4 = 0;
  v27 = v6;
  memset(&v28[16], 0, 16);
  v23 = 101100117;
  if ( dword_30BCF4 )
    v22 = (int)v4;
  v29 = 0;
  if ( dword_30BCF4 || (v22 = sub_11A4DC(), v22 >= 0) )
  {
    if ( dword_30BCF0 == 255 )
    {
      if ( sub_11993C((unsigned __int8 *)&v23, 8u, v28, 0x32u) )
      {
        v22 = -2147482880;
        strcpy(s, "get power version failed");
        V_LOCK(*(_DWORD *)"n failed");
        v19 = logfmt_raw((int)v33, 0x1000u);
        V_UNLOCK(v19);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
          194,
          "bitmain_power_read",
          18,
          981,
          100,
          v33);
        return v22;
      }
    }
    else if ( sub_119ADC(dword_30BCF0, (unsigned __int8 *)&v23, 8u, v28, a3 + 7) )
    {
      v22 = -2147482880;
      strcpy(s, "set DA conversion N failed");
      V_LOCK(*(_DWORD *)"n N failed");
      v20 = logfmt_raw((int)v33, 0x1000u);
      V_UNLOCK(v20);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
        194,
        "bitmain_power_read",
        18,
        987,
        100,
        v33);
      return v22;
    }
    LOBYTE(v7) = 0;
    v8 = 0;
    do
    {
      v7 = (unsigned __int8)(v7 + 1);
      v9 = snprintf(s, 0x800u, "read_back_data[%d]: %02X", v8, v28[v8]);
      V_LOCK(v9);
      v10 = logfmt_raw((int)v33, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
        194,
        "bitmain_power_read",
        18,
        995,
        100,
        v33);
      v8 = v7;
    }
    while ( v7 <= a3 + 6 );
    if ( a3 )
    {
      v11 = &v28[4];
      v12 = a2 - 1;
      do
      {
        v13 = *++v11;
        *(_BYTE *)++v12 = v13;
        v14 = snprintf(s, 0x800u, "buf[%d]: %02X", v12 - a2, v13);
        V_LOCK(v14);
        v15 = logfmt_raw((int)v33, 0x1000u);
        V_UNLOCK(v15);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
          194,
          "bitmain_power_read",
          18,
          1000,
          100,
          v33);
      }
      while ( v12 != a2 + (unsigned __int8)(a3 - 1) );
    }
  }
  else
  {
    v17 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_read");
    V_LOCK(v17);
    v18 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "bitmain_power_read",
      18,
      977,
      100,
      v33);
  }
  return v22;
}
