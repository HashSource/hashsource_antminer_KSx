int __fastcall sub_C1414(int a1, int a2)
{
  int v2; // r5
  int v4; // r6
  _DWORD *v5; // r8
  _DWORD *v6; // r9
  _DWORD *v7; // r5
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r4
  int v14; // [sp+40h] [bp-105Ch] BYREF
  int v15; // [sp+44h] [bp-1058h]
  __int64 v16; // [sp+48h] [bp-1054h] BYREF
  __int64 v17; // [sp+50h] [bp-104Ch]
  _DWORD v18[7]; // [sp+58h] [bp-1044h] BYREF
  int v19; // [sp+74h] [bp-1028h]
  _DWORD v20[7]; // [sp+78h] [bp-1024h] BYREF
  int v21; // [sp+94h] [bp-1008h]
  char v22[4100]; // [sp+98h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 312);
  v16 = 0;
  v17 = 1835009;
  v4 = 0;
  v14 = 0;
  LOWORD(v5) = (unsigned __int16)&g_zc;
  v6 = calloc(12 * v2, 1u);
  (*(void (__fastcall **)(int, __int64 *, int, _DWORD *, int *))(a1 + 268))(a1, &v16, v2, v6, &v14);
  if ( v14 > 0 )
  {
    v7 = v6;
    HIWORD(v5) = (unsigned int)&g_zc >> 16;
    do
    {
      while ( 1 )
      {
        ++v4;
        if ( *((_WORD *)v7 + 3) == 28 )
          break;
        v7 += 3;
        if ( v14 <= v4 )
          goto LABEL_7;
      }
      V_LOCK();
      v7 += 3;
      V_INT((int)v18, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v22,
        0x1000u,
        0,
        v19,
        v18[0],
        v18[1],
        v18[2],
        v18[3],
        v18[4],
        v18[5],
        v18[6],
        v19,
        "[MISC CTRL] asic %02x, reg %02x state %08x",
        *((unsigned __int8 *)v7 - 8),
        *((unsigned __int16 *)v7 - 3),
        *(v7 - 3));
      V_UNLOCK();
      zlog(
        *v5,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_setting.c",
        166,
        "ChipSetting_pll_sel_DASH_1766",
        29,
        254,
        20,
        v22);
    }
    while ( v14 > v4 );
  }
  else
  {
    HIWORD(v5) = (unsigned int)&g_zc >> 16;
  }
LABEL_7:
  v8 = *v6;
  v9 = *v6 >> 8;
  v10 = HIWORD(*v6);
  HIBYTE(v15) = *v6;
  BYTE2(v15) = v9;
  BYTE1(v15) = v10;
  LOBYTE(v15) = HIBYTE(v8);
  free(v6);
  LODWORD(v17) = 1835009;
  LODWORD(v16) = v15 & 0xFFFFFFFB | (4 * (_BYTE)a2) & 4;
  V_LOCK();
  V_INT((int)v20, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v22,
    0x1000u,
    0,
    v21,
    v20[0],
    v20[1],
    v20[2],
    v20[3],
    v20[4],
    v20[5],
    v20[6],
    v21,
    "set pll sel %u %08x",
    a2,
    (_DWORD)v16);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_pll_sel_DASH_1766",
    29,
    266,
    40,
    v22);
  v11 = (*(int (__fastcall **)(int, __int64 *))(a1 + 248))(a1, &v16);
  usleep(0x2710u);
  return v11;
}
