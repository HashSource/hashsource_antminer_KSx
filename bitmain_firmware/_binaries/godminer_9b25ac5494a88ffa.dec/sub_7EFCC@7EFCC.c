int __fastcall sub_7EFCC(int a1, int a2, const char *a3)
{
  int all_created_runtime; // r0
  bool v6; // zf
  int v7; // r9
  signed int v8; // r0
  signed int v9; // r5
  __int64 *v10; // r0
  __int16 v11; // r2
  _DWORD *v12; // r9
  int v13; // r11
  int v14; // r0
  int v15; // t1
  int v16; // r5
  int v17; // r7
  unsigned int *v18; // r10
  char *v19; // r6
  int v20; // r0
  int appended; // r0
  unsigned int *v22; // r4
  int v23; // r5
  int v24; // r12
  int v25; // r1
  unsigned int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v31; // r0
  int v32; // [sp+4h] [bp-1038h]
  _BYTE v34[4]; // [sp+1Ch] [bp-1020h] BYREF
  int v35; // [sp+20h] [bp-101Ch] BYREF
  int v36; // [sp+24h] [bp-1018h] BYREF
  __int64 v37; // [sp+28h] [bp-1014h] BYREF
  __int64 v38; // [sp+30h] [bp-100Ch]
  char s[4100]; // [sp+38h] [bp-1004h] BYREF

  v35 = 0;
  all_created_runtime = get_all_created_runtime(&v35);
  if ( v35 <= 0 )
  {
    sub_7EAAC(a1, 0, 10, (int)"No ASCs");
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
      v31 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v31);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/api_new.c",
        158,
        "get_corereg_old",
        15,
        2201,
        100,
        s);
      return -2147483646;
    }
    else
    {
      v7 = all_created_runtime;
      sub_7EAAC(a1, 1, 77, *(_DWORD *)(a2 + 8));
      v8 = strlen(a3);
      v9 = v8;
      if ( *a3 && ((v8 - 2) & 0xFFFFFFFD) == 0 && hex2bin(v34, a3, v8 >> 1) )
      {
        v10 = &v37;
        v11 = -1;
        v37 = 0;
        v38 = 0xFF00000000LL;
        if ( v9 == 4 )
          v11 = v34[1];
        WORD1(v38) = v34[0];
        if ( v9 == 4 )
          WORD1(v38) = v11 | (v34[0] << 8);
        LOBYTE(v38) = 1;
        if ( v35 > 0 )
        {
          v12 = (_DWORD *)(v7 - 4);
          v13 = 0;
          do
          {
            v14 = json_array(v10);
            v15 = v12[1];
            ++v12;
            v16 = *(_DWORD *)(v15 + 332) * *(_DWORD *)(v15 + 328);
            v17 = v14;
            v18 = (unsigned int *)malloc(12 * v16);
            v19 = (char *)malloc(0x40u);
            (*(void (__fastcall **)(int, __int64 *, int, unsigned int *, int *, int, int, _DWORD))(v15 + 292))(
              v15,
              &v37,
              v16,
              v18,
              &v36,
              v32,
              2000,
              0);
            snprintf(
              v19,
              0x40u,
              "=========================================chain %d detect %d cores",
              *(_DWORD *)(*v12 + 244),
              v36);
            v20 = json_string(v19);
            appended = json_array_append_new(v17, v20);
            if ( v36 > 0 )
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
                v27 = json_string(v19);
                appended = json_array_append_new(v17, v27);
              }
              while ( v36 > v23 );
            }
            v28 = dev_ctrl(appended);
            ++v13;
            v29 = (*(int (__fastcall **)(_DWORD))(v28 + 48))(*(_DWORD *)(*v12 + 240));
            sprintf(s, "chain%d", v29);
            json_object_set_new(a1, s, v17);
            free(v19);
            free(v18);
          }
          while ( v35 > v13 );
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
