int __fastcall sub_E7EF0(int a1)
{
  int (__fastcall *v2)(int, _DWORD *); // r3
  int v3; // r3
  int v4; // r2
  int v5; // r6
  int v6; // r6
  int *v7; // r5
  int v8; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r2
  int v12; // r3
  int v14; // [sp+4h] [bp-10E0h]
  int v15; // [sp+3Ch] [bp-10A8h]
  int *ptr; // [sp+44h] [bp-10A0h]
  int v17; // [sp+4Ch] [bp-1098h] BYREF
  _DWORD v18[2]; // [sp+50h] [bp-1094h] BYREF
  __int64 v19; // [sp+58h] [bp-108Ch]
  _DWORD v20[2]; // [sp+60h] [bp-1084h] BYREF
  __int64 v21; // [sp+68h] [bp-107Ch]
  int v22; // [sp+70h] [bp-1074h]
  int v23; // [sp+74h] [bp-1070h]
  int v24; // [sp+78h] [bp-106Ch]
  int v25; // [sp+7Ch] [bp-1068h]
  _DWORD v26[7]; // [sp+80h] [bp-1064h] BYREF
  int v27; // [sp+9Ch] [bp-1048h]
  _DWORD v28[2]; // [sp+A0h] [bp-1044h] BYREF
  __int64 v29; // [sp+A8h] [bp-103Ch]
  int v30; // [sp+B0h] [bp-1034h]
  int v31; // [sp+B4h] [bp-1030h]
  int v32; // [sp+B8h] [bp-102Ch]
  int v33; // [sp+BCh] [bp-1028h]
  _DWORD v34[7]; // [sp+C0h] [bp-1024h] BYREF
  int v35; // [sp+DCh] [bp-1008h]
  char v36[4100]; // [sp+E0h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v20, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v36,
    0x1000u,
    0,
    v25,
    v20[0],
    v20[1],
    v21,
    v22,
    v23,
    v24,
    v25,
    "get hash clock count chip_no %d",
    *(_DWORD *)(a1 + 312));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/./backend/chip_setting.c",
    168,
    "ChipSetting_hash_clock_count_LTC_1489",
    37,
    830,
    20,
    v36);
  v18[0] = 1;
  v2 = *(int (__fastcall **)(int, _DWORD *))(a1 + 252);
  v18[1] = 0;
  v19 = 0xFF00FF0001LL;
  if ( v2(a1, v18) < 0 )
  {
    V_LOCK();
    v15 = -1;
    V_INT((int)v26, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v36,
      0x1000u,
      0,
      v27,
      v26[0],
      v26[1],
      v26[2],
      v26[3],
      v26[4],
      v26[5],
      v26[6],
      v27,
      "%s failed, set reg:%02x",
      "ChipSetting_hash_clock_count_LTC_1489",
      WORD1(v19));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/./backend/chip_setting.c",
      168,
      "ChipSetting_hash_clock_count_LTC_1489",
      37,
      839,
      100,
      v36);
  }
  else
  {
    usleep(0x4E20u);
    v3 = *(_DWORD *)(a1 + 312);
    v4 = *(_DWORD *)(a1 + 316);
    LODWORD(v19) = 16711681;
    v5 = v4 * v3;
    BYTE4(v19) = 0;
    ptr = (int *)calloc(12 * v4 * v3, 1u);
    (*(void (__fastcall **)(int, _DWORD *, int, int *, int *, int, int, _DWORD))(a1 + 276))(
      a1,
      v18,
      v5,
      ptr,
      &v17,
      v14,
      2000,
      0);
    if ( v17 > 0 )
    {
      v6 = 0;
      v15 = 0;
      v7 = ptr;
      do
      {
        v11 = *((unsigned __int16 *)v7 + 3);
        v12 = *v7;
        HIBYTE(v26[0]) = *v7;
        BYTE2(v26[0]) = BYTE1(v12);
        BYTE1(v26[0]) = BYTE2(v12);
        LOBYTE(v26[0]) = HIBYTE(v12);
        if ( v11 == 255 )
        {
          V_LOCK();
          ++v15;
          V_INT((int)v28, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v36,
            0x1000u,
            0,
            v33,
            v28[0],
            v28[1],
            v29,
            v30,
            v31,
            v32,
            v33,
            "[Hash clk cnt] chip %02x, core %02x, reg %02x, clk_cnt %08x",
            *((unsigned __int8 *)v7 + 4),
            *((unsigned __int8 *)v7 + 8),
            *((unsigned __int16 *)v7 + 3),
            v26[0]);
          V_UNLOCK();
          v8 = g_zc;
          v9 = 40;
          v10 = 858;
        }
        else
        {
          V_LOCK();
          V_INT((int)v34, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v36,
            0x1000u,
            0,
            v35,
            v34[0],
            v34[1],
            v34[2],
            v34[3],
            v34[4],
            v34[5],
            v34[6],
            v35,
            "[Hash clk cnt] chip %02x, expected reg %02x, but %02x, clk_cnt %08x",
            *((unsigned __int8 *)v7 + 4),
            255,
            *((unsigned __int16 *)v7 + 3),
            v26[0]);
          V_UNLOCK();
          v8 = g_zc;
          v9 = 100;
          v10 = 861;
        }
        ++v6;
        v7 += 3;
        zlog(
          v8,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/./backend/chip_setting.c",
          168,
          "ChipSetting_hash_clock_count_LTC_1489",
          37,
          v10,
          v9,
          v36);
      }
      while ( v17 > v6 );
    }
    else
    {
      v15 = 0;
    }
    free(ptr);
  }
  return v15;
}
