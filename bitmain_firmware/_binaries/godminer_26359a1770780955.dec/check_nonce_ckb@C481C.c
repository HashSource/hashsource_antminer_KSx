int __fastcall check_nonce_ckb(int a1, int a2)
{
  int v2; // r4
  _DWORD *v3; // r8
  int v4; // r12
  unsigned int v6; // r7
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // t1
  int v20; // r3
  int v21; // r1
  int v22; // r2
  unsigned int v23; // r0
  unsigned int v24; // r3
  unsigned __int8 *v25; // r3
  int v26; // r4
  int v27; // r2
  int v28; // r4
  unsigned int v29; // t1
  unsigned int v30; // t1
  bool v31; // cc
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // [sp+30h] [bp-10B0h] BYREF
  char v37[32]; // [sp+50h] [bp-1090h] BYREF
  char v38[32]; // [sp+70h] [bp-1070h] BYREF
  _BYTE v39[32]; // [sp+90h] [bp-1050h] BYREF
  _DWORD v40[8]; // [sp+B0h] [bp-1030h] BYREF
  int v41; // [sp+D0h] [bp-1010h]
  int v42; // [sp+D4h] [bp-100Ch]
  int v43; // [sp+D8h] [bp-1008h]
  int v44; // [sp+DCh] [bp-1004h]
  _BYTE v45[4096]; // [sp+E0h] [bp-1000h] BYREF

  v2 = *(_DWORD *)(a1 + 824);
  v3 = (_DWORD *)a2;
  v4 = *(unsigned __int8 *)(a2 + 65);
  v6 = *(_DWORD *)(v2 + 4 * (v4 + 2816));
  v7 = (int *)(v2 + 48 * v4 + 5120);
  v8 = *v7;
  v9 = v7[1];
  v10 = v7[2];
  v11 = v7[3];
  v7 += 4;
  v40[0] = v8;
  v40[1] = v9;
  v40[2] = v10;
  v40[3] = v11;
  v12 = *v7;
  v13 = v7[1];
  v14 = v7[2];
  v15 = v7[3];
  v7 += 4;
  v40[4] = v12;
  v40[5] = v13;
  v40[6] = v14;
  v40[7] = v15;
  v16 = v7[1];
  v17 = v7[2];
  v18 = v7[3];
  v41 = *v7;
  v42 = v16;
  v43 = v17;
  v44 = v18;
  v19 = v3[12];
  v3 += 12;
  v20 = v3[3];
  v21 = v3[1];
  v22 = v3[2];
  v41 = v19;
  v42 = v21;
  v43 = v22;
  v44 = v20;
  EaglesongHash(v39, v40, 48);
  v23 = target_to_diff_ckb((int)v39);
  if ( v23 <= 0x26 )
  {
    V_LOCK(v23);
    V_INT((int)&v36, "chain");
    v35 = logfmt_raw((int)v45, 0x1000u);
    V_UNLOCK(v35);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ckb_2042/backend_ckb_2042.c",
      192,
      "check_nonce_ckb",
      15,
      560,
      20,
      v45);
    return 2;
  }
  else
  {
    v24 = *(unsigned __int8 *)(a2 + 64);
    if ( v24 == v23 )
    {
      if ( v6 > v24 )
      {
LABEL_11:
        V_LOCK(v23);
        V_INT((int)v38, "chain");
        v33 = logfmt_raw((int)v45, 0x1000u);
        V_UNLOCK(v33);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_ckb_2042/backend_ckb_2042.c",
          192,
          "check_nonce_ckb",
          15,
          590,
          20,
          v45);
        return 1;
      }
    }
    else if ( v6 > v23 )
    {
      V_LOCK(v23);
      V_INT((int)v37, "chain");
      v34 = logfmt_raw((int)v45, 0x1000u);
      V_UNLOCK(v34);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ckb_2042/backend_ckb_2042.c",
        192,
        "check_nonce_ckb",
        15,
        565,
        20,
        v45);
      return 3;
    }
    v25 = v39;
    v26 = v2 + 32 * (*(unsigned __int8 *)(a2 + 65) + 368);
    v27 = v26 - 1;
    v28 = v26 + 31;
    do
    {
      v29 = *v25++;
      v23 = v29;
      v30 = *(unsigned __int8 *)++v27;
      v31 = v23 > v30;
      if ( v23 < v30 )
        break;
      if ( v31 )
        goto LABEL_11;
    }
    while ( v27 != v28 );
    return 0;
  }
}
