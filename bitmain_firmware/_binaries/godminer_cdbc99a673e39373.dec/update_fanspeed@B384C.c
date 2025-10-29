const char *__fastcall update_fanspeed(char *a1, _DWORD *a2, const char *a3)
{
  char **all_created_runtime; // r0
  int v8; // r9
  const char *v9; // r5
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _DWORD *v13; // r11
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r3
  int realtime_speed; // r7
  int v22; // r1
  int v23; // r2
  int v24; // r3
  _DWORD *v25; // r10
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r0
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r3
  _DWORD *v34; // r10
  char *v35; // r11
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r0
  __int64 v40; // r0
  int v41; // r5
  int v42; // r3
  int v43; // r10
  int fan_max_speed; // r9
  int v45; // r3
  int v46; // r0
  int v47; // r0
  int v48; // r0
  bool v49; // cc
  const char *v50; // r9
  int v51; // r0
  double v52; // r10
  int v53; // r1
  int v54; // r2
  int v55; // r3
  _DWORD *v56; // r6
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r0
  int v61; // r0
  int v62; // r1
  int v63; // r2
  int v64; // r3
  char *v65; // lr
  _DWORD *v66; // r12
  int v67; // r1
  int v68; // r2
  int v69; // r3
  int v70; // r0
  _BYTE v71[32]; // [sp+20h] [bp-11B4h] BYREF
  const char *v72; // [sp+40h] [bp-1194h]
  const char *v73; // [sp+44h] [bp-1190h]
  char *v74; // [sp+48h] [bp-118Ch]
  double v75; // [sp+50h] [bp-1184h]
  _DWORD *v76; // [sp+58h] [bp-117Ch]
  char *s; // [sp+5Ch] [bp-1178h]
  char *v78; // [sp+60h] [bp-1174h]
  char *v79; // [sp+64h] [bp-1170h]
  const char *v80; // [sp+68h] [bp-116Ch]
  int fan_num; // [sp+6Ch] [bp-1168h]
  int *v82; // [sp+70h] [bp-1164h]
  int *v83; // [sp+74h] [bp-1160h]
  const char *v84; // [sp+78h] [bp-115Ch]
  char *v85; // [sp+7Ch] [bp-1158h]
  char *v86; // [sp+80h] [bp-1154h]
  const char *v87; // [sp+84h] [bp-1150h]
  int v88; // [sp+8Ch] [bp-1148h] BYREF
  char v89[32]; // [sp+90h] [bp-1144h] BYREF
  _DWORD v90[8]; // [sp+B0h] [bp-1124h] BYREF
  char v91[32]; // [sp+D0h] [bp-1104h] BYREF
  _DWORD v92[8]; // [sp+F0h] [bp-10E4h] BYREF
  char v93[32]; // [sp+110h] [bp-10C4h] BYREF
  _DWORD v94[8]; // [sp+130h] [bp-10A4h] BYREF
  char v95[32]; // [sp+150h] [bp-1084h] BYREF
  _DWORD v96[8]; // [sp+170h] [bp-1064h] BYREF
  char v97[32]; // [sp+190h] [bp-1044h] BYREF
  _DWORD v98[8]; // [sp+1B0h] [bp-1024h] BYREF
  _BYTE v99[4100]; // [sp+1D0h] [bp-1004h] BYREF

  v88 = 0;
  all_created_runtime = (char **)get_all_created_runtime(&v88);
  v84 = a3 + 32;
  v85 = *all_created_runtime;
  if ( v85 == a1 )
  {
    v86 = &fan_inited;
    if ( !fan_inited )
    {
      all_created_runtime = (char **)fan_init();
      *v86 = 1;
    }
    fan_num = platform_get_fan_num(all_created_runtime);
    if ( fan_num <= 0 )
    {
      v40 = *((_QWORD *)a3 + 4);
      a2[23] = 0;
    }
    else
    {
      v8 = 0;
      v80 = "update_fanspeed";
      v9 = 0;
      v83 = &g_fan_zc;
      v79 = "%s";
      s = "fanid";
      v82 = &g_zc;
      v75 = 0.0;
      v76 = v71;
      v78 = "fanspeed";
      v87 = a3;
      do
      {
        realtime_speed = fan_get_realtime_speed(v9);
        V_LOCK(realtime_speed);
        V_INT((int)v89, s);
        V_INT((int)v90, v78);
        v22 = v90[1];
        v23 = v90[2];
        v24 = v90[3];
        v25 = v76;
        v73 = v80;
        v72 = v79;
        *v76 = v90[0];
        v25[1] = v22;
        v25[2] = v23;
        v25[3] = v24;
        v25 += 4;
        v26 = v90[5];
        v27 = v90[6];
        v28 = v90[7];
        *v25 = v90[4];
        v25[1] = v26;
        v25[2] = v27;
        v25[3] = v28;
        v29 = logfmt_raw((int)v99, 0x1000u);
        V_UNLOCK(v29);
        v30 = zlog(
                *v83,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
                206,
                "update_fanspeed",
                15,
                36,
                40,
                v99);
        V_LOCK(v30);
        if ( realtime_speed == -1 )
        {
          V_INT((int)v93, s);
          V_INT((int)v94, v78);
          v31 = v94[1];
          v32 = v94[2];
          v33 = v94[3];
          v34 = v76;
          v35 = (&fan_name)[(_DWORD)v9];
          v73 = v9;
          v72 = "%2d(corresponding to FAN%s on control board PCB)";
          v74 = v35;
          *v76 = v94[0];
          v34[1] = v31;
          v34[2] = v32;
          v34[3] = v33;
          v34 += 4;
          v36 = v94[5];
          v37 = v94[6];
          v38 = v94[7];
          *v34 = v94[4];
          v34[1] = v36;
          v34[2] = v37;
          v34[3] = v38;
          v39 = logfmt_raw((int)v99, 0x1000u);
          V_UNLOCK(v39);
          zlog(
            *v82,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            206,
            "update_fanspeed",
            15,
            44,
            100,
            v99);
        }
        else
        {
          V_INT((int)v91, s);
          V_INT((int)v92, v78);
          v10 = v92[1];
          v11 = v92[2];
          v12 = v92[3];
          v13 = v76;
          v73 = v80;
          v72 = v79;
          *v76 = v92[0];
          v13[1] = v10;
          v13[2] = v11;
          v13[3] = v12;
          v13 += 4;
          v14 = v92[5];
          v15 = v92[6];
          v16 = v92[7];
          *v13 = v92[4];
          v13[1] = v14;
          v13[2] = v15;
          v13[3] = v16;
          v17 = logfmt_raw((int)v99, 0x1000u);
          V_UNLOCK(v17);
          zlog(
            *v82,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            206,
            "update_fanspeed",
            15,
            38,
            20,
            v99);
          v18 = a2[24];
          v19 = 4 * v8;
          *(_DWORD *)(a2[25] + 4 * v8++) = v9;
          *(_DWORD *)(v18 + v19) = realtime_speed;
        }
        ++v9;
        ++*(_QWORD *)&v75;
        v20 = fan_num;
      }
      while ( (const char *)fan_num != v9 );
      a3 = v87;
      a2[23] = v8;
      if ( v8 >= v20 || (v40 = *((_QWORD *)a3 + 4), LODWORD(v40) = v40 | 2, *((_QWORD *)a3 + 4) = v40, v8) )
      {
        v41 = 0;
        do
        {
          while ( 1 )
          {
            v43 = *(_DWORD *)(a2[24] + 4 * v41);
            if ( v43 )
            {
              fan_max_speed = platform_get_fan_max_speed(v41);
              if ( v43 >= fan_pwm_get() * fan_max_speed / 150 )
                break;
            }
            ++v41;
            v42 = a2[23];
            *((_QWORD *)a3 + 4) |= 1uLL;
            if ( v42 <= v41 )
              goto LABEL_18;
          }
          ++v41;
        }
        while ( a2[23] > v41 );
LABEL_18:
        v40 = *((_QWORD *)a3 + 4);
      }
    }
    if ( (v40 & 3) != 0 )
    {
      v45 = *((_DWORD *)v86 + 1) + 1;
      *((_DWORD *)v86 + 1) = v45;
      if ( v45 > 15 )
      {
        V_LOCK(v40);
        v46 = logfmt_raw((int)v99, 0x1000u);
        v47 = V_UNLOCK(v46);
        if ( !v85[238] )
          v47 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
                  206,
                  "update_fanspeed",
                  15,
                  62,
                  20,
                  v99);
        if ( *((_DWORD *)v86 + 1) == 16 )
        {
          v82 = &g_zc;
          V_LOCK(v47);
          v48 = logfmt_raw((int)v99, 0x1000u);
          V_UNLOCK(v48);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            206,
            "update_fanspeed",
            15,
            66,
            100,
            v99);
          v49 = fan_num <= 0;
          *((_QWORD *)a3 + 4) |= 4uLL;
          if ( !v49 )
          {
            v50 = 0;
            v75 = 0.0;
            s = (char *)&unk_2D2498;
            v80 = "update_fanspeed";
            v79 = "%s";
            v83 = &g_fan_zc;
            v85 = "fanid";
            v86 = "fanspeed";
            v87 = "%2d(corresponding to FAN%s on control board PCB)";
            v78 = "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c";
            v76 = v71;
            do
            {
              v51 = fan_get_realtime_speed(v50);
              V_LOCK(v51);
              v52 = v75;
              V_INT((int)v95, v85);
              V_INT((int)v96, v86);
              v53 = v96[1];
              v54 = v96[2];
              v55 = v96[3];
              v56 = v76;
              v73 = v80;
              v72 = v79;
              *v76 = v96[0];
              v56[1] = v53;
              v56[2] = v54;
              v56[3] = v55;
              v56 += 4;
              v57 = v96[5];
              v58 = v96[6];
              v59 = v96[7];
              *v56 = v96[4];
              v56[1] = v57;
              v56[2] = v58;
              v56[3] = v59;
              v60 = logfmt_raw((int)v99, 0x1000u);
              V_UNLOCK(v60);
              v61 = zlog(*v83, v78, 206, "update_fanspeed", 15, 70, 40, v99);
              V_LOCK(v61);
              V_INT((int)v97, v85);
              *(_QWORD *)&v75 = *(_QWORD *)&v52 + 1LL;
              V_INT((int)v98, v86);
              v62 = v98[1];
              v63 = v98[2];
              v64 = v98[3];
              v65 = (char *)*((_DWORD *)s + 1);
              v66 = v76;
              v73 = v50++;
              s += 4;
              v74 = v65;
              v72 = v87;
              *v76 = v98[0];
              v66[1] = v62;
              v66[2] = v63;
              v66[3] = v64;
              v67 = v98[5];
              v68 = v98[6];
              v69 = v98[7];
              *v56 = v98[4];
              v56[1] = v67;
              v56[2] = v68;
              v56[3] = v69;
              v70 = logfmt_raw((int)v99, 0x1000u);
              V_UNLOCK(v70);
              zlog(*v82, v78, 206, "update_fanspeed", 15, 71, 100, v99);
            }
            while ( (const char *)fan_num != v50 );
          }
        }
      }
    }
    else
    {
      *((_DWORD *)v86 + 1) = 0;
    }
  }
  return v84;
}
