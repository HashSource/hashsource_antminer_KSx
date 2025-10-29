int sub_115C4C()
{
  unsigned __int8 v0; // r7
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r7
  int i; // r6
  int v9; // r8
  FILE *v10; // r10
  char *v11; // r12
  int v12; // t1
  int v13; // r10
  int v14; // r4
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int v19; // r0
  _QWORD v20[4]; // [sp+20h] [bp-1864h] BYREF
  char v21[56]; // [sp+40h] [bp-1844h] BYREF
  __int64 v22; // [sp+78h] [bp-180Ch]
  char s[2048]; // [sp+80h] [bp-1804h] BYREF
  _BYTE v24[4100]; // [sp+880h] [bp-1004h] BYREF

  v0 = 0;
  memset(v21, 0, sizeof(v21));
  memset(v20, 0, sizeof(v20));
  v22 = 0;
  while ( v0 < hal_fan_number() )
  {
    do
    {
      memset(v21, 0, sizeof(v21));
      v22 = 0;
      v3 = hal_fan_addr(v0);
      snprintf(v21, 0x40u, "/sys/class/pwm/pwmchip12/pwm%d/capture", v3);
      v4 = fopen64(v21, "r");
      *((_DWORD *)v20 + v0) = v4;
      if ( v4 )
        break;
      v5 = snprintf(s, 0x800u, "fail to open %s", v21);
      V_LOCK(v5);
      v6 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_fan.c",
        191,
        "fan_thread_function",
        19,
        62,
        100,
        v24);
      usleep(0x2DC6C0u);
    }
    while ( dword_31136C[0] == 1 );
    ++v0;
    v1 = snprintf(s, 0x800u, "%s open successfully", v21);
    V_LOCK(v1);
    v2 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_fan.c",
      191,
      "fan_thread_function",
      19,
      67,
      20,
      v24);
  }
  while ( dword_31136C[0] )
  {
    v7 = 0;
    for ( i = 0; (unsigned __int8)v7 < hal_fan_number(); i = (unsigned __int8)v7 )
    {
      v9 = i;
      v10 = (FILE *)*((_DWORD *)v20 + i);
      fflush(v10);
      fseek(v10, 0, 0);
      memset(v21, 0, sizeof(v21));
      v22 = 0;
      fread(v21, 1u, 0x40u, v10);
      v11 = v21;
      do
        v12 = (unsigned __int8)*++v11;
      while ( v12 != 32 );
      *v11 = 0;
      v13 = strtol(v21, 0, 10);
      if ( v13 )
      {
        if ( strtol(v21, 0, 10) > 4000000 )
        {
          v19 = strtol(v21, 0, 10);
          dword_31136C[v9 + 1] = v19;
        }
        else
        {
          v19 = dword_31136C[v9 + 1];
        }
        v13 = 10 * ((unsigned int)(float)(6.0e10 / (float)(unsigned int)(2 * v19)) / 0xA);
      }
      dword_2F1750[i] = v13;
      if ( hal_fan_max_speed(i) < v13 )
        dword_2F1750[i] = hal_fan_max_speed(i);
      ++v7;
    }
    usleep(0x64u);
  }
  v14 = 0;
  while ( 1 )
  {
    v15 = hal_fan_number();
    v16 = (unsigned __int8)v14++;
    if ( v16 >= v15 )
      break;
    fclose(*((FILE **)v20 + v16));
  }
  strcpy(s, "fan thread exit\n");
  V_LOCK(*(_DWORD *)"fan thread exit\n");
  v17 = logfmt_raw((int)v24, 0x1000u);
  V_UNLOCK(v17);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_fan.c",
           191,
           "fan_thread_function",
           19,
           94,
           20,
           v24);
}
