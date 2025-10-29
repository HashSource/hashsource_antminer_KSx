int sub_1266F4()
{
  int v0; // r0
  int result; // r0
  int v2; // r0
  int buf; // [sp+10h] [bp-180Ch] BYREF
  char v4; // [sp+14h] [bp-1808h]
  char v5[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v6[4100]; // [sp+818h] [bp-1004h] BYREF

  v4 = 0;
  buf = 7632239;
  if ( write(dword_2E6C88, &buf, 3u) != 3 )
  {
    strcpy(v5, "write out");
    V_LOCK(*(_DWORD *)"write out");
    v0 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v0);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
      200,
      "set_sda_out",
      11,
      233,
      40,
      v6);
  }
  close(dword_2E6C84);
  dword_2E6C84 = -1;
  result = open64("/sys/class/gpio/gpio461/value", 1);
  dword_2E6C84 = result;
  if ( result < 0 )
  {
    strcpy(v5, "open gpio461 failed");
    V_LOCK(*(_DWORD *)"open gpio461 failed");
    v2 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v2);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
               200,
               "set_sda_out",
               11,
               241,
               40,
               v6);
  }
  dword_307764 = 1;
  return result;
}
