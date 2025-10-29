int __fastcall api_get_eeprom_asic_freqs(int a1, void *dest, float *a3)
{
  int v3; // lr
  int v5; // r3
  int v6; // r1
  int v7; // s15
  int v8; // s13
  char *v9; // r3
  float v10; // s13
  float v11; // s14
  int v12; // t1
  int v13; // r5
  char src[512]; // [sp+10h] [bp-1A00h] BYREF
  char s[2048]; // [sp+210h] [bp-1800h] BYREF
  char v17[4096]; // [sp+A10h] [bp-1000h] BYREF

  v3 = dword_2E8A8C[a1 + 2];
  if ( dword_2E8A8C[0] && *(_BYTE *)(dword_2E8A8C[0] + 80) )
  {
    v5 = *(_DWORD *)(dword_2E8A8C[0] + 4 * v3);
    v6 = v5 + 62;
    v7 = *(unsigned __int16 *)(v5 + 61);
    v8 = *(unsigned __int16 *)(v5 + 41);
    v9 = src;
    v10 = (float)v8;
    v11 = (double)v7 * 0.01;
    do
    {
      v12 = *(unsigned __int8 *)++v6;
      *(float *)v9 = v10 + (float)((float)v12 * v11);
      v9 += 4;
    }
    while ( s != v9 );
    v13 = (int)a3;
    if ( a3 )
      v13 = 1;
    if ( !dest )
      v13 = 0;
    if ( v13 )
    {
      *a3 = v11;
      memcpy(dest, src, 0x200u);
      return 0;
    }
    else
    {
      snprintf(s, 0x800u, "%s: sweep_freqs is NULL\n", "api_get_eeprom_asic_freqs");
      V_LOCK();
      logfmt_raw(v17, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "api_get_eeprom_asic_freqs",
        25,
        1390,
        100,
        v17);
      return -2;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "api_get_eeprom_asic_freqs", v3);
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "api_get_eeprom_asic_freqs",
      25,
      1371,
      100,
      v17);
    return -1;
  }
}
