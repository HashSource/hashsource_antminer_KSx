int __fastcall high_speed_tx_check(int a1)
{
  int v2; // r4
  int v3; // r0
  int i; // r4
  char v5; // r1
  int j; // r8
  _QWORD *v7; // r0
  void (__fastcall *v8)(int, __int64 *, int, _QWORD *, int *, int, int, _DWORD, int, int, int, int, const char *, const char *); // r5
  char *v9; // r4
  int *v10; // r6
  int *v11; // r12
  char *v12; // r5
  int v13; // r0
  int v14; // r1
  char *v15; // lr
  int v16; // r2
  int v17; // r3
  int v18; // r0
  char *v20; // r6
  char *v21; // r5
  int v22; // t1
  int v23; // r0
  char *v24; // r0
  int v25; // r2
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // [sp+4h] [bp-124h]
  int v30; // [sp+10h] [bp-118h]
  int v31; // [sp+14h] [bp-114h]
  int v32; // [sp+18h] [bp-110h]
  int v33; // [sp+1Ch] [bp-10Ch]
  const char *v34; // [sp+20h] [bp-108h]
  const char *v35; // [sp+24h] [bp-104h]
  int v36; // [sp+2Ch] [bp-FCh]
  int v38; // [sp+3Ch] [bp-ECh] BYREF
  _BYTE v39[16]; // [sp+40h] [bp-E8h] BYREF
  int v40; // [sp+50h] [bp-D8h]
  int v41; // [sp+54h] [bp-D4h]
  int v42; // [sp+58h] [bp-D0h]
  int v43; // [sp+5Ch] [bp-CCh]
  char v44; // [sp+63h] [bp-C5h] BYREF
  char v45; // [sp+64h] [bp-C4h] BYREF
  char v46; // [sp+A3h] [bp-85h] BYREF
  _BYTE s[132]; // [sp+A4h] [bp-84h] BYREF
  __int64 v48; // [sp+128h] [bp+0h] BYREF
  __int64 v49; // [sp+130h] [bp+8h]

  V_LOCK(a1);
  V_INT((int)v39, "chain");
  v35 = "high_speed_tx_check";
  v34 = "%s...";
  v2 = 0;
  v30 = v40;
  v31 = v41;
  v32 = v42;
  v33 = v43;
  v3 = logfmt_raw((int)&v48, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "high_speed_tx_check",
    19,
    321,
    60,
    &v48);
  do
  {
    sub_C9644(a1, v2, 19, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v5 = i;
    sub_C9644(a1, v5, 12, 3);
  }
  memset(s, 0, 0x81u);
  for ( j = 0; j != 8; ++j )
  {
    v48 = 0;
    v49 = 0;
    BYTE1(v49) = j;
    v38 = 0;
    v7 = malloc(0x4Cu);
    v8 = *(void (__fastcall **)(int, __int64 *, int, _QWORD *, int *, int, int, _DWORD, int, int, int, int, const char *, const char *))(a1 + 272);
    v9 = (char *)v7;
    *v7 = 0;
    v10 = (int *)((char *)v7 + 74);
    *(_QWORD *)((char *)v7 + 4) = 0;
    v8(a1, &v48, 1, v7, &v38, v29, 2000, 0, v30, v31, v32, v33, v34, v35);
    v11 = (int *)(v9 + 10);
    v12 = &v45;
    do
    {
      v13 = *v11;
      v11 += 4;
      v14 = *(v11 - 3);
      v15 = v12;
      v16 = *(v11 - 2);
      v12 += 16;
      v17 = *(v11 - 1);
      *(_DWORD *)v15 = v13;
      *((_DWORD *)v15 + 1) = v14;
      *((_DWORD *)v15 + 2) = v16;
      *((_DWORD *)v15 + 3) = v17;
    }
    while ( v11 != v10 );
    free(v9);
    if ( v38 )
    {
      v20 = &v44;
      v21 = s;
      v36 = 0;
      do
      {
        V_LOCK(v18);
        v22 = (unsigned __int8)*++v20;
        v23 = logfmt_raw((int)&v48, 0x1000u);
        V_UNLOCK(v23);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          187,
          "high_speed_tx_check",
          19,
          379,
          20,
          &v48);
        v24 = v21;
        v25 = v22;
        v21 += 2;
        if ( (unsigned __int8)(v22 - 1) > 0xFDu )
          ++v36;
        v18 = sprintf(v24, "%02x", v25);
      }
      while ( v20 != &v46 );
      V_LOCK(v18);
      v26 = logfmt_raw((int)&v48, 0x1000u);
      V_UNLOCK(v26);
      v27 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              187,
              "high_speed_tx_check",
              19,
              385,
              60,
              &v48);
      if ( v36 == 64 )
      {
        V_LOCK(v27);
        v28 = logfmt_raw((int)&v48, 0x1000u);
        V_UNLOCK(v28);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          187,
          "high_speed_tx_check",
          19,
          388,
          60,
          &v48);
        while ( 1 )
          ;
      }
    }
  }
  return 0;
}
