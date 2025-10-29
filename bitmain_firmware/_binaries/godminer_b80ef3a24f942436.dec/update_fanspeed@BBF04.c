const char *__fastcall update_fanspeed(const char *a1, _DWORD *a2, const char *a3)
{
  const char **all_created_runtime; // r0
  __int64 v8; // r0
  int v9; // r7
  unsigned int v10; // r4
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
  int v21; // r3
  unsigned int realtime_speed; // r6
  __int64 v23; // d8
  int v24; // r1
  int v25; // r2
  int v26; // r3
  _DWORD *v27; // r10
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r0
  int v32; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r3
  _DWORD *v36; // r10
  char *v37; // r11
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r0
  int v42; // r4
  const char *v43; // r10
  __int64 v44; // r2
  __int64 v45; // r0
  int v46; // r11
  int fan_max_speed; // r8
  int v48; // r0
  int v49; // r3
  int v50; // r0
  bool v51; // cc
  unsigned int v52; // r8
  int v53; // r6
  int v54; // r1
  int v55; // r2
  int v56; // r3
  _DWORD *v57; // r5
  int v58; // r1
  int v59; // r2
  int v60; // r3
  int v61; // r0
  int v62; // r0
  int v63; // r1
  int v64; // r2
  int v65; // r3
  char *v66; // lr
  _DWORD *v67; // r12
  int v68; // r1
  int v69; // r2
  int v70; // r3
  int v71; // r0
  int v73; // r4
  int v74; // r5
  int v75; // r0
  __int64 v76; // r2
  _BYTE v77[32]; // [sp+20h] [bp-11BCh] BYREF
  const char *v78; // [sp+40h] [bp-119Ch]
  const char *v79; // [sp+44h] [bp-1198h]
  char *v80; // [sp+48h] [bp-1194h]
  __int64 v81; // [sp+50h] [bp-118Ch]
  _DWORD *v82; // [sp+58h] [bp-1184h]
  char *s; // [sp+5Ch] [bp-1180h]
  char *v84; // [sp+60h] [bp-117Ch]
  const char *v85; // [sp+64h] [bp-1178h]
  char *v86; // [sp+68h] [bp-1174h]
  int v87; // [sp+6Ch] [bp-1170h]
  int *v88; // [sp+70h] [bp-116Ch]
  int *v89; // [sp+74h] [bp-1168h]
  const char *v90; // [sp+78h] [bp-1164h]
  const char *v91; // [sp+7Ch] [bp-1160h]
  const char *v92; // [sp+80h] [bp-115Ch]
  char *v93; // [sp+84h] [bp-1158h]
  int v94; // [sp+8Ch] [bp-1150h] BYREF
  __int64 v95; // [sp+90h] [bp-114Ch] BYREF
  char v96[32]; // [sp+98h] [bp-1144h] BYREF
  _DWORD v97[8]; // [sp+B8h] [bp-1124h] BYREF
  char v98[32]; // [sp+D8h] [bp-1104h] BYREF
  _DWORD v99[8]; // [sp+F8h] [bp-10E4h] BYREF
  char v100[32]; // [sp+118h] [bp-10C4h] BYREF
  _DWORD v101[8]; // [sp+138h] [bp-10A4h] BYREF
  char v102[32]; // [sp+158h] [bp-1084h] BYREF
  _DWORD v103[8]; // [sp+178h] [bp-1064h] BYREF
  char v104[32]; // [sp+198h] [bp-1044h] BYREF
  _DWORD v105[8]; // [sp+1B8h] [bp-1024h] BYREF
  _BYTE v106[4100]; // [sp+1D8h] [bp-1004h] BYREF

  v94 = 0;
  v91 = a3;
  all_created_runtime = (const char **)get_all_created_runtime(&v94);
  v90 = a3 + 32;
  v92 = *all_created_runtime;
  if ( v92 == a1 )
  {
    v93 = &fan_inited;
    if ( !fan_inited )
    {
      all_created_runtime = (const char **)fan_init();
      *v93 = 1;
    }
    LODWORD(v8) = platform_get_fan_num(all_created_runtime);
    v95 = 0;
    v87 = v8;
    if ( (int)v8 <= 0 )
    {
      v76 = *((_QWORD *)v91 + 4);
      a2[23] = 0;
      if ( (v76 & 3) == 0 )
      {
        *((_DWORD *)v93 + 1) = 0;
        return v90;
      }
    }
    else
    {
      v9 = 0;
      v85 = "update_fanspeed";
      v10 = 0;
      v89 = &g_fan_zc;
      v86 = "%s";
      s = "fanid";
      v88 = &g_zc;
      v81 = 0;
      v82 = v77;
      v84 = "fanspeed";
      do
      {
        realtime_speed = fan_get_realtime_speed(v10);
        V_LOCK(realtime_speed);
        v23 = vshrd_n_s64(vdup_n_s32(realtime_speed).n64_i64[0], 0x20u);
        V_INT((int)v96, s, v81);
        V_INT((int)v97, v84, v23);
        v24 = v97[1];
        v25 = v97[2];
        v26 = v97[3];
        v27 = v82;
        v79 = v85;
        v78 = v86;
        *v82 = v97[0];
        v27[1] = v24;
        v27[2] = v25;
        v27[3] = v26;
        v27 += 4;
        v28 = v97[5];
        v29 = v97[6];
        v30 = v97[7];
        *v27 = v97[4];
        v27[1] = v28;
        v27[2] = v29;
        v27[3] = v30;
        v31 = logfmt_raw((int)v106, 0x1000u);
        V_UNLOCK(v31);
        v32 = zlog(
                *v89,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
                206,
                "update_fanspeed",
                15,
                37,
                40,
                v106);
        V_LOCK(v32);
        if ( realtime_speed == -1 )
        {
          V_INT((int)v100, s, v81);
          V_INT((int)v101, v84, 0);
          v33 = v101[1];
          v34 = v101[2];
          v35 = v101[3];
          v36 = v82;
          v37 = (&fan_name)[v10];
          v79 = (const char *)v10;
          v78 = "%2d(corresponding to FAN%s on control board PCB)";
          v80 = v37;
          *v82 = v101[0];
          v36[1] = v33;
          v36[2] = v34;
          v36[3] = v35;
          v36 += 4;
          v38 = v101[5];
          v39 = v101[6];
          v40 = v101[7];
          *v36 = v101[4];
          v36[1] = v38;
          v36[2] = v39;
          v36[3] = v40;
          v41 = logfmt_raw((int)v106, 0x1000u);
          V_UNLOCK(v41);
          zlog(
            *v88,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            206,
            "update_fanspeed",
            15,
            45,
            100,
            v106);
          v96[v10 - 8] = 1;
        }
        else
        {
          V_INT((int)v98, s, v81);
          V_INT((int)v99, v84, v23);
          v11 = v99[1];
          v12 = v99[2];
          v13 = v99[3];
          v14 = v82;
          v79 = v85;
          v78 = v86;
          *v82 = v99[0];
          v14[1] = v11;
          v14[2] = v12;
          v14[3] = v13;
          v14 += 4;
          v15 = v99[5];
          v16 = v99[6];
          v17 = v99[7];
          *v14 = v99[4];
          v14[1] = v15;
          v14[2] = v16;
          v14[3] = v17;
          v18 = logfmt_raw((int)v106, 0x1000u);
          V_UNLOCK(v18);
          zlog(
            *v88,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            206,
            "update_fanspeed",
            15,
            39,
            20,
            v106);
          v19 = a2[24];
          v20 = 4 * v9;
          *(_DWORD *)(a2[25] + 4 * v9++) = v10;
          *(_DWORD *)(v19 + v20) = realtime_speed;
        }
        ++v10;
        ++v81;
        v21 = v87;
      }
      while ( v87 != v10 );
      a2[23] = v9;
      if ( v9 >= v21 || (v8 = *((_QWORD *)v91 + 4), LODWORD(v8) = v8 | 2, *((_QWORD *)v91 + 4) = v8, v9) )
      {
        v42 = 0;
        v43 = v91;
        LODWORD(v81) = 458129845;
        do
        {
          while ( 1 )
          {
            v46 = *(_DWORD *)(a2[24] + 4 * v42);
            if ( v46 )
            {
              fan_max_speed = platform_get_fan_max_speed(v42);
              v48 = fan_pwm_get();
              if ( v46 >= ((int)((unsigned __int64)(v48 * fan_max_speed * (__int64)(int)v81) >> 32) >> 4)
                        - ((v48 * fan_max_speed) >> 31) )
                break;
            }
            v44 = *((_QWORD *)v43 + 4);
            v96[v42++ - 8] = 1;
            v45 = v44 | 1;
            HIDWORD(v44) = a2[23];
            *((_QWORD *)v43 + 4) = v45;
            if ( SHIDWORD(v44) <= v42 )
              goto LABEL_18;
          }
          ++v42;
        }
        while ( a2[23] > v42 );
LABEL_18:
        v8 = *((_QWORD *)v91 + 4);
      }
      if ( (v8 & 3) == 0 )
      {
        v73 = 0;
        v74 = v87;
        *((_DWORD *)v93 + 1) = 0;
        do
        {
          v75 = v73++;
          set_miner_6060info_status_fan_err(v75, 0);
        }
        while ( v74 != v73 );
        return v90;
      }
    }
    v49 = *((_DWORD *)v93 + 1) + 1;
    *((_DWORD *)v93 + 1) = v49;
    if ( v49 > 15 )
    {
      V_LOCK(v8);
      v50 = logfmt_raw((int)v106, 0x1000u);
      V_UNLOCK(v50);
      if ( !v92[254] )
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          206,
          "update_fanspeed",
          15,
          65,
          20,
          v106);
      if ( *((_DWORD *)v93 + 1) == 16 )
      {
        v51 = v87 <= 0;
        *((_QWORD *)v91 + 4) |= 4uLL;
        if ( !v51 )
        {
          v84 = (char *)&unk_2F176C;
          v85 = "update_fanspeed";
          s = (char *)&v94 + 3;
          v89 = &g_fan_zc;
          v86 = "%s";
          v92 = "%2d(corresponding to FAN%s on control board PCB)";
          v88 = &g_zc;
          v52 = 0;
          v81 = 0;
          v82 = v77;
          v91 = "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c";
          do
          {
            v53 = fan_get_realtime_speed(v52);
            V_LOCK(v53);
            V_INT((int)v102, "fanid", v81);
            V_INT((int)v103, "fanspeed", v53);
            v54 = v103[1];
            v55 = v103[2];
            v56 = v103[3];
            v57 = v82;
            v79 = v85;
            v78 = v86;
            *v82 = v103[0];
            v57[1] = v54;
            v57[2] = v55;
            v57[3] = v56;
            v57 += 4;
            v58 = v103[5];
            v59 = v103[6];
            v60 = v103[7];
            *v57 = v103[4];
            v57[1] = v58;
            v57[2] = v59;
            v57[3] = v60;
            v61 = logfmt_raw((int)v106, 0x1000u);
            V_UNLOCK(v61);
            v62 = zlog(*v89, v91, 206, "update_fanspeed", 15, 72, 40, v106);
            V_LOCK(v62);
            V_INT((int)v104, "fanid", v81);
            V_INT((int)v105, "fanspeed", v53 & ~(v53 >> 31));
            v63 = v105[1];
            v64 = v105[2];
            v65 = v105[3];
            v66 = (char *)*((_DWORD *)v84 + 1);
            v67 = v82;
            v79 = (const char *)v52;
            v84 += 4;
            v80 = v66;
            v78 = v92;
            *v82 = v105[0];
            v67[1] = v63;
            v67[2] = v64;
            v67[3] = v65;
            v68 = v105[5];
            v69 = v105[6];
            v70 = v105[7];
            *v57 = v105[4];
            v57[1] = v68;
            v57[2] = v69;
            v57[3] = v70;
            v71 = logfmt_raw((int)v106, 0x1000u);
            V_UNLOCK(v71);
            zlog(*v88, v91, 206, "update_fanspeed", 15, 73, 100, v106);
            if ( *++s )
              set_miner_6060info_status_fan_err(v52, 1);
            ++v52;
            ++v81;
          }
          while ( v87 != v52 );
        }
      }
    }
  }
  return v90;
}
