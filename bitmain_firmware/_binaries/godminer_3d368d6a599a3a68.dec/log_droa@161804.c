int __fastcall log_droa(const char *a1)
{
  int category; // r0

  category = dword_307B68;
  if ( !dword_307B68 )
  {
    category = zlog_get_category("miner_droa");
    dword_307B68 = category;
  }
  return zlog(
           category,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/common/general/log/log.c",
           173,
           "log_droa",
           8,
           110,
           40,
           "%s",
           a1);
}
