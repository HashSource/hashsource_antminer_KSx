int __fastcall sub_CA004(int a1)
{
  int v2; // r6
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  int v6; // r8
  int v7; // r2
  int v8; // r5
  int v9; // r5
  int v10; // r0
  int *v11; // r5
  int v12; // r0
  int v13; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r0
  int v20; // r0
  int v21; // [sp+4h] [bp-10C0h]
  int v22; // [sp+10h] [bp-10B4h]
  int v23; // [sp+14h] [bp-10B0h]
  int v24; // [sp+18h] [bp-10ACh]
  int v25; // [sp+1Ch] [bp-10A8h]
  const char *v26; // [sp+20h] [bp-10A4h]
  int v27; // [sp+24h] [bp-10A0h]
  int v28; // [sp+28h] [bp-109Ch]
  int v29; // [sp+2Ch] [bp-1098h]
  int v30; // [sp+30h] [bp-1094h]
  int v31; // [sp+34h] [bp-1090h]
  int v32; // [sp+3Ch] [bp-1088h]
  int *ptr; // [sp+44h] [bp-1080h]
  int v34; // [sp+48h] [bp-107Ch] BYREF
  int v35; // [sp+4Ch] [bp-1078h]
  _DWORD v36[2]; // [sp+50h] [bp-1074h] BYREF
  __int64 v37; // [sp+58h] [bp-106Ch]
  _DWORD v38[8]; // [sp+60h] [bp-1064h] BYREF
  char v39[8]; // [sp+80h] [bp-1044h] BYREF
  int v40; // [sp+90h] [bp-1034h]
  int v41; // [sp+94h] [bp-1030h]
  int v42; // [sp+98h] [bp-102Ch]
  int v43; // [sp+9Ch] [bp-1028h]
  _DWORD v44[8]; // [sp+A0h] [bp-1024h] BYREF
  _BYTE v45[4100]; // [sp+C0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v38, "chain", *(int *)(a1 + 248));
  v26 = "get pmdata chip_no %d";
  v27 = *(_DWORD *)(a1 + 336);
  v2 = 0;
  v32 = 0;
  v22 = v38[4];
  v23 = v38[5];
  v24 = v38[6];
  v25 = v38[7];
  v3 = logfmt_raw((int)v45, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_pmdata_DASH_1766",
    28,
    892,
    20,
    v45);
  v4 = *(int (__fastcall **)(int, _DWORD *))(a1 + 268);
  v36[1] = 0;
  v37 = 0;
  while ( 1 )
  {
    if ( v2 == 3 )
      goto LABEL_12;
    LOBYTE(v37) = 1;
    v36[0] = (16 * v2) | 1;
    BYTE4(v37) = -1;
    WORD1(v37) = 255;
    v5 = v4(a1, v36);
    if ( v5 < 0 )
      break;
    v6 = 0;
    usleep(0x4E20u);
    v7 = *(_DWORD *)(a1 + 336);
    v8 = *(_DWORD *)(a1 + 340);
    LODWORD(v37) = 327681;
    v9 = v8 * v7;
    BYTE4(v37) = 0;
    ptr = (int *)calloc(12 * v9, 1u);
    v10 = (*(int (__fastcall **)(int, _DWORD *, int, int *, int *, int, int, _DWORD, int, int, int, int, const char *, int, int, int, int, int))(a1 + 300))(
            a1,
            v36,
            v9,
            ptr,
            &v34,
            v21,
            2000,
            0,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
    if ( v34 > 0 )
    {
      v11 = ptr;
      do
      {
        v16 = *((unsigned __int16 *)v11 + 3);
        v17 = *v11;
        HIBYTE(v35) = *v11;
        BYTE2(v35) = BYTE1(v17);
        BYTE1(v35) = BYTE2(v17);
        LOBYTE(v35) = HIBYTE(v17);
        if ( v16 == 5 )
        {
          V_LOCK(v10);
          ++v32;
          V_INT((int)v39, "chain", *(int *)(a1 + 248));
          v29 = v2;
          v26 = "[PM data] chip %02x, reg %02x mode %d PMDATA %08x";
          v30 = v35;
          v27 = *((unsigned __int8 *)v11 + 4);
          v28 = *((unsigned __int16 *)v11 + 3);
          v22 = v40;
          v23 = v41;
          v24 = v42;
          v25 = v43;
          v18 = logfmt_raw((int)v45, 0x1000u);
          V_UNLOCK(v18);
          v13 = g_zc;
          v14 = 40;
          v15 = 924;
        }
        else
        {
          V_LOCK(v10);
          V_INT((int)v44, "chain", *(int *)(a1 + 248));
          v26 = "[PM data] chip %02x, expected reg %02x, but %02x mode %d PMDATA %08x";
          v30 = v2;
          v31 = v35;
          v28 = 5;
          v29 = *((unsigned __int16 *)v11 + 3);
          v27 = *((unsigned __int8 *)v11 + 4);
          v22 = v44[4];
          v23 = v44[5];
          v24 = v44[6];
          v25 = v44[7];
          v12 = logfmt_raw((int)v45, 0x1000u);
          V_UNLOCK(v12);
          v13 = g_zc;
          v14 = 100;
          v15 = 927;
        }
        ++v6;
        v11 += 3;
        v10 = zlog(
                v13,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/chip_setting.c",
                166,
                "ChipSetting_pmdata_DASH_1766",
                28,
                v15,
                v14,
                v45);
      }
      while ( v34 > v6 );
    }
    if ( v2 == 6 )
    {
      free(ptr);
      return v32;
    }
    v4 = *(int (__fastcall **)(int, _DWORD *))(a1 + 268);
LABEL_12:
    ++v2;
  }
  V_LOCK(v5);
  v20 = logfmt_raw((int)v45, 0x1000u);
  v32 = -1;
  V_UNLOCK(v20);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_pmdata_DASH_1766",
    28,
    905,
    100,
    v45);
  return v32;
}
