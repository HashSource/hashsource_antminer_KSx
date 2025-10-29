int miner_6060info_errorcode_init()
{
  _DWORD *file; // r0
  char v2[256]; // [sp+4h] [bp-100h] BYREF

  pthread_mutex_lock(&stru_2EA69C);
  if ( byte_2EAAAC || access("/etc/errorcode.json", 0) )
  {
    pthread_mutex_unlock(&stru_2EA69C);
    return 0;
  }
  else
  {
    file = (_DWORD *)json_load_file("/etc/errorcode.json", 0, v2);
    dword_2EAAB0 = (int)file;
    if ( file && !*file )
    {
      byte_2EAAAC = 1;
      pthread_mutex_unlock(&stru_2EA69C);
      return 1;
    }
    else
    {
      return sub_B8A98((int)file);
    }
  }
}
