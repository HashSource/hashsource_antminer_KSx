int __fastcall sub_C51F0(int a1, int a2)
{
  int (__fastcall *v4)(int, _DWORD *); // r3
  int v5; // r2
  int v6; // r6
  int v7; // r6
  int v8; // r6
  int *v9; // r5
  int v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r9
  int v14; // r3
  char v15; // r2
  int v17; // [sp+4h] [bp-10E8h]
  int v18; // [sp+3Ch] [bp-10B0h]
  int *ptr; // [sp+4Ch] [bp-10A0h]
  int v20; // [sp+54h] [bp-1098h] BYREF
  _DWORD v21[2]; // [sp+58h] [bp-1094h] BYREF
  __int64 v22; // [sp+60h] [bp-108Ch]
  _DWORD v23[7]; // [sp+68h] [bp-1084h] BYREF
  int v24; // [sp+84h] [bp-1068h]
  _DWORD v25[7]; // [sp+88h] [bp-1064h] BYREF
  int v26; // [sp+A4h] [bp-1048h]
  _DWORD v27[7]; // [sp+A8h] [bp-1044h] BYREF
  int v28; // [sp+C4h] [bp-1028h]
  _DWORD v29[7]; // [sp+C8h] [bp-1024h] BYREF
  int v30; // [sp+E4h] [bp-1008h]
  char v31[4100]; // [sp+E8h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v23, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v31,
    0x1000u,
    0,
    v24,
    v23[0],
    v23[1],
    v23[2],
    v23[3],
    v23[4],
    v23[5],
    v23[6],
    v24,
    "set clock delay chip_no %d, value %08x",
    *(_DWORD *)(a1 + 312),
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_clock_delay_DCR_1727",
    32,
    735,
    40,
    v31);
  v21[0] = a2;
  v4 = *(int (__fastcall **)(int, _DWORD *))(a1 + 252);
  v21[1] = 0;
  v22 = 0xFF00000001LL;
  if ( v4(a1, v21) < 0 )
  {
    V_LOCK();
    v18 = -1;
    V_INT((int)v25, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v31,
      0x1000u,
      0,
      v26,
      v25[0],
      v25[1],
      v25[2],
      v25[3],
      v25[4],
      v25[5],
      v25[6],
      v26,
      "%s failed, set reg:%02x",
      "ChipSetting_clock_delay_DCR_1727",
      WORD1(v22));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_clock_delay_DCR_1727",
      32,
      744,
      100,
      v31);
  }
  else
  {
    usleep((__useconds_t)&elf_hash_chain[4398]);
    v5 = *(_DWORD *)(a1 + 312);
    v6 = *(_DWORD *)(a1 + 316);
    BYTE4(v22) = 0;
    v7 = v6 * v5;
    ptr = (int *)calloc(12 * v7, 1u);
    (*(void (__fastcall **)(int, _DWORD *, int, int *, int *, int, int, _DWORD))(a1 + 276))(
      a1,
      v21,
      v7,
      ptr,
      &v20,
      v17,
      2000,
      0);
    if ( v20 > 0 )
    {
      v8 = 0;
      v18 = 0;
      v9 = ptr;
      do
      {
        v13 = *((unsigned __int16 *)v9 + 3);
        v14 = *v9;
        v15 = BYTE1(*v9);
        HIBYTE(v25[0]) = *v9;
        BYTE2(v25[0]) = v15;
        BYTE1(v25[0]) = BYTE2(v14);
        LOBYTE(v25[0]) = HIBYTE(v14);
        V_LOCK();
        if ( v13 )
        {
          V_INT((int)v29, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v31,
            0x1000u,
            0,
            v30,
            v29[0],
            v29[1],
            v29[2],
            v29[3],
            v29[4],
            v29[5],
            v29[6],
            v30,
            "[DP] chip %02x, expected reg %02x, but %02x, data %08x",
            *((unsigned __int8 *)v9 + 4),
            0,
            *((unsigned __int16 *)v9 + 3),
            v25[0]);
          V_UNLOCK();
          v10 = g_zc;
          v11 = 100;
          v12 = 763;
        }
        else
        {
          ++v18;
          V_INT((int)v27, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v31,
            0x1000u,
            0,
            v28,
            v27[0],
            v27[1],
            v27[2],
            v27[3],
            v27[4],
            v27[5],
            v27[6],
            v28,
            "[DP] chip %02x, core %02x, reg %02x, clk_delay %08x",
            *((unsigned __int8 *)v9 + 4),
            *((unsigned __int8 *)v9 + 8),
            *((unsigned __int16 *)v9 + 3),
            v25[0]);
          V_UNLOCK();
          v10 = g_zc;
          v11 = 20;
          v12 = 760;
        }
        ++v8;
        v9 += 3;
        zlog(
          v10,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/chip_setting.c",
          166,
          "ChipSetting_clock_delay_DCR_1727",
          32,
          v12,
          v11,
          v31);
      }
      while ( v20 > v8 );
    }
    else
    {
      v18 = 0;
    }
    free(ptr);
  }
  return v18;
}
