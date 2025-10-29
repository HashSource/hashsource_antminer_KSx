int __fastcall work_2_packet_ckb(int a1, __int64 *a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r4
  int v6; // r5
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v11; // r8
  int v12; // r1
  _DWORD *v13; // r2
  int v14; // t1
  int v15; // lr
  int v16; // r12
  int v17; // r0
  int v18; // r0
  int v19; // lr
  int v20; // r12
  int *v21; // r2
  int v22; // r4
  int v23; // lr
  int v24; // r12
  int v25; // r1
  int v26; // r3
  char v27; // r2
  _BYTE *v28; // r1
  _DWORD *v29; // r3
  int v30; // r12
  int v31; // r0
  int v32; // r2
  int v33; // r4
  _DWORD *v34; // r3
  _DWORD *v35; // r2
  int v36; // r12
  int v37; // r0
  int v38; // r1
  int v39; // r0
  int v40; // r3
  int v41; // r0
  void (__fastcall *v42)(int, _DWORD *); // r3
  int v44; // r0
  int v45; // r5
  int v46; // r6
  int v47; // t1
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  void *s2; // [sp+10h] [bp-201Ch]
  _DWORD *v53; // [sp+18h] [bp-2014h]
  char v55[4056]; // [sp+28h] [bp-2004h] BYREF
  _DWORD v56[2]; // [sp+1028h] [bp-1004h] BYREF
  __int64 v57; // [sp+1030h] [bp-FFCh]

  v5 = *(_DWORD *)(a1 + 824);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v6 = v5 + 12288;
  if ( *(_DWORD *)(a1 + 492) == 1 )
    a3[2] = 48;
  v9 = a2;
  v10 = *((_DWORD *)a2 + 22);
  v11 = *a2;
  v12 = *(unsigned __int8 *)(v5 + 15872);
  s2 = a2 + 5;
  *(_QWORD *)(v5 + 8 * v12) = v11;
  *(_DWORD *)(v5 + 4 * (v12 + 2816)) = v10;
  v13 = (_DWORD *)(v5 + 32 * (v12 + 368));
  v14 = v9[23];
  v9 += 23;
  v15 = v9[1];
  v16 = v9[2];
  v17 = v9[3];
  *v13 = v14;
  v13[1] = v15;
  v13[2] = v16;
  v13[3] = v17;
  v18 = v9[7];
  v19 = v9[5];
  v20 = v9[6];
  v13[4] = v9[4];
  v13[5] = v19;
  v13[6] = v20;
  v13[7] = v18;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 15872) + 32)), (const char *)a2 + 8);
  v21 = (int *)(a2 + 5);
  v22 = v5 + 48 * *(unsigned __int8 *)(v5 + 15872) + 5120;
  do
  {
    v23 = *v21;
    v21 += 4;
    v24 = *(v21 - 3);
    v22 += 16;
    v25 = *(v21 - 2);
    v26 = *(v21 - 1);
    *(_DWORD *)(v22 - 16) = v23;
    *(_DWORD *)(v22 - 12) = v24;
    *(_DWORD *)(v22 - 8) = v25;
    *(_DWORD *)(v22 - 4) = v26;
  }
  while ( v21 != (int *)(a2 + 11) );
  v27 = *(_BYTE *)(v6 + 3584);
  v28 = a3 + 4;
  v29 = a2 + 5;
  a3[3] = v27;
  v53 = a2 + 11;
  *(_BYTE *)(v6 + 3584) = (v27 + 1) & 0x7F;
  do
  {
    v29 += 4;
    v28 += 16;
    v30 = *(v29 - 3);
    v31 = *(v29 - 2);
    v32 = *(v29 - 1);
    *((_DWORD *)v28 - 4) = *(v29 - 4);
    *((_DWORD *)v28 - 3) = v30;
    *((_DWORD *)v28 - 2) = v31;
    *((_DWORD *)v28 - 1) = v32;
  }
  while ( v29 != v53 );
  v33 = memcmp(&last_header_ckb, s2, 0x30u);
  if ( !v33 )
  {
    V_LOCK(0);
    v44 = logfmt_raw((int)v56, 0x1000u);
    V_UNLOCK(v44);
    v45 = (int)a2 + 39;
    v46 = (int)a2 + 87;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ckb_2042/backend_ckb_2042.c",
      192,
      "work_2_packet_ckb",
      17,
      119,
      80,
      v56);
    do
    {
      v47 = *(unsigned __int8 *)++v45;
      v48 = snprintf(&v55[v33], 4096 - v33, "%02x ", v47);
      v33 += 3;
    }
    while ( v45 != v46 );
    V_LOCK(v48);
    v49 = logfmt_raw((int)v56, 0x1000u);
    V_UNLOCK(v49);
    v50 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_ckb_2042/backend_ckb_2042.c",
            192,
            "dump_work_ckb",
            13,
            86,
            20,
            v56);
    V_LOCK(v50);
    v51 = logfmt_raw((int)v56, 0x1000u);
    V_UNLOCK(v51);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ckb_2042/backend_ckb_2042.c",
      192,
      "dump_work_ckb",
      13,
      87,
      20,
      v56);
  }
  v34 = s2;
  v35 = &last_header_ckb;
  do
  {
    v34 += 4;
    v35 += 4;
    v36 = *(v34 - 3);
    v37 = *(v34 - 2);
    v38 = *(v34 - 1);
    *(v35 - 4) = *(v34 - 4);
    *(v35 - 3) = v36;
    *(v35 - 2) = v37;
    *(v35 - 1) = v38;
  }
  while ( v34 != v53 );
  v39 = BM_CRC16(a3 + 2, 50);
  a3[53] = v39;
  a3[52] = BYTE1(v39);
  v40 = *(unsigned __int8 *)(a1 + 253);
  *a4 = 54;
  if ( v40 && *(_BYTE *)(a1 + 254) )
  {
    memset(*(void **)(a1 + 456), 0, 48 * *(_DWORD *)(a1 + 332));
    v39 = sub_C3C80(a1, 39);
    *(_BYTE *)(a1 + 253) = 0;
  }
  V_LOCK(v39);
  v41 = logfmt_raw((int)v56, 0x1000u);
  V_UNLOCK(v41);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_bridge_reset_CKB_2042",
    33,
    110,
    20,
    v56);
  v56[1] = 0;
  v56[0] = 2;
  v57 = 0;
  v42 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
  LOBYTE(v57) = 1;
  WORD1(v57) = 68;
  v42(a1, v56);
  usleep(0x64u);
  return 0;
}
