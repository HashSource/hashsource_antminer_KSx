int *__fastcall sub_1062A4(int *result, int *a2)
{
  int *v3; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v5[4096]; // [sp+818h] [bp-1000h] BYREF

  v3 = result;
  if ( a2 )
  {
    result = exists_c_map(a2, (int)&v3);
    if ( result == (int *)1 )
    {
      snprintf(s, 0x800u, "remove %d from flicker list\n", v3);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
        190,
        "remove_port_form_gpio_map",
        25,
        199,
        20,
        v5);
      return (int *)remove_c_map(a2, (int)&v3);
    }
  }
  return result;
}
