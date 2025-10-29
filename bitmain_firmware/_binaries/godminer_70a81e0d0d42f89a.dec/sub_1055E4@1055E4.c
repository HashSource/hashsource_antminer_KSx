int __fastcall sub_1055E4(int a1, char a2, int a3, __int16 a4, void *a5)
{
  bool v5; // zf
  char v7; // r4
  size_t v8; // r2
  int v9; // r9
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r10
  char *v15; // r4
  int v16; // r0
  char *src; // [sp+48h] [bp-1044h]
  size_t n; // [sp+4Ch] [bp-1040h]
  int v20; // [sp+54h] [bp-1038h] BYREF
  __int64 v21; // [sp+58h] [bp-1034h] BYREF
  __int64 v22; // [sp+60h] [bp-102Ch]
  int v23; // [sp+68h] [bp-1024h] BYREF
  _BYTE v24[4088]; // [sp+88h] [bp-1004h] BYREF

  v5 = a3 == 255;
  v7 = a3;
  if ( a3 == 255 )
    v8 = 768;
  else
    v8 = 12;
  v21 = 0;
  v22 = 0;
  BYTE1(v22) = a2;
  if ( v5 )
    v9 = 64;
  else
    v9 = 1;
  v10 = 0;
  n = v8;
  v20 = 0;
  WORD1(v22) = a4;
  BYTE4(v22) = v7;
  src = (char *)calloc(v8, 1u);
  v11 = (*(int (__fastcall **)(int, __int64 *, int, char *, int *))(a1 + 296))(a1, &v21, v9, src, &v20);
  V_LOCK(v11);
  v12 = logfmt_raw((int)v24, 0x1000u);
  V_UNLOCK(v12);
  v13 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
          171,
          "ChipSetting_get_single_chip_core_status_RVN",
          43,
          1652,
          40,
          v24);
  v14 = v20;
  if ( v20 > 0 )
  {
    v15 = src;
    do
    {
      V_LOCK(v13);
      ++v10;
      v15 += 12;
      V_INT((int)&v23, "chain");
      v16 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v16);
      v13 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
              171,
              "ChipSetting_get_single_chip_core_status_RVN",
              43,
              1655,
              40,
              v24);
      v14 = v20;
    }
    while ( v20 > v10 );
  }
  if ( a5 )
    memcpy(a5, src, n);
  free(src);
  return v14;
}
