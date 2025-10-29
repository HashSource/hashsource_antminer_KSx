const char *__fastcall update_fanspeed(char *a1, _DWORD *a2, const char *a3)
{
  const char *v4; // r8
  int v7; // r9
  unsigned int v8; // r5
  int v9; // r1
  int v10; // r2
  int v11; // r3
  _DWORD *v12; // r11
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r3
  unsigned int realtime_speed; // r7
  __int64 v20; // d8
  int v21; // r1
  int v22; // r2
  int v23; // r3
  _DWORD *v24; // r10
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r2
  int v30; // r3
  _DWORD *v31; // r10
  char *v32; // r11
  int v33; // r1
  int v34; // r2
  int v35; // r3
  __int64 v36; // r0
  int v37; // r5
  int v38; // r3
  int v39; // r10
  int fan_max_speed; // r9
  int v41; // r3
  bool v42; // cc
  unsigned int v43; // r9
  int v44; // r7
  __int64 v45; // r10
  int v46; // r1
  int v47; // r2
  int v48; // r3
  _DWORD *v49; // r6
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int v53; // r1
  int v54; // r2
  int v55; // r3
  char *v56; // lr
  _DWORD *v57; // r12
  int v58; // r1
  int v59; // r2
  int v60; // r3
  _BYTE v61[32]; // [sp+20h] [bp-11B4h] BYREF
  const char *v62; // [sp+40h] [bp-1194h]
  const char *v63; // [sp+44h] [bp-1190h]
  char *v64; // [sp+48h] [bp-118Ch]
  __int64 v65; // [sp+50h] [bp-1184h]
  _DWORD *v66; // [sp+58h] [bp-117Ch]
  char *s; // [sp+5Ch] [bp-1178h]
  char *v68; // [sp+60h] [bp-1174h]
  char *v69; // [sp+64h] [bp-1170h]
  const char *v70; // [sp+68h] [bp-116Ch]
  int fan_num; // [sp+6Ch] [bp-1168h]
  int *v72; // [sp+70h] [bp-1164h]
  int *v73; // [sp+74h] [bp-1160h]
  const char *v74; // [sp+78h] [bp-115Ch]
  char *v75; // [sp+7Ch] [bp-1158h]
  char *v76; // [sp+80h] [bp-1154h]
  const char *v77; // [sp+84h] [bp-1150h]
  int v78; // [sp+8Ch] [bp-1148h] BYREF
  _DWORD v79[7]; // [sp+90h] [bp-1144h] BYREF
  int v80; // [sp+ACh] [bp-1128h]
  _DWORD v81[8]; // [sp+B0h] [bp-1124h] BYREF
  _DWORD v82[7]; // [sp+D0h] [bp-1104h] BYREF
  int v83; // [sp+ECh] [bp-10E8h]
  _DWORD v84[8]; // [sp+F0h] [bp-10E4h] BYREF
  _DWORD v85[7]; // [sp+110h] [bp-10C4h] BYREF
  int v86; // [sp+12Ch] [bp-10A8h]
  _DWORD v87[8]; // [sp+130h] [bp-10A4h] BYREF
  _DWORD v88[7]; // [sp+150h] [bp-1084h] BYREF
  int v89; // [sp+16Ch] [bp-1068h]
  _DWORD v90[8]; // [sp+170h] [bp-1064h] BYREF
  _DWORD v91[7]; // [sp+190h] [bp-1044h] BYREF
  int v92; // [sp+1ACh] [bp-1028h]
  _DWORD v93[8]; // [sp+1B0h] [bp-1024h] BYREF
  char v94[4100]; // [sp+1D0h] [bp-1004h] BYREF

  v4 = a3;
  v78 = 0;
  v74 = a3 + 32;
  v75 = *(char **)get_all_created_runtime(&v78);
  if ( v75 == a1 )
  {
    v76 = &fan_inited;
    if ( !fan_inited )
    {
      fan_init();
      *v76 = 1;
    }
    fan_num = platform_get_fan_num();
    if ( fan_num <= 0 )
    {
      v36 = *((_QWORD *)v4 + 4);
      a2[23] = 0;
    }
    else
    {
      v7 = 0;
      v70 = "update_fanspeed";
      v8 = 0;
      v73 = &g_fan_zc;
      v69 = "%s";
      s = "fanid";
      v72 = &g_zc;
      v65 = 0;
      v66 = v61;
      v68 = "fanspeed";
      v77 = v4;
      do
      {
        realtime_speed = fan_get_realtime_speed(v8);
        V_LOCK();
        v20 = vshrd_n_s64(vdup_n_s32(realtime_speed).n64_i64[0], 0x20u);
        V_INT((int)v79, s, v65);
        V_INT((int)v81, v68, v20);
        v21 = v81[1];
        v22 = v81[2];
        v23 = v81[3];
        v24 = v66;
        v63 = v70;
        v62 = v69;
        *v66 = v81[0];
        v24[1] = v21;
        v24[2] = v22;
        v24[3] = v23;
        v24 += 4;
        v25 = v81[5];
        v26 = v81[6];
        v27 = v81[7];
        *v24 = v81[4];
        v24[1] = v25;
        v24[2] = v26;
        v24[3] = v27;
        logfmt_raw(v94, 0x1000u, 0, v80, v79[0], v79[1], v79[2], v79[3], v79[4], v79[5], v79[6], v80);
        V_UNLOCK();
        zlog(
          *v73,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          206,
          "update_fanspeed",
          15,
          37,
          40,
          v94);
        V_LOCK();
        if ( realtime_speed == -1 )
        {
          V_INT((int)v85, s, v65);
          V_INT((int)v87, v68, 0);
          v28 = v87[1];
          v29 = v87[2];
          v30 = v87[3];
          v31 = v66;
          v32 = (&fan_name)[v8];
          v63 = (const char *)v8;
          v62 = "%2d(corresponding to FAN%s on control board PCB";
          v64 = v32;
          *v66 = v87[0];
          v31[1] = v28;
          v31[2] = v29;
          v31[3] = v30;
          v31 += 4;
          v33 = v87[5];
          v34 = v87[6];
          v35 = v87[7];
          *v31 = v87[4];
          v31[1] = v33;
          v31[2] = v34;
          v31[3] = v35;
          logfmt_raw(v94, 0x1000u, 0, v86, v85[0], v85[1], v85[2], v85[3], v85[4], v85[5], v85[6], v86);
          V_UNLOCK();
          zlog(
            *v72,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            206,
            "update_fanspeed",
            15,
            45,
            100,
            v94);
        }
        else
        {
          V_INT((int)v82, s, v65);
          V_INT((int)v84, v68, v20);
          v9 = v84[1];
          v10 = v84[2];
          v11 = v84[3];
          v12 = v66;
          v63 = v70;
          v62 = v69;
          *v66 = v84[0];
          v12[1] = v9;
          v12[2] = v10;
          v12[3] = v11;
          v12 += 4;
          v13 = v84[5];
          v14 = v84[6];
          v15 = v84[7];
          *v12 = v84[4];
          v12[1] = v13;
          v12[2] = v14;
          v12[3] = v15;
          logfmt_raw(v94, 0x1000u, 0, v83, v82[0], v82[1], v82[2], v82[3], v82[4], v82[5], v82[6], v83);
          V_UNLOCK();
          zlog(
            *v72,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            206,
            "update_fanspeed",
            15,
            39,
            20,
            v94);
          v16 = a2[24];
          v17 = 4 * v7;
          *(_DWORD *)(a2[25] + 4 * v7++) = v8;
          *(_DWORD *)(v16 + v17) = realtime_speed;
        }
        ++v8;
        ++v65;
        v18 = fan_num;
      }
      while ( fan_num != v8 );
      v4 = v77;
      a2[23] = v7;
      if ( v7 >= v18 || (v36 = *((_QWORD *)v4 + 4), LODWORD(v36) = v36 | 2, *((_QWORD *)v4 + 4) = v36, v7) )
      {
        v37 = 0;
        do
        {
          while ( 1 )
          {
            v39 = *(_DWORD *)(a2[24] + 4 * v37);
            if ( v39 )
            {
              fan_max_speed = platform_get_fan_max_speed(v37);
              if ( v39 >= fan_pwm_get() * fan_max_speed / 150 )
                break;
            }
            ++v37;
            v38 = a2[23];
            *((_QWORD *)v4 + 4) |= 1uLL;
            if ( v38 <= v37 )
              goto LABEL_18;
          }
          ++v37;
        }
        while ( a2[23] > v37 );
LABEL_18:
        v36 = *((_QWORD *)v4 + 4);
      }
    }
    if ( (v36 & 3) != 0 )
    {
      v41 = *((_DWORD *)v76 + 1) + 1;
      *((_DWORD *)v76 + 1) = v41;
      if ( v41 > 15 )
      {
        V_LOCK();
        logfmt_raw(v94, 0x1000u, 0, "fan_error_num: %d fan_num %d", *((_DWORD *)v76 + 1), a2[23]);
        V_UNLOCK();
        if ( !v75[238] )
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            206,
            "update_fanspeed",
            15,
            63,
            20,
            v94);
        if ( *((_DWORD *)v76 + 1) == 16 )
        {
          v72 = &g_zc;
          V_LOCK();
          logfmt_raw(v94, 0x1000u, 0, "Sweep error string = %s.", "F:1");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            206,
            "update_fanspeed",
            15,
            67,
            100,
            v94);
          v42 = fan_num <= 0;
          *((_QWORD *)v4 + 4) |= 4uLL;
          if ( !v42 )
          {
            v43 = 0;
            v65 = 0;
            s = (char *)&unk_2D0FA8;
            v70 = "update_fanspeed";
            v69 = "%s";
            v73 = &g_fan_zc;
            v75 = "fanid";
            v76 = "fanspeed";
            v77 = "%2d(corresponding to FAN%s on control board PCB";
            v68 = "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c";
            v66 = v61;
            do
            {
              v44 = fan_get_realtime_speed(v43);
              V_LOCK();
              v45 = v65;
              V_INT((int)v88, v75, v65);
              V_INT((int)v90, v76, v44);
              v46 = v90[1];
              v47 = v90[2];
              v48 = v90[3];
              v49 = v66;
              v63 = v70;
              v62 = v69;
              *v66 = v90[0];
              v49[1] = v46;
              v49[2] = v47;
              v49[3] = v48;
              v49 += 4;
              v50 = v90[5];
              v51 = v90[6];
              v52 = v90[7];
              *v49 = v90[4];
              v49[1] = v50;
              v49[2] = v51;
              v49[3] = v52;
              logfmt_raw(v94, 0x1000u, 0, v89, v88[0], v88[1], v88[2], v88[3], v88[4], v88[5], v88[6], v89);
              V_UNLOCK();
              zlog(*v73, v68, 206, "update_fanspeed", 15, 71, 40, v94);
              V_LOCK();
              V_INT((int)v91, v75, v45);
              v65 = v45 + 1;
              V_INT((int)v93, v76, v44 & ~(v44 >> 31));
              v53 = v93[1];
              v54 = v93[2];
              v55 = v93[3];
              v56 = (char *)*((_DWORD *)s + 1);
              v57 = v66;
              v63 = (const char *)v43++;
              s += 4;
              v64 = v56;
              v62 = v77;
              *v66 = v93[0];
              v57[1] = v53;
              v57[2] = v54;
              v57[3] = v55;
              v58 = v93[5];
              v59 = v93[6];
              v60 = v93[7];
              *v49 = v93[4];
              v49[1] = v58;
              v49[2] = v59;
              v49[3] = v60;
              logfmt_raw(v94, 0x1000u, 0, v92, v91[0], v91[1], v91[2], v91[3], v91[4], v91[5], v91[6], v92);
              V_UNLOCK();
              zlog(*v72, v68, 206, "update_fanspeed", 15, 72, 100, v94);
            }
            while ( fan_num != v43 );
          }
        }
      }
    }
    else
    {
      *((_DWORD *)v76 + 1) = 0;
    }
  }
  return v74;
}
