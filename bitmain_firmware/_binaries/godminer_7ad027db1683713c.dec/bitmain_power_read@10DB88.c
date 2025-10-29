int __fastcall bitmain_power_read(int a1, int a2, int a3)
{
  int v3; // r5
  unsigned int v4; // r0
  __int64 *v5; // r3
  unsigned int v7; // r0
  int v8; // r5
  int v9; // r3
  unsigned __int8 *v10; // r8
  int v11; // r5
  int v12; // t1
  int v15; // [sp+1Ch] [bp-1848h]
  int v16; // [sp+24h] [bp-1840h] BYREF
  char v17; // [sp+28h] [bp-183Ch]
  char v18; // [sp+29h] [bp-183Bh]
  char v19; // [sp+2Ah] [bp-183Ah]
  char v20; // [sp+2Bh] [bp-1839h]
  unsigned __int8 v21[32]; // [sp+2Ch] [bp-1838h] BYREF
  __int64 v22; // [sp+4Ch] [bp-1818h]
  __int16 v23; // [sp+54h] [bp-1810h]
  __int64 v24; // [sp+56h] [bp-180Eh] BYREF
  char s[2048]; // [sp+60h] [bp-1804h] BYREF
  char v26[4100]; // [sp+860h] [bp-1004h] BYREF

  v3 = dword_2E8B5C;
  v17 = a1;
  v4 = a1 + 12 + a3;
  memset(v21, 0, 16);
  v5 = &v24;
  v18 = a3;
  v19 = v4;
  v7 = v4 >> 8;
  v23 = 0;
  v24 = 0;
  if ( dword_2E8B5C )
    v5 = 0;
  v20 = v7;
  memset(&v21[16], 0, 16);
  v16 = 101100117;
  if ( dword_2E8B5C )
    v15 = (int)v5;
  v22 = 0;
  if ( dword_2E8B5C || (v15 = sub_10C79C(), v15 >= 0) )
  {
    if ( dword_2E8B58 == 255 )
    {
      if ( sub_10BDBC((unsigned __int8 *)&v16, 8u, v21, 0x32u) )
      {
        v15 = -2147482880;
        strcpy(s, "get power version failed");
        V_LOCK();
        logfmt_raw(v26, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
          189,
          "bitmain_power_read",
          18,
          891,
          100,
          v26);
        return v15;
      }
    }
    else if ( sub_10BF24(dword_2E8B58, (unsigned __int8 *)&v16, 8u, v21, a3 + 7) )
    {
      v15 = -2147482880;
      strcpy(s, "set DA conversion N failed");
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        189,
        "bitmain_power_read",
        18,
        897,
        100,
        v26);
      return v15;
    }
    LOBYTE(v8) = 0;
    v9 = 0;
    do
    {
      v8 = (unsigned __int8)(v8 + 1);
      snprintf(s, 0x800u, "read_back_data[%d]: %02X", v9, v21[v9]);
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        189,
        "bitmain_power_read",
        18,
        905,
        100,
        v26);
      v9 = v8;
    }
    while ( v8 <= a3 + 6 );
    if ( a3 )
    {
      v10 = &v21[4];
      v11 = a2 - 1;
      do
      {
        v12 = *++v10;
        *(_BYTE *)++v11 = v12;
        snprintf(s, 0x800u, "buf[%d]: %02X", v11 - a2, v12);
        V_LOCK();
        logfmt_raw(v26, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
          189,
          "bitmain_power_read",
          18,
          910,
          100,
          v26);
      }
      while ( v11 != a2 + (unsigned __int8)(a3 - 1) );
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_read");
    V_LOCK();
    logfmt_raw(v26, 0x1000u, v3, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "bitmain_power_read",
      18,
      887,
      100,
      v26);
  }
  return v15;
}
