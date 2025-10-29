int __fastcall sub_7F3BC(int a1, int a2, const char *a3)
{
  int all_created_runtime; // r0
  int v6; // r9
  int v7; // r10
  int v8; // r0
  _DWORD *v9; // r10
  int v10; // r0
  int v11; // t1
  int v12; // r5
  int v13; // r7
  unsigned int *v14; // r11
  char *v15; // r6
  int v16; // r0
  int appended; // r0
  unsigned int *v18; // r4
  int v19; // r5
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v24; // r0
  int v25; // [sp+4h] [bp-1038h]
  unsigned __int8 v27; // [sp+1Fh] [bp-101Dh] BYREF
  int v28; // [sp+20h] [bp-101Ch] BYREF
  int v29; // [sp+24h] [bp-1018h] BYREF
  __int64 v30; // [sp+28h] [bp-1014h] BYREF
  __int64 v31; // [sp+30h] [bp-100Ch]
  char s[4100]; // [sp+38h] [bp-1004h] BYREF

  v28 = 0;
  all_created_runtime = get_all_created_runtime(&v28);
  if ( v28 <= 0 )
  {
    sub_7EB94(a1, 0, 10, (int)"No ASCs");
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
      v24 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/api_new.c",
        158,
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
      sub_7EB94(a1, 1, 75, *(_DWORD *)(a2 + 8));
      if ( a3 && *a3 && strlen(a3) == 2 && (v8 = hex2bin(&v27, a3, 1)) != 0 )
      {
        v30 = 0;
        v31 = 1;
        *(_DWORD *)((char *)&v31 + 2) = v27;
        if ( v28 > 0 )
        {
          v9 = (_DWORD *)(v7 - 4);
          do
          {
            v10 = json_array(v8);
            v11 = v9[1];
            ++v9;
            v12 = *(_DWORD *)(v11 + 332);
            v13 = v10;
            v14 = (unsigned int *)malloc(12 * v12);
            v15 = (char *)malloc(0x40u);
            (*(void (__fastcall **)(int, __int64 *, int, unsigned int *, int *, int, int, _DWORD))(v11 + 284))(
              v11,
              &v30,
              v12,
              v14,
              &v29,
              v25,
              2000,
              0);
            snprintf(
              v15,
              0x40u,
              "=========================================chain %d detect %d chips",
              *(_DWORD *)(*v9 + 248),
              v29);
            v16 = json_string(v15);
            appended = json_array_append_new(v13, v16);
            if ( v29 > 0 )
            {
              v18 = v14;
              v19 = 0;
              do
              {
                ++v19;
                snprintf(
                  v15,
                  0x40u,
                  "chip %02x reg %02x data %08x",
                  *((unsigned __int8 *)v18 + 4),
                  *((unsigned __int16 *)v18 + 3),
                  bswap32(*v18));
                v20 = json_string(v15);
                v18 += 3;
                appended = json_array_append_new(v13, v20);
              }
              while ( v29 > v19 );
            }
            v21 = dev_ctrl(appended);
            ++v6;
            v22 = (*(int (__fastcall **)(_DWORD))(v21 + 48))(*(_DWORD *)(*v9 + 244));
            sprintf(s, "chain%d", v22);
            json_object_set_new(a1, s, v13);
            free(v15);
            free(v14);
          }
          while ( v28 > v6 );
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
