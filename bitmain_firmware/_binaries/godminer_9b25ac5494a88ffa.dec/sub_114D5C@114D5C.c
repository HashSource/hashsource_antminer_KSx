int __fastcall sub_114D5C(int a1, char *s)
{
  int v3; // r0
  int v4; // r0
  char sa[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v6[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_309C08[0] && *(_BYTE *)(dword_309C08[0] + 80) )
  {
    sprintf(
      s,
      "%x%02x",
      *(unsigned __int8 *)(*(_DWORD *)(dword_309C08[0] + 4 * a1) + 31),
      *(unsigned __int8 *)(*(_DWORD *)(dword_309C08[0] + 4 * a1) + 32));
    return 0;
  }
  else
  {
    v3 = snprintf(sa, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_pcb_version", a1);
    V_LOCK(v3);
    v4 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "get_pcb_version",
      15,
      1195,
      100,
      v6);
    return 255;
  }
}
