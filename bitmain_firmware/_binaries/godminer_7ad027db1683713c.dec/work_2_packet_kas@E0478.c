int __fastcall work_2_packet_kas(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r4
  int v7; // r9
  int v8; // r2
  int v9; // r3
  int v10; // r11
  _DWORD *v11; // r0
  _BYTE *v12; // lr
  _DWORD *v13; // r3
  int *v14; // r0
  _BYTE *v15; // r12
  int *v16; // r1
  int v17; // t1
  int v18; // r8
  int v19; // r7
  int v20; // lr
  int v21; // lr
  int v22; // r10
  int v23; // r8
  int v24; // lr
  int v25; // r7
  _DWORD *v26; // r2
  int v27; // r7
  int v28; // lr
  int v29; // r2
  int v30; // r3
  int *v31; // r3
  int v32; // r4
  int v33; // lr
  int v34; // r12
  int v35; // r1
  int v36; // r2
  char v37; // r2
  __int16 v38; // r0
  int result; // r0
  void *v40; // r0
  int *v41; // [sp+10h] [bp-100Ch]
  int v42; // [sp+10h] [bp-100Ch]
  char v44[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( !dword_2E0458[0] )
  {
    v42 = a2;
    v40 = malloc(0x450u);
    a2 = v42;
    dword_2E0458[0] = (int)v40;
    v6 = *(_DWORD *)(a1 + 800);
    if ( v6 )
      goto LABEL_3;
LABEL_12:
    V_LOCK();
    logfmt_raw(v44, 0x1000u, v6, "id_map is null", "work_2_packet_kas");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      187,
      "work_2_packet_kas",
      17,
      203,
      20,
      v44);
    return 3;
  }
  v6 = *(_DWORD *)(a1 + 800);
  if ( !v6 )
    goto LABEL_12;
LABEL_3:
  v7 = v6 + 12288;
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 48;
  v8 = a2;
  v9 = *(unsigned __int8 *)(v6 + 12416);
  v10 = v9 + 260;
  v11 = (_DWORD *)(v6 + 8 * v9);
  v12 = (_BYTE *)(v6 + v9 + 0x2000);
  *v11 = *(_DWORD *)a2;
  v13 = (_DWORD *)(v6 + 32 * (v9 + 260));
  v11[1] = *(_DWORD *)(a2 + 4);
  v14 = (int *)(a2 + 16);
  v15 = a3 + 4;
  v41 = (int *)(a2 + 16);
  *v12 = (unsigned int)*(double *)(a2 + 192);
  v17 = *(_DWORD *)(a2 + 64);
  v16 = (int *)(a2 + 64);
  v18 = v16[1];
  v19 = v16[2];
  v20 = v16[3];
  *(_DWORD *)(v6 + 32 * v10) = v17;
  v13[1] = v18;
  v13[2] = v19;
  v13[3] = v20;
  v21 = v16[7];
  v22 = v16[4];
  v23 = v16[5];
  v13[6] = v16[6];
  v13[4] = v22;
  v13[5] = v23;
  v13[7] = v21;
  v24 = *(_DWORD *)(v8 + 8);
  v25 = *(_DWORD *)(v8 + 12);
  v26 = (_DWORD *)(v6 + 8 * (*(unsigned __int8 *)(v6 + 12416) + 128));
  *v26 = v24;
  v26[1] = v25;
  do
  {
    v27 = *v14;
    v14 += 4;
    v28 = *(v14 - 3);
    v15 += 16;
    v29 = *(v14 - 2);
    v30 = *(v14 - 1);
    *((_DWORD *)v15 - 4) = v27;
    *((_DWORD *)v15 - 3) = v28;
    *((_DWORD *)v15 - 2) = v29;
    *((_DWORD *)v15 - 1) = v30;
  }
  while ( v14 != v16 );
  v31 = v41;
  v32 = v6 + 48 * *(unsigned __int8 *)(v6 + 12416) + 2048;
  do
  {
    v33 = *v31;
    v31 += 4;
    v34 = *(v31 - 3);
    v32 += 16;
    v35 = *(v31 - 2);
    v36 = *(v31 - 1);
    *(_DWORD *)(v32 - 16) = v33;
    *(_DWORD *)(v32 - 12) = v34;
    *(_DWORD *)(v32 - 8) = v35;
    *(_DWORD *)(v32 - 4) = v36;
  }
  while ( v31 != v41 + 12 );
  v37 = *(_BYTE *)(v7 + 128);
  a3[3] = v37;
  *(_BYTE *)(v7 + 128) = (v37 + 1) & 0x7F;
  v38 = BM_CRC16(a3 + 2, 50);
  a3[53] = v38;
  a3[52] = HIBYTE(v38);
  result = *(unsigned __int8 *)(a1 + 237);
  *a4 = 54;
  if ( result )
  {
    result = *(unsigned __int8 *)(a1 + 238);
    if ( *(_BYTE *)(a1 + 238) )
    {
      sub_DD3A8(a1, 36);
      set_misc_control_kas(a1);
      result = 0;
      *(_BYTE *)(a1 + 237) = 0;
    }
  }
  return result;
}
