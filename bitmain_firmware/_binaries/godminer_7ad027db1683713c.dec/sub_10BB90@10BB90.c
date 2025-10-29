int __fastcall sub_10BB90(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r12
  int v5; // r3
  __int16 v6; // t1
  int v7; // r5
  unsigned __int8 *v8; // r3
  unsigned __int8 *v9; // r4
  int v10; // r5
  int v11; // t1
  int v12; // r3
  unsigned __int8 *v14; // [sp+14h] [bp-1808h]
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v16[4100]; // [sp+818h] [bp-1004h] BYREF

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
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "check_read_back_data",
      20,
      124,
      20,
      v16);
  }
  else
  {
    snprintf(
      s,
      0x800u,
      "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x",
      v5,
      (unsigned __int16)(a2[a3 - 2] + (a2[a3 - 1] << 8)));
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "check_read_back_data",
      20,
      118,
      20,
      v16);
  }
  v8 = &a2[v7];
  v9 = a2 - 1;
  v10 = 0;
  v14 = v8;
  do
  {
    v11 = *++v9;
    v12 = v10++;
    snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v12, v11);
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "check_read_back_data",
      20,
      130,
      20,
      v16);
  }
  while ( v14 != v9 );
  return -2147482880;
}
