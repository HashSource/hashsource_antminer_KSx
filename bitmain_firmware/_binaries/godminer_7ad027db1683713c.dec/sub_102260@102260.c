int sub_102260()
{
  unsigned __int8 v0; // r7
  int v1; // r0
  int v2; // r6
  int v3; // r7
  int i; // r6
  int v5; // r8
  FILE *v6; // r10
  char *v7; // r12
  int v8; // t1
  int v9; // r10
  int v10; // r4
  int v11; // r0
  int v12; // r3
  int v14; // r0
  _QWORD v15[4]; // [sp+20h] [bp-1864h] BYREF
  char v16[56]; // [sp+40h] [bp-1844h] BYREF
  __int64 v17; // [sp+78h] [bp-180Ch]
  char s[2048]; // [sp+80h] [bp-1804h] BYREF
  char v19[4100]; // [sp+880h] [bp-1004h] BYREF

  v0 = 0;
  memset(v16, 0, sizeof(v16));
  memset(v15, 0, sizeof(v15));
  v17 = 0;
  while ( v0 < hal_fan_number() )
  {
    do
    {
      memset(v16, 0, sizeof(v16));
      v17 = 0;
      v1 = hal_fan_addr(v0);
      snprintf(v16, 0x40u, "/sys/class/pwm/pwmchip12/pwm%d/capture", v1);
      v2 = fopen64(v16, "r");
      *((_DWORD *)v15 + v0) = v2;
      if ( v2 )
        break;
      snprintf(s, 0x800u, "fail to open %s", v16);
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_fan.c",
        191,
        "fan_thread_function",
        19,
        62,
        100,
        v19);
      usleep((__useconds_t)&unk_2DC6C0);
    }
    while ( dword_2E86B4[0] == 1 );
    ++v0;
    snprintf(s, 0x800u, "%s open successfully", v16);
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_fan.c",
      191,
      "fan_thread_function",
      19,
      67,
      20,
      v19);
  }
  while ( dword_2E86B4[0] )
  {
    v3 = 0;
    for ( i = 0; (unsigned __int8)v3 < hal_fan_number(); i = (unsigned __int8)v3 )
    {
      v5 = i;
      v6 = (FILE *)*((_DWORD *)v15 + i);
      fflush(v6);
      fseek(v6, 0, 0);
      memset(v16, 0, sizeof(v16));
      v17 = 0;
      fread(v16, 1u, 0x40u, v6);
      v7 = v16;
      do
        v8 = (unsigned __int8)*++v7;
      while ( v8 != 32 );
      *v7 = 0;
      v9 = strtol(v16, 0, 10);
      if ( v9 )
      {
        if ( strtol(v16, 0, 10) > 4000000 )
        {
          v14 = strtol(v16, 0, 10);
          dword_2E86B4[v5 + 1] = v14;
        }
        else
        {
          v14 = dword_2E86B4[v5 + 1];
        }
        v9 = 10 * ((unsigned int)(float)(6.0e10 / (float)(unsigned int)(2 * v14)) / 0xA);
      }
      dword_2D0F8C[i] = v9;
      if ( hal_fan_max_speed(i) < v9 )
        dword_2D0F8C[i] = hal_fan_max_speed(i);
      ++v3;
    }
    usleep(0x64u);
  }
  v10 = 0;
  while ( 1 )
  {
    v11 = hal_fan_number();
    v12 = (unsigned __int8)v10++;
    if ( v12 >= v11 )
      break;
    fclose(*((FILE **)v15 + v12));
  }
  strcpy(s, "fan thread exit\n");
  V_LOCK();
  logfmt_raw(v19, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_fan.c",
           191,
           "fan_thread_function",
           19,
           94,
           20,
           v19);
}
