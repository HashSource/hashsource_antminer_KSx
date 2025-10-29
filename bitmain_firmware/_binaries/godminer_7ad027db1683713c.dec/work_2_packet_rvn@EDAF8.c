int __fastcall work_2_packet_rvn(int *a1, __int64 *a2, int a3, _DWORD *a4)
{
  int v4; // r6
  int v9; // r3
  int v10; // r12
  _QWORD *v11; // r2
  __int64 v12; // d16
  int v13; // r2
  int v14; // lr
  int v15; // r12
  int v16; // r8
  int v17; // lr
  int v18; // r12
  int v19; // lr
  int v20; // r9
  int v21; // r12
  int v22; // r7
  _DWORD *v23; // r1
  int v24; // r12
  int v25; // lr
  int v26; // r9
  int v27; // r8
  int v28; // lr
  int v29; // r12
  _DWORD *v30; // r3
  int v31; // lr
  int v32; // r12
  int v33; // r9
  __int64 v34; // r2
  int v35; // r5
  __int16 v36; // r0
  char v38[4100]; // [sp+10h] [bp-1004h] BYREF

  v4 = a1[200];
  if ( v4 )
  {
    *(_BYTE *)a3 = 85;
    *(_BYTE *)(a3 + 1) = -86;
    *(_BYTE *)(a3 + 2) = 32;
    if ( a1[117] == 1 )
      *(_BYTE *)(a3 + 2) = 48;
    v9 = *(unsigned __int8 *)(v4 + 35072);
    v10 = (unsigned __int8)byte_2E8530;
    v11 = (_QWORD *)(v4 + 8 * v9);
    v12 = *a2;
    v11[256] = a2[1];
    *v11 = v12;
    if ( *((unsigned __int8 *)a2 + 88) != v10 )
    {
      V_LOCK();
      logfmt_raw(
        v38,
        0x1000u,
        0,
        "diff changed, last: %02x, now: %02x",
        (unsigned __int8)byte_2E8530,
        *((unsigned __int8 *)a2 + 88));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
        187,
        "work_2_packet_rvn",
        17,
        919,
        40,
        v38);
      set_ticketmask_rvn((int)a1, a1[102]);
      LOBYTE(v10) = *((_BYTE *)a2 + 88);
      v9 = *(unsigned __int8 *)(v4 + 35072);
      byte_2E8530 = v10;
    }
    *(_BYTE *)(v4 + v9 + 34816) = v10;
    v13 = *((_DWORD *)a2 + 5);
    v14 = *((_DWORD *)a2 + 6);
    v15 = *((_DWORD *)a2 + 7);
    *(_DWORD *)(a3 + 4) = *((_DWORD *)a2 + 4);
    *(_DWORD *)(a3 + 8) = v13;
    *(_DWORD *)(a3 + 12) = v14;
    *(_DWORD *)(a3 + 16) = v15;
    v16 = *((_DWORD *)a2 + 8);
    v17 = *((_DWORD *)a2 + 10);
    v18 = *((_DWORD *)a2 + 11);
    *(_DWORD *)(a3 + 24) = *((_DWORD *)a2 + 9);
    *(_DWORD *)(a3 + 20) = v16;
    *(_DWORD *)(a3 + 28) = v17;
    *(_DWORD *)(a3 + 32) = v18;
    v19 = *((_DWORD *)a2 + 5);
    v20 = *((_DWORD *)a2 + 6);
    v21 = *((_DWORD *)a2 + 7);
    v22 = 0;
    v23 = (_DWORD *)(v4 + 40 * *(unsigned __int8 *)(v4 + 35072) + 0x2000);
    *v23 = *((_DWORD *)a2 + 4);
    v23[1] = v19;
    v23[2] = v20;
    v23[3] = v21;
    v24 = *((_DWORD *)a2 + 11);
    v25 = *((_DWORD *)a2 + 9);
    v26 = *((_DWORD *)a2 + 10);
    v23[4] = *((_DWORD *)a2 + 8);
    v23[5] = v25;
    v23[6] = v26;
    v23[7] = v24;
    v27 = *((_DWORD *)a2 + 13);
    v28 = *((_DWORD *)a2 + 14);
    v29 = *((_DWORD *)a2 + 15);
    v30 = (_DWORD *)(v4 + 32 * (*(unsigned __int8 *)(v4 + 35072) + 576));
    *v30 = *((_DWORD *)a2 + 12);
    v30[1] = v27;
    v30[2] = v28;
    v30[3] = v29;
    v31 = *((_DWORD *)a2 + 18);
    v32 = *((_DWORD *)a2 + 19);
    v33 = *((_DWORD *)a2 + 16);
    v30[5] = *((_DWORD *)a2 + 17);
    v30[6] = v31;
    v30[7] = v32;
    v30[4] = v33;
    v34 = a2[10];
    LOBYTE(v27) = BYTE1(*((_DWORD *)a2 + 20));
    *(_BYTE *)(a3 + 43) = v34;
    *(_BYTE *)(a3 + 42) = v27;
    *(_BYTE *)(a3 + 39) = BYTE4(v34);
    *(_BYTE *)(a3 + 41) = BYTE2(v34);
    *(_BYTE *)(a3 + 38) = BYTE5(v34);
    *(_BYTE *)(a3 + 40) = BYTE3(v34);
    *(_BYTE *)(a3 + 37) = BYTE6(v34);
    *(_BYTE *)(a3 + 36) = HIBYTE(v34);
    HIDWORD(v34) = *(unsigned __int8 *)(v4 + 35072);
    v35 = *((_DWORD *)a2 + 20);
    *(_DWORD *)(v4 + 8 * (HIDWORD(v34) + 512)) = 0;
    *(_DWORD *)(v4 + 8 * (HIDWORD(v34) + 512) + 4) = v35;
    *(_BYTE *)(a3 + 3) = BYTE4(v34);
    *(_BYTE *)(v4 + 35072) = BYTE4(v34) + 1;
    v36 = BM_CRC16((unsigned __int8 *)(a3 + 2), 42);
    *(_BYTE *)(a3 + 45) = v36;
    *(_BYTE *)(a3 + 44) = HIBYTE(v36);
    *a4 = 46;
  }
  else
  {
    V_LOCK();
    v22 = 3;
    logfmt_raw(v38, 0x1000u, 0, "id_map is null", "work_2_packet_rvn");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      187,
      "work_2_packet_rvn",
      17,
      906,
      20,
      v38);
  }
  return v22;
}
