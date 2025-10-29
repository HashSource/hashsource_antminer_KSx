unsigned int __fastcall sub_FA49C(int a1, int a2, void *a3)
{
  int v5; // r5
  unsigned __int16 *v6; // r8
  int v7; // r0
  unsigned int v8; // r10
  unsigned __int16 *v9; // r4
  int v10; // r0
  unsigned int v11; // r3
  int v14; // [sp+44h] [bp-1038h] BYREF
  __int64 v15; // [sp+48h] [bp-1034h] BYREF
  __int64 v16; // [sp+50h] [bp-102Ch]
  char v17[32]; // [sp+58h] [bp-1024h] BYREF
  _BYTE v18[4100]; // [sp+78h] [bp-1004h] BYREF

  v15 = 0;
  v16 = 1;
  v5 = 0;
  WORD1(v16) = a2;
  v14 = 0;
  v6 = (unsigned __int16 *)calloc(0x60u, 1u);
  v7 = (*(int (__fastcall **)(int, __int64 *, int, unsigned __int16 *, int *))(a1 + 284))(a1, &v15, 8, v6, &v14);
  v8 = v14;
  if ( v14 > 0 )
  {
    v9 = v6;
    do
    {
      while ( 1 )
      {
        ++v5;
        if ( v9[3] == a2 )
          break;
        v8 = v14;
        v9 += 6;
        if ( v14 <= v5 )
          goto LABEL_6;
      }
      V_LOCK(v7);
      v9 += 6;
      V_INT((int)v17, "chain");
      v10 = logfmt_raw((int)v18, 0x1000u);
      V_UNLOCK(v10);
      v7 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
             171,
             "ChipSetting_get_chip_status_RVN",
             31,
             1275,
             20,
             v18);
      v8 = v14;
    }
    while ( v14 > v5 );
  }
LABEL_6:
  if ( a3 )
  {
    v11 = *(_DWORD *)(a1 + 424);
    if ( v8 < v11 )
      v11 = v8;
    memcpy(a3, v6, 12 * v11);
  }
  free(v6);
  return v8;
}
