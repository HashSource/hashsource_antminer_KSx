int __fastcall sub_D2588(int a1, int a2, __int16 a3, void *a4)
{
  int v4; // r4
  char v7; // r9
  int v8; // r0
  int v9; // r0
  int v10; // r10
  char *v11; // r4
  int v12; // r6
  int v13; // r0
  int v15; // [sp+4h] [bp-1088h]
  char *src; // [sp+44h] [bp-1048h]
  int n; // [sp+4Ch] [bp-1040h]
  int v19; // [sp+54h] [bp-1038h] BYREF
  __int64 v20; // [sp+58h] [bp-1034h] BYREF
  __int64 v21; // [sp+60h] [bp-102Ch]
  int v22; // [sp+68h] [bp-1024h] BYREF
  _BYTE v23[4100]; // [sp+88h] [bp-1004h] BYREF

  v4 = *(_DWORD *)(a1 + 424);
  if ( a2 == 255 )
    v4 *= 16;
  v7 = a2;
  v19 = 0;
  V_LOCK(a1);
  v8 = logfmt_raw((int)v23, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_get_core_status_ETH",
    31,
    1483,
    20,
    v23);
  v20 = 0;
  v21 = 1;
  n = 12 * v4;
  WORD1(v21) = a3;
  BYTE4(v21) = v7;
  src = (char *)calloc(12 * v4, 1u);
  v9 = (*(int (__fastcall **)(int, __int64 *, int, char *, int *, int, int, _DWORD))(a1 + 296))(
         a1,
         &v20,
         v4,
         src,
         &v19,
         v15,
         2000,
         0);
  v10 = v19;
  if ( v19 > 0 )
  {
    v11 = src;
    v12 = 0;
    do
    {
      V_LOCK(v9);
      ++v12;
      v11 += 12;
      V_INT((int)&v22, "chain");
      v13 = logfmt_raw((int)v23, 0x1000u);
      V_UNLOCK(v13);
      v9 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
             171,
             "ChipSetting_get_core_status_ETH",
             31,
             1495,
             20,
             v23);
      v10 = v19;
    }
    while ( v19 > v12 );
  }
  if ( a4 )
    memcpy(a4, src, n);
  free(src);
  return v10;
}
