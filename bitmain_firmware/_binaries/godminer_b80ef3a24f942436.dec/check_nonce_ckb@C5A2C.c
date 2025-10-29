int __fastcall check_nonce_ckb(int a1, int a2)
{
  int v2; // r4
  _DWORD *v3; // r8
  int v4; // r12
  unsigned int v7; // r7
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // t1
  int v21; // r3
  int v22; // r1
  int v23; // r2
  unsigned int v24; // r0
  unsigned int v25; // r3
  unsigned __int8 *v26; // r3
  int v27; // r4
  int v28; // r2
  int v29; // r4
  unsigned int v30; // t1
  unsigned int v31; // t1
  bool v32; // cc
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // [sp+30h] [bp-10B0h] BYREF
  char v38[32]; // [sp+50h] [bp-1090h] BYREF
  char v39[32]; // [sp+70h] [bp-1070h] BYREF
  _BYTE v40[32]; // [sp+90h] [bp-1050h] BYREF
  _DWORD v41[8]; // [sp+B0h] [bp-1030h] BYREF
  int v42; // [sp+D0h] [bp-1010h]
  int v43; // [sp+D4h] [bp-100Ch]
  int v44; // [sp+D8h] [bp-1008h]
  int v45; // [sp+DCh] [bp-1004h]
  _BYTE v46[4096]; // [sp+E0h] [bp-1000h] BYREF

  v2 = *(_DWORD *)(a1 + 824);
  v3 = (_DWORD *)a2;
  v4 = *(unsigned __int8 *)(a2 + 65);
  v7 = *(_DWORD *)(v2 + 4 * (v4 + 2816));
  v8 = (int *)(v2 + 48 * v4 + 5120);
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v8 += 4;
  v41[0] = v9;
  v41[1] = v10;
  v41[2] = v11;
  v41[3] = v12;
  v13 = *v8;
  v14 = v8[1];
  v15 = v8[2];
  v16 = v8[3];
  v8 += 4;
  v41[4] = v13;
  v41[5] = v14;
  v41[6] = v15;
  v41[7] = v16;
  v17 = v8[1];
  v18 = v8[2];
  v19 = v8[3];
  v42 = *v8;
  v43 = v17;
  v44 = v18;
  v45 = v19;
  v20 = v3[12];
  v3 += 12;
  v21 = v3[3];
  v22 = v3[1];
  v23 = v3[2];
  v42 = v20;
  v43 = v22;
  v44 = v23;
  v45 = v21;
  EaglesongHash((int)v40, (int)v41, 0x30u);
  v24 = target_to_diff_ckb((int)v40);
  if ( v24 <= 0x26 )
  {
    V_LOCK(v24);
    V_INT((int)&v37, "chain", *(int *)(a1 + 248));
    v36 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v36);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      187,
      "check_nonce_ckb",
      15,
      560,
      20,
      v46);
    return 2;
  }
  else
  {
    v25 = *(unsigned __int8 *)(a2 + 64);
    if ( v25 == v24 )
    {
      if ( v7 > v25 )
      {
LABEL_11:
        V_LOCK(v24);
        V_INT((int)v39, "chain", *(int *)(a1 + 248));
        v34 = logfmt_raw((int)v46, 0x1000u);
        V_UNLOCK(v34);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
          187,
          "check_nonce_ckb",
          15,
          590,
          20,
          v46);
        return 1;
      }
    }
    else if ( v7 > v24 )
    {
      V_LOCK(v24);
      V_INT((int)v38, "chain", *(int *)(a1 + 248));
      v35 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v35);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
        187,
        "check_nonce_ckb",
        15,
        565,
        20,
        v46);
      return 3;
    }
    v26 = v40;
    v27 = v2 + 32 * (*(unsigned __int8 *)(a2 + 65) + 368);
    v28 = v27 - 1;
    v29 = v27 + 31;
    do
    {
      v30 = *v26++;
      v24 = v30;
      v31 = *(unsigned __int8 *)++v28;
      v32 = v24 > v31;
      if ( v24 < v31 )
        break;
      if ( v32 )
        goto LABEL_11;
    }
    while ( v28 != v29 );
    return 0;
  }
}
