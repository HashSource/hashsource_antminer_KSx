int __fastcall work_2_packet_ltc(int a1, _DWORD *a2, unsigned __int8 *a3, _DWORD *a4)
{
  int v5; // r4
  const char *v8; // r11
  _DWORD *v9; // r3
  __int64 v10; // d16
  int v11; // r0
  int v12; // r1
  _DWORD *v13; // r2
  int v14; // t1
  int v15; // lr
  int v16; // r12
  int v17; // r0
  const char *v18; // r1
  _DWORD *v19; // r11
  int v20; // r12
  int v21; // r0
  int v22; // r8
  int v23; // r3
  unsigned __int8 v24; // r12
  unsigned __int8 *v25; // r3
  unsigned __int8 *v26; // r2
  unsigned __int8 v27; // r1
  unsigned __int8 v28; // t1
  unsigned __int8 v29; // t1
  int v30; // r4
  __int16 v31; // r0
  int v32; // r3
  char *v34; // r5
  char *v35; // r6
  int v36; // t1
  const char *v38; // [sp+14h] [bp-2010h]
  int v39; // [sp+18h] [bp-200Ch]
  char v40[4064]; // [sp+20h] [bp-2004h] BYREF
  char v41[4100]; // [sp+1020h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 800);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v8 = (const char *)(a2 + 2);
  if ( *(_DWORD *)(a1 + 468) == 1 )
    a3[2] = 48;
  v9 = a2;
  v10 = *(_QWORD *)a2;
  v11 = a2[38];
  v12 = *(unsigned __int8 *)(v5 + 27136);
  v38 = v8;
  *(_QWORD *)(v5 + 8 * v12) = v10;
  *(_DWORD *)(v5 + 4 * (v12 + 4864)) = v11;
  v13 = (_DWORD *)(v5 + 32 * (v12 + 624));
  v14 = v9[39];
  v9 += 39;
  v15 = v9[1];
  v16 = v9[2];
  v17 = v9[3];
  *v13 = v14;
  v18 = v8;
  v13[1] = v15;
  v19 = a2 + 18;
  v13[2] = v16;
  v13[3] = v17;
  v20 = v9[6];
  v21 = v9[7];
  v22 = v9[4];
  v13[5] = v9[5];
  v13[6] = v20;
  v13[4] = v22;
  v13[7] = v21;
  strcpy((char *)(v5 + ((*(unsigned __int8 *)(v5 + 27136) + 16) << 6)), v18);
  memcpy((void *)(v5 + 80 * *(unsigned __int8 *)(v5 + 27136) + 9216), a2 + 18, 0x50u);
  memcpy((void *)(v5 + 16 * (*(unsigned __int8 *)(v5 + 27136) + 1504)), a2 + 47, a2[51]);
  v23 = *(unsigned __int8 *)(v5 + 27136);
  *(_DWORD *)(v5 + 4 * (v23 + 6528)) = a2[51];
  *(_DWORD *)(v5 + 4 * (v23 + 6656)) = a2[52];
  v24 = *(_BYTE *)(v5 + 27136);
  a3[3] = v24;
  *(_BYTE *)(v5 + 27136) = (v24 + 1) & 0x7F;
  memcpy(a3 + 4, a2 + 18, 0x50u);
  v25 = a3 + 3;
  v26 = a3 + 84;
  do
  {
    v28 = *++v25;
    v27 = v28;
    v29 = *--v26;
    *v25 = v29;
    *v26 = v27;
  }
  while ( v25 != a3 + 43 );
  v30 = memcmp(&last_work_ltc, a2 + 18, 0x50u);
  if ( !v30 )
  {
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    v34 = (char *)a2 + 71;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      187,
      "work_2_packet_ltc",
      17,
      198,
      80,
      v41);
    v35 = (char *)a2 + 151;
    v39 = a3[3];
    do
    {
      v36 = (unsigned __int8)*++v34;
      snprintf(&v40[v30], 4096 - v30, "%02x ", v36);
      v30 += 3;
    }
    while ( v34 != v35 );
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "ltc dump work jobid %s, work count %02x", v38, v39);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      187,
      "dump_work_ltc",
      13,
      117,
      20,
      v41);
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "dump work: %s", v40);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      187,
      "dump_work_ltc",
      13,
      118,
      20,
      v41);
  }
  memcpy(&last_work_ltc, v19, 0x50u);
  v31 = BM_CRC16(a3 + 2, 82);
  a3[85] = v31;
  a3[84] = HIBYTE(v31);
  v32 = *(unsigned __int8 *)(a1 + 237);
  *a4 = 86;
  if ( !v32 || !*(_BYTE *)(a1 + 238) )
    return 0;
  memset(*(void **)(a1 + 432), 0, 48 * *(_DWORD *)(a1 + 312));
  chip_setting_ticket_mask_ltc((_DWORD *)a1, 0x7FFu);
  *(_BYTE *)(a1 + 237) = 0;
  return 0;
}
