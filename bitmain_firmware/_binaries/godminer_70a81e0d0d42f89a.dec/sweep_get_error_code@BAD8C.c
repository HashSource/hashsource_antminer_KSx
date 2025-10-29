int __fastcall sweep_get_error_code(_DWORD *a1)
{
  char *v2; // r4
  int v3; // r5
  char *v4; // r6
  time_t v5; // r2
  int v6; // r6
  char *v7; // r5
  time_t v8; // r2
  int v9; // r6
  char *v10; // r5
  time_t v11; // r2
  int v12; // r5
  time_t v13; // r2
  struct timeval v15; // [sp+0h] [bp-88h] BYREF
  char s[128]; // [sp+8h] [bp-80h] BYREF

  if ( !byte_2EBD88 )
    sub_B94E4();
  miner_6060info_errorcode_init();
  pthread_mutex_lock(&miner_6060info_lock);
  v15.tv_sec = 0;
  v15.tv_usec = 0;
  gettimeofday(&v15, 0);
  if ( byte_2EB9A8[0] )
  {
    strcpy(s, "P:1");
    set_json_info_by_errorcode_and_time(a1, s, dword_2EB9AC);
  }
  v15.tv_sec = 0;
  v15.tv_usec = 0;
  gettimeofday(&v15, 0);
  if ( byte_2EB9B8 )
  {
    strcpy(s, "P:2");
    set_json_info_by_errorcode_and_time(a1, s, dword_2EB9BC);
  }
  v15.tv_sec = 0;
  v15.tv_usec = 0;
  gettimeofday(&v15, 0);
  if ( byte_2EB9C8 )
  {
    strcpy(s, "J:6");
    set_json_info_by_errorcode_and_time(a1, s, dword_2EB9CC);
  }
  v2 = byte_2EB9A8;
  v3 = 0;
  v4 = byte_2EB9A8;
  do
  {
    while ( 1 )
    {
      v15.tv_sec = 0;
      v15.tv_usec = 0;
      gettimeofday(&v15, 0);
      if ( v4[48] )
        break;
      ++v3;
      v4 += 16;
      if ( v3 == 8 )
        goto LABEL_13;
    }
    snprintf(s, 0x80u, "F%d:1", v3++);
    v5 = *((_DWORD *)v4 + 13);
    v4 += 16;
    set_json_info_by_errorcode_and_time(a1, s, v5);
  }
  while ( v3 != 8 );
LABEL_13:
  v6 = 0;
  v7 = byte_2EB9A8;
  do
  {
    while ( 1 )
    {
      v15.tv_sec = 0;
      v15.tv_usec = 0;
      gettimeofday(&v15, 0);
      if ( v7[176] )
        break;
      ++v6;
      v7 += 16;
      if ( v6 == 16 )
        goto LABEL_17;
    }
    snprintf(s, 0x80u, "R%d:1", v6++);
    v8 = *((_DWORD *)v7 + 45);
    v7 += 16;
    set_json_info_by_errorcode_and_time(a1, s, v8);
  }
  while ( v6 != 16 );
LABEL_17:
  v9 = 0;
  v10 = byte_2EB9A8;
  do
  {
    while ( 1 )
    {
      v15.tv_sec = 0;
      v15.tv_usec = 0;
      gettimeofday(&v15, 0);
      if ( v10[432] )
        break;
      ++v9;
      v10 += 16;
      if ( v9 == 16 )
        goto LABEL_21;
    }
    snprintf(s, 0x80u, "J%d:1", v9++);
    v11 = *((_DWORD *)v10 + 109);
    v10 += 16;
    set_json_info_by_errorcode_and_time(a1, s, v11);
  }
  while ( v9 != 16 );
LABEL_21:
  v12 = 0;
  do
  {
    while ( 1 )
    {
      v15.tv_sec = 0;
      v15.tv_usec = 0;
      gettimeofday(&v15, 0);
      if ( v2[688] )
        break;
      ++v12;
      v2 += 16;
      if ( v12 == 16 )
        goto LABEL_25;
    }
    snprintf(s, 0x80u, "J%d:2", v12++);
    v13 = *((_DWORD *)v2 + 173);
    v2 += 16;
    set_json_info_by_errorcode_and_time(a1, s, v13);
  }
  while ( v12 != 16 );
LABEL_25:
  v15.tv_sec = 0;
  v15.tv_usec = 0;
  gettimeofday(&v15, 0);
  if ( byte_2EBD58 )
  {
    strcpy(s, "N:4");
    set_json_info_by_errorcode_and_time(a1, s, dword_2EBD5C);
  }
  v15.tv_sec = 0;
  v15.tv_usec = 0;
  gettimeofday(&v15, 0);
  if ( byte_2EBD68 )
  {
    strcpy(s, "M:1");
    set_json_info_by_errorcode_and_time(a1, s, dword_2EBD6C);
  }
  v15.tv_sec = 0;
  v15.tv_usec = 0;
  gettimeofday(&v15, 0);
  if ( byte_2EBD78 )
  {
    strcpy(s, "J:8");
    set_json_info_by_errorcode_and_time(a1, s, dword_2EBD7C);
  }
  return pthread_mutex_unlock(&miner_6060info_lock);
}
