int __fastcall sub_D075C(int a1, int a2)
{
  int v2; // r5
  void *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  unsigned __int16 *v10; // r6
  unsigned int v11; // r9
  int v12; // r0
  int v13; // r0
  void *v14; // r0
  char *v15; // r5
  unsigned __int8 *v16; // r8
  int v17; // r6
  int v19; // r2
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int result; // r0
  int v24; // [sp+4h] [bp-1608h]
  int v25; // [sp+54h] [bp-15B8h]
  int v26; // [sp+60h] [bp-15ACh]
  unsigned __int16 *ptr; // [sp+64h] [bp-15A8h]
  int v28; // [sp+68h] [bp-15A4h]
  int v30; // [sp+74h] [bp-1598h] BYREF
  _QWORD v31[2]; // [sp+78h] [bp-1594h] BYREF
  char v32[8]; // [sp+88h] [bp-1584h] BYREF
  int v33; // [sp+A8h] [bp-1564h] BYREF
  char v34[8]; // [sp+C8h] [bp-1544h] BYREF
  int v35; // [sp+E8h] [bp-1524h] BYREF
  _BYTE s[256]; // [sp+108h] [bp-1504h] BYREF
  char v37[1024]; // [sp+208h] [bp-1404h] BYREF
  _BYTE v38[4100]; // [sp+608h] [bp-1004h] BYREF

  v2 = 0;
  v30 = 0;
  v5 = memset(s, 0, sizeof(s));
  V_LOCK(v5);
  v6 = logfmt_raw((int)v38, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_get_addr_DCR_1727",
    29,
    50,
    20,
    v38);
  v31[0] = 0;
  v31[1] = 1;
  ptr = (unsigned __int16 *)calloc(12 * a2, 1u);
  v7 = (*(int (__fastcall **)(int, _QWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 284))(
         a1,
         v31,
         a2,
         ptr,
         &v30,
         v24,
         1000,
         0);
  V_LOCK(v7);
  V_INT((int)v32, "chain");
  v8 = logfmt_raw((int)v38, 0x1000u);
  V_UNLOCK(v8);
  v9 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
         171,
         "ChipSetting_get_addr_DCR_1727",
         29,
         60,
         60,
         v38);
  if ( v30 > 0 )
  {
    v26 = 0;
    v10 = ptr;
    do
    {
      while ( 1 )
      {
        v11 = *v10;
        V_LOCK(v9);
        ++v2;
        v12 = logfmt_raw((int)v38, 0x1000u);
        V_UNLOCK(v12);
        v9 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
               171,
               "ChipSetting_get_addr_DCR_1727",
               29,
               64,
               20,
               v38);
        if ( *(_DWORD *)(a1 + 324) == (unsigned __int16)__rev16(v11) )
          break;
        v10 += 6;
        if ( v30 <= v2 )
          goto LABEL_7;
      }
      v10 += 6;
      ++v26;
      v28 = sub_26F0D0(*((unsigned __int8 *)v10 - 8), *(_DWORD *)(a1 + 428));
      ++s[v28];
      V_LOCK(v28);
      V_INT((int)&v33, "chain");
      v13 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v13);
      v9 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
             171,
             "ChipSetting_get_addr_DCR_1727",
             29,
             70,
             20,
             v38);
    }
    while ( v30 > v2 );
LABEL_7:
    v2 = v26;
  }
  else
  {
    v26 = 0;
  }
  v14 = memset(v37, 0, sizeof(v37));
  v37[0] = 10;
  if ( a2 )
  {
    v25 = v2;
    v15 = v37;
    v16 = s;
    v17 = 0;
    do
    {
      while ( *v16++ )
      {
        if ( a2 == ++v17 )
          goto LABEL_13;
      }
      v19 = v17++;
      v14 = (void *)sprintf(v15, "%03d ", v19);
      v15 += 4;
    }
    while ( a2 != v17 );
LABEL_13:
    v2 = v25;
  }
  if ( *(_DWORD *)(a1 + 332) > v26 )
  {
    V_LOCK(v14);
    V_INT((int)v34, "chain");
    V_STR((int)&v35, "error");
    v20 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v20);
    v21 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
            171,
            "ChipSetting_get_addr_DCR_1727",
            29,
            95,
            100,
            v38);
    V_LOCK(v21);
    v22 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
      171,
      "ChipSetting_get_addr_DCR_1727",
      29,
      96,
      60,
      v38);
  }
  free(ptr);
  result = v30;
  *(_DWORD *)(a1 + 424) = v2;
  return result;
}
