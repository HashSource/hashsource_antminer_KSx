void update_droa_log()
{
  double v0; // d0
  FILE *v1; // r0
  FILE *v2; // r4
  int v3; // r5
  int v4; // r5
  char *v5; // r6
  int v6; // r9
  int v7; // r8
  int tm_year; // r5
  int tm_mday; // r10
  int tm_hour; // r11
  double v11; // d9
  int miner_status; // r0
  size_t v13; // r0
  int v14; // r1
  double v15; // r4
  int v16; // r0
  int v17; // r0
  int tm_min; // [sp+28h] [bp-101Ch]
  int tm_sec; // [sp+2Ch] [bp-1018h]
  time_t tv_sec; // [sp+34h] [bp-1010h] BYREF
  struct timeval tv; // [sp+38h] [bp-100Ch] BYREF
  struct tm tp; // [sp+40h] [bp-1004h] BYREF

  v1 = (FILE *)fopen64("/tmp/miner/droa.log", "r+");
  v2 = v1;
  if ( v1 )
  {
    fseek(v1, -2, 2);
    v3 = 0;
    while ( fgetc(v2) != 10 )
    {
      fseek(v2, -2, 1);
      ++v3;
    }
    v4 = ~v3;
    fseek(v2, v4, 2);
    v5 = (char *)calloc(0x200u, 1u);
    fgets(v5, 512, v2);
    if ( strstr(v5, "RTime:") )
    {
      tv.tv_sec = 0;
      tv.tv_usec = 0;
      gettimeofday(&tv, 0);
      tv_sec = tv.tv_sec;
      localtime_r(&tv_sec, &tp);
      fseek(v2, v4, 2);
      v6 = ftell(v2);
      memset(v5, 0, 0x200u);
      tm_sec = tp.tm_sec;
      tm_min = tp.tm_min;
      v7 = tp.tm_mon + 1;
      tm_year = tp.tm_year;
      tm_mday = tp.tm_mday;
      tm_hour = tp.tm_hour;
      get_miner_elapsed_time();
      v11 = g_hash_rate_5s;
      miner_status = get_miner_status();
      sprintf(
        v5,
        "%d-%02d-%02d %02d:%02d:%02d RTime:%f,AR:%f,RStat:%d\n",
        tm_year + 1900,
        v7,
        tm_mday,
        tm_hour,
        tm_min,
        tm_sec,
        v0,
        v11,
        miner_status);
      fprintf(v2, v5);
      fflush(v2);
      fclose(v2);
      v13 = strlen(v5);
      truncate64("/tmp/miner/droa.log", v14, v6 + v13, 0);
    }
    else
    {
      fflush(v2);
      fclose(v2);
      get_miner_elapsed_time();
      v15 = g_hash_rate_5s;
      v16 = get_miner_status();
      snprintf((char *)&tp, 0x1000u, "RTime:%f,AR:%f,RStat:%d", v0, v15, v16);
      log_droa(&tp, 0);
    }
    free(v5);
  }
  else
  {
    V_LOCK(0);
    v17 = logfmt_raw((int)&tp, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/god-miner.c",
      160,
      "update_droa_log",
      15,
      1632,
      40,
      &tp);
  }
}
