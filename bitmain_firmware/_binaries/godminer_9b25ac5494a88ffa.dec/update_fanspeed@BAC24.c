const char *__fastcall update_fanspeed(const char *a1, _DWORD *a2, const char *a3)
{
  const char **all_created_runtime; // r0
  __int64 v8; // r0
  int v9; // r7
  const char *v10; // r4
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _DWORD *v14; // r11
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r0
  int v19; // r2
  int v20; // r3
  const char *v21; // r3
  int realtime_speed; // r6
  int v23; // r1
  int v24; // r2
  int v25; // r3
  _DWORD *v26; // r10
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r0
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r3
  _DWORD *v35; // r10
  char *v36; // r11
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // r0
  int v41; // r4
  const char *v42; // r10
  __int64 v43; // r2
  __int64 v44; // r0
  int v45; // r11
  int fan_max_speed; // r8
  int v47; // r0
  int v48; // r3
  int v49; // r0
  bool v50; // cc
  int v51; // r8
  int v52; // r0
  int v53; // r1
  int v54; // r2
  int v55; // r3
  _DWORD *v56; // r5
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
  int v72; // r4
  const char *v73; // r5
  int v74; // r0
  __int64 v75; // r2
  _BYTE v76[32]; // [sp+20h] [bp-11BCh] BYREF
  const char *v77; // [sp+40h] [bp-119Ch]
  const char *v78; // [sp+44h] [bp-1198h]
  char *v79; // [sp+48h] [bp-1194h]
  double v80; // [sp+50h] [bp-118Ch]
  _DWORD *v81; // [sp+58h] [bp-1184h]
  char *s; // [sp+5Ch] [bp-1180h]
  char *v83; // [sp+60h] [bp-117Ch]
  const char *v84; // [sp+64h] [bp-1178h]
  char *v85; // [sp+68h] [bp-1174h]
  const char *v86; // [sp+6Ch] [bp-1170h]
  int *v87; // [sp+70h] [bp-116Ch]
  int *v88; // [sp+74h] [bp-1168h]
  const char *v89; // [sp+78h] [bp-1164h]
  const char *v90; // [sp+7Ch] [bp-1160h]
  const char *v91; // [sp+80h] [bp-115Ch]
  char *v92; // [sp+84h] [bp-1158h]
  int v93; // [sp+8Ch] [bp-1150h] BYREF
  __int64 v94; // [sp+90h] [bp-114Ch] BYREF
  char v95[32]; // [sp+98h] [bp-1144h] BYREF
  _DWORD v96[8]; // [sp+B8h] [bp-1124h] BYREF
  char v97[32]; // [sp+D8h] [bp-1104h] BYREF
  _DWORD v98[8]; // [sp+F8h] [bp-10E4h] BYREF
  char v99[32]; // [sp+118h] [bp-10C4h] BYREF
  _DWORD v100[8]; // [sp+138h] [bp-10A4h] BYREF
  char v101[32]; // [sp+158h] [bp-1084h] BYREF
  _DWORD v102[8]; // [sp+178h] [bp-1064h] BYREF
  char v103[32]; // [sp+198h] [bp-1044h] BYREF
  _DWORD v104[8]; // [sp+1B8h] [bp-1024h] BYREF
  _BYTE v105[4100]; // [sp+1D8h] [bp-1004h] BYREF

  v93 = 0;
  v90 = a3;
  all_created_runtime = (const char **)get_all_created_runtime(&v93);
  v89 = a3 + 32;
  v91 = *all_created_runtime;
  if ( v91 == a1 )
  {
    v92 = &fan_inited;
    if ( !fan_inited )
    {
      all_created_runtime = (const char **)fan_init();
      *v92 = 1;
    }
    LODWORD(v8) = platform_get_fan_num(all_created_runtime);
    v94 = 0;
    v86 = (const char *)v8;
    if ( (int)v8 <= 0 )
    {
      v75 = *((_QWORD *)v90 + 4);
      a2[25] = 0;
      if ( (v75 & 3) == 0 )
      {
        *((_DWORD *)v92 + 1) = 0;
        return v89;
      }
    }
    else
    {
      v9 = 0;
      v84 = "update_fanspeed";
      v10 = 0;
      v88 = &g_fan_zc;
      v85 = "%s";
      s = "fanid";
      v87 = &g_zc;
      v80 = 0.0;
      v81 = v76;
      v83 = "fanspeed";
      do
      {
        realtime_speed = fan_get_realtime_speed(v10);
        V_LOCK(realtime_speed);
        V_INT((int)v95, s);
        V_INT((int)v96, v83);
        v23 = v96[1];
        v24 = v96[2];
        v25 = v96[3];
        v26 = v81;
        v78 = v84;
        v77 = v85;
        *v81 = v96[0];
        v26[1] = v23;
        v26[2] = v24;
        v26[3] = v25;
        v26 += 4;
        v27 = v96[5];
        v28 = v96[6];
        v29 = v96[7];
        *v26 = v96[4];
        v26[1] = v27;
        v26[2] = v28;
        v26[3] = v29;
        v30 = logfmt_raw((int)v105, 0x1000u);
        V_UNLOCK(v30);
        v31 = zlog(
                *v88,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
                211,
                "update_fanspeed",
                15,
                37,
                40,
                v105);
        V_LOCK(v31);
        if ( realtime_speed == -1 )
        {
          V_INT((int)v99, s);
          V_INT((int)v100, v83);
          v32 = v100[1];
          v33 = v100[2];
          v34 = v100[3];
          v35 = v81;
          v36 = (&fan_name)[(_DWORD)v10];
          v78 = v10;
          v77 = "%2d(corresponding to FAN%s on control board PCB)";
          v79 = v36;
          *v81 = v100[0];
          v35[1] = v32;
          v35[2] = v33;
          v35[3] = v34;
          v35 += 4;
          v37 = v100[5];
          v38 = v100[6];
          v39 = v100[7];
          *v35 = v100[4];
          v35[1] = v37;
          v35[2] = v38;
          v35[3] = v39;
          v40 = logfmt_raw((int)v105, 0x1000u);
          V_UNLOCK(v40);
          zlog(
            *v87,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            211,
            "update_fanspeed",
            15,
            45,
            100,
            v105);
          v95[(_DWORD)v10 - 8] = 1;
        }
        else
        {
          V_INT((int)v97, s);
          V_INT((int)v98, v83);
          v11 = v98[1];
          v12 = v98[2];
          v13 = v98[3];
          v14 = v81;
          v78 = v84;
          v77 = v85;
          *v81 = v98[0];
          v14[1] = v11;
          v14[2] = v12;
          v14[3] = v13;
          v14 += 4;
          v15 = v98[5];
          v16 = v98[6];
          v17 = v98[7];
          *v14 = v98[4];
          v14[1] = v15;
          v14[2] = v16;
          v14[3] = v17;
          v18 = logfmt_raw((int)v105, 0x1000u);
          V_UNLOCK(v18);
          zlog(
            *v87,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            211,
            "update_fanspeed",
            15,
            39,
            20,
            v105);
          v19 = a2[26];
          v20 = 4 * v9;
          *(_DWORD *)(a2[27] + 4 * v9++) = v10;
          *(_DWORD *)(v19 + v20) = realtime_speed;
        }
        ++v10;
        ++*(_QWORD *)&v80;
        v21 = v86;
      }
      while ( v86 != v10 );
      a2[25] = v9;
      if ( v9 >= (int)v21 || (v8 = *((_QWORD *)v90 + 4), LODWORD(v8) = v8 | 2, *((_QWORD *)v90 + 4) = v8, v9) )
      {
        v41 = 0;
        v42 = v90;
        LODWORD(v80) = 458129845;
        do
        {
          while ( 1 )
          {
            v45 = *(_DWORD *)(a2[26] + 4 * v41);
            if ( v45 )
            {
              fan_max_speed = platform_get_fan_max_speed(v41);
              v47 = fan_pwm_get();
              if ( v45 >= ((int)((unsigned __int64)(v47 * fan_max_speed * (__int64)SLODWORD(v80)) >> 32) >> 4)
                        - ((v47 * fan_max_speed) >> 31) )
                break;
            }
            v43 = *((_QWORD *)v42 + 4);
            v95[v41++ - 8] = 1;
            v44 = v43 | 1;
            HIDWORD(v43) = a2[25];
            *((_QWORD *)v42 + 4) = v44;
            if ( SHIDWORD(v43) <= v41 )
              goto LABEL_18;
          }
          ++v41;
        }
        while ( a2[25] > v41 );
LABEL_18:
        v8 = *((_QWORD *)v90 + 4);
      }
      if ( (v8 & 3) == 0 )
      {
        v72 = 0;
        v73 = v86;
        *((_DWORD *)v92 + 1) = 0;
        do
        {
          v74 = v72++;
          set_miner_6060info_status_fan_err(v74, 0);
        }
        while ( v73 != (const char *)v72 );
        return v89;
      }
    }
    v48 = *((_DWORD *)v92 + 1) + 1;
    *((_DWORD *)v92 + 1) = v48;
    if ( v48 > 15 )
    {
      V_LOCK(v8);
      v49 = logfmt_raw((int)v105, 0x1000u);
      V_UNLOCK(v49);
      if ( !v91[250] )
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          211,
          "update_fanspeed",
          15,
          65,
          20,
          v105);
      if ( *((_DWORD *)v92 + 1) == 16 )
      {
        v50 = (int)v86 <= 0;
        *((_QWORD *)v90 + 4) |= 4uLL;
        if ( !v50 )
        {
          v83 = (char *)&unk_2E5B84;
          v84 = "update_fanspeed";
          s = (char *)&v93 + 3;
          v88 = &g_fan_zc;
          v85 = "%s";
          v91 = "%2d(corresponding to FAN%s on control board PCB)";
          v87 = &g_zc;
          v51 = 0;
          v80 = 0.0;
          v81 = v76;
          v90 = "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_fanspeed.c";
          do
          {
            v52 = fan_get_realtime_speed(v51);
            V_LOCK(v52);
            V_INT((int)v101, "fanid");
            V_INT((int)v102, "fanspeed");
            v53 = v102[1];
            v54 = v102[2];
            v55 = v102[3];
            v56 = v81;
            v78 = v84;
            v77 = v85;
            *v81 = v102[0];
            v56[1] = v53;
            v56[2] = v54;
            v56[3] = v55;
            v56 += 4;
            v57 = v102[5];
            v58 = v102[6];
            v59 = v102[7];
            *v56 = v102[4];
            v56[1] = v57;
            v56[2] = v58;
            v56[3] = v59;
            v60 = logfmt_raw((int)v105, 0x1000u);
            V_UNLOCK(v60);
            v61 = zlog(*v88, v90, 211, "update_fanspeed", 15, 72, 40, v105);
            V_LOCK(v61);
            V_INT((int)v103, "fanid");
            V_INT((int)v104, "fanspeed");
            v62 = v104[1];
            v63 = v104[2];
            v64 = v104[3];
            v65 = (char *)*((_DWORD *)v83 + 1);
            v66 = v81;
            v78 = (const char *)v51;
            v83 += 4;
            v79 = v65;
            v77 = v91;
            *v81 = v104[0];
            v66[1] = v62;
            v66[2] = v63;
            v66[3] = v64;
            v67 = v104[5];
            v68 = v104[6];
            v69 = v104[7];
            *v56 = v104[4];
            v56[1] = v67;
            v56[2] = v68;
            v56[3] = v69;
            v70 = logfmt_raw((int)v105, 0x1000u);
            V_UNLOCK(v70);
            zlog(*v87, v90, 211, "update_fanspeed", 15, 73, 100, v105);
            if ( *++s )
              set_miner_6060info_status_fan_err(v51, 1);
            ++v51;
            ++*(_QWORD *)&v80;
          }
          while ( v86 != (const char *)v51 );
        }
      }
    }
  }
  return v89;
}
