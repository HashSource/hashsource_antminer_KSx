int __fastcall sub_B5A48(_DWORD *a1)
{
  signed int *v1; // r0
  signed int v2; // r4
  int v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r10
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r11
  _DWORD *v9; // r9
  _DWORD *v10; // r0
  int v11; // r7
  int v12; // r0
  int v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r10
  int v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r10
  int v19; // r0
  _DWORD *v20; // r0
  int v21; // r7
  int v22; // r0
  _DWORD *v23; // r0
  int v24; // r7
  int v25; // r0
  _DWORD *v26; // r0
  int v27; // r7
  int v28; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r3
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  signed int *v40; // [sp+10h] [bp-100Ch]
  _BYTE v41[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = (signed int *)json_object_get(a1, "power");
  v40 = v1;
  if ( !v1 || (v2 = *v1) != 0 )
  {
    V_LOCK(v1);
    v39 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v39);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_power",
      12,
      204,
      100,
      v41);
  }
  else
  {
    V_LOCK(v1);
    v3 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_power",
      12,
      207,
      20,
      v41);
    v4 = (_DWORD *)json_object_get(v40, "type");
    v5 = v4;
    if ( v4 && *v4 == 2 )
    {
      V_LOCK(v4);
      json_string_value(v5);
      v6 = logfmt_raw((int)v41, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_power",
        12,
        215,
        20,
        v41);
      v7 = (_DWORD *)json_object_get(v40, "version");
      v8 = v7;
      if ( v7 && *v7 == 1 )
      {
        v9 = json_array_size(v7);
        dword_2EB4A4 = (int)v9;
        dword_2EB4BC = (int)calloc((size_t)v9, 2u);
        if ( (int)v9 > 0 )
        {
          do
          {
            v10 = json_array_get(v8, v2);
            v11 = 2 * v2;
            v12 = json_integer_value((int)v10);
            ++v2;
            *(_WORD *)(dword_2EB4BC + v11) = v12;
            V_LOCK(v12);
            v13 = logfmt_raw((int)v41, 0x1000u);
            V_UNLOCK(v13);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/topol/topol.c",
              165,
              "_parse_power",
              12,
              227,
              20,
              v41);
          }
          while ( dword_2EB4A4 > v2 );
        }
        v14 = (_DWORD *)json_object_get(v40, "is_adjustable_power");
        v15 = v14;
        if ( v14 && (unsigned int)(*v14 - 5) <= 1 )
        {
          V_LOCK(v14);
          v16 = logfmt_raw((int)v41, 0x1000u);
          V_UNLOCK(v16);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
            165,
            "_parse_power",
            12,
            236,
            20,
            v41);
          byte_2EB4A8 = *v15 == 5;
          v17 = (_DWORD *)json_object_get(v40, "check_asic_voltage_enable");
          v18 = v17;
          if ( v17 && (unsigned int)(*v17 - 5) <= 1 )
          {
            V_LOCK(v17);
            v19 = logfmt_raw((int)v41, 0x1000u);
            V_UNLOCK(v19);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/topol/topol.c",
              165,
              "_parse_power",
              12,
              245,
              20,
              v41);
            byte_2EB4A9 = *v18 == 5;
            v20 = (_DWORD *)json_object_get(v40, "check_asic_voltage");
            v21 = (int)v20;
            if ( v20 && *v20 == 3 )
            {
              V_LOCK(v20);
              json_integer_value(v21);
              v22 = logfmt_raw((int)v41, 0x1000u);
              V_UNLOCK(v22);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                165,
                "_parse_power",
                12,
                254,
                20,
                v41);
              dword_2EB4AC = json_integer_value(v21);
              v23 = (_DWORD *)json_object_get(v40, "i2c_addr");
              v24 = (int)v23;
              if ( v23 && *v23 == 3 )
              {
                V_LOCK(v23);
                json_integer_value(v24);
                v25 = logfmt_raw((int)v41, 0x1000u);
                V_UNLOCK(v25);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                  165,
                  "_parse_power",
                  12,
                  263,
                  20,
                  v41);
                dword_2EB4B0 = json_integer_value(v24);
                v26 = (_DWORD *)json_object_get(v40, "gpio");
                v27 = (int)v26;
                if ( v26 && *v26 == 3 )
                {
                  V_LOCK(v26);
                  json_integer_value(v27);
                  v28 = logfmt_raw((int)v41, 0x1000u);
                  V_UNLOCK(v28);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                    165,
                    "_parse_power",
                    12,
                    272,
                    20,
                    v41);
                  dword_2EB4B4 = json_integer_value(v27);
                  return 0;
                }
                V_LOCK(v26);
                v38 = logfmt_raw((int)v41, 0x1000u);
                V_UNLOCK(v38);
                v31 = g_zc;
                v32 = 269;
              }
              else
              {
                V_LOCK(v23);
                v37 = logfmt_raw((int)v41, 0x1000u);
                V_UNLOCK(v37);
                v31 = g_zc;
                v32 = 260;
              }
            }
            else
            {
              V_LOCK(v20);
              v36 = logfmt_raw((int)v41, 0x1000u);
              V_UNLOCK(v36);
              v31 = g_zc;
              v32 = 251;
            }
          }
          else
          {
            V_LOCK(v17);
            v35 = logfmt_raw((int)v41, 0x1000u);
            V_UNLOCK(v35);
            v31 = g_zc;
            v32 = 242;
          }
        }
        else
        {
          V_LOCK(v14);
          v34 = logfmt_raw((int)v41, 0x1000u);
          V_UNLOCK(v34);
          v31 = g_zc;
          v32 = 233;
        }
      }
      else
      {
        V_LOCK(v7);
        v33 = logfmt_raw((int)v41, 0x1000u);
        V_UNLOCK(v33);
        v31 = g_zc;
        v32 = 220;
      }
    }
    else
    {
      V_LOCK(v4);
      v30 = logfmt_raw((int)v41, 0x1000u);
      V_UNLOCK(v30);
      v31 = g_zc;
      v32 = 212;
    }
    zlog(
      v31,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_power",
      12,
      v32,
      100,
      v41);
  }
  return -1;
}
