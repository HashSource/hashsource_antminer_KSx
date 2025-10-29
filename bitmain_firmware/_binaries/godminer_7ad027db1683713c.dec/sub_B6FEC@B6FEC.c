int __fastcall sub_B6FEC(_DWORD *a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r6
  _DWORD *v3; // r0
  _DWORD *v4; // r9
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  int v7; // r9
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r9
  int v11; // r0
  int v12; // r0
  int v13; // r3
  bool v14; // cf
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r7
  _DWORD *v19; // r0
  int v20; // r6
  int v21; // r0
  int v22; // r0
  _DWORD *v23; // r10
  _DWORD *v24; // r0
  _DWORD *v25; // r6
  _DWORD *v26; // r0
  const char *v27; // r5
  int v28; // r0
  _DWORD *v29; // r0
  int v30; // r5
  int v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r8
  _DWORD *v34; // r0
  char **v35; // r6
  int v36; // r5
  const char *v37; // r0
  const char *v38; // r1
  const char *v39; // r8
  const char *v40; // t1
  _DWORD *v41; // r0
  _DWORD *v42; // r7
  _DWORD *v43; // r0
  char **v44; // r6
  int v45; // r5
  const char *v46; // r0
  const char *v47; // r1
  const char *v48; // r7
  const char *v49; // t1
  unsigned int i; // [sp+14h] [bp-1018h]
  _DWORD *v51; // [sp+18h] [bp-1014h]
  char v52[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "pic");
  v2 = v1;
  if ( !v1 || *v1 )
  {
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, "get pic failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain_pic",
      16,
      714,
      100,
      v52);
    return -1;
  }
  V_LOCK();
  logfmt_raw(v52, 0x1000u, 0, "pic:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain_pic",
    16,
    717,
    20,
    v52);
  v3 = (_DWORD *)json_object_get(v2, "type");
  v4 = v3;
  if ( !v3 || *v3 != 2 )
  {
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, "get type failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain_pic",
      16,
      722,
      100,
      v52);
    return -1;
  }
  V_LOCK();
  v5 = json_string_value(v4);
  logfmt_raw(v52, 0x1000u, 0, "type: %s", v5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain_pic",
    16,
    725,
    20,
    v52);
  v6 = (_DWORD *)json_object_get(v2, "i2c_addr");
  v7 = (int)v6;
  if ( !v6 || *v6 != 3 )
  {
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, "get i2c_addr failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain_pic",
      16,
      730,
      100,
      v52);
    return -1;
  }
  V_LOCK();
  v8 = json_integer_value(v7);
  logfmt_raw(v52, 0x1000u, 0, "i2c_addr: %d", v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain_pic",
    16,
    733,
    20,
    v52);
  v9 = (_DWORD *)json_object_get(v2, "device_high");
  v10 = (int)v9;
  if ( !v9 || *v9 != 3 )
  {
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, "get device_high failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain_pic",
      16,
      738,
      100,
      v52);
    return -1;
  }
  V_LOCK();
  v11 = json_integer_value(v10);
  logfmt_raw(v52, 0x1000u, 0, "device_high: %d", v11);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain_pic",
    16,
    741,
    20,
    v52);
  v12 = json_integer_value(v10);
  v13 = *(_DWORD *)(dword_2E9F70 + 88) - 1;
  v14 = *(_DWORD *)(dword_2E9F70 + 88) != 1;
  *(_DWORD *)(dword_2E9F70 + 64) = v12;
  if ( v13 != 1 && v14 )
    return 0;
  v16 = (_DWORD *)json_object_get(v2, "pic_sensor");
  v51 = v16;
  if ( v16 && *v16 == 1 )
  {
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, "pic sensor:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain_pic_sensor",
      23,
      569,
      20,
      v52);
    for ( i = 0; i < (unsigned int)json_array_size(v51); ++i )
    {
      v17 = json_array_get(v51, i);
      v18 = v17;
      if ( !v17 || *v17 )
      {
        V_LOCK();
        logfmt_raw(v52, 0x1000u, 0, "get array %d failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_pic_sensor",
          23,
          576,
          100,
          v52);
        return -1;
      }
      v19 = (_DWORD *)json_object_get(v17, "index");
      v20 = (int)v19;
      if ( !v19 || *v19 != 3 )
      {
        V_LOCK();
        logfmt_raw(v52, 0x1000u, 0, "get array %d index failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_pic_sensor",
          23,
          583,
          100,
          v52);
        return -1;
      }
      V_LOCK();
      v21 = json_integer_value(v20);
      logfmt_raw(v52, 0x1000u, 0, "index: %d", v21);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_pic_sensor",
        23,
        586,
        20,
        v52);
      v22 = json_integer_value(v20);
      v23 = (_DWORD *)(*(_DWORD *)(dword_2E9F70 + 84) + 24 * v22);
      *v23 = v22;
      v23[2] = 0;
      v24 = (_DWORD *)json_object_get(v18, "type");
      v25 = v24;
      if ( !v24 || *v24 != 2 )
      {
        V_LOCK();
        logfmt_raw(v52, 0x1000u, 0, "get array %d type failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_pic_sensor",
          23,
          595,
          100,
          v52);
        return -1;
      }
      V_LOCK();
      v26 = json_string_value(v25);
      logfmt_raw(v52, 0x1000u, 0, "type: %s", v26);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_pic_sensor",
        23,
        598,
        20,
        v52);
      v27 = (const char *)json_string_value(v25);
      v28 = strcmp(v27, "TMP451");
      if ( v28 )
      {
        if ( !strcmp(v27, "LM75A") )
        {
          v28 = 1;
        }
        else if ( !strcmp(v27, "unknow") )
        {
          v28 = 2;
        }
        else
        {
          v28 = 3;
        }
      }
      v23[1] = v28;
      v29 = (_DWORD *)json_object_get(v18, "iic");
      v30 = (int)v29;
      if ( !v29 || *v29 != 3 )
      {
        V_LOCK();
        logfmt_raw(v52, 0x1000u, 0, "get array %d bind_asic failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_pic_sensor",
          23,
          604,
          100,
          v52);
        return -1;
      }
      V_LOCK();
      v31 = json_integer_value(v30);
      logfmt_raw(v52, 0x1000u, 0, "iic: %d", v31);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_pic_sensor",
        23,
        607,
        20,
        v52);
      v23[5] = json_integer_value(v30);
      v32 = (_DWORD *)json_object_get(v18, "x");
      v33 = v32;
      if ( !v32 || *v32 != 2 )
      {
        V_LOCK();
        logfmt_raw(v52, 0x1000u, 0, "get array %d x failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_pic_sensor",
          23,
          613,
          100,
          v52);
        return -1;
      }
      V_LOCK();
      v34 = json_string_value(v33);
      v35 = off_27724C;
      v36 = 0;
      logfmt_raw(v52, 0x1000u, 0, "x: %s", v34);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_pic_sensor",
        23,
        616,
        20,
        v52);
      v37 = (const char *)json_string_value(v33);
      v38 = "air_in";
      v39 = v37;
      while ( strcmp(v39, v38) )
      {
        v40 = *v35++;
        v38 = v40;
        ++v36;
      }
      v23[3] = v36;
      v41 = (_DWORD *)json_object_get(v18, "y");
      v42 = v41;
      if ( !v41 || *v41 != 2 )
      {
        V_LOCK();
        logfmt_raw(v52, 0x1000u, 0, "get array %d y failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_pic_sensor",
          23,
          622,
          100,
          v52);
        return -1;
      }
      V_LOCK();
      v43 = json_string_value(v42);
      v44 = off_27726C;
      v45 = 0;
      logfmt_raw(v52, 0x1000u, 0, "y: %s", v43);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_pic_sensor",
        23,
        625,
        20,
        v52);
      v46 = (const char *)json_string_value(v42);
      v47 = "top";
      v48 = v46;
      while ( strcmp(v48, v47) )
      {
        v49 = *v44++;
        v47 = v49;
        ++v45;
      }
      v23[4] = v45;
    }
    return 0;
  }
  V_LOCK();
  logfmt_raw(v52, 0x1000u, 0, "get pic sensor failed");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain_pic_sensor",
    23,
    566,
    100,
    v52);
  return -1;
}
