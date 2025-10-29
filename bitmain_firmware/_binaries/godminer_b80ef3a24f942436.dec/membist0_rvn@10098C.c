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
  _DWORD *v17; // r4
  int *v18; // r8
  __int64 v19; // r0
  int i; // r3
  unsigned int v21; // r2
  int v22; // t1
  int v23; // r0
  int v24; // r0
  int v26; // r0
  int v27; // [sp+38h] [bp-2E0h]
  char *ptr; // [sp+3Ch] [bp-2DCh]
  int v29; // [sp+40h] [bp-2D8h]
  int *v30; // [sp+54h] [bp-2C4h]
  _DWORD v31[5]; // [sp+64h] [bp-2B4h] BYREF
  char v32[32]; // [sp+78h] [bp-2A0h] BYREF
  char v33[32]; // [sp+98h] [bp-280h] BYREF
  char v34[32]; // [sp+B8h] [bp-260h] BYREF
  char v35[32]; // [sp+D8h] [bp-240h] BYREF
  char v36[32]; // [sp+F8h] [bp-220h] BYREF
  _DWORD s[128]; // [sp+118h] [bp-200h] BYREF
  double v38[512]; // [sp+318h] [bp+0h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v38, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    187,
    "membist0_rvn",
    12,
    814,
    20,
    v38);
  v31[0] = -2023406815;
  v31[1] = 1266163410;
  v31[2] = 2015285835;
  v31[3] = 517098360;
  v31[4] = -766805986;
  memset(s, 0, sizeof(s));
  v30 = v31;
  v3 = (int)malloc(0x1800u);
  v27 = 0;
  ptr = (char *)v3;
  do
  {
    V_LOCK(v3);
    V_INT((int)v32, "chain", *(int *)(a1 + 248));
    v4 = *v30++;
    v29 = 0;
    v5 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      187,
      "membist0_rvn",
      12,
      823,
      60,
      v38);
    sub_FD124(a1, 164, v4);
    do
    {
      sub_FD218(a1, v29, 28, 1);
      sub_FD218(a1, v29, 160, 3);
      usleep((__useconds_t)"r17hb863d821ff89472fE");
      v6 = ptr;
      v7 = sub_FD590(a1, (unsigned __int16)v29, 161, ptr);
      if ( v7 > 0 )
      {
        v8 = &ptr[12 * v7];
        do
        {
          while ( (*(_DWORD *)v6 & 0x80) == 0 )
          {
            V_LOCK(v7);
            v6 += 12;
            V_INT((int)v34, "chain", *(int *)(a1 + 248));
            v9 = logfmt_raw((int)v38, 0x1000u);
            V_UNLOCK(v9);
            v7 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
                   187,
                   "membist0_rvn",
                   12,
                   845,
                   100,
                   v38);
            if ( v6 == v8 )
              goto LABEL_10;
          }
          if ( (*(_DWORD *)v6 & 0xFFFFFF00) != 0 )
          {
            V_LOCK(v7);
            V_INT((int)v33, "chain", *(int *)(a1 + 248));
            v26 = logfmt_raw((int)v38, 0x1000u);
            V_UNLOCK(v26);
            v7 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
                   187,
                   "membist0_rvn",
                   12,
                   839,
                   100,
                   v38);
            s[16 * (unsigned __int8)v6[4] + v27] += bswap32(*(_DWORD *)v6) & 0x7FFFFF;
          }
          v6 += 12;
        }
        while ( v6 != v8 );
      }
LABEL_10:
      v10 = ptr;
      v11 = sub_FD590(a1, (unsigned __int16)v29, 162, ptr);
      if ( v11 > 0 )
      {
        v12 = &ptr[12 * v11];
        do
        {
          while ( (*(_DWORD *)v10 & 0xFFFFFF00) == 0 || (*(_DWORD *)v10 & 0x80) == 0 )
          {
            v10 += 12;
            if ( v10 == v12 )
              goto LABEL_16;
          }
          V_LOCK(v11);
          v10 += 12;
          V_INT((int)v35, "chain", *(int *)(a1 + 248));
          v13 = logfmt_raw((int)v38, 0x1000u);
          V_UNLOCK(v13);
          v11 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
                  187,
                  "membist0_rvn",
                  12,
                  854,
                  100,
                  v38);
          s[16 * (unsigned __int8)*(v10 - 8) + v27] += bswap32(*((_DWORD *)v10 - 3)) & 0x7FFFFF;
        }
        while ( v10 != v12 );
      }
LABEL_16:
      v14 = ptr;
      v3 = sub_FD590(a1, (unsigned __int16)v29, 163, ptr);
      if ( v3 > 0 )
      {
        v15 = &ptr[12 * v3];
        do
        {
          while ( (*(_DWORD *)v14 & 0xFFFF00) == 0 || (*(_DWORD *)v14 & 0xC0) == 0 )
          {
            v14 += 12;
            if ( v15 == v14 )
              goto LABEL_22;
          }
          V_LOCK(v3);
          v14 += 12;
          V_INT((int)v36, "chain", *(int *)(a1 + 248));
          v16 = logfmt_raw((int)v38, 0x1000u);
          V_UNLOCK(v16);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
                 187,
                 "membist0_rvn",
                 12,
                 864,
                 100,
                 v38);
          s[16 * (unsigned __int8)*(v14 - 8) + v27] += bswap32(*((_DWORD *)v14 - 3)) & 0x7FFF;
        }
        while ( v15 != v14 );
      }
LABEL_22:
      ++v29;
    }
    while ( v29 != 64 );
    ++v27;
  }
  while ( v27 != 5 );
  v17 = s;
  free(ptr);
  v18 = v31;
  memset(v38, 0, 64);
  do
  {
    v19 = 0;
    for ( i = 0; i != 8; ++i )
    {
      v21 = v17[16 * i];
      v19 += v21;
    }
    v22 = *v18++;
    ++v17;
    v23 = sprintf((char *)v38, "<mbist0 %08x> %ld", v22, 8);
  }
  while ( &s[5] != v17 );
  v24 = dev_ctrl(v23);
  (*(void (__fastcall **)(_DWORD))(v24 + 96))(*(_DWORD *)(a1 + 240));
  return 0;
}
