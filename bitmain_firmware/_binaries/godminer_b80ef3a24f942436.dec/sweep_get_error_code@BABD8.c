int __fastcall sweep_get_error_code(_DWORD *a1)
{
  int v2; // r9
  int v3; // r8
  int v4; // r7
  int v5; // r6
  int v6; // r5
  int v7; // r11
  _BYTE *v8; // r8
  const char *v9; // r10
  int v10; // r7
  _BYTE *v11; // r9
  time_t v12; // r2
  _BYTE *v13; // r9
  int v14; // r7
  time_t v15; // r2
  const char *v16; // r10
  _BYTE *v17; // r7
  int v18; // r9
  time_t v19; // r2
  int v20; // r7
  time_t v21; // r2
  char *v23; // r1
  time_t v24; // [sp+0h] [bp-30Ch]
  time_t v25; // [sp+4h] [bp-308h]
  time_t v26; // [sp+8h] [bp-304h]
  time_t v27; // [sp+Ch] [bp-300h]
  time_t v28; // [sp+10h] [bp-2FCh]
  time_t v29; // [sp+14h] [bp-2F8h]
  char s[256]; // [sp+18h] [bp-2F4h] BYREF
  _BYTE dest[500]; // [sp+118h] [bp-1F4h] BYREF

  memcpy(dest, &byte_2F3ED0, 0x1F0u);
  v2 = (unsigned __int8)byte_2F3ED0;
  v3 = (unsigned __int8)byte_2F3ED8;
  v26 = dword_2F3ED4;
  v4 = (unsigned __int8)byte_2F3EE0;
  v5 = (unsigned __int8)byte_2F40A8;
  v27 = dword_2F3EDC;
  v6 = (unsigned __int8)byte_2F40B0;
  v7 = (unsigned __int8)byte_2F40B8;
  v25 = dword_2F3EE4;
  v28 = dword_2F40AC;
  v29 = dword_2F40B4;
  v24 = dword_2F40BC;
  pthread_mutex_lock(&miner_6060info_lock);
  if ( v2 )
  {
    LOWORD(v23) = 20940;
    HIWORD(v23) = (unsigned int)&loc_271A2C >> 16;
    set_json_info_by_errorcode_and_time(a1, v23, v26);
  }
  if ( v3 )
    set_json_info_by_errorcode_and_time(a1, "P:2", v27);
  if ( v4 )
    set_json_info_by_errorcode_and_time(a1, "J:6", v25);
  v8 = dest;
  LOWORD(v9) = 20944;
  v10 = 0;
  v11 = dest;
  do
  {
    while ( !v11[24] )
    {
      ++v10;
      v11 += 8;
      if ( v10 == 8 )
        goto LABEL_11;
    }
    HIWORD(v9) = (unsigned int)&loc_271A30 >> 16;
    snprintf(s, 0x100u, v9, v10++, v24);
    v12 = *((_DWORD *)v11 + 7);
    v11 += 8;
    set_json_info_by_errorcode_and_time(a1, s, v12);
  }
  while ( v10 != 8 );
LABEL_11:
  v13 = dest;
  v14 = 0;
  do
  {
    while ( !v13[88] )
    {
      ++v14;
      v13 += 8;
      if ( v14 == 16 )
        goto LABEL_15;
    }
    snprintf(s, 0x100u, "R%d:1", v14++);
    v15 = *((_DWORD *)v13 + 23);
    v13 += 8;
    set_json_info_by_errorcode_and_time(a1, s, v15);
  }
  while ( v14 != 16 );
LABEL_15:
  LOWORD(v16) = 20952;
  v17 = dest;
  v18 = 0;
  do
  {
    while ( !v17[216] )
    {
      ++v18;
      v17 += 8;
      if ( v18 == 16 )
        goto LABEL_19;
    }
    HIWORD(v16) = (unsigned int)&loc_271A38 >> 16;
    snprintf(s, 0x100u, v16, v18++);
    v19 = *((_DWORD *)v17 + 55);
    v17 += 8;
    set_json_info_by_errorcode_and_time(a1, s, v19);
  }
  while ( v18 != 16 );
LABEL_19:
  v20 = 0;
  do
  {
    while ( !v8[344] )
    {
      ++v20;
      v8 += 8;
      if ( v20 == 16 )
        goto LABEL_23;
    }
    snprintf(s, 0x100u, "J%d:2", v20++);
    v21 = *((_DWORD *)v8 + 87);
    v8 += 8;
    set_json_info_by_errorcode_and_time(a1, s, v21);
  }
  while ( v20 != 16 );
LABEL_23:
  if ( v5 )
    set_json_info_by_errorcode_and_time(a1, "N:4", v28);
  if ( v6 )
    set_json_info_by_errorcode_and_time(a1, "M:1", v29);
  if ( v7 )
    set_json_info_by_errorcode_and_time(a1, "J:8", v24);
  return pthread_mutex_unlock(&miner_6060info_lock);
}
