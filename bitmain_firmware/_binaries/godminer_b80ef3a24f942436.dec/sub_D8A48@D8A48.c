int __fastcall sub_D8A48(int a1, char a2, __int16 a3)
{
  int v4; // r7
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r5
  char *v9; // r4
  int v10; // r0
  char *ptr; // [sp+44h] [bp-1040h]
  int v13; // [sp+4Ch] [bp-1038h] BYREF
  __int64 v14; // [sp+50h] [bp-1034h] BYREF
  __int64 v15; // [sp+58h] [bp-102Ch]
  int v16; // [sp+60h] [bp-1024h] BYREF
  _BYTE v17[4100]; // [sp+80h] [bp-1004h] BYREF

  v14 = 0;
  v15 = 1;
  v4 = 0;
  v13 = 0;
  WORD1(v15) = a3;
  BYTE4(v15) = a2;
  ptr = (char *)calloc(0x60u, 1u);
  v5 = (*(int (__fastcall **)(int, __int64 *, int, char *, int *))(a1 + 300))(a1, &v14, 8, ptr, &v13);
  V_LOCK(v5);
  v6 = logfmt_raw((int)v17, 0x1000u);
  V_UNLOCK(v6);
  v7 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/backend/chip_setting.c",
         166,
         "ChipSetting_get_single_core_status_ETH",
         38,
         1981,
         40,
         v17);
  v8 = v13;
  if ( v13 > 0 )
  {
    v9 = ptr;
    do
    {
      V_LOCK(v7);
      ++v4;
      v9 += 12;
      V_INT((int)&v16, "chain", *(int *)(a1 + 248));
      v10 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v10);
      v7 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/chip_setting.c",
             166,
             "ChipSetting_get_single_core_status_ETH",
             38,
             1984,
             40,
             v17);
      v8 = v13;
    }
    while ( v13 > v4 );
  }
  free(ptr);
  return v8;
}
