int __fastcall work_2_packet_kda(int a1, __int64 *a2, int a3, _DWORD *a4)
{
  int v5; // r4
  int v7; // r2
  _DWORD *v8; // r3
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
  char *v20; // r6
  char v21; // lr
  int v22; // r12
  char v23; // lr
  char v24; // r12
  int v25; // r1
  char *v26; // r2
  char v27; // t1
  int v28; // r4
  __int16 v29; // r0
  int v30; // r3
  int v31; // r0
  int v32; // r0
  void (__fastcall *v33)(int, _DWORD *); // r3
  int v35; // r0
  int v36; // r7
  int v37; // t1
  int v38; // r0
  int v39; // r0
  int v40; // r7
  int v41; // r5
  int v42; // r4
  int v43; // t1
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  char v50[4056]; // [sp+28h] [bp-2004h] BYREF
  _DWORD v51[2]; // [sp+1028h] [bp-1004h] BYREF
  __int64 v52; // [sp+1030h] [bp-FFCh]

  v5 = *(_DWORD *)(a1 + 824);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 1) = -86;
  *(_BYTE *)(a3 + 2) = 32;
  if ( *(_DWORD *)(a1 + 492) == 1 )
    *(_BYTE *)(a3 + 2) = 48;
  v7 = *(unsigned __int8 *)(v5 + 50816);
  v8 = a2;
  v9 = *a2;
  v10 = a2 + 1;
  v11 = *((_DWORD *)v10 + 88);
  *(_QWORD *)(v5 + 8 * v7) = v9;
  *(_DWORD *)(v5 + 4 * (v7 + 11552)) = v11;
  v12 = (_DWORD *)(v5 + 32 * (v7 + 1460));
  v13 = v8[91];
  v8 += 91;
  v14 = v8[1];
  v15 = v8[2];
  v16 = v8[3];
  *v12 = v13;
  v12[1] = v14;
  v12[2] = v15;
  v12[3] = v16;
  v17 = v8[4];
  v18 = v8[6];
  v19 = v8[7];
  v12[5] = v8[5];
  v12[6] = v18;
  v12[4] = v17;
  v20 = (char *)(a2 + 9);
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
  v26 = (char *)a2 + 350;
  *(_WORD *)(a3 + 4) = *((_WORD *)a2 + 198);
  *(_BYTE *)(a3 + 6) = v24;
  do
  {
    v27 = *--v26;
    *(_BYTE *)++v25 = v27;
  }
  while ( v26 != v20 );
  if ( *(_DWORD *)(a1 + 492) == 1 )
  {
    *(_DWORD *)(a3 + 285) = *(_DWORD *)((char *)a2 + 350);
    *(_BYTE *)(a3 + 289) = *((_BYTE *)a2 + 354);
  }
  v28 = memcmp(&last_header_kda, a2 + 9, 0x11Eu);
  if ( !v28 )
  {
    V_LOCK(0);
    v35 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v35);
    v36 = a3 - 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_kda_2110/backend_kda_2110.c",
      192,
      "work_2_packet_kda",
      17,
      133,
      20,
      v51);
    do
    {
      v37 = *(unsigned __int8 *)++v36;
      v38 = snprintf(&v50[v28], 4096 - v28, "%02x", v37);
      v28 += 2;
    }
    while ( v36 != a3 + 291 );
    V_LOCK(v38);
    v39 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v39);
    v40 = (int)a2 + 357;
    v41 = (int)a2 + 71;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_kda_2110/backend_kda_2110.c",
      192,
      "dump_work_kda",
      13,
      84,
      20,
      v51);
    v42 = 0;
    do
    {
      v43 = *(unsigned __int8 *)++v41;
      v44 = snprintf(&v50[v42], 4096 - v42, "%02x", v43);
      v42 += 2;
    }
    while ( v40 != v41 );
    V_LOCK(v44);
    v45 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v45);
    v46 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_kda_2110/backend_kda_2110.c",
            192,
            "dump_work_kda",
            13,
            90,
            20,
            v51);
    V_LOCK(v46);
    v47 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v47);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_kda_2110/backend_kda_2110.c",
      192,
      "dump_work_kda",
      13,
      91,
      20,
      v51);
  }
  memcpy(&last_header_kda, v20, 0x11Eu);
  v29 = BM_CRC16(a3 + 2, 288);
  *(_BYTE *)(a3 + 291) = v29;
  *(_BYTE *)(a3 + 290) = HIBYTE(v29);
  v30 = *(unsigned __int8 *)(a1 + 253);
  v31 = (int)a4;
  *a4 = 292;
  if ( v30 && *(_BYTE *)(a1 + 254) )
  {
    memset(*(void **)(a1 + 456), 0, 48 * *(_DWORD *)(a1 + 332));
    v31 = sub_EA4F8(a1, 40);
    *(_BYTE *)(a1 + 253) = 0;
  }
  V_LOCK(v31);
  v32 = logfmt_raw((int)v51, 0x1000u);
  V_UNLOCK(v32);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_bridge_reset_KDA_2110",
    33,
    110,
    20,
    v51);
  v51[0] = 2;
  v51[1] = 0;
  v52 = 1;
  v33 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
  WORD1(v52) = 68;
  v33(a1, v51);
  usleep(0x14u);
  return 0;
}
