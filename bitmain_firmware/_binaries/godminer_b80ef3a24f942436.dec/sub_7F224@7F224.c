int __fastcall sub_7F224(_DWORD *a1, int a2, const char *a3)
{
  char *all_created_runtime; // r0
  int v6; // r9
  char *v7; // r10
  char *v8; // r10
  _QWORD *v9; // r0
  int v10; // t1
  int v11; // r5
  _DWORD *v12; // r7
  unsigned int *v13; // r11
  char *v14; // r6
  char *v15; // r0
  int appended; // r0
  unsigned int *v17; // r4
  int v18; // r5
  char *v19; // r0
  int v20; // r0
  int v21; // r0
  int v23; // r0
  int v24; // [sp+4h] [bp-1038h]
  unsigned __int8 v26; // [sp+1Fh] [bp-101Dh] BYREF
  int v27; // [sp+20h] [bp-101Ch] BYREF
  int v28; // [sp+24h] [bp-1018h] BYREF
  __int64 v29; // [sp+28h] [bp-1014h] BYREF
  __int64 v30; // [sp+30h] [bp-100Ch]
  char s[4100]; // [sp+38h] [bp-1004h] BYREF

  v27 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v27);
  if ( v27 <= 0 )
  {
    sub_7E9FC((int)a1, 0, 10, (int)"No ASCs");
    return -2147483647;
  }
  else
  {
    v6 = a1 == 0;
    if ( !a2 )
      v6 = 1;
    if ( v6 )
    {
      V_LOCK(all_created_runtime);
      v23 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v23);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/api_new.c",
        153,
        "get_chipreg_old",
        15,
        2067,
        100,
        s);
      return -2147483646;
    }
    else
    {
      v7 = all_created_runtime;
      sub_7E9FC((int)a1, 1, 75, *(_DWORD *)(a2 + 8));
      if ( a3 && *a3 && strlen(a3) == 2 && hex2bin(&v26, a3, 1) )
      {
        v29 = 0;
        v30 = 1;
        *(_DWORD *)((char *)&v30 + 2) = v26;
        if ( v27 > 0 )
        {
          v8 = v7 - 4;
          do
          {
            v9 = json_array();
            v10 = *((_DWORD *)v8 + 1);
            v8 += 4;
            v11 = *(_DWORD *)(v10 + 336);
            v12 = v9;
            v13 = (unsigned int *)malloc(12 * v11);
            v14 = (char *)malloc(0x40u);
            (*(void (__fastcall **)(int, __int64 *, int, unsigned int *, int *, int, int, _DWORD))(v10 + 284))(
              v10,
              &v29,
              v11,
              v13,
              &v28,
              v24,
              2000,
              0);
            snprintf(
              v14,
              0x40u,
              "=========================================chain %d detect %d chips",
              *(_DWORD *)(*(_DWORD *)v8 + 248),
              v28);
            v15 = BUFX_strdup(v14);
            appended = json_array_append_new(v12, v15);
            if ( v28 > 0 )
            {
              v17 = v13;
              v18 = 0;
              do
              {
                ++v18;
                snprintf(
                  v14,
                  0x40u,
                  "chip %02x reg %02x data %08x",
                  *((unsigned __int8 *)v17 + 4),
                  *((unsigned __int16 *)v17 + 3),
                  bswap32(*v17));
                v19 = BUFX_strdup(v14);
                v17 += 3;
                appended = json_array_append_new(v12, v19);
              }
              while ( v28 > v18 );
            }
            v20 = dev_ctrl(appended);
            ++v6;
            v21 = (*(int (__fastcall **)(_DWORD))(v20 + 60))(*(_DWORD *)(*(_DWORD *)v8 + 240));
            sprintf(s, "chain%d", v21);
            json_object_set_new(a1, s, v12);
            free(v14);
            free(v13);
          }
          while ( v27 > v6 );
        }
        return 0;
      }
      else
      {
        return -2147483646;
      }
    }
  }
}
