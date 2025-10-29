int __fastcall membist0_rvn(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r5
  int v5; // r0
  char *v6; // r4
  int v7; // r0
  char *v8; // r5
  int v9; // r0
  char *v10; // r4
  int v11; // r0
  char *v12; // r5
  int v13; // r0
  char *v14; // r4
  char *v15; // r5
  int v16; // r0
  double *v17; // r4
  int *v18; // r9
  int v19; // r3
  int v20; // t1
  int v21; // t1
  int v22; // r0
  int v23; // r0
  int v25; // r0
  int v26; // [sp+38h] [bp-120h]
  char *ptr; // [sp+3Ch] [bp-11Ch]
  int v28; // [sp+40h] [bp-118h]
  int *v29; // [sp+54h] [bp-104h]
  _DWORD v30[5]; // [sp+64h] [bp-F4h] BYREF
  char v31[32]; // [sp+78h] [bp-E0h] BYREF
  char v32[32]; // [sp+98h] [bp-C0h] BYREF
  char v33[32]; // [sp+B8h] [bp-A0h] BYREF
  char v34[32]; // [sp+D8h] [bp-80h] BYREF
  char v35[32]; // [sp+F8h] [bp-60h] BYREF
  double v36[8]; // [sp+118h] [bp-40h] BYREF
  double v37[512]; // [sp+158h] [bp+0h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v37, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "membist0_rvn",
    12,
    814,
    20,
    v37);
  memset(v36, 0, sizeof(v36));
  v30[0] = -2023406815;
  v30[1] = 1266163410;
  v30[2] = 2015285835;
  v30[3] = 517098360;
  v30[4] = -766805986;
  v29 = v30;
  v26 = 0;
  v3 = (int)malloc(0x300u);
  ptr = (char *)v3;
  do
  {
    V_LOCK(v3);
    V_INT((int)v31, "chain");
    v4 = *v29++;
    v28 = 0;
    v5 = logfmt_raw((int)v37, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
      192,
      "membist0_rvn",
      12,
      823,
      60,
      v37);
    sub_F942C(a1, 164, v4);
    do
    {
      sub_F9520(a1, v28, 28, 1);
      sub_F9520(a1, v28, 160, 3);
      usleep((__useconds_t)"20$core..fmt..UpperExp$u20$for$u20$i32$GT$3fmt17h8434dc95ce0e7ecdE");
      v6 = ptr;
      v7 = sub_F9898(a1, (unsigned __int16)v28, 161, ptr);
      if ( v7 > 0 )
      {
        v8 = &ptr[12 * v7];
        do
        {
          while ( (*(_DWORD *)v6 & 0x80) == 0 )
          {
            V_LOCK(v7);
            v6 += 12;
            V_INT((int)v33, "chain");
            v9 = logfmt_raw((int)v37, 0x1000u);
            V_UNLOCK(v9);
            v7 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
                   192,
                   "membist0_rvn",
                   12,
                   845,
                   100,
                   v37);
            if ( v6 == v8 )
              goto LABEL_10;
          }
          if ( (*(_DWORD *)v6 & 0xFFFFFF00) != 0 )
          {
            V_LOCK(v7);
            V_INT((int)v32, "chain");
            v25 = logfmt_raw((int)v37, 0x1000u);
            V_UNLOCK(v25);
            v7 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
                   192,
                   "membist0_rvn",
                   12,
                   839,
                   100,
                   v37);
            *((_DWORD *)&v36[8 * (unsigned __int8)v6[4]] + v26) += bswap32(*(_DWORD *)v6) & 0x7FFFFF;
          }
          v6 += 12;
        }
        while ( v6 != v8 );
      }
LABEL_10:
      v10 = ptr;
      v11 = sub_F9898(a1, (unsigned __int16)v28, 162, ptr);
      if ( v11 > 0 )
      {
        v12 = &ptr[12 * v11];
        do
        {
          while ( (*(_DWORD *)v10 & 0xFFFFFF00) == 0 || (*(_DWORD *)v10 & 0x80) == 0 )
          {
            v10 += 12;
            if ( v12 == v10 )
              goto LABEL_16;
          }
          V_LOCK(v11);
          v10 += 12;
          V_INT((int)v34, "chain");
          v13 = logfmt_raw((int)v37, 0x1000u);
          V_UNLOCK(v13);
          v11 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
                  192,
                  "membist0_rvn",
                  12,
                  854,
                  100,
                  v37);
          *((_DWORD *)&v36[8 * (unsigned __int8)*(v10 - 8)] + v26) += bswap32(*((_DWORD *)v10 - 3)) & 0x7FFFFF;
        }
        while ( v12 != v10 );
      }
LABEL_16:
      v14 = ptr;
      v3 = sub_F9898(a1, (unsigned __int16)v28, 163, ptr);
      if ( v3 > 0 )
      {
        v15 = &ptr[12 * v3];
        do
        {
          while ( (*(_DWORD *)v14 & 0xFFFF00) == 0 || (*(_DWORD *)v14 & 0xC0) == 0 )
          {
            v14 += 12;
            if ( v14 == v15 )
              goto LABEL_22;
          }
          V_LOCK(v3);
          v14 += 12;
          V_INT((int)v35, "chain");
          v16 = logfmt_raw((int)v37, 0x1000u);
          V_UNLOCK(v16);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
                 192,
                 "membist0_rvn",
                 12,
                 864,
                 100,
                 v37);
          *((_DWORD *)&v36[8 * (unsigned __int8)*(v14 - 8)] + v26) += bswap32(*((_DWORD *)v14 - 3)) & 0x7FFF;
        }
        while ( v14 != v15 );
      }
LABEL_22:
      ++v28;
    }
    while ( v28 != 64 );
    ++v26;
  }
  while ( v26 != 5 );
  v17 = v36;
  free(ptr);
  v18 = v30;
  memset(v37, 0, 64);
  do
  {
    v20 = *(_DWORD *)v17;
    v17 = (double *)((char *)v17 + 4);
    v19 = v20;
    v21 = *v18++;
    v22 = sprintf((char *)v37, "<mbist0 %08x> %ld", v21, v19);
  }
  while ( (double *)((char *)&v36[2] + 4) != v17 );
  v23 = dev_ctrl(v22);
  (*(void (__fastcall **)(_DWORD))(v23 + 80))(*(_DWORD *)(a1 + 240));
  return 0;
}
