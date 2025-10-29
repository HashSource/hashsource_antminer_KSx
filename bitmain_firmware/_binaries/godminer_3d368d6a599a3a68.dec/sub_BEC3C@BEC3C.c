int __fastcall sub_BEC3C(_DWORD *a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r8
  int v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r6
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r11
  int v9; // r0
  const char *v10; // r0
  int v11; // r11
  int v12; // r0
  int v13; // r3
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r11
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r10
  int v20; // r0
  _DWORD *v21; // r0
  int v22; // r10
  int v23; // r0
  _DWORD *v24; // r0
  int v25; // r10
  int v26; // r0
  _DWORD *v27; // r0
  int v28; // r10
  int v29; // r0
  _DWORD *v30; // r0
  int v31; // r8
  int v32; // r0
  int v33; // r0
  int v34; // r3
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  _BYTE v46[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "asic");
  v2 = v1;
  if ( !v1 || *v1 )
  {
    V_LOCK(v1);
    v44 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v44);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "_parse_asic",
      11,
      473,
      100,
      v46);
    return -1;
  }
  V_LOCK(v1);
  v3 = logfmt_raw((int)v46, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_asic",
    11,
    476,
    20,
    v46);
  v4 = (_DWORD *)json_object_get(v2, "asic_id");
  v5 = v4;
  if ( v4 && *v4 == 2 )
  {
    V_LOCK(v4);
    json_string_value(v5);
    v6 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "_parse_asic",
      11,
      484,
      20,
      v46);
    v7 = (_DWORD *)json_object_get(v2, "chip_type");
    v8 = v7;
    if ( v7 && *v7 == 2 )
    {
      V_LOCK(v7);
      json_string_value(v8);
      v9 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_asic",
        11,
        492,
        20,
        v46);
      v10 = (const char *)json_string_value(v8);
      v11 = dword_3085A0;
      v12 = strtol(v10, 0, 0);
      v13 = dword_3085A0;
      *(_DWORD *)(v11 + 24) = v12;
      if ( !*(_DWORD *)(v13 + 24) )
      {
        V_LOCK(v12);
        v45 = logfmt_raw((int)v46, 0x1000u);
        V_UNLOCK(v45);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_asic",
          11,
          497,
          100,
          v46);
        return -1;
      }
      V_LOCK(v12);
      v14 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_asic",
        11,
        500,
        20,
        v46);
      v15 = (_DWORD *)json_object_get(v2, "cycle_cnt");
      v16 = (int)v15;
      if ( v15 && *v15 == 3 )
      {
        V_LOCK(v15);
        json_integer_value(v16);
        v17 = logfmt_raw((int)v46, 0x1000u);
        V_UNLOCK(v17);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_asic",
          11,
          508,
          20,
          v46);
        *(_DWORD *)(dword_3085A0 + 28) = json_integer_value(v16);
        v18 = (_DWORD *)json_object_get(v2, "asic_big_core_num");
        v19 = (int)v18;
        if ( v18 && *v18 == 3 )
        {
          V_LOCK(v18);
          json_integer_value(v19);
          v20 = logfmt_raw((int)v46, 0x1000u);
          V_UNLOCK(v20);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
            170,
            "_parse_asic",
            11,
            517,
            20,
            v46);
          *(_DWORD *)(dword_3085A0 + 36) = json_integer_value(v19);
          v21 = (_DWORD *)json_object_get(v2, "asic_little_core_num");
          v22 = (int)v21;
          if ( v21 && *v21 == 3 )
          {
            V_LOCK(v21);
            json_integer_value(v22);
            v23 = logfmt_raw((int)v46, 0x1000u);
            V_UNLOCK(v23);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
              170,
              "_parse_asic",
              11,
              526,
              20,
              v46);
            *(_DWORD *)(dword_3085A0 + 40) = json_integer_value(v22);
            v24 = (_DWORD *)json_object_get(v2, "core_little_core_num");
            v25 = (int)v24;
            if ( v24 && *v24 == 3 )
            {
              V_LOCK(v24);
              json_integer_value(v25);
              v26 = logfmt_raw((int)v46, 0x1000u);
              V_UNLOCK(v26);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                170,
                "_parse_asic",
                11,
                535,
                20,
                v46);
              *(_DWORD *)(dword_3085A0 + 44) = json_integer_value(v25);
              v27 = (_DWORD *)json_object_get(v2, "asic_domain_num");
              v28 = (int)v27;
              if ( v27 && *v27 == 3 )
              {
                V_LOCK(v27);
                json_integer_value(v28);
                v29 = logfmt_raw((int)v46, 0x1000u);
                V_UNLOCK(v29);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                  170,
                  "_parse_asic",
                  11,
                  544,
                  20,
                  v46);
                *(_DWORD *)(dword_3085A0 + 48) = json_integer_value(v28);
                v30 = (_DWORD *)json_object_get(v2, "asic_addr_interval");
                v31 = (int)v30;
                if ( v30 && *v30 == 3 )
                {
                  V_LOCK(v30);
                  json_integer_value(v31);
                  v32 = logfmt_raw((int)v46, 0x1000u);
                  V_UNLOCK(v32);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                    170,
                    "_parse_asic",
                    11,
                    553,
                    20,
                    v46);
                  v33 = json_integer_value(v31);
                  v34 = 0;
                  *(_DWORD *)(dword_3085A0 + 52) = v33;
                  return v34;
                }
                V_LOCK(v30);
                v41 = logfmt_raw((int)v46, 0x1000u);
                V_UNLOCK(v41);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                  170,
                  "_parse_asic",
                  11,
                  550,
                  100,
                  v46);
              }
              else
              {
                V_LOCK(v27);
                v43 = logfmt_raw((int)v46, 0x1000u);
                V_UNLOCK(v43);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                  170,
                  "_parse_asic",
                  11,
                  541,
                  100,
                  v46);
              }
            }
            else
            {
              V_LOCK(v24);
              v42 = logfmt_raw((int)v46, 0x1000u);
              V_UNLOCK(v42);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                170,
                "_parse_asic",
                11,
                532,
                100,
                v46);
            }
          }
          else
          {
            V_LOCK(v21);
            v40 = logfmt_raw((int)v46, 0x1000u);
            V_UNLOCK(v40);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
              170,
              "_parse_asic",
              11,
              523,
              100,
              v46);
          }
        }
        else
        {
          V_LOCK(v18);
          v39 = logfmt_raw((int)v46, 0x1000u);
          V_UNLOCK(v39);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
            170,
            "_parse_asic",
            11,
            514,
            100,
            v46);
        }
      }
      else
      {
        V_LOCK(v15);
        v38 = logfmt_raw((int)v46, 0x1000u);
        V_UNLOCK(v38);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_asic",
          11,
          505,
          100,
          v46);
      }
    }
    else
    {
      V_LOCK(v7);
      v37 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v37);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_asic",
        11,
        489,
        100,
        v46);
    }
  }
  else
  {
    V_LOCK(v4);
    v36 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v36);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "_parse_asic",
      11,
      481,
      100,
      v46);
  }
  return -1;
}
