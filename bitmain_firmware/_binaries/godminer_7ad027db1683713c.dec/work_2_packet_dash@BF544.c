int __fastcall work_2_packet_dash(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r4
  int v7; // r3
  const char *v9; // r11
  int v10; // r0
  int v11; // r12
  int v12; // r2
  _DWORD *v13; // r3
  int v14; // t1
  int v15; // r1
  int v16; // t1
  int v17; // lr
  int v18; // r12
  int v19; // r0
  _DWORD *v20; // r2
  const char *v21; // r1
  const void *v22; // r11
  int v23; // r12
  int v24; // r0
  int v25; // lr
  int v26; // r3
  _BYTE *v27; // r2
  _BYTE *v28; // r3
  char v29; // r1
  int v30; // r4
  __int16 v31; // r0
  int v32; // r3
  unsigned int v33; // r1
  void (__fastcall *v34)(int, _DWORD *); // r3
  int v36; // r5
  int v37; // r6
  int v38; // t1
  int v40; // [sp+14h] [bp-2010h]
  int v41; // [sp+18h] [bp-200Ch]
  char v42[4064]; // [sp+20h] [bp-2004h] BYREF
  _DWORD v43[2]; // [sp+1020h] [bp-1004h] BYREF
  __int64 v44; // [sp+1028h] [bp-FFCh]

  v5 = *(_DWORD *)(a1 + 800);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  if ( *(_DWORD *)(a1 + 468) == 1 )
    a3[2] = 48;
  v7 = *(unsigned __int8 *)(v5 + 21504);
  v9 = (const char *)(a2 + 8);
  v10 = v7 + 3840;
  v11 = *(_DWORD *)(a2 + 120);
  v12 = 12 * v7 + 19968;
  v40 = a2 + 8;
  *(_QWORD *)(v5 + 8 * v7) = *(_QWORD *)a2;
  v13 = (_DWORD *)a2;
  *(_DWORD *)(v5 + 4 * v10) = v11;
  v14 = *(_DWORD *)(a2 + 156);
  v15 = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(v5 + v12) = v14;
  *(_DWORD *)(v5 + v12 + 4) = v15;
  v16 = v13[31];
  v13 += 31;
  v17 = v13[1];
  v18 = v13[2];
  v19 = v13[3];
  v20 = (_DWORD *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 21504) + 496));
  *v20 = v16;
  v21 = v9;
  v20[1] = v17;
  v22 = (const void *)(a2 + 40);
  v20[2] = v18;
  v20[3] = v19;
  v23 = v13[6];
  v24 = v13[7];
  v25 = v13[5];
  v20[4] = v13[4];
  v20[5] = v25;
  v20[6] = v23;
  v20[7] = v24;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 21504) + 32)), v21);
  memcpy((void *)(v5 + 80 * *(unsigned __int8 *)(v5 + 21504) + 5120), (const void *)(a2 + 40), 0x50u);
  v26 = *(unsigned __int8 *)(v5 + 21504);
  *(_QWORD *)(v5 + 8 * (v26 + 2689)) = *(_QWORD *)(a2 + 168);
  a3[3] = v26;
  *(_BYTE *)(v5 + 21504) = (v26 + 1) & 0x7F;
  memcpy(a3 + 4, (const void *)(a2 + 40), 0x50u);
  v27 = a3;
  v28 = (_BYTE *)a2;
  do
  {
    v29 = v28[40];
    v28 += 4;
    v27[7] = v29;
    v27[6] = v28[37];
    v27[5] = v28[38];
    v27[4] = v28[39];
    v27 += 4;
  }
  while ( v28 != (_BYTE *)(a2 + 80) );
  v30 = memcmp(&last_header_dash, (const void *)(a2 + 40), 0x50u);
  if ( !v30 )
  {
    V_LOCK();
    logfmt_raw((char *)v43, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    v36 = a2 + 39;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
      189,
      "work_2_packet_dash",
      18,
      126,
      80,
      v43);
    v37 = a2 + 119;
    v41 = (unsigned __int8)a3[3];
    do
    {
      v38 = *(unsigned __int8 *)++v36;
      snprintf(&v42[v30], 4096 - v30, "%02x ", v38);
      v30 += 3;
    }
    while ( v36 != v37 );
    V_LOCK();
    logfmt_raw((char *)v43, 0x1000u, 0, "dash dump work jobid %s, work count %d", v40, v41);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
      189,
      "dump_work_dash",
      14,
      76,
      20,
      v43);
    V_LOCK();
    logfmt_raw((char *)v43, 0x1000u, 0, "dump work: %s", v42);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
      189,
      "dump_work_dash",
      14,
      77,
      20,
      v43);
  }
  memcpy(&last_header_dash, v22, 0x50u);
  v31 = BM_CRC16(a3 + 2, 82);
  a3[85] = v31;
  a3[84] = HIBYTE(v31);
  v32 = *(unsigned __int8 *)(a1 + 237);
  *a4 = 86;
  if ( v32 && *(_BYTE *)(a1 + 238) )
  {
    sub_BF420(a1, 35);
    *(_BYTE *)(a1 + 237) = 0;
  }
  v33 = dword_2E0418++;
  if ( !(v33 % 0x14) )
  {
    sub_BEFD0(a1, 20, 65280);
    V_LOCK();
    logfmt_raw((char *)v43, 0x1000u, 0, "bridge reset %s %02x", "ChipSetting_bridge_reset_DASH_1766", 68);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_bridge_reset_DASH_1766",
      34,
      112,
      20,
      v43);
    v43[0] = 2;
    v43[1] = 0;
    v44 = 0;
    v34 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
    WORD1(v44) = 68;
    LOBYTE(v44) = 1;
    v34(a1, v43);
    usleep(0x64u);
  }
  return 0;
}
