int miner_6060info_errorcode_init()
{
  _DWORD *file; // r0
  char v2[256]; // [sp+4h] [bp-100h] BYREF

  pthread_mutex_lock(&stru_2E8680);
  if ( byte_2E8A90 || access("/etc/errorcode.json", 0) )
  {
    pthread_mutex_unlock(&stru_2E8680);
    return 0;
  }
  else
  {
    file = (_DWORD *)json_load_file("/etc/errorcode.json", 0, v2);
    dword_2E8A94 = (int)file;
    if ( file && !*file )
    {
      byte_2E8A90 = 1;
      pthread_mutex_unlock(&stru_2E8680);
      return 1;
    }
    else
    {
      return sub_B830C((int)file);
    }
  }
}
