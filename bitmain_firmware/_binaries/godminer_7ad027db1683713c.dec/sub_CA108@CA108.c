int __fastcall sub_CA108(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, unsigned int *a6, _DWORD *a7)
{
  unsigned int v10; // r0
  int v11; // r6
  int v12; // lr
  int v13; // r12
  _DWORD *v14; // r3
  _DWORD *v15; // r2
  __int64 *v16; // r12
  int v17; // r10
  int v18; // r9
  int v19; // r7
  int v20; // r10
  int v21; // r9
  int v22; // r7
  int v23; // r9
  int v24; // r7
  int v25; // r6
  int v26; // r6
  int v27; // r9
  int v28; // r7
  int v29; // r6
  int v30; // r0
  int v31; // r2
  int v32; // r6
  int v33; // r0
  int v34; // r2
  __int64 v35; // r6
  int v36; // r1
  __int64 v37; // d16
  __int64 v38; // r10
  unsigned int v39; // r0
  int v41; // r1
  unsigned int v42; // r7
  char v44[4100]; // [sp+18h] [bp-1004h] BYREF

  v10 = BM_CRC16((unsigned __int8 *)(a2 + 2), 39);
  v11 = *(unsigned __int8 *)(a2 + 42) | (*(unsigned __int8 *)(a2 + 41) << 8);
  if ( v10 == v11 )
  {
    v12 = *(unsigned __int8 *)(a2 + 3);
    v13 = *(_DWORD *)(a1 + 800);
    v14 = (_DWORD *)(v13 + 40 * v12);
    v15 = (_DWORD *)(v13 + 32 * (v12 + 576));
    v16 = (__int64 *)(v13 + 8 * v12);
    v14 += 2048;
    v17 = v14[1];
    v18 = v14[2];
    v19 = v14[3];
    *(_DWORD *)(a3 + 34) = *v14;
    *(_DWORD *)(a3 + 38) = v17;
    *(_DWORD *)(a3 + 42) = v18;
    *(_DWORD *)(a3 + 46) = v19;
    v20 = v14[5];
    v21 = v14[6];
    v22 = v14[7];
    *(_DWORD *)(a3 + 50) = v14[4];
    *(_DWORD *)(a3 + 54) = v20;
    *(_DWORD *)(a3 + 58) = v21;
    *(_DWORD *)(a3 + 62) = v22;
    v23 = v15[1];
    v24 = v15[2];
    v25 = v15[3];
    *(_DWORD *)(a3 + 66) = *v15;
    *(_DWORD *)(a3 + 70) = v23;
    *(_DWORD *)(a3 + 74) = v24;
    *(_DWORD *)(a3 + 78) = v25;
    v26 = v15[7];
    v27 = v15[5];
    v28 = v15[6];
    *(_DWORD *)(a3 + 82) = v15[4];
    *(_DWORD *)(a3 + 86) = v27;
    *(_DWORD *)(a3 + 90) = v28;
    *(_DWORD *)(a3 + 94) = v26;
    v16[512] |= (*(unsigned __int8 *)(a2 + 6) << 16)
              + (*(unsigned __int8 *)(a2 + 7) << 8)
              + *(unsigned __int8 *)(a2 + 8)
              + (*(unsigned __int8 *)(a2 + 5) << 24);
    v29 = *(_DWORD *)(a2 + 13);
    v30 = *(_DWORD *)(a2 + 17);
    v31 = *(_DWORD *)(a2 + 21);
    *(_DWORD *)(a3 + 98) = *(_DWORD *)(a2 + 9);
    *(_DWORD *)(a3 + 102) = v29;
    *(_DWORD *)(a3 + 106) = v30;
    *(_DWORD *)(a3 + 110) = v31;
    v32 = *(_DWORD *)(a2 + 29);
    v33 = *(_DWORD *)(a2 + 33);
    v34 = *(_DWORD *)(a2 + 37);
    *(_DWORD *)(a3 + 114) = *(_DWORD *)(a2 + 25);
    *(_DWORD *)(a3 + 118) = v32;
    *(_DWORD *)(a3 + 122) = v33;
    *(_DWORD *)(a3 + 126) = v34;
    v35 = v16[512];
    v36 = *((_DWORD *)v16 + 1025);
    *(_QWORD *)(a3 + 26) = v35;
    LODWORD(v37) = 0;
    HIDWORD(v37) = v36;
    v16[512] = v37;
    *(_BYTE *)(a3 + 16) = v12;
    *(_BYTE *)(a3 + 17) = *(_BYTE *)(a2 + 4);
    *(_QWORD *)(a3 + 18) = v16[256];
    v38 = *v16;
    *(_QWORD *)a3 = *v16;
    *a7 = v38;
    v39 = sub_25A4F8(v35 & 7, 0, *(unsigned int *)(a1 + 404));
    *(_DWORD *)(a3 + 12) = (unsigned __int16)v35 >> 12;
    *(_DWORD *)(a3 + 8) = v39;
    *a6 = v39;
    v41 = *(_DWORD *)(a3 + 26);
    a5[1] = *(_DWORD *)(a3 + 30);
    *a5 = v41;
    *a4 = 1;
    return 0;
  }
  else
  {
    v42 = v10;
    V_LOCK();
    logfmt_raw(v44, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v42, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      187,
      "packet_2_nonce_eth",
      18,
      1002,
      100,
      v44);
    return 11;
  }
}
