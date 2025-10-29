int miner_6060info_errorcode_init()
{
  _DWORD *file; // r0
  char v2[256]; // [sp+4h] [bp-100h] BYREF

  pthread_mutex_lock(&stru_2EBD8C);
  if ( byte_2EBDBC || access("/etc/errorcode.json", 0) )
  {
    pthread_mutex_unlock(&stru_2EBD8C);
    return 0;
  }
  else
  {
    file = (_DWORD *)json_load_file("/etc/errorcode.json", 0, v2);
    dword_2EBDC0 = (int)file;
    if ( file && !*file )
    {
      byte_2EBDBC = 1;
      pthread_mutex_unlock(&stru_2EBD8C);
      return 1;
    }
    else
    {
      return sub_B9588((int)file);
    }
  }
}
