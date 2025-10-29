int __fastcall sub_F56EC(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r3
  int v4; // r0
  int v5; // r3
  int v6; // r2
  int v7; // r6
  int v8; // r0
  int v9; // r6
  int *v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r3
  int v15; // r2
  int v16; // r3
  int v17; // r0
  int v19; // r0
  int v20; // [sp+4h] [bp-10E0h]
  int v21; // [sp+10h] [bp-10D4h]
  int v22; // [sp+14h] [bp-10D0h]
  int v23; // [sp+18h] [bp-10CCh]
  int v24; // [sp+1Ch] [bp-10C8h]
  int v25; // [sp+24h] [bp-10C0h]
  int v26; // [sp+3Ch] [bp-10A8h]
  int *ptr; // [sp+44h] [bp-10A0h]
  int v28; // [sp+4Ch] [bp-1098h] BYREF
  _DWORD v29[2]; // [sp+50h] [bp-1094h] BYREF
  __int64 v30; // [sp+58h] [bp-108Ch]
  char v31[8]; // [sp+60h] [bp-1084h] BYREF
  int v32; // [sp+70h] [bp-1074h]
  int v33; // [sp+74h] [bp-1070h]
  int v34; // [sp+78h] [bp-106Ch]
  int v35; // [sp+7Ch] [bp-1068h]
  _BYTE v36[32]; // [sp+80h] [bp-1064h] BYREF
  char v37[8]; // [sp+A0h] [bp-1044h] BYREF
  int v38; // [sp+C0h] [bp-1024h] BYREF
  _BYTE v39[4100]; // [sp+E0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v31, "chain");
  v25 = *(_DWORD *)(a1 + 332);
  v21 = v32;
  v22 = v33;
  v23 = v34;
  v24 = v35;
  v2 = logfmt_raw((int)v39, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/./backend/chip_setting.c",
    173,
    "ChipSetting_hash_clock_count_LTC_1489",
    37,
    871,
    20,
    v39);
  v29[0] = 1;
  v3 = *(int (__fastcall **)(int, _DWORD *))(a1 + 268);
  v29[1] = 0;
  v30 = 0xFF00FF0001LL;
  v4 = v3(a1, v29);
  if ( v4 < 0 )
  {
    V_LOCK(v4);
    v26 = -1;
    V_INT((int)v36, "chain");
    v19 = logfmt_raw((int)v39, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/./backend/chip_setting.c",
      173,
      "ChipSetting_hash_clock_count_LTC_1489",
      37,
      880,
      100,
      v39);
  }
  else
  {
    usleep(0x4E20u);
    v5 = *(_DWORD *)(a1 + 332);
    v6 = *(_DWORD *)(a1 + 336);
    LODWORD(v30) = 16711681;
    v7 = v6 * v5;
    BYTE4(v30) = 0;
    ptr = (int *)calloc(12 * v6 * v5, 1u);
    v8 = (*(int (**)(int, _DWORD *, int, int *, int *, int, int, _DWORD, int, int, int, int, const char *, ...))(a1 + 296))(
           a1,
           v29,
           v7,
           ptr,
           &v28,
           v20,
           2000,
           0,
           v21,
           v22,
           v23,
           v24,
           "get hash clock count chip_no %d",
           v25);
    if ( v28 > 0 )
    {
      v9 = 0;
      v26 = 0;
      v10 = ptr;
      do
      {
        v15 = *((unsigned __int16 *)v10 + 3);
        v16 = *v10;
        v36[3] = *v10;
        v36[2] = BYTE1(v16);
        v36[1] = BYTE2(v16);
        v36[0] = HIBYTE(v16);
        if ( v15 == 255 )
        {
          V_LOCK(v8);
          ++v26;
          V_INT((int)v37, "chain");
          v17 = logfmt_raw((int)v39, 0x1000u);
          V_UNLOCK(v17);
          v12 = g_zc;
          v13 = 40;
          v14 = 899;
        }
        else
        {
          V_LOCK(v8);
          V_INT((int)&v38, "chain");
          v11 = logfmt_raw((int)v39, 0x1000u);
          V_UNLOCK(v11);
          v12 = g_zc;
          v13 = 100;
          v14 = 902;
        }
        ++v9;
        v10 += 3;
        v8 = zlog(
               v12,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/./backend/chip_setting.c",
               173,
               "ChipSetting_hash_clock_count_LTC_1489",
               37,
               v14,
               v13,
               v39);
      }
      while ( v28 > v9 );
    }
    else
    {
      v26 = 0;
    }
    free(ptr);
  }
  return v26;
}
