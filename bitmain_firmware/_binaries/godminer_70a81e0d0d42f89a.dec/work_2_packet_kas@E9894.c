int __fastcall work_2_packet_kas(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  void *v6; // r0
  int v7; // r4
  int v8; // r9
  int v9; // r2
  int v10; // r3
  int v11; // r11
  _DWORD *v12; // r0
  _BYTE *v13; // lr
  _DWORD *v14; // r3
  int *v15; // r0
  _BYTE *v16; // r12
  int *v17; // r1
  int v18; // t1
  int v19; // r8
  int v20; // r7
  int v21; // lr
  int v22; // lr
  int v23; // r10
  int v24; // r8
  int v25; // lr
  int v26; // r7
  _DWORD *v27; // r2
  int v28; // r7
  int v29; // lr
  int v30; // r2
  int v31; // r3
  int *v32; // r3
  int v33; // r4
  int v34; // lr
  int v35; // r12
  int v36; // r1
  int v37; // r2
  char v38; // r2
  __int16 v39; // r0
  int result; // r0
  int v41; // r0
  int *v42; // [sp+10h] [bp-100Ch]
  int v43; // [sp+10h] [bp-100Ch]
  _BYTE v45[4100]; // [sp+18h] [bp-1004h] BYREF

  v6 = (void *)dword_2FCCB0;
  if ( !dword_2FCCB0 )
  {
    v43 = a2;
    v6 = malloc(0x450u);
    a2 = v43;
    dword_2FCCB0 = (int)v6;
    v7 = *(_DWORD *)(a1 + 824);
    if ( v7 )
      goto LABEL_3;
LABEL_12:
    V_LOCK(v6);
    v41 = logfmt_raw((int)v45, 0x1000u);
    V_UNLOCK(v41);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_kas_2380/backend_kas_2380.c",
      192,
      "work_2_packet_kas",
      17,
      205,
      20,
      v45);
    return 3;
  }
  v7 = *(_DWORD *)(a1 + 824);
  if ( !v7 )
    goto LABEL_12;
LABEL_3:
  v8 = v7 + 12288;
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 48;
  v9 = a2;
  v10 = *(unsigned __int8 *)(v7 + 12416);
  v11 = v10 + 260;
  v12 = (_DWORD *)(v7 + 8 * v10);
  v13 = (_BYTE *)(v7 + v10 + 0x2000);
  *v12 = *(_DWORD *)a2;
  v14 = (_DWORD *)(v7 + 32 * (v10 + 260));
  v12[1] = *(_DWORD *)(a2 + 4);
  v15 = (int *)(a2 + 16);
  v16 = a3 + 4;
  v42 = (int *)(a2 + 16);
  *v13 = (unsigned int)*(double *)(a2 + 192);
  v18 = *(_DWORD *)(a2 + 64);
  v17 = (int *)(a2 + 64);
  v19 = v17[1];
  v20 = v17[2];
  v21 = v17[3];
  *(_DWORD *)(v7 + 32 * v11) = v18;
  v14[1] = v19;
  v14[2] = v20;
  v14[3] = v21;
  v22 = v17[7];
  v23 = v17[4];
  v24 = v17[5];
  v14[6] = v17[6];
  v14[4] = v23;
  v14[5] = v24;
  v14[7] = v22;
  v25 = *(_DWORD *)(v9 + 8);
  v26 = *(_DWORD *)(v9 + 12);
  v27 = (_DWORD *)(v7 + 8 * (*(unsigned __int8 *)(v7 + 12416) + 128));
  *v27 = v25;
  v27[1] = v26;
  do
  {
    v28 = *v15;
    v15 += 4;
    v29 = *(v15 - 3);
    v16 += 16;
    v30 = *(v15 - 2);
    v31 = *(v15 - 1);
    *((_DWORD *)v16 - 4) = v28;
    *((_DWORD *)v16 - 3) = v29;
    *((_DWORD *)v16 - 2) = v30;
    *((_DWORD *)v16 - 1) = v31;
  }
  while ( v15 != v17 );
  v32 = v42;
  v33 = v7 + 48 * *(unsigned __int8 *)(v7 + 12416) + 2048;
  do
  {
    v34 = *v32;
    v32 += 4;
    v35 = *(v32 - 3);
    v33 += 16;
    v36 = *(v32 - 2);
    v37 = *(v32 - 1);
    *(_DWORD *)(v33 - 16) = v34;
    *(_DWORD *)(v33 - 12) = v35;
    *(_DWORD *)(v33 - 8) = v36;
    *(_DWORD *)(v33 - 4) = v37;
  }
  while ( v32 != v42 + 12 );
  v38 = *(_BYTE *)(v8 + 128);
  a3[3] = v38;
  *(_BYTE *)(v8 + 128) = (v38 + 1) & 0x7F;
  v39 = BM_CRC16(a3 + 2, 50);
  a3[53] = v39;
  a3[52] = HIBYTE(v39);
  result = *(unsigned __int8 *)(a1 + 253);
  *a4 = 54;
  if ( result )
  {
    result = *(unsigned __int8 *)(a1 + 254);
    if ( *(_BYTE *)(a1 + 254) )
    {
      sub_E6A08(a1, 36);
      set_misc_control_kas(a1);
      result = 0;
      *(_BYTE *)(a1 + 253) = 0;
    }
  }
  return result;
}
