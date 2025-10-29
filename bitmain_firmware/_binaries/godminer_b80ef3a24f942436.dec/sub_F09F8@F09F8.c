int __fastcall sub_F09F8(int a1, char a2)
{
  int v2; // r5
  int v4; // r6
  _DWORD *v5; // r9
  _DWORD *v6; // r10
  int v7; // r0
  _DWORD *v8; // r5
  int v9; // r0
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r0
  int v14; // r0
  int v15; // r4
  int v18; // [sp+40h] [bp-105Ch] BYREF
  int v19; // [sp+44h] [bp-1058h]
  __int64 v20; // [sp+48h] [bp-1054h] BYREF
  __int64 v21; // [sp+50h] [bp-104Ch]
  _BYTE v22[8]; // [sp+58h] [bp-1044h] BYREF
  int v23; // [sp+78h] [bp-1024h] BYREF
  _BYTE v24[4100]; // [sp+98h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 336);
  v20 = 0;
  v21 = 1835009;
  v4 = 0;
  LOWORD(v5) = (unsigned __int16)&g_zc;
  v18 = 0;
  v6 = calloc(12 * v2, 1u);
  v7 = (*(int (__fastcall **)(int, __int64 *, int, _DWORD *, int *))(a1 + 284))(a1, &v20, v2, v6, &v18);
  if ( v18 > 0 )
  {
    HIWORD(v5) = (unsigned int)&g_zc >> 16;
    v8 = v6;
    do
    {
      while ( 1 )
      {
        ++v4;
        if ( *((_WORD *)v8 + 3) == 28 )
          break;
        v8 += 3;
        if ( v18 <= v4 )
          goto LABEL_7;
      }
      V_LOCK(v7);
      v8 += 3;
      V_INT((int)v22, "chain", *(int *)(a1 + 248));
      v9 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v9);
      v7 = zlog(
             *v5,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/chip_setting.c",
             166,
             "ChipSetting_pll_sel_KDA_2110",
             28,
             295,
             20,
             v24);
    }
    while ( v18 > v4 );
  }
  else
  {
    HIWORD(v5) = (unsigned int)&g_zc >> 16;
  }
LABEL_7:
  v10 = *v6;
  v11 = *v6 >> 8;
  v12 = HIWORD(*v6);
  HIBYTE(v19) = *v6;
  BYTE2(v19) = v11;
  BYTE1(v19) = v12;
  LOBYTE(v19) = HIBYTE(v10);
  free(v6);
  LODWORD(v21) = 1835009;
  LODWORD(v20) = v19 & 0xFFFFFFFB | (4 * a2) & 4;
  V_LOCK(v13);
  V_INT((int)&v23, "chain", *(int *)(a1 + 248));
  v14 = logfmt_raw((int)v24, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_pll_sel_KDA_2110",
    28,
    307,
    40,
    v24);
  v15 = (*(int (__fastcall **)(int, __int64 *))(a1 + 264))(a1, &v20);
  usleep(0x2710u);
  return v15;
}
