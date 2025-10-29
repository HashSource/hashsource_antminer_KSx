int __fastcall sweep_get_error_code(_DWORD *a1)
{
  int v2; // r9
  int v3; // r8
  int v4; // r7
  int v5; // r6
  int v6; // r5
  int v7; // r11
  _BYTE *v8; // r8
  int v9; // r7
  _BYTE *v10; // r9
  time_t v11; // r2
  _BYTE *v12; // r9
  int v13; // r7
  time_t v14; // r2
  _BYTE *v15; // r7
  int v16; // r9
  time_t v17; // r2
  int v18; // r7
  time_t v19; // r2
  time_t v21; // [sp+0h] [bp-30Ch]
  time_t v22; // [sp+4h] [bp-308h]
  time_t v23; // [sp+8h] [bp-304h]
  time_t v24; // [sp+Ch] [bp-300h]
  time_t v25; // [sp+10h] [bp-2FCh]
  time_t v26; // [sp+14h] [bp-2F8h]
  char s[256]; // [sp+18h] [bp-2F4h] BYREF
  _BYTE dest[500]; // [sp+118h] [bp-1F4h] BYREF

  memcpy(dest, &byte_2E96A4, 0x1F0u);
  v2 = (unsigned __int8)byte_2E96A4;
  v3 = (unsigned __int8)byte_2E96AC;
  v23 = dword_2E96A8;
  v4 = (unsigned __int8)byte_2E96B4;
  v5 = (unsigned __int8)byte_2E987C;
  v24 = dword_2E96B0;
  v6 = (unsigned __int8)byte_2E9884;
  v7 = (unsigned __int8)byte_2E988C;
  v22 = dword_2E96B8;
  v25 = dword_2E9880;
  v26 = dword_2E9888;
  v21 = dword_2E9890;
  pthread_mutex_lock(&miner_6060info_lock);
  if ( v2 )
    set_json_info_by_errorcode_and_time(a1, "P:1", v23);
  if ( v3 )
    set_json_info_by_errorcode_and_time(a1, "P:2", v24);
  if ( v4 )
    set_json_info_by_errorcode_and_time(a1, "J:6", v22);
  v8 = dest;
  v9 = 0;
  v10 = dest;
  do
  {
    while ( !v10[24] )
    {
      ++v9;
      v10 += 8;
      if ( v9 == 8 )
        goto LABEL_11;
    }
    snprintf(s, 0x100u, "F%d:1", v9++);
    v11 = *((_DWORD *)v10 + 7);
    v10 += 8;
    set_json_info_by_errorcode_and_time(a1, s, v11);
  }
  while ( v9 != 8 );
LABEL_11:
  v12 = dest;
  v13 = 0;
  do
  {
    while ( !v12[88] )
    {
      ++v13;
      v12 += 8;
      if ( v13 == 16 )
        goto LABEL_15;
    }
    snprintf(s, 0x100u, "R%d:1", v13++);
    v14 = *((_DWORD *)v12 + 23);
    v12 += 8;
    set_json_info_by_errorcode_and_time(a1, s, v14);
  }
  while ( v13 != 16 );
LABEL_15:
  v15 = dest;
  v16 = 0;
  do
  {
    while ( !v15[216] )
    {
      ++v16;
      v15 += 8;
      if ( v16 == 16 )
        goto LABEL_19;
    }
    snprintf(s, 0x100u, "J%d:1", v16++);
    v17 = *((_DWORD *)v15 + 55);
    v15 += 8;
    set_json_info_by_errorcode_and_time(a1, s, v17);
  }
  while ( v16 != 16 );
LABEL_19:
  v18 = 0;
  do
  {
    while ( !v8[344] )
    {
      ++v18;
      v8 += 8;
      if ( v18 == 16 )
        goto LABEL_23;
    }
    snprintf(s, 0x100u, "J%d:2", v18++);
    v19 = *((_DWORD *)v8 + 87);
    v8 += 8;
    set_json_info_by_errorcode_and_time(a1, s, v19);
  }
  while ( v18 != 16 );
LABEL_23:
  if ( v5 )
    set_json_info_by_errorcode_and_time(a1, "N:4", v25);
  if ( v6 )
    set_json_info_by_errorcode_and_time(a1, "M:1", v26);
  if ( v7 )
    set_json_info_by_errorcode_and_time(a1, "J:8", v21);
  return pthread_mutex_unlock(&miner_6060info_lock);
}
