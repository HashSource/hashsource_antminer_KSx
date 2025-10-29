int __fastcall sub_CFE5C(int a1, char a2, int a3, __int16 a4, void *a5)
{
  int v5; // r5
  int v6; // r10
  char v7; // r9
  int v9; // r2
  int v11; // r0
  char *v12; // r0
  int (__fastcall *v13)(int, __int64 *, int, char *, int *, int, int, _DWORD); // r9
  int v14; // r0
  int v15; // r10
  char *v16; // r8
  int v17; // r0
  int v19; // [sp+4h] [bp-1088h]
  char *src; // [sp+48h] [bp-1044h]
  size_t nmemb; // [sp+4Ch] [bp-1040h]
  int v23; // [sp+54h] [bp-1038h] BYREF
  __int64 v24; // [sp+58h] [bp-1034h] BYREF
  __int64 v25; // [sp+60h] [bp-102Ch]
  int v26; // [sp+68h] [bp-1024h] BYREF
  _BYTE v27[4088]; // [sp+88h] [bp-1004h] BYREF

  v5 = 0;
  if ( a3 == 255 )
    v6 = 16;
  else
    v6 = 1;
  v7 = a3;
  if ( a3 == 255 )
    v9 = 192;
  else
    v9 = 12;
  nmemb = v9;
  v23 = 0;
  V_LOCK(a1);
  v11 = logfmt_raw((int)v27, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_get_single_chip_core_status_ETH",
    43,
    1485,
    20,
    v27);
  v24 = 0;
  v25 = 0;
  BYTE1(v25) = a2;
  v12 = (char *)calloc(nmemb, 1u);
  BYTE4(v25) = v7;
  v13 = *(int (__fastcall **)(int, __int64 *, int, char *, int *, int, int, _DWORD))(a1 + 276);
  WORD1(v25) = a4;
  src = v12;
  v14 = v13(a1, &v24, v6, v12, &v23, v19, 2000, 0);
  v15 = v23;
  if ( v23 > 0 )
  {
    v16 = src;
    do
    {
      V_LOCK(v14);
      ++v5;
      v16 += 12;
      V_INT((int)&v26, "chain");
      v17 = logfmt_raw((int)v27, 0x1000u);
      V_UNLOCK(v17);
      v14 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/chip_setting.c",
              166,
              "ChipSetting_get_single_chip_core_status_ETH",
              43,
              1497,
              20,
              v27);
      v15 = v23;
    }
    while ( v23 > v5 );
  }
  if ( a5 )
    memcpy(a5, src, nmemb);
  free(src);
  return v15;
}
