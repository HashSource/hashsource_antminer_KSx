int __fastcall high_speed_tx_check(int a1)
{
  int v2; // r4
  int i; // r4
  char v4; // r1
  int j; // r8
  _QWORD *v6; // r0
  void (__fastcall *v7)(int, __int64 *, int, _QWORD *, int *, int, int, _DWORD); // r5
  char *v8; // r4
  int *v9; // r6
  int *v10; // r12
  char *v11; // r5
  int v12; // r0
  int v13; // r1
  char *v14; // lr
  int v15; // r2
  int v16; // r3
  char *v18; // r6
  char *v19; // r5
  int v20; // t1
  char *v21; // r0
  int v22; // r2
  int v23; // [sp+4h] [bp-124h]
  int v24; // [sp+2Ch] [bp-FCh]
  int v26; // [sp+3Ch] [bp-ECh] BYREF
  _DWORD v27[7]; // [sp+40h] [bp-E8h] BYREF
  int v28; // [sp+5Ch] [bp-CCh]
  char v29; // [sp+63h] [bp-C5h] BYREF
  char v30; // [sp+64h] [bp-C4h] BYREF
  char v31; // [sp+A3h] [bp-85h] BYREF
  _BYTE s[132]; // [sp+A4h] [bp-84h] BYREF
  __int64 v33; // [sp+128h] [bp+0h] BYREF
  __int64 v34; // [sp+130h] [bp+8h]

  V_LOCK();
  V_INT((int)v27, "chain", *(int *)(a1 + 232));
  v2 = 0;
  logfmt_raw(
    (char *)&v33,
    0x1000u,
    0,
    v28,
    v27[0],
    v27[1],
    v27[2],
    v27[3],
    v27[4],
    v27[5],
    v27[6],
    v28,
    "%s...",
    "high_speed_tx_check");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "high_speed_tx_check",
    19,
    321,
    60,
    &v33);
  do
  {
    sub_C8E84(a1, v2, 19, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v4 = i;
    sub_C8E84(a1, v4, 12, 3);
  }
  memset(s, 0, 0x81u);
  for ( j = 0; j != 8; ++j )
  {
    v33 = 0;
    v34 = 0;
    BYTE1(v34) = j;
    v26 = 0;
    v6 = malloc(0x4Cu);
    v7 = *(void (__fastcall **)(int, __int64 *, int, _QWORD *, int *, int, int, _DWORD))(a1 + 272);
    v8 = (char *)v6;
    *v6 = 0;
    v9 = (int *)((char *)v6 + 74);
    *(_QWORD *)((char *)v6 + 4) = 0;
    v7(a1, &v33, 1, v6, &v26, v23, 2000, 0);
    v10 = (int *)(v8 + 10);
    v11 = &v30;
    do
    {
      v12 = *v10;
      v10 += 4;
      v13 = *(v10 - 3);
      v14 = v11;
      v15 = *(v10 - 2);
      v11 += 16;
      v16 = *(v10 - 1);
      *(_DWORD *)v14 = v12;
      *((_DWORD *)v14 + 1) = v13;
      *((_DWORD *)v14 + 2) = v15;
      *((_DWORD *)v14 + 3) = v16;
    }
    while ( v10 != v9 );
    free(v8);
    if ( v26 )
    {
      v18 = &v29;
      v19 = s;
      v24 = 0;
      do
      {
        V_LOCK();
        v20 = (unsigned __int8)*++v18;
        logfmt_raw((char *)&v33, 0x1000u, 0, "[DAG] for chip %1d: %02x", j, v20);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          187,
          "high_speed_tx_check",
          19,
          379,
          20,
          &v33);
        v21 = v19;
        v22 = v20;
        v19 += 2;
        if ( (unsigned __int8)(v20 - 1) > 0xFDu )
          ++v24;
        sprintf(v21, "%02x", v22);
      }
      while ( v18 != &v31 );
      V_LOCK();
      logfmt_raw((char *)&v33, 0x1000u, 0, "counter: %d, [DAG] for chip %1d: %s", v24, j, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
        187,
        "high_speed_tx_check",
        19,
        385,
        60,
        &v33);
      if ( v24 == 64 )
      {
        V_LOCK();
        logfmt_raw((char *)&v33, 0x1000u, 0, "check high speed baud tx failed!!!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          187,
          "high_speed_tx_check",
          19,
          388,
          60,
          &v33);
        while ( 1 )
          ;
      }
    }
  }
  return 0;
}
