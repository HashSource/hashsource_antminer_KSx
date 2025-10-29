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
  int v34; // r0
  int v35; // r0
  void (__fastcall *v36)(int, _DWORD *); // r3
  int v38; // r0
  int v39; // r5
  int v40; // r6
  int v41; // t1
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  char v47[4064]; // [sp+20h] [bp-2004h] BYREF
  _DWORD v48[2]; // [sp+1020h] [bp-1004h] BYREF
  __int64 v49; // [sp+1028h] [bp-FFCh]

  v5 = *(_DWORD *)(a1 + 824);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  if ( *(_DWORD *)(a1 + 492) == 1 )
    a3[2] = 48;
  v7 = *(unsigned __int8 *)(v5 + 21504);
  v9 = (const char *)(a2 + 8);
  v10 = v7 + 3840;
  v11 = *(_DWORD *)(a2 + 120);
  v12 = 12 * v7 + 19968;
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
    V_LOCK(0);
    v38 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v38);
    v39 = a2 + 39;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_dash_1766/backend_dash_1766.c",
      194,
      "work_2_packet_dash",
      18,
      126,
      80,
      v48);
    v40 = a2 + 119;
    do
    {
      v41 = *(unsigned __int8 *)++v39;
      v42 = snprintf(&v47[v30], 4096 - v30, "%02x ", v41);
      v30 += 3;
    }
    while ( v39 != v40 );
    V_LOCK(v42);
    v43 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v43);
    v44 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_dash_1766/backend_dash_1766.c",
            194,
            "dump_work_dash",
            14,
            76,
            20,
            v48);
    V_LOCK(v44);
    v45 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v45);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_dash_1766/backend_dash_1766.c",
      194,
      "dump_work_dash",
      14,
      77,
      20,
      v48);
  }
  memcpy(&last_header_dash, v22, 0x50u);
  v31 = BM_CRC16(a3 + 2, 82);
  a3[85] = v31;
  a3[84] = HIBYTE(v31);
  v32 = *(unsigned __int8 *)(a1 + 253);
  *a4 = 86;
  if ( v32 && *(_BYTE *)(a1 + 254) )
  {
    sub_C79B0(a1, 35);
    *(_BYTE *)(a1 + 253) = 0;
  }
  v33 = dword_2FB960++;
  if ( !(v33 % 0x14) )
  {
    v34 = sub_C7560(a1, 20, 65280);
    V_LOCK(v34);
    v35 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v35);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
      171,
      "ChipSetting_bridge_reset_DASH_1766",
      34,
      110,
      20,
      v48);
    v48[0] = 2;
    v48[1] = 0;
    v49 = 0;
    v36 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
    WORD1(v49) = 68;
    LOBYTE(v49) = 1;
    v36(a1, v48);
    usleep(0x64u);
  }
  return 0;
}
