int __fastcall phy_external_bist_rvn(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
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
  unsigned __int16 v21; // r5
  int v22; // r0
  char *v23; // r4
  char *v24; // r7
  int v25; // r0
  unsigned __int16 v26; // r3
  _DWORD *v27; // r2
  int v28; // r12
  int v29; // r1
  unsigned __int16 v30; // r5
  int v31; // r0
  char *v32; // r4
  char *v33; // r7
  int v34; // r0
  unsigned __int16 v35; // r3
  _DWORD *v36; // r2
  int v37; // r12
  int v38; // r1
  unsigned int v39; // r5
  __int64 v40; // r0
  __int64 v41; // r2
  unsigned int *v42; // r12
  unsigned int *i; // lr
  unsigned int v44; // t1
  unsigned int v45; // t1
  int v46; // r0
  int v47; // r0
  int v48; // r0
  unsigned __int8 *v50; // [sp+40h] [bp-1154h]
  int *v52; // [sp+48h] [bp-114Ch]
  _DWORD *v53; // [sp+48h] [bp-114Ch]
  int v54; // [sp+4Ch] [bp-1148h]
  unsigned __int8 *v55; // [sp+60h] [bp-1134h]
  char *ptr; // [sp+6Ch] [bp-1128h]
  int v57; // [sp+70h] [bp-1124h] BYREF
  char v58[32]; // [sp+90h] [bp-1104h] BYREF
  int v59; // [sp+B0h] [bp-10E4h] BYREF
  char v60[32]; // [sp+D0h] [bp-10C4h] BYREF
  int v61; // [sp+F0h] [bp-10A4h] BYREF
  int v62; // [sp+110h] [bp-1084h] BYREF
  int v63; // [sp+114h] [bp-1080h] BYREF
  int v64; // [sp+130h] [bp-1064h] BYREF
  _DWORD v65[15]; // [sp+134h] [bp-1060h] BYREF
  _DWORD v66[8]; // [sp+170h] [bp-1024h] BYREF
  _DWORD v67[1025]; // [sp+190h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v57, "chain", *(int *)(a1 + 248));
  v8 = logfmt_raw((int)v67, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    190,
    "phy_external_bist_rvn",
    21,
    1095,
    60,
    v67);
  memset(v66, 0, sizeof(v66));
  memset(&v65[7], 0, 32);
  ptr = (char *)malloc(0x1800u);
  if ( a4 )
  {
    v9 = (char *)(a3 - 1);
    v10 = a3;
    v54 = (unsigned __int8)(a4 - 1);
    v11 = (char *)&a3[v54];
    v12 = v9;
    v50 = v10;
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
      V_INT((int)v58, "chain", *(int *)(a1 + 248));
      v15 = logfmt_raw((int)v67, 0x1000u);
      V_UNLOCK(v15);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
        190,
        "phy_external_bist_rvn",
        21,
        1227,
        100,
        v67);
    }
    while ( v12 != v11 );
LABEL_6:
    v16 = v9;
    do
    {
      v17 = *++v16;
      sub_107648(a1, v17, 133, 0xFFFF);
      sub_107648(a1, *v16, 134, 1342177279);
    }
    while ( v12 != v16 );
    sub_107608(a1, 132, -2147483647);
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
      V_INT((int)&v59, "chain", *(int *)(a1 + 248));
      v20 = logfmt_raw((int)v67, 0x1000u);
      V_UNLOCK(v20);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
        190,
        "phy_external_bist_rvn",
        21,
        1249,
        100,
        v67);
    }
    while ( v16 != v9 );
LABEL_12:
    v55 = &a3[v54 + 1];
    do
    {
      v21 = 128;
      v52 = (int *)((char *)&v62 + 1);
      v62 = -2088599168;
      while ( 1 )
      {
        v22 = sub_107698(a1, *v50, v21, ptr);
        if ( v22 )
        {
          v23 = ptr;
          v24 = &ptr[12 * v22];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v23 + 3)) != v21 )
            {
              v23 += 12;
              if ( v24 == v23 )
                goto LABEL_21;
            }
            V_LOCK(v22);
            v23 += 12;
            V_INT((int)v60, "chain", *(int *)(a1 + 248));
            v25 = logfmt_raw((int)v67, 0x1000u);
            V_UNLOCK(v25);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
              190,
              "phy_external_bist_rvn",
              21,
              1265,
              20,
              v67);
            v26 = bswap32(*((_DWORD *)v23 - 3));
            v27 = &v67[(unsigned __int8)*(v23 - 8)];
            v28 = v26;
            v29 = *(v27 - 8);
            if ( v26 )
              v28 = 1;
            v22 = dword_311338 + 2 * v28;
            dword_311338 = v22;
            *(v27 - 8) = v29 + 2 * v26;
          }
          while ( v24 != v23 );
        }
LABEL_21:
        if ( &v63 == v52 )
          break;
        v21 = *(unsigned __int8 *)v52;
        v52 = (int *)((char *)v52 + 1);
      }
      v30 = 135;
      v53 = (int *)((char *)&v64 + 1);
      v64 = -1970698105;
      while ( 1 )
      {
        v31 = sub_107698(a1, *v50, v30, ptr);
        if ( v31 )
        {
          v32 = ptr;
          v33 = &ptr[12 * v31];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v32 + 3)) != v30 )
            {
              v32 += 12;
              if ( v33 == v32 )
                goto LABEL_31;
            }
            V_LOCK(v31);
            v32 += 12;
            V_INT((int)&v61, "chain", *(int *)(a1 + 248));
            v34 = logfmt_raw((int)v67, 0x1000u);
            V_UNLOCK(v34);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
              190,
              "phy_external_bist_rvn",
              21,
              1283,
              20,
              v67);
            v35 = bswap32(*((_DWORD *)v32 - 3));
            v36 = &v67[(unsigned __int8)*(v32 - 8)];
            v37 = v35;
            v38 = *(v36 - 16);
            if ( v35 )
              v37 = 1;
            v31 = dword_31133C + 2 * v37;
            dword_31133C = v31;
            *(v36 - 16) = v38 + 2 * v35;
          }
          while ( v33 != v32 );
        }
LABEL_31:
        if ( v65 == v53 )
          break;
        v30 = *(unsigned __int8 *)v53;
        v53 = (_DWORD *)((char *)v53 + 1);
      }
      ++v50;
    }
    while ( v50 != v55 );
    v39 = v65[7];
    a4 = v66[0];
  }
  else
  {
    sub_107608(a1, 132, -2147483647);
    sleep(0xAu);
    v39 = 0;
  }
  free(ptr);
  v40 = *(_QWORD *)&dword_311340;
  v41 = *(_QWORD *)&dword_311348;
  v42 = &v65[8];
  for ( i = &v66[1]; ; ++i )
  {
    v40 += v39;
    v41 += a4;
    if ( v42 == v66 )
      break;
    v44 = *v42++;
    v39 = v44;
    v45 = *i;
    a4 = v45;
  }
  *(_QWORD *)&dword_311340 = v40;
  *(_QWORD *)&dword_311348 = v41;
  V_LOCK(v40);
  V_INT((int)&v62, "chain", *(int *)(a1 + 248));
  v46 = logfmt_raw((int)v67, 0x1000u);
  V_UNLOCK(v46);
  v47 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
          190,
          "phy_external_bist_rvn",
          21,
          1299,
          60,
          v67);
  V_LOCK(v47);
  V_INT((int)&v64, "chain", *(int *)(a1 + 248));
  v48 = logfmt_raw((int)v67, 0x1000u);
  V_UNLOCK(v48);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    190,
    "phy_external_bist_rvn",
    21,
    1300,
    60,
    v67);
  return 0;
}
