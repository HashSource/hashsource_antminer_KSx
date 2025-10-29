int __fastcall sub_DF464(int a1, int a2)
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
  int v23; // r0
  int v24; // r0
  int result; // r0
  int v26; // [sp+4h] [bp-1608h]
  int v27; // [sp+54h] [bp-15B8h]
  int v28; // [sp+60h] [bp-15ACh]
  unsigned __int16 *ptr; // [sp+64h] [bp-15A8h]
  int v30; // [sp+68h] [bp-15A4h]
  int v32; // [sp+74h] [bp-1598h] BYREF
  _QWORD v33[2]; // [sp+78h] [bp-1594h] BYREF
  char v34[8]; // [sp+88h] [bp-1584h] BYREF
  int v35; // [sp+A8h] [bp-1564h] BYREF
  char v36[8]; // [sp+C8h] [bp-1544h] BYREF
  int v37; // [sp+E8h] [bp-1524h] BYREF
  _BYTE s[256]; // [sp+108h] [bp-1504h] BYREF
  char v39[1024]; // [sp+208h] [bp-1404h] BYREF
  _BYTE v40[4100]; // [sp+608h] [bp-1004h] BYREF

  v2 = 0;
  v32 = 0;
  v5 = memset(s, 0, sizeof(s));
  V_LOCK(v5);
  v6 = logfmt_raw((int)v40, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_get_addr_KAS_2380",
    29,
    50,
    20,
    v40);
  v33[0] = 0;
  v33[1] = 1;
  ptr = (unsigned __int16 *)calloc(12 * a2, 1u);
  v7 = (*(int (__fastcall **)(int, _QWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 268))(
         a1,
         v33,
         a2,
         ptr,
         &v32,
         v26,
         3000,
         0);
  V_LOCK(v7);
  V_INT((int)v34, "chain");
  v8 = logfmt_raw((int)v40, 0x1000u);
  V_UNLOCK(v8);
  v9 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/backend/chip_setting.c",
         166,
         "ChipSetting_get_addr_KAS_2380",
         29,
         60,
         60,
         v40);
  if ( v32 > 0 )
  {
    v28 = 0;
    v10 = ptr;
    do
    {
      while ( 1 )
      {
        v11 = *v10;
        V_LOCK(v9);
        ++v2;
        v12 = logfmt_raw((int)v40, 0x1000u);
        V_UNLOCK(v12);
        v9 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/chip_setting.c",
               166,
               "ChipSetting_get_addr_KAS_2380",
               29,
               64,
               20,
               v40);
        if ( *(_DWORD *)(a1 + 304) == (unsigned __int16)__rev16(v11) )
          break;
        v10 += 6;
        if ( v32 <= v2 )
          goto LABEL_7;
      }
      v10 += 6;
      ++v28;
      v30 = sub_25BD18(*((unsigned __int8 *)v10 - 8), *(_DWORD *)(a1 + 404));
      ++s[v30];
      V_LOCK(v30);
      V_INT((int)&v35, "chain");
      v13 = logfmt_raw((int)v40, 0x1000u);
      V_UNLOCK(v13);
      v9 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/chip_setting.c",
             166,
             "ChipSetting_get_addr_KAS_2380",
             29,
             70,
             20,
             v40);
    }
    while ( v32 > v2 );
LABEL_7:
    v2 = v28;
  }
  else
  {
    v28 = 0;
  }
  v14 = memset(v39, 0, sizeof(v39));
  v39[0] = 10;
  if ( a2 )
  {
    v27 = v2;
    v15 = v39;
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
    v2 = v27;
  }
  if ( *(_DWORD *)(a1 + 312) > v28 )
  {
    V_LOCK(v14);
    V_INT((int)v36, "chain");
    V_STR((int)&v37, "error");
    v20 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v20);
    v21 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/chip_setting.c",
            166,
            "ChipSetting_get_addr_KAS_2380",
            29,
            96,
            100,
            v40);
    V_LOCK(v21);
    v22 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v22);
    v23 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/chip_setting.c",
            166,
            "ChipSetting_get_addr_KAS_2380",
            29,
            97,
            100,
            v40);
    V_LOCK(v23);
    v24 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_get_addr_KAS_2380",
      29,
      98,
      40,
      v40);
  }
  free(ptr);
  result = v32;
  *(_DWORD *)(a1 + 400) = v2;
  return result;
}
