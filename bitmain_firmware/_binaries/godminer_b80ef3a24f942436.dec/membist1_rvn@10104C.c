int __fastcall membist1_rvn(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r10
  int v5; // r0
  unsigned int *v6; // r4
  int v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r0
  unsigned int *v12; // r4
  int v13; // r5
  int v14; // r0
  char *v15; // r3
  int v16; // r0
  int v17; // t1
  int v18; // r0
  int v19; // r0
  int v21; // r0
  char *v22; // r2
  int v23; // r0
  char *v24; // r2
  void *s; // [sp+40h] [bp-1134h]
  int v26; // [sp+44h] [bp-1130h]
  int v27; // [sp+50h] [bp-1124h] BYREF
  char v28[32]; // [sp+70h] [bp-1104h] BYREF
  int v29; // [sp+90h] [bp-10E4h] BYREF
  char v30[32]; // [sp+B0h] [bp-10C4h] BYREF
  int v31; // [sp+D0h] [bp-10A4h] BYREF
  char v32[32]; // [sp+F0h] [bp-1084h] BYREF
  _BYTE v33[56]; // [sp+110h] [bp-1064h] BYREF
  double v34; // [sp+148h] [bp-102Ch] BYREF
  __int64 v35; // [sp+150h] [bp-1024h]
  __int64 v36; // [sp+158h] [bp-101Ch]
  double v37; // [sp+160h] [bp-1014h]
  double v38; // [sp+168h] [bp-100Ch] BYREF
  char v39[4100]; // [sp+170h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v27, "chain", *(int *)(a1 + 248));
  v2 = logfmt_raw((int)v39, 0x1000u);
  v26 = 0;
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    187,
    "membist1_rvn",
    12,
    894,
    60,
    v39);
  v35 = 0;
  v36 = 0;
  memset(&v33[32], 0, 24);
  v37 = 0.0;
  v38 = 0.0;
  v34 = 0.0;
  s = malloc(0x1800u);
  do
  {
    sub_FD218(a1, v26, 28, 1);
    usleep((__useconds_t)"r17hb863d821ff89472fE");
    sub_FD218(a1, v26, 160, -2147483647);
    usleep(0xC3500u);
    memset(s, 0, 0x1800u);
    v3 = sub_FD590(a1, (unsigned __int16)v26, 161, s);
    v4 = v3;
    if ( v3 == 8
      || (V_LOCK(v3),
          V_INT((int)v28, "chain", *(int *)(a1 + 248)),
          v5 = logfmt_raw((int)v39, 0x1000u),
          V_UNLOCK(v5),
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
                 187,
                 "membist1_rvn",
                 12,
                 914,
                 100,
                 v39),
          v4 > 0) )
    {
      v6 = (unsigned int *)s;
      v7 = 0;
      do
      {
        while ( (*v6 & 0x80) == 0 )
        {
          V_LOCK(v3);
          ++v7;
          v6 += 3;
          V_INT((int)v30, "chain", *(int *)(a1 + 248));
          v8 = logfmt_raw((int)v39, 0x1000u);
          V_UNLOCK(v8);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
                 187,
                 "membist1_rvn",
                 12,
                 930,
                 100,
                 v39);
          if ( v4 <= v7 )
            goto LABEL_10;
        }
        if ( (*v6 & 0xFFFFFF00) != 0 )
        {
          V_LOCK(v3);
          V_INT((int)&v29, "chain", *(int *)(a1 + 248));
          v21 = logfmt_raw((int)v39, 0x1000u);
          V_UNLOCK(v21);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
                 187,
                 "membist1_rvn",
                 12,
                 923,
                 100,
                 v39);
          v22 = &v39[4 * *((unsigned __int8 *)v6 + 4)];
          *((_DWORD *)v22 - 8) += bswap32(*v6) & 0x7FFFFF;
        }
        ++v7;
        v6 += 3;
      }
      while ( v4 > v7 );
    }
LABEL_10:
    memset(s, 0, 0x1800u);
    v9 = sub_FD590(a1, (unsigned __int16)v26, 162, s);
    v10 = v9;
    if ( v9 == 8
      || (V_LOCK(v9),
          V_INT((int)&v31, "chain", *(int *)(a1 + 248)),
          v11 = logfmt_raw((int)v39, 0x1000u),
          V_UNLOCK(v11),
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
                 187,
                 "membist1_rvn",
                 12,
                 938,
                 100,
                 v39),
          v10 > 0) )
    {
      v12 = (unsigned int *)s;
      v13 = 0;
      do
      {
        while ( (*v12 & 0x80) == 0 )
        {
          V_LOCK(v9);
          ++v13;
          v12 += 3;
          V_INT((int)v33, "chain", *(int *)(a1 + 248));
          v14 = logfmt_raw((int)v39, 0x1000u);
          V_UNLOCK(v14);
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
                 187,
                 "membist1_rvn",
                 12,
                 954,
                 100,
                 v39);
          if ( v10 <= v13 )
            goto LABEL_18;
        }
        if ( (*v12 & 0xFFFFFF00) != 0 )
        {
          V_LOCK(v9);
          V_INT((int)v32, "chain", *(int *)(a1 + 248));
          v23 = logfmt_raw((int)v39, 0x1000u);
          V_UNLOCK(v23);
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
                 187,
                 "membist1_rvn",
                 12,
                 947,
                 100,
                 v39);
          v24 = &v39[4 * *((unsigned __int8 *)v12 + 4)];
          *((_DWORD *)v24 - 16) += bswap32(*v12) & 0x7FFFFF;
        }
        ++v13;
        v12 += 3;
      }
      while ( v10 > v13 );
    }
LABEL_18:
    ++v26;
  }
  while ( v26 != 64 );
  free(s);
  v15 = (char *)&v34 + 4;
  v16 = 0;
  memset(v39, 0, 64);
  do
  {
    v17 = *((_DWORD *)v15 + 1);
    v15 += 4;
    v16 += v17;
  }
  while ( (char *)&v38 + 4 != v15 );
  v18 = sprintf(v39, "<mbist1> %ld", v16);
  v19 = dev_ctrl(v18);
  (*(void (__fastcall **)(_DWORD))(v19 + 96))(*(_DWORD *)(a1 + 240));
  qword_311314 = v35;
  qword_31131C = v36;
  qword_311324 = *(_QWORD *)&v37;
  qword_31132C = *(_QWORD *)&v38;
  return 0;
}
