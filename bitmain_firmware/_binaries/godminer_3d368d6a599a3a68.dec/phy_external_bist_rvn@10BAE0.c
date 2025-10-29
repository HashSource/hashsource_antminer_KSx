int __fastcall phy_external_bist_rvn(int a1, int a2, unsigned __int8 *a3, int a4)
{
  int v8; // r0
  char *v9; // r5
  unsigned __int8 *v10; // r3
  char *v11; // r6
  char *v12; // r4
  unsigned __int16 v13; // t1
  int v14; // r0
  int v15; // r0
  char *v16; // r6
  char v17; // t1
  unsigned __int16 v18; // t1
  int v19; // r0
  int v20; // r0
  unsigned __int8 *v21; // r3
  unsigned __int16 v22; // r5
  int v23; // r0
  char *v24; // r4
  char *v25; // r7
  int v26; // r0
  int v27; // r1
  unsigned __int16 v28; // r5
  int v29; // r0
  char *v30; // r4
  char *v31; // r7
  int v32; // r0
  int v33; // r1
  __int64 v34; // d9
  unsigned __int64 v35; // d8
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  unsigned __int8 *v41; // [sp+40h] [bp-111Ch]
  char *s; // [sp+44h] [bp-1118h]
  unsigned int v44; // [sp+48h] [bp-1114h]
  char *v45; // [sp+4Ch] [bp-1110h]
  int *v46; // [sp+50h] [bp-110Ch]
  int *v47; // [sp+50h] [bp-110Ch]
  unsigned __int8 *v48; // [sp+68h] [bp-10F4h]
  char *ptr; // [sp+74h] [bp-10E8h]
  int v50; // [sp+78h] [bp-10E4h] BYREF
  char v51[32]; // [sp+98h] [bp-10C4h] BYREF
  int v52; // [sp+B8h] [bp-10A4h] BYREF
  char v53[32]; // [sp+D8h] [bp-1084h] BYREF
  int v54; // [sp+F8h] [bp-1064h] BYREF
  int v55; // [sp+118h] [bp-1044h] BYREF
  int v56; // [sp+11Ch] [bp-1040h] BYREF
  int v57; // [sp+138h] [bp-1024h] BYREF
  int v58; // [sp+13Ch] [bp-1020h] BYREF
  _BYTE v59[4100]; // [sp+158h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v50, "chain");
  v8 = logfmt_raw((int)v59, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "phy_external_bist_rvn",
    21,
    1095,
    60,
    v59);
  ptr = (char *)malloc(0x300u);
  if ( a4 )
  {
    v9 = (char *)(a3 - 1);
    v10 = a3;
    v45 = (char *)(unsigned __int8)(a4 - 1);
    v11 = &v45[(_DWORD)a3];
    v12 = v9;
    v41 = v10;
    do
    {
      while ( 1 )
      {
        v13 = (unsigned __int8)*++v12;
        v14 = check_core_reg_with_expect_data_rvn(a1, a2, v13, 64, 0xFF000100);
        if ( v14 )
          break;
        if ( v12 == v11 )
          goto LABEL_6;
      }
      V_LOCK(v14);
      V_INT((int)v51, "chain");
      v15 = logfmt_raw((int)v59, 0x1000u);
      V_UNLOCK(v15);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
        195,
        "phy_external_bist_rvn",
        21,
        1227,
        100,
        v59);
    }
    while ( v12 != v11 );
LABEL_6:
    v16 = v9;
    do
    {
      v17 = *++v16;
      sub_103D24(a1, v17, 133, 0xFFFF);
      sub_103D24(a1, *v16, 134, 1342177279);
    }
    while ( v16 != v12 );
    sub_103CE4(a1, 132, -2147483647);
    sleep(0xAu);
    do
    {
      while ( 1 )
      {
        v18 = (unsigned __int8)*++v9;
        v19 = check_core_reg_with_expect_data_rvn(a1, a2, v18, 139, 0xFF0000FF);
        if ( v19 )
          break;
        if ( v16 == v9 )
          goto LABEL_12;
      }
      V_LOCK(v19);
      V_INT((int)&v52, "chain");
      v20 = logfmt_raw((int)v59, 0x1000u);
      V_UNLOCK(v20);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
        195,
        "phy_external_bist_rvn",
        21,
        1249,
        100,
        v59);
    }
    while ( v16 != v9 );
LABEL_12:
    v21 = a3 + 1;
    v44 = 0;
    s = 0;
    v48 = (unsigned __int8 *)&v45[(_DWORD)v21];
    do
    {
      v22 = 128;
      v46 = (int *)((char *)&v55 + 1);
      v55 = -2088599168;
      while ( 1 )
      {
        v23 = sub_103D74(a1, *v41, v22, ptr);
        if ( v23 )
        {
          v24 = ptr;
          v25 = &ptr[12 * v23];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v24 + 3)) != v22 )
            {
              v24 += 12;
              if ( v25 == v24 )
                goto LABEL_19;
            }
            V_LOCK(v23);
            v24 += 12;
            V_INT((int)v53, "chain");
            v26 = logfmt_raw((int)v59, 0x1000u);
            V_UNLOCK(v26);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
              195,
              "phy_external_bist_rvn",
              21,
              1265,
              20,
              v59);
            v23 = v44;
            v27 = (unsigned __int16)bswap32(*((_DWORD *)v24 - 3));
            v44 += 2 * v27;
            dword_306B18 += 2 * (v27 != 0);
          }
          while ( v25 != v24 );
        }
LABEL_19:
        if ( v46 == &v56 )
          break;
        v22 = *(unsigned __int8 *)v46;
        v46 = (int *)((char *)v46 + 1);
      }
      v28 = 135;
      v47 = (int *)((char *)&v57 + 1);
      v57 = -1970698105;
      while ( 1 )
      {
        v29 = sub_103D74(a1, *v41, v28, ptr);
        if ( v29 )
        {
          v30 = ptr;
          v31 = &ptr[12 * v29];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v30 + 3)) != v28 )
            {
              v30 += 12;
              if ( v31 == v30 )
                goto LABEL_27;
            }
            V_LOCK(v29);
            v30 += 12;
            V_INT((int)&v54, "chain");
            v32 = logfmt_raw((int)v59, 0x1000u);
            V_UNLOCK(v32);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
              195,
              "phy_external_bist_rvn",
              21,
              1283,
              20,
              v59);
            v29 = (int)s;
            v33 = (unsigned __int16)bswap32(*((_DWORD *)v30 - 3));
            s += 2 * v33;
            dword_306B1C += 2 * (v33 != 0);
          }
          while ( v31 != v30 );
        }
LABEL_27:
        if ( &v58 == v47 )
          break;
        v28 = *(unsigned __int8 *)v47;
        v47 = (int *)((char *)v47 + 1);
      }
      ++v41;
    }
    while ( v48 != v41 );
    v34 = (unsigned int)s;
    v35 = vshrd_n_u64(vdup_n_s32(v44).n64_u64[0], 0x20u);
  }
  else
  {
    v35 = 0;
    sub_103CE4(a1, 132, -2147483647);
    sleep(0xAu);
    v34 = 0;
  }
  free(ptr);
  *(_QWORD *)&dword_306B20 += v34;
  *(_QWORD *)&dbl_306B28 += v35;
  V_LOCK(v36);
  V_INT((int)&v55, "chain");
  v37 = logfmt_raw((int)v59, 0x1000u);
  V_UNLOCK(v37);
  v38 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
          195,
          "phy_external_bist_rvn",
          21,
          1299,
          60,
          v59);
  V_LOCK(v38);
  V_INT((int)&v57, "chain");
  v39 = logfmt_raw((int)v59, 0x1000u);
  V_UNLOCK(v39);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "phy_external_bist_rvn",
    21,
    1300,
    60,
    v59);
  return 0;
}
