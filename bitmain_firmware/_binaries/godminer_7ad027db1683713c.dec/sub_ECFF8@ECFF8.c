int __fastcall sub_ECFF8(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  unsigned int v11; // r0
  int v12; // r7
  int v13; // r7
  int v14; // r12
  _DWORD *v15; // r3
  _DWORD *v16; // r2
  __int64 *v17; // r12
  int v18; // r10
  int v19; // r9
  int v20; // r8
  int v21; // r10
  int v22; // r9
  int v23; // r8
  int v24; // r10
  int v25; // r9
  int v26; // r8
  int v27; // r8
  int v28; // r10
  int v29; // r9
  int v30; // r10
  int v31; // r0
  int v32; // r2
  int v33; // r10
  int v34; // r0
  int v35; // r2
  __int64 v37; // r2
  int v38; // r11
  __int64 v39; // d16
  __int64 v40; // d16
  unsigned int v41; // r8
  char v42[4080]; // [sp+10h] [bp-1004h] BYREF

  v11 = BM_CRC16((unsigned __int8 *)(a2 + 2), 39);
  v12 = *(unsigned __int8 *)(a2 + 42) | (*(unsigned __int8 *)(a2 + 41) << 8);
  if ( v11 == v12 )
  {
    v13 = *(unsigned __int8 *)(a2 + 8);
    v14 = *(_DWORD *)(a1 + 800);
    v15 = (_DWORD *)(v14 + 40 * v13);
    v16 = (_DWORD *)(v14 + 32 * (v13 + 576));
    v17 = (__int64 *)(v14 + 8 * v13);
    v15 += 2048;
    v18 = v15[1];
    v19 = v15[2];
    v20 = v15[3];
    *(_DWORD *)(a3 + 34) = *v15;
    *(_DWORD *)(a3 + 38) = v18;
    *(_DWORD *)(a3 + 42) = v19;
    *(_DWORD *)(a3 + 46) = v20;
    v21 = v15[5];
    v22 = v15[6];
    v23 = v15[7];
    *(_DWORD *)(a3 + 50) = v15[4];
    *(_DWORD *)(a3 + 54) = v21;
    *(_DWORD *)(a3 + 58) = v22;
    *(_DWORD *)(a3 + 62) = v23;
    v24 = v16[1];
    v25 = v16[2];
    v26 = v16[3];
    *(_DWORD *)(a3 + 66) = *v16;
    *(_DWORD *)(a3 + 70) = v24;
    *(_DWORD *)(a3 + 74) = v25;
    *(_DWORD *)(a3 + 78) = v26;
    v27 = v16[7];
    v28 = v16[5];
    v29 = v16[6];
    *(_DWORD *)(a3 + 82) = v16[4];
    *(_DWORD *)(a3 + 86) = v28;
    *(_DWORD *)(a3 + 90) = v29;
    *(_DWORD *)(a3 + 94) = v27;
    v17[512] |= (*(unsigned __int8 *)(a2 + 4) << 16)
              + (*(unsigned __int8 *)(a2 + 5) << 8)
              + *(unsigned __int8 *)(a2 + 6)
              + (*(unsigned __int8 *)(a2 + 3) << 24);
    v30 = *(_DWORD *)(a2 + 13);
    v31 = *(_DWORD *)(a2 + 17);
    v32 = *(_DWORD *)(a2 + 21);
    *(_DWORD *)(a3 + 98) = *(_DWORD *)(a2 + 9);
    *(_DWORD *)(a3 + 102) = v30;
    *(_DWORD *)(a3 + 106) = v31;
    *(_DWORD *)(a3 + 110) = v32;
    v33 = *(_DWORD *)(a2 + 29);
    v34 = *(_DWORD *)(a2 + 33);
    v35 = *(_DWORD *)(a2 + 37);
    *(_DWORD *)(a3 + 114) = *(_DWORD *)(a2 + 25);
    *(_DWORD *)(a3 + 118) = v33;
    *(_DWORD *)(a3 + 122) = v34;
    *(_DWORD *)(a3 + 126) = v35;
    v37 = v17[512];
    v38 = *((_DWORD *)v17 + 1025);
    *(_QWORD *)(a3 + 26) = v37;
    LODWORD(v39) = 0;
    HIDWORD(v39) = v38;
    v17[512] = v39;
    *(_BYTE *)(a3 + 16) = v13;
    *(_BYTE *)(a3 + 17) = *(_BYTE *)(a2 + 7);
    *(_QWORD *)(a3 + 18) = v17[256];
    v40 = *v17;
    *(_QWORD *)a3 = *v17;
    *a7 = v40;
    *(_DWORD *)(a3 + 12) = ((unsigned int)v37 >> 10) & 0xF;
    *a6 = 0;
    LODWORD(v37) = *(_DWORD *)(a3 + 30);
    *a5 = *(_DWORD *)(a3 + 26);
    a5[1] = v37;
    *a4 = 1;
    return 0;
  }
  else
  {
    v41 = v11;
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v41, v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      187,
      "packet_2_nonce_rvn",
      18,
      990,
      100,
      v42);
    return 11;
  }
}
