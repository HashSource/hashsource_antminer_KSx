int __fastcall high_speed_tx_check_eth(int a1)
{
  int v2; // r4
  int v3; // r0
  int i; // r4
  char v5; // r1
  const char *v6; // r9
  int v7; // r2
  const char *v8; // r3
  int v9; // r9
  const char *v10; // r11
  _QWORD *v11; // r0
  void (__fastcall *v12)(int, _DWORD *, int, _QWORD *, int *, int, int, _DWORD, int, int, int, int, const char *, const char *); // r5
  char *v13; // r4
  int *v14; // r6
  int *v15; // r12
  int *v16; // r5
  int v17; // r0
  int v18; // r1
  int *v19; // lr
  int v20; // r2
  int v21; // r3
  int v22; // r0
  char *v24; // r6
  char *v25; // r5
  int v26; // t1
  int v27; // r0
  char *v28; // r0
  int v29; // r2
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // [sp+4h] [bp-1148h]
  int v34; // [sp+10h] [bp-113Ch]
  int v35; // [sp+14h] [bp-1138h]
  int v36; // [sp+18h] [bp-1134h]
  int v37; // [sp+1Ch] [bp-1130h]
  const char *v38; // [sp+20h] [bp-112Ch]
  const char *v39; // [sp+24h] [bp-1128h]
  int v40; // [sp+28h] [bp-1124h]
  int v41; // [sp+30h] [bp-111Ch]
  int *v43; // [sp+38h] [bp-1114h]
  int v44; // [sp+44h] [bp-1108h] BYREF
  _DWORD v45[6]; // [sp+48h] [bp-1104h] BYREF
  _DWORD v46[8]; // [sp+60h] [bp-10ECh] BYREF
  char v47; // [sp+83h] [bp-10C9h] BYREF
  int v48; // [sp+84h] [bp-10C8h] BYREF
  char v49; // [sp+C3h] [bp-1089h] BYREF
  _BYTE v50[132]; // [sp+C4h] [bp-1088h] BYREF
  _DWORD v51[2]; // [sp+148h] [bp-1004h] BYREF
  __int64 v52; // [sp+150h] [bp-FFCh]

  V_LOCK(a1);
  V_INT((int)v46, "chain", *(int *)(a1 + 248));
  v39 = "high_speed_tx_check_eth";
  v38 = "%s...";
  v2 = 0;
  v34 = v46[4];
  v35 = v46[5];
  v36 = v46[6];
  v37 = v46[7];
  v3 = logfmt_raw((int)v51, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "high_speed_tx_check_eth",
    23,
    329,
    60,
    v51);
  do
  {
    sub_D1D3C(a1, v2, 19, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v5 = i;
    sub_D1D3C(a1, v5, 12, 3);
  }
  v43 = v45;
  memset(v50, 0, 0x81u);
  v6 = "DAG READ for chip %1d: %02x";
  v45[0] = 0;
  v45[1] = 4;
  v45[2] = 7000000;
  v45[3] = 7000004;
  v45[4] = 14090220;
  v45[5] = 14090224;
  do
  {
    v7 = *v43++;
    v8 = v6;
    v9 = 0;
    v10 = v8;
    v41 = v7;
    do
    {
      v51[0] = 0;
      v52 = 0;
      BYTE1(v52) = v9;
      v51[1] = v41;
      v44 = 0;
      v11 = malloc(0x4Cu);
      v12 = *(void (__fastcall **)(int, _DWORD *, int, _QWORD *, int *, int, int, _DWORD, int, int, int, int, const char *, const char *))(a1 + 288);
      v13 = (char *)v11;
      *v11 = 0;
      v14 = (int *)((char *)v11 + 74);
      *(_QWORD *)((char *)v11 + 4) = 0;
      v12(a1, v51, 1, v11, &v44, v33, 2000, 0, v34, v35, v36, v37, v38, v39);
      v15 = (int *)(v13 + 10);
      v16 = &v48;
      do
      {
        v17 = *v15;
        v15 += 4;
        v18 = *(v15 - 3);
        v19 = v16;
        v20 = *(v15 - 2);
        v16 += 4;
        v21 = *(v15 - 1);
        *v19 = v17;
        v19[1] = v18;
        v19[2] = v20;
        v19[3] = v21;
      }
      while ( v15 != v14 );
      free(v13);
      if ( v44 )
      {
        v24 = &v47;
        v25 = v50;
        v40 = 0;
        do
        {
          V_LOCK(v22);
          v26 = (unsigned __int8)*++v24;
          v27 = logfmt_raw((int)v51, 0x1000u);
          V_UNLOCK(v27);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            187,
            "high_speed_tx_check_eth",
            23,
            387,
            20,
            v51);
          v28 = v25;
          v29 = v26;
          v25 += 2;
          if ( (unsigned __int8)(v26 - 1) > 0xFDu )
            ++v40;
          v22 = sprintf(v28, "%02x", v29);
        }
        while ( v24 != &v49 );
        V_LOCK(v22);
        v30 = logfmt_raw((int)v51, 0x1000u);
        V_UNLOCK(v30);
        v31 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                187,
                "high_speed_tx_check_eth",
                23,
                394,
                60,
                v51);
        if ( v40 == 64 )
        {
          V_LOCK(v31);
          v32 = logfmt_raw((int)v51, 0x1000u);
          V_UNLOCK(v32);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            187,
            "high_speed_tx_check_eth",
            23,
            397,
            60,
            v51);
          while ( 1 )
            ;
        }
      }
      ++v9;
    }
    while ( v9 != 8 );
    v6 = v10;
  }
  while ( v43 != v46 );
  return 0;
}
