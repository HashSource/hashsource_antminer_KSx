int __fastcall check_nonce_dcr(int a1, int a2)
{
  int v2; // r4
  int v4; // r5
  int v5; // r0
  _DWORD *v6; // r12
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  unsigned int v13; // r0
  unsigned int v14; // r3
  _BYTE *v15; // r5
  unsigned __int8 *v16; // r4
  int v17; // r0
  unsigned int v18; // r2
  unsigned int v19; // r3
  int v21; // r0
  int v22; // r0
  int v23; // r0
  unsigned int v24; // [sp+14h] [bp-10E0h]
  _BYTE v25[32]; // [sp+1Ch] [bp-10D8h] BYREF
  _DWORD s[45]; // [sp+3Ch] [bp-10B8h] BYREF
  _BYTE v27[4100]; // [sp+F0h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 800);
  v4 = 180 * *(unsigned __int8 *)(a2 + 65);
  v24 = *(_DWORD *)(v2 + 4 * (*(unsigned __int8 *)(a2 + 65) + 7040));
  memset(s, 0, sizeof(s));
  memcpy(s, (const void *)(v2 + v4 + 5120), 0x8Cu);
  v5 = *(_DWORD *)(a2 + 52);
  v6 = (_DWORD *)(v2 + v4 + 5271);
  v7 = *(_DWORD *)(a2 + 56);
  v8 = *(_DWORD *)(a2 + 60);
  s[35] = *(_DWORD *)(a2 + 48);
  s[36] = v5;
  s[37] = v7;
  s[38] = v8;
  v9 = v6[1];
  v10 = v6[2];
  v11 = v6[3];
  s[39] = *v6;
  s[40] = v9;
  s[41] = v10;
  s[42] = v11;
  v12 = v6[5];
  s[43] = v6[4];
  s[44] = v12;
  decred_hash(v25, s);
  v13 = target_to_diff_dcr((int)v25);
  if ( v13 <= 0x26 )
  {
    V_LOCK(v13);
    v23 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
      187,
      "check_nonce_dcr",
      15,
      580,
      20,
      v27);
    return 2;
  }
  else
  {
    v14 = *(unsigned __int8 *)(a2 + 64);
    if ( v14 == v13 )
    {
      if ( v24 > v14 )
      {
LABEL_11:
        V_LOCK(v13);
        v21 = logfmt_raw((int)v27, 0x1000u);
        V_UNLOCK(v21);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
          187,
          "check_nonce_dcr",
          15,
          598,
          20,
          v27);
        return 1;
      }
    }
    else if ( v24 > v13 )
    {
      V_LOCK(v13);
      v22 = logfmt_raw((int)v27, 0x1000u);
      V_UNLOCK(v22);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
        187,
        "check_nonce_dcr",
        15,
        585,
        40,
        v27);
      return 3;
    }
    v15 = s;
    v16 = (unsigned __int8 *)(v2 + 32 * *(unsigned __int8 *)(a2 + 65) + 28704);
    do
    {
      V_LOCK(v13);
      --v15;
      --v16;
      v17 = logfmt_raw((int)v27, 0x1000u);
      V_UNLOCK(v17);
      v13 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
              187,
              "fulltest_dcr",
              12,
              495,
              20,
              v27);
      v18 = (unsigned __int8)*v15;
      v19 = *v16;
      if ( v18 < v19 )
        break;
      if ( v18 > v19 )
        goto LABEL_11;
    }
    while ( v25 != v15 );
    return 0;
  }
}
