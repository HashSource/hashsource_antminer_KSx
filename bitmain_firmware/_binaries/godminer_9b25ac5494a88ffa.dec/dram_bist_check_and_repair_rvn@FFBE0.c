void __fastcall __noreturn dram_bist_check_and_repair_rvn(int a1, int a2, char a3)
{
  int v4; // r0
  int v5; // r5
  _WORD *v6; // r7
  int v7; // r0
  int v8; // r9
  _WORD *v9; // r4
  int v10; // r0
  int v11; // r3
  int v12; // r0
  int v13; // r0
  int v14; // [sp+4h] [bp-1080h]
  int v15; // [sp+10h] [bp-1074h]
  int v16; // [sp+14h] [bp-1070h]
  int v17; // [sp+18h] [bp-106Ch]
  int v18; // [sp+1Ch] [bp-1068h]
  const char *v19; // [sp+20h] [bp-1064h]
  int v20; // [sp+24h] [bp-1060h]
  int v21; // [sp+28h] [bp-105Ch]
  int v22; // [sp+2Ch] [bp-1058h]
  void *dest; // [sp+40h] [bp-1044h]
  int v25; // [sp+4Ch] [bp-1038h] BYREF
  __int64 v26; // [sp+50h] [bp-1034h] BYREF
  __int64 v27; // [sp+58h] [bp-102Ch]
  _DWORD v28[8]; // [sp+60h] [bp-1024h] BYREF
  _BYTE v29[4100]; // [sp+80h] [bp-1004h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v29, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "dram_bist_check_and_repair_rvn",
    30,
    2590,
    40,
    v29);
  dest = malloc(0xCu);
  while ( 1 )
  {
    v5 = 0;
    sleep(0xAu);
    v26 = 0;
    v27 = 6356992;
    v25 = 0;
    BYTE1(v27) = a3;
    v6 = calloc(0xCu, 1u);
    v7 = (*(int (__fastcall **)(int, __int64 *, int, _WORD *, int *, int, int, _DWORD, int, int, int, int, const char *, int, int, int))(a1 + 280))(
           a1,
           &v26,
           1,
           v6,
           &v25,
           v14,
           2000,
           0,
           v15,
           v16,
           v17,
           v18,
           v19,
           v20,
           v21,
           v22);
    v8 = v25;
    if ( v25 > 0 )
    {
      v9 = v6;
      do
      {
        while ( 1 )
        {
          ++v5;
          if ( v9[3] == 97 )
            break;
          v8 = v25;
          v9 += 6;
          if ( v5 >= v25 )
            goto LABEL_7;
        }
        V_LOCK(v7);
        v9 += 6;
        V_INT((int)v28, "chain");
        v20 = *((unsigned __int8 *)v9 - 8);
        v19 = "[Chip status] asic %02x, reg %02x state %08x";
        v21 = (unsigned __int16)*(v9 - 3);
        v22 = *((_DWORD *)v9 - 3);
        v15 = v28[4];
        v16 = v28[5];
        v17 = v28[6];
        v18 = v28[7];
        v10 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v10);
        v7 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
               171,
               "ChipSetting_get_chip_status_rvn_RVN",
               35,
               1307,
               40,
               v29);
        v8 = v25;
      }
      while ( v5 < v25 );
    }
LABEL_7:
    if ( dest )
    {
      if ( v8 >= 1 )
        v11 = 1;
      else
        v11 = v8;
      memcpy(dest, v6, 12 * v11);
    }
    free(v6);
    if ( !v8 )
    {
      V_LOCK(v12);
      v13 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v13);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
        192,
        "dram_bist_check_and_repair_rvn",
        30,
        2646,
        40,
        v29);
    }
  }
}
