int __fastcall phy_external_bist_rvn(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 *v8; // r5
  unsigned __int8 *v9; // r3
  unsigned __int8 *v10; // r6
  unsigned __int8 *v11; // r4
  unsigned __int16 v12; // t1
  char *v13; // r6
  char v14; // t1
  unsigned __int16 v15; // t1
  unsigned __int16 v16; // r5
  int v17; // r0
  char *v18; // r4
  char *v19; // r7
  unsigned __int16 v20; // r3
  char *v21; // r2
  int v22; // r12
  int v23; // r1
  unsigned __int16 v24; // r5
  int v25; // r0
  char *v26; // r4
  char *v27; // r7
  unsigned __int16 v28; // r3
  char *v29; // r2
  int v30; // r12
  int v31; // r1
  unsigned int v32; // r5
  __int64 v33; // r0
  __int64 v34; // r2
  unsigned int *v35; // r12
  unsigned int *i; // lr
  unsigned int v37; // t1
  unsigned int v38; // t1
  int v40; // [sp+24h] [bp-1170h]
  int v41; // [sp+24h] [bp-1170h]
  unsigned __int8 *v42; // [sp+40h] [bp-1154h]
  _DWORD *v44; // [sp+48h] [bp-114Ch]
  _DWORD *v45; // [sp+48h] [bp-114Ch]
  int v46; // [sp+4Ch] [bp-1148h]
  unsigned __int8 *v47; // [sp+60h] [bp-1134h]
  char *ptr; // [sp+6Ch] [bp-1128h]
  _DWORD v49[7]; // [sp+70h] [bp-1124h] BYREF
  int v50; // [sp+8Ch] [bp-1108h]
  _DWORD v51[7]; // [sp+90h] [bp-1104h] BYREF
  int v52; // [sp+ACh] [bp-10E8h]
  _DWORD v53[7]; // [sp+B0h] [bp-10E4h] BYREF
  int v54; // [sp+CCh] [bp-10C8h]
  _DWORD v55[7]; // [sp+D0h] [bp-10C4h] BYREF
  int v56; // [sp+ECh] [bp-10A8h]
  _DWORD v57[7]; // [sp+F0h] [bp-10A4h] BYREF
  int v58; // [sp+10Ch] [bp-1088h]
  int v59; // [sp+110h] [bp-1084h] BYREF
  _DWORD v60[6]; // [sp+114h] [bp-1080h] BYREF
  int v61; // [sp+12Ch] [bp-1068h]
  int v62; // [sp+130h] [bp-1064h] BYREF
  _DWORD v63[6]; // [sp+134h] [bp-1060h] BYREF
  int v64; // [sp+14Ch] [bp-1048h]
  double v65[4]; // [sp+150h] [bp-1044h] BYREF
  _DWORD v66[8]; // [sp+170h] [bp-1024h] BYREF
  char v67[4100]; // [sp+190h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v49, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v67,
    0x1000u,
    0,
    v50,
    v49[0],
    v49[1],
    v49[2],
    v49[3],
    v49[4],
    v49[5],
    v49[6],
    v50,
    "%s start",
    "phy_external_bist_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "phy_external_bist_rvn",
    21,
    1095,
    60,
    v67);
  memset(v66, 0, sizeof(v66));
  memset(v65, 0, sizeof(v65));
  ptr = (char *)malloc(0x300u);
  if ( a4 )
  {
    v8 = a3 - 1;
    v9 = a3;
    v46 = (unsigned __int8)(a4 - 1);
    v10 = &a3[v46];
    v11 = v8;
    v42 = v9;
    do
    {
      while ( 1 )
      {
        v12 = *++v11;
        if ( check_core_reg_with_expect_data_rvn(a1, a2, v12, 64, 0xFF000100) )
          break;
        if ( v11 == v10 )
          goto LABEL_6;
      }
      V_LOCK();
      V_INT((int)v51, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v67,
        0x1000u,
        0,
        v52,
        v51[0],
        v51[1],
        v51[2],
        v51[3],
        v51[4],
        v51[5],
        v51[6],
        v52,
        "%s PHY core %02x pcs lock failed!",
        "phy_external_bist_rvn",
        *v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
        190,
        "phy_external_bist_rvn",
        21,
        1227,
        100,
        v67);
    }
    while ( v11 != v10 );
LABEL_6:
    v13 = (char *)v8;
    do
    {
      v14 = *++v13;
      sub_F2F24(a1, v14, 133, 0xFFFF);
      sub_F2F24(a1, *v13, 134, 1342177279);
    }
    while ( v11 != (unsigned __int8 *)v13 );
    sub_F2EE4(a1, 132, -2147483647);
    sleep(0xAu);
    do
    {
      while ( 1 )
      {
        v15 = *++v8;
        if ( check_core_reg_with_expect_data_rvn(a1, a2, v15, 139, 0xFF0000FF) )
          break;
        if ( v13 == (char *)v8 )
          goto LABEL_12;
      }
      V_LOCK();
      V_INT((int)v53, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v67,
        0x1000u,
        0,
        v54,
        v53[0],
        v53[1],
        v53[2],
        v53[3],
        v53[4],
        v53[5],
        v53[6],
        v54,
        "%s PHY core %02x mac bist failed!",
        "phy_external_bist_rvn",
        *v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
        190,
        "phy_external_bist_rvn",
        21,
        1249,
        100,
        v67);
    }
    while ( v13 != (char *)v8 );
LABEL_12:
    v47 = &a3[v46 + 1];
    do
    {
      v16 = 128;
      v44 = (int *)((char *)&v59 + 1);
      v59 = -2088599168;
      while ( 1 )
      {
        v17 = sub_F2F74(a1, *v42, v16, ptr);
        if ( v17 )
        {
          v18 = ptr;
          v19 = &ptr[12 * v17];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v18 + 3)) != v16 )
            {
              v18 += 12;
              if ( v19 == v18 )
                goto LABEL_21;
            }
            V_LOCK();
            v18 += 12;
            V_INT((int)v55, "chain", *(int *)(a1 + 232));
            logfmt_raw(
              v67,
              0x1000u,
              0,
              v56,
              v55[0],
              v55[1],
              v55[2],
              v55[3],
              v55[4],
              v55[5],
              v55[6],
              v56,
              "[PHY BIST LOST NUM] chip %02x core %02x reg %04x rdata %08x",
              (unsigned __int8)*(v18 - 8),
              (unsigned __int8)*(v18 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v18 - 3)),
              bswap32(*((_DWORD *)v18 - 3)));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
              190,
              "phy_external_bist_rvn",
              21,
              1265,
              20,
              v67);
            v20 = bswap32(*((_DWORD *)v18 - 3));
            v21 = &v67[4 * (unsigned __int8)*(v18 - 8)];
            v22 = v20;
            v23 = *((_DWORD *)v21 - 8);
            if ( v20 )
              v22 = 1;
            dword_2E8558 += 2 * v22;
            *((_DWORD *)v21 - 8) = v23 + 2 * v20;
          }
          while ( v19 != v18 );
        }
LABEL_21:
        if ( v60 == v44 )
          break;
        v16 = *(unsigned __int8 *)v44;
        v44 = (_DWORD *)((char *)v44 + 1);
      }
      v24 = 135;
      v45 = (int *)((char *)&v62 + 1);
      v62 = -1970698105;
      while ( 1 )
      {
        v25 = sub_F2F74(a1, *v42, v24, ptr);
        if ( v25 )
        {
          v26 = ptr;
          v27 = &ptr[12 * v25];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v26 + 3)) != v24 )
            {
              v26 += 12;
              if ( v27 == v26 )
                goto LABEL_31;
            }
            V_LOCK();
            v26 += 12;
            V_INT((int)v57, "chain", *(int *)(a1 + 232));
            logfmt_raw(
              v67,
              0x1000u,
              0,
              v58,
              v57[0],
              v57[1],
              v57[2],
              v57[3],
              v57[4],
              v57[5],
              v57[6],
              v58,
              "[PHY BIST ERR NUM] chip %02x core %02x reg %04x rdata %08x",
              (unsigned __int8)*(v26 - 8),
              (unsigned __int8)*(v26 - 4),
              (unsigned __int16)__rev16(*((unsigned __int16 *)v26 - 3)),
              bswap32(*((_DWORD *)v26 - 3)));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
              190,
              "phy_external_bist_rvn",
              21,
              1283,
              20,
              v67);
            v28 = bswap32(*((_DWORD *)v26 - 3));
            v29 = &v67[4 * (unsigned __int8)*(v26 - 8)];
            v30 = v28;
            v31 = *((_DWORD *)v29 - 16);
            if ( v28 )
              v30 = 1;
            dword_2E855C += 2 * v30;
            *((_DWORD *)v29 - 16) = v31 + 2 * v28;
          }
          while ( v27 != v26 );
        }
LABEL_31:
        if ( v63 == v45 )
          break;
        v24 = *(unsigned __int8 *)v45;
        v45 = (_DWORD *)((char *)v45 + 1);
      }
      ++v42;
    }
    while ( v42 != v47 );
    v32 = LODWORD(v65[0]);
    a4 = v66[0];
  }
  else
  {
    sub_F2EE4(a1, 132, -2147483647);
    sleep(0xAu);
    v32 = 0;
  }
  free(ptr);
  v33 = *(_QWORD *)&dword_2E8560;
  v34 = *(_QWORD *)&dword_2E8568;
  v35 = (unsigned int *)v65 + 1;
  for ( i = &v66[1]; ; ++i )
  {
    v33 += v32;
    v34 += a4;
    if ( v35 == v66 )
      break;
    v37 = *v35++;
    v32 = v37;
    v38 = *i;
    a4 = v38;
  }
  *(_QWORD *)&dword_2E8560 = v33;
  *(_QWORD *)&dword_2E8568 = v34;
  V_LOCK();
  V_INT((int)&v59, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v67,
    0x1000u,
    0,
    v61,
    v59,
    v60[0],
    v60[1],
    v60[2],
    v60[3],
    v60[4],
    v60[5],
    v61,
    "[PHY BIST ERR NUM] total 0x%llx",
    v40,
    dword_2E8560,
    dword_2E8564);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "phy_external_bist_rvn",
    21,
    1299,
    60,
    v67);
  V_LOCK();
  V_INT((int)&v62, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v67,
    0x1000u,
    0,
    v64,
    v62,
    v63[0],
    v63[1],
    v63[2],
    v63[3],
    v63[4],
    v63[5],
    v64,
    "[PHY BIST LOST NUM] total 0x%llx",
    v41,
    dword_2E8568,
    dword_2E856C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    190,
    "phy_external_bist_rvn",
    21,
    1300,
    60,
    v67);
  return 0;
}
