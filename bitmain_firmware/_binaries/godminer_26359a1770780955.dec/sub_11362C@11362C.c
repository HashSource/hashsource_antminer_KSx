int __fastcall sub_11362C(int result, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _BYTE v7[4096]; // [sp+818h] [bp-1000h] BYREF

  v5 = result;
  if ( a2 )
  {
    result = exists_c_map(a2, &v5);
    if ( result == 1 )
    {
      v3 = snprintf(s, 0x800u, "remove %d from flicker list\n", v5);
      V_LOCK(v3);
      v4 = logfmt_raw((int)v7, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_ui.c",
        195,
        "remove_port_form_gpio_map",
        25,
        199,
        20,
        v7);
      return remove_c_map(a2, &v5);
    }
  }
  return result;
}
