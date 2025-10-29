int __fastcall sweep_get_error_code(_DWORD *a1)
{
  char *v2; // r4
  int v3; // r6
  char *v4; // r5
  time_t v5; // r2
  char *v6; // r6
  int v7; // r5
  time_t v8; // r2
  char *v9; // r6
  int v10; // r5
  time_t v11; // r2
  int v12; // r5
  time_t v13; // r2
  char v15[260]; // [sp+0h] [bp-104h] BYREF

  pthread_mutex_lock(&miner_6060info_lock);
  if ( byte_2EA6B4 )
    set_json_info_by_errorcode_and_time(a1, "P:1", dword_2EA6B8);
  if ( byte_2EA6BC )
    set_json_info_by_errorcode_and_time(a1, "P:2", dword_2EA6C0);
  if ( byte_2EA6C4 )
    set_json_info_by_errorcode_and_time(a1, "J:6", dword_2EA6C8);
  v2 = &byte_2EA6B4;
  v3 = 0;
  v4 = &byte_2EA6B4;
  do
  {
    while ( !v4[24] )
    {
      ++v3;
      v4 += 8;
      if ( v3 == 8 )
        goto LABEL_11;
    }
    snprintf(v15, 0x100u, "F%d:1", v3++);
    v5 = *((_DWORD *)v4 + 7);
    v4 += 8;
    set_json_info_by_errorcode_and_time(a1, v15, v5);
  }
  while ( v3 != 8 );
LABEL_11:
  v6 = &byte_2EA6B4;
  v7 = 0;
  do
  {
    while ( !v6[88] )
    {
      ++v7;
      v6 += 8;
      if ( v7 == 16 )
        goto LABEL_15;
    }
    snprintf(v15, 0x100u, "R%d:1", v7++);
    v8 = *((_DWORD *)v6 + 23);
    v6 += 8;
    set_json_info_by_errorcode_and_time(a1, v15, v8);
  }
  while ( v7 != 16 );
LABEL_15:
  v9 = &byte_2EA6B4;
  v10 = 0;
  do
  {
    while ( !v9[216] )
    {
      ++v10;
      v9 += 8;
      if ( v10 == 16 )
        goto LABEL_19;
    }
    snprintf(v15, 0x100u, "J%d:1", v10++);
    v11 = *((_DWORD *)v9 + 55);
    v9 += 8;
    set_json_info_by_errorcode_and_time(a1, v15, v11);
  }
  while ( v10 != 16 );
LABEL_19:
  v12 = 0;
  do
  {
    while ( !v2[344] )
    {
      ++v12;
      v2 += 8;
      if ( v12 == 16 )
        goto LABEL_23;
    }
    snprintf(v15, 0x100u, "J%d:2", v12++);
    v13 = *((_DWORD *)v2 + 87);
    v2 += 8;
    set_json_info_by_errorcode_and_time(a1, v15, v13);
  }
  while ( v12 != 16 );
LABEL_23:
  if ( byte_2EA88C )
    set_json_info_by_errorcode_and_time(a1, "N:4", dword_2EA890);
  if ( byte_2EA894 )
    set_json_info_by_errorcode_and_time(a1, "M:1", dword_2EA898);
  if ( byte_2EA89C )
    set_json_info_by_errorcode_and_time(a1, "J:8", dword_2EA8A0);
  return pthread_mutex_unlock(&miner_6060info_lock);
}
