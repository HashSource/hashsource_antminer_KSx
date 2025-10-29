int __fastcall sub_C5E40(int a1)
{
  int (__fastcall *v2)(int, int *); // r3
  int v3; // r6
  int v4; // r12
  int v5; // r2
  int v6; // r9
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
  int v18; // [sp+50h] [bp-1094h] BYREF
  _BYTE v19[12]; // [sp+54h] [bp-1090h]
  _DWORD v20[7]; // [sp+60h] [bp-1084h] BYREF
  int v21; // [sp+7Ch] [bp-1068h]
  _DWORD v22[7]; // [sp+80h] [bp-1064h] BYREF
  int v23; // [sp+9Ch] [bp-1048h]
  _DWORD v24[7]; // [sp+A0h] [bp-1044h] BYREF
  int v25; // [sp+BCh] [bp-1028h]
  _DWORD v26[7]; // [sp+C0h] [bp-1024h] BYREF
  int v27; // [sp+DCh] [bp-1008h]
  char v28[4100]; // [sp+E0h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v20, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v28,
    0x1000u,
    0,
    v21,
    v20[0],
    v20[1],
    v20[2],
    v20[3],
    v20[4],
    v20[5],
    v20[6],
    v21,
    "get hash clock count chip_no %d",
    *(_DWORD *)(a1 + 312));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_hash_clock_count_DCR_1727",
    37,
    830,
    20,
    v28);
  v18 = 1;
  *(_QWORD *)v19 = 0;
  v2 = *(int (__fastcall **)(int, int *))(a1 + 252);
  *(_QWORD *)&v19[4] = 0xFF00060001LL;
  if ( v2(a1, &v18) < 0 )
  {
    V_LOCK();
    v15 = -1;
    V_INT((int)v22, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v28,
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
      "%s failed, set reg:%02x",
      "ChipSetting_hash_clock_count_DCR_1727",
      *(unsigned __int16 *)&v19[6]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_hash_clock_count_DCR_1727",
      37,
      839,
      100,
      v28);
  }
  else
  {
    v3 = 0;
    usleep(0x4E20u);
    v4 = *(_DWORD *)(a1 + 312);
    v5 = *(_DWORD *)(a1 + 316);
    v19[4] = 1;
    v19[5] = 0;
    v6 = v5 * v4;
    *(_WORD *)&v19[6] = 7;
    v19[8] = 0;
    ptr = (int *)calloc(12 * v5 * v4, 1u);
    (*(void (__fastcall **)(int, int *, int, int *, int *, int, int, _DWORD))(a1 + 276))(
      a1,
      &v18,
      v6,
      ptr,
      &v17,
      v14,
      2000,
      0);
    v15 = 0;
    if ( v17 > 0 )
    {
      v7 = ptr;
      do
      {
        v11 = *((unsigned __int16 *)v7 + 3);
        v12 = *v7;
        HIBYTE(v22[0]) = *v7;
        BYTE2(v22[0]) = BYTE1(v12);
        BYTE1(v22[0]) = BYTE2(v12);
        LOBYTE(v22[0]) = HIBYTE(v12);
        if ( v11 == 7 )
        {
          V_LOCK();
          ++v15;
          V_INT((int)v24, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v28,
            0x1000u,
            0,
            v25,
            v24[0],
            v24[1],
            v24[2],
            v24[3],
            v24[4],
            v24[5],
            v24[6],
            v25,
            "[Hash clk cnt] chip %02x, core %02x, reg %02x, clk_cnt %08x",
            *((unsigned __int8 *)v7 + 4),
            *((unsigned __int8 *)v7 + 8),
            *((unsigned __int16 *)v7 + 3),
            v22[0]);
          V_UNLOCK();
          v8 = g_zc;
          v9 = 40;
          v10 = 858;
        }
        else
        {
          V_LOCK();
          V_INT((int)v26, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v28,
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
            "[Hash clk cnt] chip %02x, expected reg %02x, but %02x, clk_cnt %08x",
            *((unsigned __int8 *)v7 + 4),
            7,
            *((unsigned __int16 *)v7 + 3),
            v22[0]);
          V_UNLOCK();
          v8 = g_zc;
          v9 = 100;
          v10 = 861;
        }
        ++v3;
        v7 += 3;
        zlog(
          v8,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/chip_setting.c",
          166,
          "ChipSetting_hash_clock_count_DCR_1727",
          37,
          v10,
          v9,
          v28);
      }
      while ( v17 > v3 );
    }
    free(ptr);
  }
  return v15;
}
