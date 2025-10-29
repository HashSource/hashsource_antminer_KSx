int __fastcall sub_BF624(_DWORD *a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r6
  int v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r9
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r9
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r9
  int v12; // r0
  int v13; // r0
  int v14; // r3
  bool v15; // cf
  _DWORD *v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r7
  _DWORD *v21; // r0
  int v22; // r6
  int v23; // r0
  int v24; // r0
  _DWORD *v25; // r10
  _DWORD *v26; // r0
  _DWORD *v27; // r6
  int v28; // r0
  const char *v29; // r5
  int v30; // r0
  _DWORD *v31; // r0
  int v32; // r5
  int v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r8
  char **v36; // r6
  int v37; // r5
  int v38; // r0
  const char *v39; // r0
  const char *v40; // r1
  const char *v41; // r8
  const char *v42; // t1
  _DWORD *v43; // r0
  _DWORD *v44; // r7
  char **v45; // r6
  int v46; // r5
  int v47; // r0
  const char *v48; // r0
  const char *v49; // r1
  const char *v50; // r7
  const char *v51; // t1
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  unsigned int i; // [sp+14h] [bp-1018h]
  _DWORD *v64; // [sp+18h] [bp-1014h]
  _BYTE v65[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "pic");
  v2 = v1;
  if ( !v1 || *v1 )
  {
    V_LOCK(v1);
    v55 = logfmt_raw((int)v65, 0x1000u);
    V_UNLOCK(v55);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "_parse_chain_pic",
      16,
      715,
      100,
      v65);
    return -1;
  }
  V_LOCK(v1);
  v3 = logfmt_raw((int)v65, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain_pic",
    16,
    718,
    20,
    v65);
  v4 = (_DWORD *)json_object_get(v2, "type");
  v5 = v4;
  if ( !v4 || *v4 != 2 )
  {
    V_LOCK(v4);
    v52 = logfmt_raw((int)v65, 0x1000u);
    V_UNLOCK(v52);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "_parse_chain_pic",
      16,
      723,
      100,
      v65);
    return -1;
  }
  V_LOCK(v4);
  json_string_value(v5);
  v6 = logfmt_raw((int)v65, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain_pic",
    16,
    726,
    20,
    v65);
  v7 = (_DWORD *)json_object_get(v2, "i2c_addr");
  v8 = (int)v7;
  if ( !v7 || *v7 != 3 )
  {
    V_LOCK(v7);
    v53 = logfmt_raw((int)v65, 0x1000u);
    V_UNLOCK(v53);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "_parse_chain_pic",
      16,
      731,
      100,
      v65);
    return -1;
  }
  V_LOCK(v7);
  json_integer_value(v8);
  v9 = logfmt_raw((int)v65, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain_pic",
    16,
    734,
    20,
    v65);
  v10 = (_DWORD *)json_object_get(v2, "device_high");
  v11 = (int)v10;
  if ( !v10 || *v10 != 3 )
  {
    V_LOCK(v10);
    v54 = logfmt_raw((int)v65, 0x1000u);
    V_UNLOCK(v54);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "_parse_chain_pic",
      16,
      739,
      100,
      v65);
    return -1;
  }
  V_LOCK(v10);
  json_integer_value(v11);
  v12 = logfmt_raw((int)v65, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain_pic",
    16,
    742,
    20,
    v65);
  v13 = json_integer_value(v11);
  v14 = *(_DWORD *)(dword_30D5E8 + 88) - 1;
  v15 = *(_DWORD *)(dword_30D5E8 + 88) != 1;
  *(_DWORD *)(dword_30D5E8 + 64) = v13;
  if ( v14 != 1 && v15 )
    return 0;
  v17 = (_DWORD *)json_object_get(v2, "pic_sensor");
  v64 = v17;
  if ( v17 && *v17 == 1 )
  {
    V_LOCK(v17);
    v18 = logfmt_raw((int)v65, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "_parse_chain_pic_sensor",
      23,
      570,
      20,
      v65);
    for ( i = 0; i < (unsigned int)json_array_size(v64); ++i )
    {
      v19 = json_array_get(v64, i);
      v20 = v19;
      if ( !v19 || *v19 )
      {
        V_LOCK(v19);
        v56 = logfmt_raw((int)v65, 0x1000u);
        V_UNLOCK(v56);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_chain_pic_sensor",
          23,
          577,
          100,
          v65);
        return -1;
      }
      v21 = (_DWORD *)json_object_get(v19, "index");
      v22 = (int)v21;
      if ( !v21 || *v21 != 3 )
      {
        V_LOCK(v21);
        v57 = logfmt_raw((int)v65, 0x1000u);
        V_UNLOCK(v57);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_chain_pic_sensor",
          23,
          584,
          100,
          v65);
        return -1;
      }
      V_LOCK(v21);
      json_integer_value(v22);
      v23 = logfmt_raw((int)v65, 0x1000u);
      V_UNLOCK(v23);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_chain_pic_sensor",
        23,
        587,
        20,
        v65);
      v24 = json_integer_value(v22);
      v25 = (_DWORD *)(*(_DWORD *)(dword_30D5E8 + 84) + 24 * v24);
      *v25 = v24;
      v25[2] = 0;
      v26 = (_DWORD *)json_object_get(v20, "type");
      v27 = v26;
      if ( !v26 || *v26 != 2 )
      {
        V_LOCK(v26);
        v58 = logfmt_raw((int)v65, 0x1000u);
        V_UNLOCK(v58);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_chain_pic_sensor",
          23,
          596,
          100,
          v65);
        return -1;
      }
      V_LOCK(v26);
      json_string_value(v27);
      v28 = logfmt_raw((int)v65, 0x1000u);
      V_UNLOCK(v28);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_chain_pic_sensor",
        23,
        599,
        20,
        v65);
      v29 = (const char *)json_string_value(v27);
      v30 = strcmp(v29, "TMP451");
      if ( v30 )
      {
        if ( !strcmp(v29, "LM75A") )
        {
          v30 = 1;
        }
        else if ( !strcmp(v29, "unknow") )
        {
          v30 = 2;
        }
        else
        {
          v30 = 3;
        }
      }
      v25[1] = v30;
      v31 = (_DWORD *)json_object_get(v20, "iic");
      v32 = (int)v31;
      if ( !v31 || *v31 != 3 )
      {
        V_LOCK(v31);
        v59 = logfmt_raw((int)v65, 0x1000u);
        V_UNLOCK(v59);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_chain_pic_sensor",
          23,
          605,
          100,
          v65);
        return -1;
      }
      V_LOCK(v31);
      json_integer_value(v32);
      v33 = logfmt_raw((int)v65, 0x1000u);
      V_UNLOCK(v33);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_chain_pic_sensor",
        23,
        608,
        20,
        v65);
      v25[5] = json_integer_value(v32);
      v34 = (_DWORD *)json_object_get(v20, "x");
      v35 = v34;
      if ( !v34 || *v34 != 2 )
      {
        V_LOCK(v34);
        v60 = logfmt_raw((int)v65, 0x1000u);
        V_UNLOCK(v60);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_chain_pic_sensor",
          23,
          614,
          100,
          v65);
        return -1;
      }
      V_LOCK(v34);
      json_string_value(v35);
      v36 = off_28B108;
      v37 = 0;
      v38 = logfmt_raw((int)v65, 0x1000u);
      V_UNLOCK(v38);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_chain_pic_sensor",
        23,
        617,
        20,
        v65);
      v39 = (const char *)json_string_value(v35);
      v40 = "air_in";
      v41 = v39;
      while ( strcmp(v41, v40) )
      {
        v42 = *v36++;
        v40 = v42;
        ++v37;
      }
      v25[3] = v37;
      v43 = (_DWORD *)json_object_get(v20, "y");
      v44 = v43;
      if ( !v43 || *v43 != 2 )
      {
        V_LOCK(v43);
        v61 = logfmt_raw((int)v65, 0x1000u);
        V_UNLOCK(v61);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_chain_pic_sensor",
          23,
          623,
          100,
          v65);
        return -1;
      }
      V_LOCK(v43);
      json_string_value(v44);
      v45 = off_28B128;
      v46 = 0;
      v47 = logfmt_raw((int)v65, 0x1000u);
      V_UNLOCK(v47);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_chain_pic_sensor",
        23,
        626,
        20,
        v65);
      v48 = (const char *)json_string_value(v44);
      v49 = "top";
      v50 = v48;
      while ( strcmp(v50, v49) )
      {
        v51 = *v45++;
        v49 = v51;
        ++v46;
      }
      v25[4] = v46;
    }
    return 0;
  }
  V_LOCK(v17);
  v62 = logfmt_raw((int)v65, 0x1000u);
  V_UNLOCK(v62);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain_pic_sensor",
    23,
    567,
    100,
    v65);
  return -1;
}
