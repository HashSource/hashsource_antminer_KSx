int fan_init()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited[0] )
  {
    dword_2E86B4[0] = 1;
    pthread_create((pthread_t *)&dword_2E86D8, 0, (void *(*)(void *))sub_102260, 0);
    return 0;
  }
  else
  {
    strcpy(v1, "please init platform first!!\n");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_fan.c",
      191,
      "fan_init",
      8,
      101,
      100,
      v2);
    return -1;
  }
}
