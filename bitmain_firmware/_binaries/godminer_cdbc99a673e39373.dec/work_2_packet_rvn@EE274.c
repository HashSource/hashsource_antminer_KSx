int __fastcall work_2_packet_rvn(int *a1, int *a2, int a3, _DWORD *a4)
{
  int v4; // r6
  int v9; // r0
  int v10; // r3
  int v11; // r12
  _QWORD *v12; // r2
  __int64 v13; // d16
  int v14; // r2
  int v15; // lr
  int v16; // r12
  int v17; // r8
  int v18; // lr
  int v19; // r12
  int v20; // lr
  int v21; // r9
  int v22; // r12
  int v23; // r7
  _DWORD *v24; // r1
  int v25; // r12
  int v26; // lr
  int v27; // r9
  int v28; // r8
  int v29; // lr
  int v30; // r12
  _DWORD *v31; // r3
  int v32; // lr
  int v33; // r12
  int v34; // r9
  __int64 v35; // r2
  int v36; // r5
  __int16 v37; // r0
  int v39; // r0
  int v40; // r0
  _BYTE v41[4100]; // [sp+10h] [bp-1004h] BYREF

  v4 = a1[200];
  if ( v4 )
  {
    *(_BYTE *)a3 = 85;
    *(_BYTE *)(a3 + 1) = -86;
    *(_BYTE *)(a3 + 2) = 32;
    if ( a1[117] == 1 )
      *(_BYTE *)(a3 + 2) = 48;
    v9 = *a2;
    v10 = *(unsigned __int8 *)(v4 + 35072);
    v11 = (unsigned __int8)byte_2E9A28;
    v12 = (_QWORD *)(v4 + 8 * v10);
    v13 = *(_QWORD *)a2;
    v12[256] = *((_QWORD *)a2 + 1);
    *v12 = v13;
    if ( *((unsigned __int8 *)a2 + 88) != v11 )
    {
      V_LOCK(v9);
      v39 = logfmt_raw((int)v41, 0x1000u);
      V_UNLOCK(v39);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
        187,
        "work_2_packet_rvn",
        17,
        928,
        40,
        v41);
      set_ticketmask_rvn((int)a1, a1[102]);
      LOBYTE(v11) = *((_BYTE *)a2 + 88);
      v10 = *(unsigned __int8 *)(v4 + 35072);
      byte_2E9A28 = v11;
    }
    *(_BYTE *)(v4 + v10 + 34816) = v11;
    v14 = a2[5];
    v15 = a2[6];
    v16 = a2[7];
    *(_DWORD *)(a3 + 4) = a2[4];
    *(_DWORD *)(a3 + 8) = v14;
    *(_DWORD *)(a3 + 12) = v15;
    *(_DWORD *)(a3 + 16) = v16;
    v17 = a2[8];
    v18 = a2[10];
    v19 = a2[11];
    *(_DWORD *)(a3 + 24) = a2[9];
    *(_DWORD *)(a3 + 20) = v17;
    *(_DWORD *)(a3 + 28) = v18;
    *(_DWORD *)(a3 + 32) = v19;
    v20 = a2[5];
    v21 = a2[6];
    v22 = a2[7];
    v23 = 0;
    v24 = (_DWORD *)(v4 + 40 * *(unsigned __int8 *)(v4 + 35072) + 0x2000);
    *v24 = a2[4];
    v24[1] = v20;
    v24[2] = v21;
    v24[3] = v22;
    v25 = a2[11];
    v26 = a2[9];
    v27 = a2[10];
    v24[4] = a2[8];
    v24[5] = v26;
    v24[6] = v27;
    v24[7] = v25;
    v28 = a2[13];
    v29 = a2[14];
    v30 = a2[15];
    v31 = (_DWORD *)(v4 + 32 * (*(unsigned __int8 *)(v4 + 35072) + 576));
    *v31 = a2[12];
    v31[1] = v28;
    v31[2] = v29;
    v31[3] = v30;
    v32 = a2[18];
    v33 = a2[19];
    v34 = a2[16];
    v31[5] = a2[17];
    v31[6] = v32;
    v31[7] = v33;
    v31[4] = v34;
    v35 = *((_QWORD *)a2 + 10);
    LOBYTE(v28) = BYTE1(a2[20]);
    *(_BYTE *)(a3 + 43) = v35;
    *(_BYTE *)(a3 + 42) = v28;
    *(_BYTE *)(a3 + 39) = BYTE4(v35);
    *(_BYTE *)(a3 + 41) = BYTE2(v35);
    *(_BYTE *)(a3 + 38) = BYTE5(v35);
    *(_BYTE *)(a3 + 40) = BYTE3(v35);
    *(_BYTE *)(a3 + 37) = BYTE6(v35);
    *(_BYTE *)(a3 + 36) = HIBYTE(v35);
    HIDWORD(v35) = *(unsigned __int8 *)(v4 + 35072);
    v36 = a2[20];
    *(_DWORD *)(v4 + 8 * (HIDWORD(v35) + 512)) = 0;
    *(_DWORD *)(v4 + 8 * (HIDWORD(v35) + 512) + 4) = v36;
    *(_BYTE *)(a3 + 3) = BYTE4(v35);
    *(_BYTE *)(v4 + 35072) = BYTE4(v35) + 1;
    v37 = BM_CRC16(a3 + 2, 42);
    *(_BYTE *)(a3 + 45) = v37;
    *(_BYTE *)(a3 + 44) = HIBYTE(v37);
    *a4 = 46;
  }
  else
  {
    V_LOCK(a1);
    v23 = 3;
    v40 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v40);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      187,
      "work_2_packet_rvn",
      17,
      915,
      20,
      v41);
  }
  return v23;
}
