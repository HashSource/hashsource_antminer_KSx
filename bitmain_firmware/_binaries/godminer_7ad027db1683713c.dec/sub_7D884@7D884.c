int __fastcall sub_7D884(_DWORD *a1, int a2, char *a3)
{
  char *all_created_runtime; // r0
  bool v7; // zf
  char *v8; // r9
  signed int v9; // r0
  signed int v10; // r5
  __int16 v11; // r2
  char *v12; // r9
  int v13; // r11
  _QWORD *v14; // r0
  int v15; // t1
  int v16; // r5
  _DWORD *v17; // r7
  unsigned int *v18; // r10
  char *v19; // r6
  char *v20; // r0
  int appended; // r0
  unsigned int *v22; // r4
  int v23; // r5
  int v24; // r12
  int v25; // r1
  unsigned int v26; // r0
  char *v27; // r0
  int v28; // r0
  int v29; // r0
  int v31; // [sp+4h] [bp-1038h]
  _BYTE v33[4]; // [sp+1Ch] [bp-1020h] BYREF
  int v34; // [sp+20h] [bp-101Ch] BYREF
  int v35; // [sp+24h] [bp-1018h] BYREF
  __int64 v36; // [sp+28h] [bp-1014h] BYREF
  __int64 v37; // [sp+30h] [bp-100Ch]
  char s[4100]; // [sp+38h] [bp-1004h] BYREF

  v34 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v34);
  v7 = a1 == 0;
  if ( a1 )
    v7 = a2 == 0;
  if ( v7 )
  {
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "%s: input bad api param", "get_corereg_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_corereg_old",
      15,
      2060,
      100,
      s);
    return -2147483646;
  }
  else
  {
    v8 = all_created_runtime;
    sub_7D134(a1, 1, 77, *(_DWORD *)(a2 + 8));
    v9 = strlen(a3);
    v10 = v9;
    if ( *a3 && ((v9 - 2) & 0xFFFFFFFD) == 0 && hex2bin((int)v33, (unsigned __int8 *)a3, v9 >> 1) )
    {
      v11 = -1;
      v36 = 0;
      v37 = 0xFF00000000LL;
      if ( v10 == 4 )
        v11 = v33[1];
      WORD1(v37) = v33[0];
      if ( v10 == 4 )
        WORD1(v37) = v11 | (v33[0] << 8);
      LOBYTE(v37) = 1;
      if ( v34 > 0 )
      {
        v12 = v8 - 4;
        v13 = 0;
        do
        {
          v14 = json_array();
          v15 = *((_DWORD *)v12 + 1);
          v12 += 4;
          v16 = *(_DWORD *)(v15 + 316) * *(_DWORD *)(v15 + 312);
          v17 = v14;
          v18 = (unsigned int *)malloc(12 * v16);
          v19 = (char *)malloc(0x40u);
          (*(void (__fastcall **)(int, __int64 *, int, unsigned int *, int *, int, int, _DWORD))(v15 + 276))(
            v15,
            &v36,
            v16,
            v18,
            &v35,
            v31,
            2000,
            0);
          snprintf(
            v19,
            0x40u,
            "=========================================chain %d detect %d cores",
            *(_DWORD *)(*(_DWORD *)v12 + 232),
            v35);
          v20 = BUFX_strdup(v19);
          appended = json_array_append_new(v17, v20);
          if ( v35 > 0 )
          {
            v22 = v18;
            v23 = 0;
            do
            {
              v24 = *((unsigned __int8 *)v22 + 8);
              v25 = *((unsigned __int16 *)v22 + 3);
              ++v23;
              v26 = *v22;
              v22 += 3;
              snprintf(
                v19,
                0x40u,
                "chip %02x core %02x reg %04x data %08x",
                *((unsigned __int8 *)v22 - 8),
                v24,
                v25,
                bswap32(v26));
              v27 = BUFX_strdup(v19);
              appended = json_array_append_new(v17, v27);
            }
            while ( v35 > v23 );
          }
          v28 = dev_ctrl(appended);
          ++v13;
          v29 = (*(int (__fastcall **)(_DWORD))(v28 + 48))(*(_DWORD *)(*(_DWORD *)v12 + 228));
          sprintf(s, "chain%d", v29);
          json_object_set_new(a1, s, v17);
          free(v19);
          free(v18);
        }
        while ( v34 > v13 );
      }
      return 0;
    }
    else
    {
      return -2147483646;
    }
  }
}
