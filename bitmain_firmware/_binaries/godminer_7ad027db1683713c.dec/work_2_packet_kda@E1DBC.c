int __fastcall work_2_packet_kda(int a1, __int64 *a2, int a3, _DWORD *a4)
{
  int v5; // r4
  int v7; // r2
  __int64 *v8; // r3
  __int64 v9; // d16
  __int64 *v10; // r1
  int v11; // r12
  _DWORD *v12; // r2
  int v13; // t1
  int v14; // lr
  int v15; // r12
  int v16; // r0
  int v17; // r6
  int v18; // r12
  int v19; // r0
  __int64 *v20; // r6
  char v21; // lr
  int v22; // r12
  char v23; // lr
  char v24; // r12
  int v25; // r1
  __int64 *v26; // r2
  char v27; // t1
  int v28; // r4
  __int16 v29; // r0
  int v30; // r3
  void (__fastcall *v31)(int, _DWORD *); // r3
  int v33; // r7
  int v34; // t1
  char *v35; // r7
  char *v36; // r5
  int v37; // r4
  int v38; // t1
  __int64 *v41; // [sp+20h] [bp-200Ch]
  int v42; // [sp+24h] [bp-2008h]
  char v43[4056]; // [sp+28h] [bp-2004h] BYREF
  _DWORD v44[2]; // [sp+1028h] [bp-1004h] BYREF
  __int64 v45; // [sp+1030h] [bp-FFCh]

  v5 = *(_DWORD *)(a1 + 800);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 1) = -86;
  *(_BYTE *)(a3 + 2) = 32;
  if ( *(_DWORD *)(a1 + 468) == 1 )
    *(_BYTE *)(a3 + 2) = 48;
  v7 = *(unsigned __int8 *)(v5 + 50816);
  v8 = a2;
  v9 = *a2;
  v10 = a2 + 1;
  v11 = *((_DWORD *)v10 + 88);
  *(_QWORD *)(v5 + 8 * v7) = v9;
  *(_DWORD *)(v5 + 4 * (v7 + 11552)) = v11;
  v12 = (_DWORD *)(v5 + 32 * (v7 + 1460));
  v41 = v10;
  v13 = *((_DWORD *)v8 + 91);
  v8 = (__int64 *)((char *)v8 + 364);
  v14 = *((_DWORD *)v8 + 1);
  v15 = *((_DWORD *)v8 + 2);
  v16 = *((_DWORD *)v8 + 3);
  *v12 = v13;
  v12[1] = v14;
  v12[2] = v15;
  v12[3] = v16;
  v17 = *((_DWORD *)v8 + 4);
  v18 = *((_DWORD *)v8 + 6);
  v19 = *((_DWORD *)v8 + 7);
  v12[5] = *((_DWORD *)v8 + 5);
  v12[6] = v18;
  v12[4] = v17;
  v20 = a2 + 9;
  v12[7] = v19;
  strcpy((char *)(v5 + ((*(unsigned __int8 *)(v5 + 50816) + 16) << 6)), (const char *)v10);
  memcpy((void *)(v5 + 286 * *(unsigned __int8 *)(v5 + 50816) + 9216), a2 + 9, 0x11Eu);
  v21 = *((_BYTE *)a2 + 398);
  v22 = v5 + 3 * *(unsigned __int8 *)(v5 + 50816) + 45824;
  *(_WORD *)v22 = *((_WORD *)a2 + 198);
  *(_BYTE *)(v22 + 2) = v21;
  v23 = *(_BYTE *)(v5 + 50816);
  *(_BYTE *)(a3 + 3) = v23;
  *(_BYTE *)(v5 + 50816) = (v23 + 1) & 0x7F;
  memset((void *)(a3 + 4), 0, 0x11Eu);
  v24 = *((_BYTE *)a2 + 398);
  v25 = a3 + 6;
  v26 = (__int64 *)((char *)a2 + 350);
  *(_WORD *)(a3 + 4) = *((_WORD *)a2 + 198);
  *(_BYTE *)(a3 + 6) = v24;
  do
  {
    v27 = *((_BYTE *)v26 - 1);
    v26 = (__int64 *)((char *)v26 - 1);
    *(_BYTE *)++v25 = v27;
  }
  while ( v26 != v20 );
  if ( *(_DWORD *)(a1 + 468) == 1 )
  {
    *(_DWORD *)(a3 + 285) = *(_DWORD *)((char *)a2 + 350);
    *(_BYTE *)(a3 + 289) = *((_BYTE *)a2 + 354);
  }
  v28 = memcmp(&last_header_kda, a2 + 9, 0x11Eu);
  if ( !v28 )
  {
    V_LOCK();
    logfmt_raw((char *)v44, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    v33 = a3 - 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      187,
      "work_2_packet_kda",
      17,
      133,
      20,
      v44);
    v42 = *(unsigned __int8 *)(a3 + 3);
    do
    {
      v34 = *(unsigned __int8 *)++v33;
      snprintf(&v43[v28], 4096 - v28, "%02x", v34);
      v28 += 2;
    }
    while ( v33 != a3 + 291 );
    V_LOCK();
    logfmt_raw((char *)v44, 0x1000u, 0, "dump packet %s", v43);
    V_UNLOCK();
    v35 = (char *)a2 + 357;
    v36 = (char *)a2 + 71;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      187,
      "dump_work_kda",
      13,
      84,
      20,
      v44);
    v37 = 0;
    do
    {
      v38 = (unsigned __int8)*++v36;
      snprintf(&v43[v37], 4096 - v37, "%02x", v38);
      v37 += 2;
    }
    while ( v35 != v36 );
    V_LOCK();
    logfmt_raw((char *)v44, 0x1000u, 0, "kda dump work jobid %s, work count %d", v41, v42);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      187,
      "dump_work_kda",
      13,
      90,
      20,
      v44);
    V_LOCK();
    logfmt_raw((char *)v44, 0x1000u, 0, "dump work: %s", v43);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      187,
      "dump_work_kda",
      13,
      91,
      20,
      v44);
  }
  memcpy(&last_header_kda, v20, 0x11Eu);
  v29 = BM_CRC16((unsigned __int8 *)(a3 + 2), 288);
  *(_BYTE *)(a3 + 291) = v29;
  *(_BYTE *)(a3 + 290) = HIBYTE(v29);
  v30 = *(unsigned __int8 *)(a1 + 237);
  *a4 = 292;
  if ( v30 && *(_BYTE *)(a1 + 238) )
  {
    memset(*(void **)(a1 + 432), 0, 48 * *(_DWORD *)(a1 + 312));
    sub_E1C98(a1, 40);
    *(_BYTE *)(a1 + 237) = 0;
  }
  V_LOCK();
  logfmt_raw((char *)v44, 0x1000u, 0, "bridge reset %s %02x", "ChipSetting_bridge_reset_KDA_2110", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_bridge_reset_KDA_2110",
    33,
    112,
    20,
    v44);
  v44[0] = 2;
  v44[1] = 0;
  v45 = 1;
  v31 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
  WORD1(v45) = 68;
  v31(a1, v44);
  usleep(0x14u);
  return 0;
}
