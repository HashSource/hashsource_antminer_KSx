int __fastcall sub_F8D0C(int a1, int a2)
{
  int v4; // r0
  int (__fastcall *v5)(int, int *); // r3
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
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v21; // r0
  int v22; // [sp+4h] [bp-10E0h]
  int v23; // [sp+10h] [bp-10D4h]
  int v24; // [sp+14h] [bp-10D0h]
  int v25; // [sp+18h] [bp-10CCh]
  int v26; // [sp+1Ch] [bp-10C8h]
  int v27; // [sp+24h] [bp-10C0h]
  int v28; // [sp+3Ch] [bp-10A8h]
  int *ptr; // [sp+44h] [bp-10A0h]
  int v30; // [sp+4Ch] [bp-1098h] BYREF
  int v31; // [sp+50h] [bp-1094h] BYREF
  _BYTE v32[12]; // [sp+54h] [bp-1090h]
  char v33[16]; // [sp+60h] [bp-1084h] BYREF
  int v34; // [sp+70h] [bp-1074h]
  int v35; // [sp+74h] [bp-1070h]
  int v36; // [sp+78h] [bp-106Ch]
  int v37; // [sp+7Ch] [bp-1068h]
  _BYTE v38[32]; // [sp+80h] [bp-1064h] BYREF
  char v39[32]; // [sp+A0h] [bp-1044h] BYREF
  int v40; // [sp+C0h] [bp-1024h] BYREF
  _BYTE v41[4100]; // [sp+E0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v33, "chain", *(int *)(a1 + 248));
  v27 = *(_DWORD *)(a1 + 336);
  v23 = v34;
  v24 = v35;
  v25 = v36;
  v26 = v37;
  v4 = logfmt_raw((int)v41, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/./backend/chip_setting.c",
    168,
    "ChipSetting_clock_delay_LTC_1489",
    32,
    849,
    40,
    v41);
  v31 = a2;
  *(_QWORD *)v32 = 0;
  v5 = *(int (__fastcall **)(int, int *))(a1 + 268);
  *(_QWORD *)&v32[4] = 0xFF00FF0001LL;
  v6 = v5(a1, &v31);
  if ( v6 < 0 )
  {
    V_LOCK(v6);
    v28 = -1;
    V_INT((int)v38, "chain", *(int *)(a1 + 248));
    v21 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/./backend/chip_setting.c",
      168,
      "ChipSetting_clock_delay_LTC_1489",
      32,
      858,
      100,
      v41);
  }
  else
  {
    usleep((__useconds_t)&elf_hash_chain[4398]);
    v7 = *(_DWORD *)(a1 + 336);
    v8 = *(_DWORD *)(a1 + 340);
    v32[8] = 0;
    v9 = v8 * v7;
    ptr = (int *)calloc(12 * v9, 1u);
    v10 = (*(int (**)(int, int *, int, int *, int *, int, int, _DWORD, int, int, int, int, const char *, ...))(a1 + 300))(
            a1,
            &v31,
            v9,
            ptr,
            &v30,
            v22,
            2000,
            0,
            v23,
            v24,
            v25,
            v26,
            "set clock delay chip_no %d, value %08x",
            v27,
            a2);
    if ( v30 > 0 )
    {
      v11 = 0;
      v28 = 0;
      v12 = ptr;
      do
      {
        v17 = *((unsigned __int16 *)v12 + 3);
        v18 = *v12;
        v38[3] = *v12;
        v38[2] = BYTE1(v18);
        v38[1] = BYTE2(v18);
        v38[0] = HIBYTE(v18);
        if ( v17 == 255 )
        {
          V_LOCK(v10);
          ++v28;
          V_INT((int)v39, "chain", *(int *)(a1 + 248));
          v19 = logfmt_raw((int)v41, 0x1000u);
          V_UNLOCK(v19);
          v14 = g_zc;
          v15 = 20;
          v16 = 874;
        }
        else
        {
          V_LOCK(v10);
          V_INT((int)&v40, "chain", *(int *)(a1 + 248));
          v13 = logfmt_raw((int)v41, 0x1000u);
          V_UNLOCK(v13);
          v14 = g_zc;
          v15 = 100;
          v16 = 877;
        }
        ++v11;
        v12 += 3;
        v10 = zlog(
                v14,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/./backend/chip_setting.c",
                168,
                "ChipSetting_clock_delay_LTC_1489",
                32,
                v16,
                v15,
                v41);
      }
      while ( v30 > v11 );
    }
    else
    {
      v28 = 0;
    }
    free(ptr);
  }
  return v28;
}
