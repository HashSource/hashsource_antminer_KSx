int __fastcall sub_CE6FC(int a1, int a2)
{
  int v4; // r0
  int (__fastcall *v5)(int, _DWORD *); // r3
  int v6; // r0
  int v7; // r2
  int v8; // r6
  int v9; // r6
  int v10; // r0
  int v11; // r6
  int *v12; // r5
  int v13; // r0
  int v14; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r9
  int v18; // r3
  char v19; // r2
  int v20; // r0
  int v22; // r0
  int v23; // [sp+4h] [bp-10E8h]
  int v24; // [sp+10h] [bp-10DCh]
  int v25; // [sp+14h] [bp-10D8h]
  int v26; // [sp+18h] [bp-10D4h]
  int v27; // [sp+1Ch] [bp-10D0h]
  int v28; // [sp+24h] [bp-10C8h]
  int v29; // [sp+3Ch] [bp-10B0h]
  int *ptr; // [sp+4Ch] [bp-10A0h]
  int v31; // [sp+54h] [bp-1098h] BYREF
  _DWORD v32[2]; // [sp+58h] [bp-1094h] BYREF
  __int64 v33; // [sp+60h] [bp-108Ch]
  char v34[16]; // [sp+68h] [bp-1084h] BYREF
  int v35; // [sp+78h] [bp-1074h]
  int v36; // [sp+7Ch] [bp-1070h]
  int v37; // [sp+80h] [bp-106Ch]
  int v38; // [sp+84h] [bp-1068h]
  _BYTE v39[32]; // [sp+88h] [bp-1064h] BYREF
  char v40[32]; // [sp+A8h] [bp-1044h] BYREF
  int v41; // [sp+C8h] [bp-1024h] BYREF
  _BYTE v42[4100]; // [sp+E8h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v34, "chain");
  v28 = *(_DWORD *)(a1 + 332);
  v24 = v35;
  v25 = v36;
  v26 = v37;
  v27 = v38;
  v4 = logfmt_raw((int)v42, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_clock_delay_DCR_1727",
    32,
    814,
    40,
    v42);
  v32[0] = a2;
  v5 = *(int (__fastcall **)(int, _DWORD *))(a1 + 268);
  v32[1] = 0;
  v33 = 0xFF00000001LL;
  v6 = v5(a1, v32);
  if ( v6 < 0 )
  {
    V_LOCK(v6);
    v29 = -1;
    V_INT((int)v39, "chain");
    v22 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
      171,
      "ChipSetting_clock_delay_DCR_1727",
      32,
      823,
      100,
      v42);
  }
  else
  {
    usleep((__useconds_t)&elf_hash_chain[4398]);
    v7 = *(_DWORD *)(a1 + 332);
    v8 = *(_DWORD *)(a1 + 336);
    BYTE4(v33) = 0;
    v9 = v8 * v7;
    ptr = (int *)calloc(12 * v9, 1u);
    v10 = (*(int (**)(int, _DWORD *, int, int *, int *, int, int, _DWORD, int, int, int, int, const char *, ...))(a1 + 296))(
            a1,
            v32,
            v9,
            ptr,
            &v31,
            v23,
            2000,
            0,
            v24,
            v25,
            v26,
            v27,
            "set clock delay chip_no %d, value %08x",
            v28,
            a2);
    if ( v31 > 0 )
    {
      v11 = 0;
      v29 = 0;
      v12 = ptr;
      do
      {
        v17 = *((unsigned __int16 *)v12 + 3);
        v18 = *v12;
        v19 = BYTE1(*v12);
        v39[3] = *v12;
        v39[2] = v19;
        v39[1] = BYTE2(v18);
        v39[0] = HIBYTE(v18);
        V_LOCK(v10);
        if ( v17 )
        {
          V_INT((int)&v41, "chain");
          v20 = logfmt_raw((int)v42, 0x1000u);
          V_UNLOCK(v20);
          v14 = g_zc;
          v15 = 100;
          v16 = 842;
        }
        else
        {
          ++v29;
          V_INT((int)v40, "chain");
          v13 = logfmt_raw((int)v42, 0x1000u);
          V_UNLOCK(v13);
          v14 = g_zc;
          v15 = 20;
          v16 = 839;
        }
        ++v11;
        v12 += 3;
        v10 = zlog(
                v14,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
                171,
                "ChipSetting_clock_delay_DCR_1727",
                32,
                v16,
                v15,
                v42);
      }
      while ( v31 > v11 );
    }
    else
    {
      v29 = 0;
    }
    free(ptr);
  }
  return v29;
}
