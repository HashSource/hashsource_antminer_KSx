int __fastcall sub_E7AF4(int a1, int a2)
{
  int (__fastcall *v4)(int, int *); // r3
  int v5; // r2
  int v6; // r6
  int v7; // r6
  int v8; // r6
  int *v9; // r5
  int v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v16; // [sp+4h] [bp-10E0h]
  int v17; // [sp+3Ch] [bp-10A8h]
  int *ptr; // [sp+44h] [bp-10A0h]
  int v19; // [sp+4Ch] [bp-1098h] BYREF
  int v20; // [sp+50h] [bp-1094h] BYREF
  _BYTE v21[12]; // [sp+54h] [bp-1090h]
  _DWORD v22[7]; // [sp+60h] [bp-1084h] BYREF
  int v23; // [sp+7Ch] [bp-1068h]
  _DWORD v24[7]; // [sp+80h] [bp-1064h] BYREF
  int v25; // [sp+9Ch] [bp-1048h]
  _DWORD v26[7]; // [sp+A0h] [bp-1044h] BYREF
  int v27; // [sp+BCh] [bp-1028h]
  _DWORD v28[7]; // [sp+C0h] [bp-1024h] BYREF
  int v29; // [sp+DCh] [bp-1008h]
  char v30[4100]; // [sp+E0h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v22, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v30,
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
    "set clock delay chip_no %d, value %08x",
    *(_DWORD *)(a1 + 312),
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/./backend/chip_setting.c",
    168,
    "ChipSetting_clock_delay_LTC_1489",
    32,
    735,
    40,
    v30);
  v20 = a2;
  *(_QWORD *)v21 = 0;
  v4 = *(int (__fastcall **)(int, int *))(a1 + 252);
  *(_QWORD *)&v21[4] = 0xFF00FF0001LL;
  if ( v4(a1, &v20) < 0 )
  {
    V_LOCK();
    v17 = -1;
    V_INT((int)v24, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v30,
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
      "%s failed, set reg:%02x",
      "ChipSetting_clock_delay_LTC_1489",
      *(unsigned __int16 *)&v21[6]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/./backend/chip_setting.c",
      168,
      "ChipSetting_clock_delay_LTC_1489",
      32,
      744,
      100,
      v30);
  }
  else
  {
    usleep((__useconds_t)&elf_hash_chain[4398]);
    v5 = *(_DWORD *)(a1 + 312);
    v6 = *(_DWORD *)(a1 + 316);
    v21[8] = 0;
    v7 = v6 * v5;
    ptr = (int *)calloc(12 * v7, 1u);
    (*(void (__fastcall **)(int, int *, int, int *, int *, int, int, _DWORD))(a1 + 276))(
      a1,
      &v20,
      v7,
      ptr,
      &v19,
      v16,
      2000,
      0);
    if ( v19 > 0 )
    {
      v8 = 0;
      v17 = 0;
      v9 = ptr;
      do
      {
        v13 = *((unsigned __int16 *)v9 + 3);
        v14 = *v9;
        HIBYTE(v24[0]) = *v9;
        BYTE2(v24[0]) = BYTE1(v14);
        BYTE1(v24[0]) = BYTE2(v14);
        LOBYTE(v24[0]) = HIBYTE(v14);
        if ( v13 == 255 )
        {
          V_LOCK();
          ++v17;
          V_INT((int)v26, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v30,
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
            "[DP] chip %02x, core %02x, reg %02x, clk_delay %08x",
            *((unsigned __int8 *)v9 + 4),
            *((unsigned __int8 *)v9 + 8),
            *((unsigned __int16 *)v9 + 3),
            v24[0]);
          V_UNLOCK();
          v10 = g_zc;
          v11 = 20;
          v12 = 760;
        }
        else
        {
          V_LOCK();
          V_INT((int)v28, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v30,
            0x1000u,
            0,
            v29,
            v28[0],
            v28[1],
            v28[2],
            v28[3],
            v28[4],
            v28[5],
            v28[6],
            v29,
            "[DP] chip %02x, expected reg %02x, but %02x, data %08x",
            *((unsigned __int8 *)v9 + 4),
            255,
            *((unsigned __int16 *)v9 + 3),
            v24[0]);
          V_UNLOCK();
          v10 = g_zc;
          v11 = 100;
          v12 = 763;
        }
        ++v8;
        v9 += 3;
        zlog(
          v10,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/./backend/chip_setting.c",
          168,
          "ChipSetting_clock_delay_LTC_1489",
          32,
          v12,
          v11,
          v30);
      }
      while ( v19 > v8 );
    }
    else
    {
      v17 = 0;
    }
    free(ptr);
  }
  return v17;
}
