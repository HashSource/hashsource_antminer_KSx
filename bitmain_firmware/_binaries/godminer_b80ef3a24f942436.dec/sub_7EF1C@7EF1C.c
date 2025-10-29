int __fastcall sub_7EF1C(_DWORD *a1, int a2, const char *a3)
{
  char *all_created_runtime; // r0
  bool v6; // zf
  char *v7; // r9
  signed int v8; // r0
  signed int v9; // r5
  __int16 v10; // r2
  char *v11; // r9
  int v12; // r11
  _QWORD *v13; // r0
  int v14; // t1
  int v15; // r5
  _DWORD *v16; // r7
  unsigned int *v17; // r10
  char *v18; // r6
  char *v19; // r0
  int appended; // r0
  unsigned int *v21; // r4
  int v22; // r5
  int v23; // r12
  int v24; // r1
  unsigned int v25; // r0
  char *v26; // r0
  int v27; // r0
  int v28; // r0
  int v30; // r0
  int v31; // [sp+4h] [bp-1038h]
  _BYTE v33[4]; // [sp+1Ch] [bp-1020h] BYREF
  int v34; // [sp+20h] [bp-101Ch] BYREF
  int v35; // [sp+24h] [bp-1018h] BYREF
  __int64 v36; // [sp+28h] [bp-1014h] BYREF
  __int64 v37; // [sp+30h] [bp-100Ch]
  char s[4100]; // [sp+38h] [bp-1004h] BYREF

  v34 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v34);
  if ( v34 <= 0 )
  {
    sub_7E9FC((int)a1, 0, 10, (int)"No ASCs");
    return -2147483647;
  }
  else
  {
    v6 = a1 == 0;
    if ( a1 )
      v6 = a2 == 0;
    if ( v6 )
    {
      V_LOCK(all_created_runtime);
      v30 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v30);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/api_new.c",
        153,
        "get_corereg_old",
        15,
        2198,
        100,
        s);
      return -2147483646;
    }
    else
    {
      v7 = all_created_runtime;
      sub_7E9FC((int)a1, 1, 77, *(_DWORD *)(a2 + 8));
      v8 = strlen(a3);
      v9 = v8;
      if ( *a3 && ((v8 - 2) & 0xFFFFFFFD) == 0 && hex2bin(v33, a3, v8 >> 1) )
      {
        v10 = -1;
        v36 = 0;
        v37 = 0xFF00000000LL;
        if ( v9 == 4 )
          v10 = v33[1];
        WORD1(v37) = v33[0];
        if ( v9 == 4 )
          WORD1(v37) = v10 | (v33[0] << 8);
        LOBYTE(v37) = 1;
        if ( v34 > 0 )
        {
          v11 = v7 - 4;
          v12 = 0;
          do
          {
            v13 = json_array();
            v14 = *((_DWORD *)v11 + 1);
            v11 += 4;
            v15 = *(_DWORD *)(v14 + 340) * *(_DWORD *)(v14 + 336);
            v16 = v13;
            v17 = (unsigned int *)malloc(12 * v15);
            v18 = (char *)malloc(0x40u);
            (*(void (__fastcall **)(int, __int64 *, int, unsigned int *, int *, int, int, _DWORD))(v14 + 300))(
              v14,
              &v36,
              v15,
              v17,
              &v35,
              v31,
              2000,
              0);
            snprintf(
              v18,
              0x40u,
              "=========================================chain %d detect %d cores",
              *(_DWORD *)(*(_DWORD *)v11 + 248),
              v35);
            v19 = BUFX_strdup(v18);
            appended = json_array_append_new(v16, v19);
            if ( v35 > 0 )
            {
              v21 = v17;
              v22 = 0;
              do
              {
                v23 = *((unsigned __int8 *)v21 + 8);
                v24 = *((unsigned __int16 *)v21 + 3);
                ++v22;
                v25 = *v21;
                v21 += 3;
                snprintf(
                  v18,
                  0x40u,
                  "chip %02x core %02x reg %04x data %08x",
                  *((unsigned __int8 *)v21 - 8),
                  v23,
                  v24,
                  bswap32(v25));
                v26 = BUFX_strdup(v18);
                appended = json_array_append_new(v16, v26);
              }
              while ( v35 > v22 );
            }
            v27 = dev_ctrl(appended);
            ++v12;
            v28 = (*(int (__fastcall **)(_DWORD))(v27 + 60))(*(_DWORD *)(*(_DWORD *)v11 + 240));
            sprintf(s, "chain%d", v28);
            json_object_set_new(a1, s, v16);
            free(v18);
            free(v17);
          }
          while ( v34 > v12 );
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
