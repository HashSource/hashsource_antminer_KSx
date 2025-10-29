int __fastcall sub_107C84(int a1, char *s)
{
  char sa[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_2E8A8C[0] && *(_BYTE *)(dword_2E8A8C[0] + 80) )
  {
    sprintf(
      s,
      "%x%x",
      *(unsigned __int8 *)(*(_DWORD *)(dword_2E8A8C[0] + 4 * a1) + 33),
      *(unsigned __int8 *)(*(_DWORD *)(dword_2E8A8C[0] + 4 * a1) + 34));
    return 0;
  }
  else
  {
    snprintf(sa, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_bom_version", a1);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, sa);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "get_bom_version",
      15,
      1206,
      100,
      v4);
    return 255;
  }
}
