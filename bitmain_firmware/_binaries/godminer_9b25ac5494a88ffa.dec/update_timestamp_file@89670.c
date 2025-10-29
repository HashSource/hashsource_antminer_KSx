int update_timestamp_file()
{
  FILE *v0; // r4
  int v2; // r6
  int v3; // r0
  time_t timer[1024]; // [sp+10h] [bp-1000h] BYREF

  v0 = (FILE *)fopen64("/nvdata/timestamp.data", "w");
  if ( v0 )
  {
    time(timer);
    fprintf(v0, "%ld", timer[0]);
    fflush(v0);
    return fclose(v0);
  }
  else
  {
    V_LOCK(0);
    v2 = *_errno_location();
    strerror(v2);
    v3 = logfmt_raw((int)timer, 0x1000u);
    V_UNLOCK(v3);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/god-miner.c",
             160,
             "update_timestamp_file",
             21,
             1492,
             40,
             timer);
  }
}
