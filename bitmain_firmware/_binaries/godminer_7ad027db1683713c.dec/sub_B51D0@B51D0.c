int __fastcall sub_B51D0(_DWORD *a1)
{
  signed int *v1; // r0
  signed int v2; // r4
  _DWORD *v3; // r0
  _DWORD *v4; // r10
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r11
  _DWORD *v8; // r9
  _DWORD *v9; // r0
  int v10; // r7
  _DWORD *v11; // r0
  _DWORD *v12; // r10
  char *v13; // r7
  char *v14; // r2
  _DWORD *v15; // r0
  _DWORD *v16; // r10
  _DWORD *v17; // r0
  int v18; // r7
  int v19; // r0
  _DWORD *v20; // r0
  int v21; // r7
  int v22; // r0
  _DWORD *v23; // r0
  int v24; // r7
  int v25; // r0
  int v27; // r0
  int v28; // r3
  signed int *v29; // [sp+10h] [bp-100Ch]
  char v30[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = (signed int *)json_object_get(a1, "power");
  v29 = v1;
  if ( !v1 || (v2 = *v1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, "get power failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_power",
      12,
      204,
      100,
      v30);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, "power:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_power",
      12,
      207,
      20,
      v30);
    v3 = (_DWORD *)json_object_get(v29, "type");
    v4 = v3;
    if ( v3 && *v3 == 2 )
    {
      V_LOCK();
      v5 = json_string_value(v4);
      logfmt_raw(v30, 0x1000u, 0, "type: %s", v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_power",
        12,
        215,
        20,
        v30);
      v6 = (_DWORD *)json_object_get(v29, "version");
      v7 = v6;
      if ( v6 && *v6 == 1 )
      {
        v8 = json_array_size(v6);
        dword_2E9FAC = (int)v8;
        dword_2E9FC4 = (int)calloc((size_t)v8, 2u);
        if ( (int)v8 > 0 )
        {
          do
          {
            v9 = json_array_get(v7, v2);
            v10 = 2 * v2++;
            *(_WORD *)(dword_2E9FC4 + v10) = json_integer_value((int)v9);
            V_LOCK();
            logfmt_raw(v30, 0x1000u, 0, "psu version = 0x%x", *(unsigned __int16 *)(dword_2E9FC4 + v10));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/topol/topol.c",
              165,
              "_parse_power",
              12,
              227,
              20,
              v30);
          }
          while ( dword_2E9FAC > v2 );
        }
        v11 = (_DWORD *)json_object_get(v29, "is_adjustable_power");
        v12 = v11;
        if ( v11 && (unsigned int)(*v11 - 5) <= 1 )
        {
          V_LOCK();
          v13 = "true";
          if ( *v12 == 5 )
            v14 = "true";
          else
            v14 = "false";
          logfmt_raw(v30, 0x1000u, 0, "is_adjustable_power: %s", v14);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
            165,
            "_parse_power",
            12,
            236,
            20,
            v30);
          byte_2E9FB0 = *v12 == 5;
          v15 = (_DWORD *)json_object_get(v29, "check_asic_voltage_enable");
          v16 = v15;
          if ( v15 && (unsigned int)(*v15 - 5) <= 1 )
          {
            V_LOCK();
            if ( *v16 != 5 )
              v13 = "false";
            logfmt_raw(v30, 0x1000u, 0, "check_asic_voltage_enable: %s", v13);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/topol/topol.c",
              165,
              "_parse_power",
              12,
              245,
              20,
              v30);
            byte_2E9FB1 = *v16 == 5;
            v17 = (_DWORD *)json_object_get(v29, "check_asic_voltage");
            v18 = (int)v17;
            if ( v17 && *v17 == 3 )
            {
              V_LOCK();
              v19 = json_integer_value(v18);
              logfmt_raw(v30, 0x1000u, 0, "check_asic_voltage: %d", v19);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                165,
                "_parse_power",
                12,
                254,
                20,
                v30);
              dword_2E9FB4 = json_integer_value(v18);
              v20 = (_DWORD *)json_object_get(v29, "i2c_addr");
              v21 = (int)v20;
              if ( v20 && *v20 == 3 )
              {
                V_LOCK();
                v22 = json_integer_value(v21);
                logfmt_raw(v30, 0x1000u, 0, "i2c_addr: %d", v22);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                  165,
                  "_parse_power",
                  12,
                  263,
                  20,
                  v30);
                dword_2E9FB8 = json_integer_value(v21);
                v23 = (_DWORD *)json_object_get(v29, "gpio");
                v24 = (int)v23;
                if ( v23 && *v23 == 3 )
                {
                  V_LOCK();
                  v25 = json_integer_value(v24);
                  logfmt_raw(v30, 0x1000u, 0, "gpio: %d", v25);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                    165,
                    "_parse_power",
                    12,
                    272,
                    20,
                    v30);
                  dword_2E9FBC = json_integer_value(v24);
                  return 0;
                }
                V_LOCK();
                logfmt_raw(v30, 0x1000u, 0, "get gpio failed");
                V_UNLOCK();
                v27 = g_zc;
                v28 = 269;
              }
              else
              {
                V_LOCK();
                logfmt_raw(v30, 0x1000u, 0, "get i2c_addr failed");
                V_UNLOCK();
                v27 = g_zc;
                v28 = 260;
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(v30, 0x1000u, 0, "get check_asic_voltage failed!");
              V_UNLOCK();
              v27 = g_zc;
              v28 = 251;
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v30, 0x1000u, 0, "get check_asic_voltage_enable failed!");
            V_UNLOCK();
            v27 = g_zc;
            v28 = 242;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v30, 0x1000u, 0, "get is_adjustable_power failed!");
          V_UNLOCK();
          v27 = g_zc;
          v28 = 233;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v30, 0x1000u, 0, "get version array failed");
        V_UNLOCK();
        v27 = g_zc;
        v28 = 220;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v30, 0x1000u, 0, "get type failed");
      V_UNLOCK();
      v27 = g_zc;
      v28 = 212;
    }
    zlog(
      v27,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_power",
      12,
      v28,
      100,
      v30);
  }
  return -1;
}
