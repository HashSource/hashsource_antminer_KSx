int __fastcall sub_107B9C(int a1, char *s)
{
  char sa[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_2E8A8C[0] && *(_BYTE *)(dword_2E8A8C[0] + 80) )
  {
    sprintf(
      s,
      "%x%02x",
      *(unsigned __int8 *)(*(_DWORD *)(dword_2E8A8C[0] + 4 * a1) + 31),
      *(unsigned __int8 *)(*(_DWORD *)(dword_2E8A8C[0] + 4 * a1) + 32));
    return 0;
  }
  else
  {
    snprintf(sa, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_pcb_version", a1);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, sa);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "get_pcb_version",
      15,
      1195,
      100,
      v4);
    return 255;
  }
}
