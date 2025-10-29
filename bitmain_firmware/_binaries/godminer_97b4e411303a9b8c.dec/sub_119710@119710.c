int __fastcall sub_119710(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r12
  int v5; // r3
  __int16 v6; // t1
  int v7; // r5
  int v8; // r0
  unsigned __int8 *v9; // r3
  unsigned __int8 *v10; // r4
  int v11; // r5
  int v12; // t1
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v17; // r0
  int v18; // r0
  unsigned __int8 *v19; // [sp+14h] [bp-1808h]
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v21[4100]; // [sp+818h] [bp-1004h] BYREF

  v3 = a2 + 1;
  LOWORD(v5) = 0;
  do
  {
    v6 = *++v3;
    v5 = (unsigned __int16)(v5 + v6);
  }
  while ( v3 != &a2[a3 - 3] );
  v7 = a3 - 1;
  if ( v5 == (unsigned __int16)(a2[a3 - 2] + (a2[a3 - 1] << 8)) )
  {
    if ( *a1 == *a2 && a1[1] == a2[1] && a1[3] == a2[3] && a3 == a2[2] + 2 )
      return 0;
    strcpy(s, "power reply the bad data");
    V_LOCK(*(_DWORD *)"bad data");
    v8 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "check_read_back_data",
      20,
      132,
      20,
      v21);
  }
  else
  {
    v17 = snprintf(
            s,
            0x800u,
            "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x",
            v5,
            (unsigned __int16)(a2[a3 - 2] + (a2[a3 - 1] << 8)));
    V_LOCK(v17);
    v18 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "check_read_back_data",
      20,
      126,
      20,
      v21);
  }
  v9 = &a2[v7];
  v10 = a2 - 1;
  v11 = 0;
  v19 = v9;
  do
  {
    v12 = *++v10;
    v13 = v11++;
    v14 = snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v13, v12);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "check_read_back_data",
      20,
      138,
      20,
      v21);
  }
  while ( v19 != v10 );
  return -2147482880;
}
