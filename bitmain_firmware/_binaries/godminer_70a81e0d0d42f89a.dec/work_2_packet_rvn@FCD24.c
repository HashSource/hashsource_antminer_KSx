int __fastcall work_2_packet_rvn(int a1, __int64 *a2, int a3, _DWORD *a4)
{
  int v4; // r6
  int v9; // r2
  __int64 v10; // d7
  int v11; // r3
  __int64 v12; // r0
  int v13; // r12
  _QWORD *v14; // r2
  int v15; // r2
  int v16; // lr
  int v17; // r12
  int v18; // r8
  int v19; // lr
  int v20; // r12
  int v21; // lr
  int v22; // r9
  int v23; // r12
  int v24; // r7
  _DWORD *v25; // r1
  int v26; // r12
  int v27; // lr
  int v28; // r9
  int v29; // r8
  int v30; // lr
  int v31; // r12
  _DWORD *v32; // r3
  int v33; // lr
  int v34; // r12
  int v35; // r9
  __int64 v36; // r2
  int v37; // r5
  __int16 v38; // r0
  int v40; // r0
  int v41; // r0
  _BYTE v42[4100]; // [sp+10h] [bp-1004h] BYREF

  v4 = *(_DWORD *)(a1 + 824);
  if ( v4 )
  {
    *(_BYTE *)a3 = 85;
    *(_BYTE *)(a3 + 1) = -86;
    *(_BYTE *)(a3 + 2) = 48;
    v9 = *((_DWORD *)a2 + 3);
    LODWORD(v10) = *((_DWORD *)a2 + 2);
    v11 = *(unsigned __int8 *)(v4 + 35072);
    v12 = *a2;
    HIDWORD(v10) = v9;
    v13 = (unsigned __int8)byte_30CE68;
    v14 = (_QWORD *)(v4 + 8 * v11);
    v14[256] = v10;
    *v14 = v12;
    if ( *((unsigned __int8 *)a2 + 88) != v13 )
    {
      V_LOCK(v12);
      v40 = logfmt_raw((int)v42, 0x1000u);
      V_UNLOCK(v40);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
        192,
        "work_2_packet_rvn",
        17,
        1165,
        40,
        v42);
      set_ticketmask_rvn(a1, *(_DWORD *)(a1 + 432));
      LOBYTE(v13) = *((_BYTE *)a2 + 88);
      v11 = *(unsigned __int8 *)(v4 + 35072);
      byte_30CE68 = v13;
    }
    *(_BYTE *)(v4 + v11 + 34816) = v13;
    v15 = *((_DWORD *)a2 + 5);
    v16 = *((_DWORD *)a2 + 6);
    v17 = *((_DWORD *)a2 + 7);
    *(_DWORD *)(a3 + 4) = *((_DWORD *)a2 + 4);
    *(_DWORD *)(a3 + 8) = v15;
    *(_DWORD *)(a3 + 12) = v16;
    *(_DWORD *)(a3 + 16) = v17;
    v18 = *((_DWORD *)a2 + 8);
    v19 = *((_DWORD *)a2 + 10);
    v20 = *((_DWORD *)a2 + 11);
    *(_DWORD *)(a3 + 24) = *((_DWORD *)a2 + 9);
    *(_DWORD *)(a3 + 20) = v18;
    *(_DWORD *)(a3 + 28) = v19;
    *(_DWORD *)(a3 + 32) = v20;
    v21 = *((_DWORD *)a2 + 5);
    v22 = *((_DWORD *)a2 + 6);
    v23 = *((_DWORD *)a2 + 7);
    v24 = 0;
    v25 = (_DWORD *)(v4 + 40 * *(unsigned __int8 *)(v4 + 35072) + 0x2000);
    *v25 = *((_DWORD *)a2 + 4);
    v25[1] = v21;
    v25[2] = v22;
    v25[3] = v23;
    v26 = *((_DWORD *)a2 + 11);
    v27 = *((_DWORD *)a2 + 9);
    v28 = *((_DWORD *)a2 + 10);
    v25[4] = *((_DWORD *)a2 + 8);
    v25[5] = v27;
    v25[6] = v28;
    v25[7] = v26;
    v29 = *((_DWORD *)a2 + 13);
    v30 = *((_DWORD *)a2 + 14);
    v31 = *((_DWORD *)a2 + 15);
    v32 = (_DWORD *)(v4 + 32 * (*(unsigned __int8 *)(v4 + 35072) + 576));
    *v32 = *((_DWORD *)a2 + 12);
    v32[1] = v29;
    v32[2] = v30;
    v32[3] = v31;
    v33 = *((_DWORD *)a2 + 18);
    v34 = *((_DWORD *)a2 + 19);
    v35 = *((_DWORD *)a2 + 16);
    v32[5] = *((_DWORD *)a2 + 17);
    v32[6] = v33;
    v32[7] = v34;
    v32[4] = v35;
    v36 = a2[10];
    LOBYTE(v29) = BYTE1(*((_DWORD *)a2 + 20));
    *(_BYTE *)(a3 + 43) = v36;
    *(_BYTE *)(a3 + 42) = v29;
    *(_BYTE *)(a3 + 39) = BYTE4(v36);
    *(_BYTE *)(a3 + 41) = BYTE2(v36);
    *(_BYTE *)(a3 + 38) = BYTE5(v36);
    *(_BYTE *)(a3 + 40) = BYTE3(v36);
    *(_BYTE *)(a3 + 37) = BYTE6(v36);
    *(_BYTE *)(a3 + 36) = HIBYTE(v36);
    HIDWORD(v36) = *(unsigned __int8 *)(v4 + 35072);
    v37 = *((_DWORD *)a2 + 20);
    *(_DWORD *)(v4 + 8 * (HIDWORD(v36) + 512)) = 0;
    *(_DWORD *)(v4 + 8 * (HIDWORD(v36) + 512) + 4) = v37;
    *(_BYTE *)(a3 + 3) = BYTE4(v36);
    *(_BYTE *)(v4 + 35072) = BYTE4(v36) + 1;
    v38 = BM_CRC16(a3 + 2, 42);
    *(_BYTE *)(a3 + 45) = v38;
    *(_BYTE *)(a3 + 44) = HIBYTE(v38);
    *a4 = 46;
  }
  else
  {
    V_LOCK(a1);
    v24 = 3;
    v41 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v41);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
      192,
      "work_2_packet_rvn",
      17,
      1152,
      20,
      v42);
  }
  return v24;
}
