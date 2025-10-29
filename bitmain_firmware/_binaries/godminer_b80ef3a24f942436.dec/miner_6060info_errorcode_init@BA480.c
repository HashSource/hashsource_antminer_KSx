int miner_6060info_errorcode_init()
{
  double *file; // r0
  char v2[256]; // [sp+4h] [bp-100h] BYREF

  pthread_mutex_lock(&stru_2F3EB8);
  if ( byte_2F42C8 || access("/etc/errorcode.json", 0) )
  {
    pthread_mutex_unlock(&stru_2F3EB8);
    return 0;
  }
  else
  {
    file = json_load_file("/etc/errorcode.json", 0, v2);
    dword_2F42CC = (int)file;
    if ( file && !*(_DWORD *)file )
    {
      byte_2F42C8 = 1;
      pthread_mutex_unlock(&stru_2F3EB8);
      return 1;
    }
    else
    {
      return sub_B9788((int)file);
    }
  }
}
