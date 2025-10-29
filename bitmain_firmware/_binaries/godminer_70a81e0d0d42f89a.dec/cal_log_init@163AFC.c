void cal_log_init()
{
  const pthread_attr_t *v0; // r5
  struct tm *v1; // r6
  int v2; // r0
  time_t timer; // [sp+10h] [bp-2008h] BYREF
  pthread_t newthread; // [sp+14h] [bp-2004h] BYREF
  char v5[4072]; // [sp+18h] [bp-2000h] BYREF
  char v6[4096]; // [sp+1018h] [bp-1000h] BYREF

  v0 = (const pthread_attr_t *)(unsigned __int8)byte_30DEF6;
  if ( !byte_30DEF6 )
  {
    time(&timer);
    v1 = localtime(&timer);
    strftime(&byte_30DEF6, 0xFu, "%Y-%m/%d", v1);
    strftime(byte_30DF14, 0xAu, "%H-%M-%S", v1);
    dword_30DED0 = (int)"/var/log";
    dword_30DED4 = (int)"nvdata";
    dword_30DF28 = (int)"cglog_init";
    dword_30DECC = 1;
    sub_163578((int)&dword_30DECC);
    if ( pthread_create(&newthread, v0, (void *(*)(void *))sub_1637A0, &dword_30DECC) )
    {
      strcpy(v5, "Failed to create log thread");
      V_LOCK(*(_DWORD *)" log thread");
      v2 = logfmt_raw((int)v6, 0x1000u);
      V_UNLOCK(v2);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/common/general/log/log.c",
        173,
        "cal_log_init",
        12,
        351,
        120,
        v6);
    }
    pthread_detach(newthread);
  }
}
