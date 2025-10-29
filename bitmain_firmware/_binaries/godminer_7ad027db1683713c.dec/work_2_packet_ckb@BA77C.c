int __fastcall work_2_packet_ckb(int a1, __int64 *a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r4
  int v6; // r5
  __int64 *v9; // r2
  __int64 *v10; // r3
  int v11; // r0
  __int64 v12; // r8
  int v13; // r1
  _DWORD *v14; // r2
  int v15; // t1
  int v16; // lr
  int v17; // r12
  int v18; // r0
  int v19; // r0
  int v20; // lr
  int v21; // r12
  __int64 *v22; // r2
  int v23; // r4
  int v24; // lr
  int v25; // r12
  int v26; // r1
  int v27; // r3
  char v28; // r2
  _BYTE *v29; // r1
  __int64 *v30; // r3
  int v31; // r12
  int v32; // r0
  int v33; // r2
  int v34; // r4
  __int64 *v35; // r3
  _DWORD *v36; // r2
  int v37; // r12
  int v38; // r0
  int v39; // r1
  __int16 v40; // r0
  int v41; // r3
  void (__fastcall *v42)(int, _DWORD *); // r3
  char *v44; // r5
  char *v45; // r6
  int v46; // t1
  __int64 *s2; // [sp+10h] [bp-201Ch]
  __int64 *v48; // [sp+18h] [bp-2014h]
  __int64 *v50; // [sp+20h] [bp-200Ch]
  int v51; // [sp+24h] [bp-2008h]
  char v52[4056]; // [sp+28h] [bp-2004h] BYREF
  _DWORD v53[2]; // [sp+1028h] [bp-1004h] BYREF
  __int64 v54; // [sp+1030h] [bp-FFCh]

  v5 = *(_DWORD *)(a1 + 800);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v6 = v5 + 12288;
  v9 = a2 + 1;
  if ( *(_DWORD *)(a1 + 468) == 1 )
    a3[2] = 48;
  v10 = a2;
  v11 = *((_DWORD *)a2 + 22);
  v12 = *a2;
  v13 = *(unsigned __int8 *)(v5 + 15872);
  v50 = v9;
  s2 = a2 + 5;
  *(_QWORD *)(v5 + 8 * v13) = v12;
  *(_DWORD *)(v5 + 4 * (v13 + 2816)) = v11;
  v14 = (_DWORD *)(v5 + 32 * (v13 + 368));
  v15 = *((_DWORD *)v10 + 23);
  v10 = (__int64 *)((char *)v10 + 92);
  v16 = *((_DWORD *)v10 + 1);
  v17 = *((_DWORD *)v10 + 2);
  v18 = *((_DWORD *)v10 + 3);
  *v14 = v15;
  v14[1] = v16;
  v14[2] = v17;
  v14[3] = v18;
  v19 = *((_DWORD *)v10 + 7);
  v20 = *((_DWORD *)v10 + 5);
  v21 = *((_DWORD *)v10 + 6);
  v14[4] = *((_DWORD *)v10 + 4);
  v14[5] = v20;
  v14[6] = v21;
  v14[7] = v19;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 15872) + 32)), (const char *)a2 + 8);
  v22 = a2 + 5;
  v23 = v5 + 48 * *(unsigned __int8 *)(v5 + 15872) + 5120;
  do
  {
    v24 = *(_DWORD *)v22;
    v22 += 2;
    v25 = *((_DWORD *)v22 - 3);
    v23 += 16;
    v26 = *((_DWORD *)v22 - 2);
    v27 = *((_DWORD *)v22 - 1);
    *(_DWORD *)(v23 - 16) = v24;
    *(_DWORD *)(v23 - 12) = v25;
    *(_DWORD *)(v23 - 8) = v26;
    *(_DWORD *)(v23 - 4) = v27;
  }
  while ( v22 != a2 + 11 );
  v28 = *(_BYTE *)(v6 + 3584);
  v29 = a3 + 4;
  v30 = a2 + 5;
  a3[3] = v28;
  v48 = a2 + 11;
  *(_BYTE *)(v6 + 3584) = (v28 + 1) & 0x7F;
  do
  {
    v30 += 2;
    v29 += 16;
    v31 = *((_DWORD *)v30 - 3);
    v32 = *((_DWORD *)v30 - 2);
    v33 = *((_DWORD *)v30 - 1);
    *((_DWORD *)v29 - 4) = *((_DWORD *)v30 - 4);
    *((_DWORD *)v29 - 3) = v31;
    *((_DWORD *)v29 - 2) = v32;
    *((_DWORD *)v29 - 1) = v33;
  }
  while ( v30 != v48 );
  v34 = memcmp(&last_header_ckb, s2, 0x30u);
  if ( !v34 )
  {
    V_LOCK();
    logfmt_raw((char *)v53, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    v44 = (char *)a2 + 39;
    v45 = (char *)a2 + 87;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      187,
      "work_2_packet_ckb",
      17,
      119,
      80,
      v53);
    v51 = (unsigned __int8)a3[3];
    do
    {
      v46 = (unsigned __int8)*++v44;
      snprintf(&v52[v34], 4096 - v34, "%02x ", v46);
      v34 += 3;
    }
    while ( v44 != v45 );
    V_LOCK();
    logfmt_raw((char *)v53, 0x1000u, 0, "ckb dump work jobid %s, work count %d", v50, v51);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      187,
      "dump_work_ckb",
      13,
      86,
      20,
      v53);
    V_LOCK();
    logfmt_raw((char *)v53, 0x1000u, 0, "dump work: %s", v52);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      187,
      "dump_work_ckb",
      13,
      87,
      20,
      v53);
  }
  v35 = s2;
  v36 = &last_header_ckb;
  do
  {
    v35 += 2;
    v36 += 4;
    v37 = *((_DWORD *)v35 - 3);
    v38 = *((_DWORD *)v35 - 2);
    v39 = *((_DWORD *)v35 - 1);
    *(v36 - 4) = *((_DWORD *)v35 - 4);
    *(v36 - 3) = v37;
    *(v36 - 2) = v38;
    *(v36 - 1) = v39;
  }
  while ( v35 != v48 );
  v40 = BM_CRC16(a3 + 2, 50);
  a3[53] = v40;
  a3[52] = HIBYTE(v40);
  v41 = *(unsigned __int8 *)(a1 + 237);
  *a4 = 54;
  if ( v41 && *(_BYTE *)(a1 + 238) )
  {
    memset(*(void **)(a1 + 432), 0, 48 * *(_DWORD *)(a1 + 312));
    sub_BA658(a1, 39);
    *(_BYTE *)(a1 + 237) = 0;
  }
  V_LOCK();
  logfmt_raw((char *)v53, 0x1000u, 0, "bridge reset %s %02x", "ChipSetting_bridge_reset_CKB_2042", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_bridge_reset_CKB_2042",
    33,
    112,
    20,
    v53);
  v53[1] = 0;
  v53[0] = 2;
  v54 = 0;
  v42 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
  LOBYTE(v54) = 1;
  WORD1(v54) = 68;
  v42(a1, v53);
  usleep(0x64u);
  return 0;
}
