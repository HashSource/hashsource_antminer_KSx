int __fastcall sub_DA72C(int a1)
{
  int v2; // r6
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r8
  int v5; // r2
  int v6; // r5
  int v7; // r5
  int *v8; // r5
  int v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v15; // [sp+4h] [bp-10C0h]
  int v16; // [sp+3Ch] [bp-1088h]
  int *ptr; // [sp+44h] [bp-1080h]
  int v18; // [sp+48h] [bp-107Ch] BYREF
  int v19; // [sp+4Ch] [bp-1078h]
  _DWORD v20[2]; // [sp+50h] [bp-1074h] BYREF
  __int64 v21; // [sp+58h] [bp-106Ch]
  _DWORD v22[7]; // [sp+60h] [bp-1064h] BYREF
  int v23; // [sp+7Ch] [bp-1048h]
  _DWORD v24[2]; // [sp+80h] [bp-1044h] BYREF
  __int64 v25; // [sp+88h] [bp-103Ch]
  int v26; // [sp+90h] [bp-1034h]
  int v27; // [sp+94h] [bp-1030h]
  int v28; // [sp+98h] [bp-102Ch]
  int v29; // [sp+9Ch] [bp-1028h]
  _DWORD v30[7]; // [sp+A0h] [bp-1024h] BYREF
  int v31; // [sp+BCh] [bp-1008h]
  char v32[4100]; // [sp+C0h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v22, "chain", *(int *)(a1 + 232));
  v2 = 0;
  v16 = 0;
  logfmt_raw(
    v32,
    0x1000u,
    0,
    v23,
    v22[0],
    v22[1],
    v22[2],
    v22[3],
    v22[4],
    v22[5],
    v22[6],
    v23,
    "get pmdata chip_no %d",
    *(_DWORD *)(a1 + 312));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_pmdata_HNS_2130",
    27,
    778,
    20,
    v32);
  v3 = *(int (__fastcall **)(int, _DWORD *))(a1 + 252);
  v20[1] = 0;
  v21 = 0;
  while ( 1 )
  {
    if ( v2 == 3 )
      goto LABEL_12;
    LOBYTE(v21) = 1;
    v20[0] = (16 * v2) | 1;
    BYTE4(v21) = -1;
    WORD1(v21) = 255;
    if ( v3(a1, v20) < 0 )
      break;
    v4 = 0;
    usleep(0x4E20u);
    v5 = *(_DWORD *)(a1 + 312);
    v6 = *(_DWORD *)(a1 + 316);
    LODWORD(v21) = 327681;
    v7 = v6 * v5;
    BYTE4(v21) = 0;
    ptr = (int *)calloc(12 * v7, 1u);
    (*(void (__fastcall **)(int, _DWORD *, int, int *, int *, int, int, _DWORD))(a1 + 276))(
      a1,
      v20,
      v7,
      ptr,
      &v18,
      v15,
      2000,
      0);
    if ( v18 > 0 )
    {
      v8 = ptr;
      do
      {
        v12 = *((unsigned __int16 *)v8 + 3);
        v13 = *v8;
        HIBYTE(v19) = *v8;
        BYTE2(v19) = BYTE1(v13);
        BYTE1(v19) = BYTE2(v13);
        LOBYTE(v19) = HIBYTE(v13);
        if ( v12 == 5 )
        {
          V_LOCK();
          ++v16;
          V_INT((int)v24, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v32,
            0x1000u,
            0,
            v29,
            v24[0],
            v24[1],
            v25,
            v26,
            v27,
            v28,
            v29,
            "[PM data] chip %02x, reg %02x mode %d PMDATA %08x",
            *((unsigned __int8 *)v8 + 4),
            *((unsigned __int16 *)v8 + 3),
            v2,
            v19);
          V_UNLOCK();
          v9 = g_zc;
          v10 = 40;
          v11 = 810;
        }
        else
        {
          V_LOCK();
          V_INT((int)v30, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v32,
            0x1000u,
            0,
            v31,
            v30[0],
            v30[1],
            v30[2],
            v30[3],
            v30[4],
            v30[5],
            v30[6],
            v31,
            "[PM data] chip %02x, expected reg %02x, but %02x mode %d PMDATA %08x",
            *((unsigned __int8 *)v8 + 4),
            5,
            *((unsigned __int16 *)v8 + 3),
            v2,
            v19);
          V_UNLOCK();
          v9 = g_zc;
          v10 = 100;
          v11 = 813;
        }
        ++v4;
        v8 += 3;
        zlog(
          v9,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/chip_setting.c",
          166,
          "ChipSetting_pmdata_HNS_2130",
          27,
          v11,
          v10,
          v32);
      }
      while ( v18 > v4 );
    }
    if ( v2 == 6 )
    {
      free(ptr);
      return v16;
    }
    v3 = *(int (__fastcall **)(int, _DWORD *))(a1 + 252);
LABEL_12:
    ++v2;
  }
  V_LOCK();
  logfmt_raw(v32, 0x1000u, 0, "%s failed, set reg:%02x", "ChipSetting_pmdata_HNS_2130", WORD1(v21));
  v16 = -1;
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_pmdata_HNS_2130",
    27,
    791,
    100,
    v32);
  return v16;
}
