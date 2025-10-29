int __fastcall cache_dag_done_check_rvn(int a1, int a2, int a3)
{
  __int16 v3; // r5
  int v5; // r0
  unsigned int v6; // r0
  int v7; // r4
  int v8; // r0
  void *v9; // r0
  _DWORD *v10; // r6
  int v11; // r0
  int v12; // r5
  _DWORD *v13; // r4
  int v14; // r6
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r10
  int v20; // r6
  _DWORD *v21; // r4
  int v22; // r0
  int v23; // r0
  _DWORD *v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r0
  int v29; // r0
  int v30; // r0
  unsigned int *v31; // r4
  int v32; // r0
  int v33; // r0
  int v34; // r3
  int v35; // r0
  int v36; // r0
  int v37; // [sp+4h] [bp-1098h]
  int v38; // [sp+10h] [bp-108Ch]
  int v39; // [sp+14h] [bp-1088h]
  int v40; // [sp+18h] [bp-1084h]
  int v41; // [sp+1Ch] [bp-1080h]
  const char *v42; // [sp+20h] [bp-107Ch]
  int v43; // [sp+24h] [bp-1078h]
  int v44; // [sp+28h] [bp-1074h]
  int v45; // [sp+2Ch] [bp-1070h]
  unsigned int v46; // [sp+30h] [bp-106Ch]
  void *src; // [sp+44h] [bp-1058h]
  int n; // [sp+50h] [bp-104Ch]
  _DWORD *dest; // [sp+54h] [bp-1048h]
  __int16 v52; // [sp+58h] [bp-1044h]
  int v53; // [sp+64h] [bp-1038h] BYREF
  __int64 v54; // [sp+68h] [bp-1034h] BYREF
  __int64 v55; // [sp+70h] [bp-102Ch]
  _DWORD v56[8]; // [sp+78h] [bp-1024h] BYREF
  _BYTE v57[4100]; // [sp+98h] [bp-1004h] BYREF

  v3 = a2;
  V_LOCK(a1);
  v5 = logfmt_raw((int)v57, 0x1000u);
  v52 = v3;
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "cache_dag_done_check_rvn",
    24,
    2656,
    40,
    v57);
  dest = malloc(0x300u);
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        do
        {
LABEL_2:
          v6 = sleep(0xAu);
          v7 = *(_DWORD *)(a1 + 416);
          v53 = 0;
          V_LOCK(v6);
          v7 <<= 6;
          v8 = logfmt_raw((int)v57, 0x1000u);
          V_UNLOCK(v8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
            171,
            "ChipSetting_get_cache_done_status_rvn_RVN",
            41,
            1505,
            40,
            v57);
          v54 = 0;
          v55 = 0;
          n = 12 * v7;
          v9 = calloc(12 * v7, 1u);
          WORD1(v55) = v52;
          src = v9;
          v10 = v9;
          v11 = (*(int (__fastcall **)(int, __int64 *, int, void *, int *, int, int, _DWORD, int, int, int, int, const char *, int, int, int, unsigned int))(a1 + 292))(
                  a1,
                  &v54,
                  v7,
                  v9,
                  &v53,
                  v37,
                  2000,
                  0,
                  v38,
                  v39,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44,
                  v45,
                  v46);
          v12 = v53;
          if ( v53 > 0 )
          {
            v13 = v10;
            v14 = 0;
            do
            {
              V_LOCK(v11);
              ++v14;
              v13 += 3;
              V_INT((int)v56, "chain");
              v44 = *((unsigned __int8 *)v13 - 4);
              v45 = (unsigned __int16)__rev16(*((unsigned __int16 *)v13 - 3));
              v42 = "[Core State] asic %02x core %02x reg %04x state %08x";
              v43 = *((unsigned __int8 *)v13 - 8);
              v46 = bswap32(*(v13 - 3));
              v38 = v56[4];
              v39 = v56[5];
              v40 = v56[6];
              v41 = v56[7];
              v15 = logfmt_raw((int)v57, 0x1000u);
              V_UNLOCK(v15);
              v11 = zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
                      171,
                      "ChipSetting_get_cache_done_status_rvn_RVN",
                      41,
                      1517,
                      40,
                      v57);
              v12 = v53;
            }
            while ( v14 < v53 );
          }
          if ( dest )
            memcpy(dest, src, n);
          free(src);
          V_LOCK(v16);
          v17 = logfmt_raw((int)v57, 0x1000u);
          V_UNLOCK(v17);
          v18 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
                  192,
                  "cache_dag_done_check_rvn",
                  24,
                  2671,
                  40,
                  v57);
          if ( a2 == 73 )
          {
            if ( v12 > 0 )
            {
              v31 = dest;
              do
              {
                if ( (bswap32(*v31) & 1) != 0 )
                {
                  if ( (*v31 & 2) != 0 )
                  {
                    V_LOCK(v18);
                    v35 = logfmt_raw((int)v57, 0x1000u);
                    V_UNLOCK(v35);
                    v33 = g_zc;
                    v34 = 2678;
                  }
                  else
                  {
                    V_LOCK(v18);
                    v32 = logfmt_raw((int)v57, 0x1000u);
                    V_UNLOCK(v32);
                    v33 = g_zc;
                    v34 = 2676;
                  }
                }
                else
                {
                  V_LOCK(v18);
                  v36 = logfmt_raw((int)v57, 0x1000u);
                  V_UNLOCK(v36);
                  v33 = g_zc;
                  v34 = 2681;
                }
                v31 += 3;
                v18 = zlog(
                        v33,
                        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot"
                        "/tmp/release/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
                        192,
                        "cache_dag_done_check_rvn",
                        24,
                        v34,
                        40,
                        v57);
              }
              while ( &dest[3 * v12] != v31 );
            }
            return 0;
          }
        }
        while ( a2 != 160 );
        if ( a3 == 1 )
          break;
        if ( a3 == 2 && v12 > 0 )
        {
          v19 = 0;
          v20 = 0;
          v21 = dest;
          while ( 1 )
          {
            ++v20;
            if ( (*v21 & 0x1000000) != 0 )
            {
              V_LOCK(v18);
              ++v19;
              v22 = logfmt_raw((int)v57, 0x1000u);
              V_UNLOCK(v22);
              v18 = zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
                      192,
                      "cache_dag_done_check_rvn",
                      24,
                      2698,
                      40,
                      v57);
              if ( v19 == 64 )
                break;
            }
            v21 += 3;
            if ( v20 == v12 )
              goto LABEL_2;
          }
          V_LOCK(v18);
          v23 = logfmt_raw((int)v57, 0x1000u);
          V_UNLOCK(v23);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
            192,
            "cache_dag_done_check_rvn",
            24,
            2701,
            40,
            v57);
          return 0;
        }
      }
    }
    while ( v12 <= 0 );
    if ( (*dest & 0x3000000) == 0x2000000 )
      break;
    v25 = dest;
    v26 = 0;
    while ( ++v26 != v12 )
    {
      v27 = v25[3];
      v25 += 3;
      if ( (v27 & 0x3000000) == 0x2000000 )
        goto LABEL_23;
    }
  }
LABEL_23:
  V_LOCK(v18);
  v28 = logfmt_raw((int)v57, 0x1000u);
  V_UNLOCK(v28);
  v29 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
          192,
          "cache_dag_done_check_rvn",
          24,
          2688,
          40,
          v57);
  V_LOCK(v29);
  v30 = logfmt_raw((int)v57, 0x1000u);
  V_UNLOCK(v30);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "cache_dag_done_check_rvn",
    24,
    2689,
    40,
    v57);
  return 0;
}
