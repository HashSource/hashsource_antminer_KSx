int sub_103350()
{
  unsigned __int8 v0; // r7
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r7
  int i; // r6
  int v10; // r8
  FILE *v11; // r10
  char *v12; // r12
  int v13; // t1
  int v14; // r10
  int v15; // r4
  int v16; // r0
  int v17; // r3
  int v18; // r0
  int v20; // r0
  _QWORD v21[4]; // [sp+20h] [bp-1864h] BYREF
  char v22[56]; // [sp+40h] [bp-1844h] BYREF
  __int64 v23; // [sp+78h] [bp-180Ch]
  char s[2048]; // [sp+80h] [bp-1804h] BYREF
  _BYTE v25[4100]; // [sp+880h] [bp-1004h] BYREF

  v0 = 0;
  memset(v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  v23 = 0;
  while ( 1 )
  {
    v3 = ((int (*)(void))hal_fan_number)();
    if ( v0 >= v3 )
      break;
    do
    {
      memset(v22, 0, sizeof(v22));
      v23 = 0;
      v4 = hal_fan_addr(v0);
      snprintf(v22, 0x40u, "/sys/class/pwm/pwmchip12/pwm%d/capture", v4);
      v5 = fopen64(v22, "r");
      *((_DWORD *)v21 + v0) = v5;
      if ( v5 )
        break;
      v6 = snprintf(s, 0x800u, "fail to open %s", v22);
      V_LOCK(v6);
      v7 = logfmt_raw((int)v25, 0x1000u);
      V_UNLOCK(v7);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_fan.c",
        191,
        "fan_thread_function",
        19,
        62,
        100,
        v25);
      usleep((__useconds_t)&unk_2DC6C0);
    }
    while ( dword_2E9BAC[0] == 1 );
    ++v0;
    v1 = snprintf(s, 0x800u, "%s open successfully", v22);
    V_LOCK(v1);
    v2 = logfmt_raw((int)v25, 0x1000u);
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
      v25);
  }
  for ( ; dword_2E9BAC[0]; v3 = usleep(0x64u) )
  {
    v8 = 0;
    for ( i = 0; (unsigned __int8)v8 < ((int (*)(void))hal_fan_number)(); i = (unsigned __int8)v8 )
    {
      v10 = i;
      v11 = (FILE *)*((_DWORD *)v21 + i);
      fflush(v11);
      fseek(v11, 0, 0);
      memset(v22, 0, sizeof(v22));
      v23 = 0;
      fread(v22, 1u, 0x40u, v11);
      v12 = v22;
      do
        v13 = (unsigned __int8)*++v12;
      while ( v13 != 32 );
      *v12 = 0;
      v14 = strtol(v22, 0, 10);
      if ( v14 )
      {
        if ( strtol(v22, 0, 10) > 4000000 )
        {
          v20 = strtol(v22, 0, 10);
          dword_2E9BAC[v10 + 1] = v20;
        }
        else
        {
          v20 = dword_2E9BAC[v10 + 1];
        }
        v14 = 10 * ((unsigned int)(float)(6.0e10 / (float)(unsigned int)(2 * v20)) / 0xA);
      }
      dword_2D247C[i] = v14;
      if ( hal_fan_max_speed(i) < v14 )
        dword_2D247C[i] = hal_fan_max_speed(i);
      ++v8;
    }
  }
  v15 = 0;
  while ( 1 )
  {
    v16 = hal_fan_number(v3);
    v17 = (unsigned __int8)v15++;
    if ( v17 >= v16 )
      break;
    v3 = fclose(*((FILE **)v21 + v17));
  }
  strcpy(s, "fan thread exit\n");
  V_LOCK(*(_DWORD *)"fan thread exit\n");
  v18 = logfmt_raw((int)v25, 0x1000u);
  V_UNLOCK(v18);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_fan.c",
           191,
           "fan_thread_function",
           19,
           94,
           20,
           v25);
}
