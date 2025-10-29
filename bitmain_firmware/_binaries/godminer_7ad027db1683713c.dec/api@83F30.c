void *api()
{
  void *result; // r0
  int v1; // r4
  struct addrinfo *v2; // r4
  struct addrinfo *i; // r3
  int v4; // r0
  int v5; // r6
  time_t v6; // r9
  int *v7; // r0
  char *v8; // r5
  int v9; // r6
  int v10; // r0
  ssize_t v11; // r3
  double *v12; // r0
  double *v13; // r5
  _DWORD *v14; // r0
  _DWORD *v15; // r6
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  _DWORD *v19; // r4
  double *v20; // r0
  double *v21; // r5
  char *v22; // r0
  char *v23; // r5
  unsigned int *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r2
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r8
  int v30; // r0
  int v31; // r6
  size_t v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int *v36; // r4
  char **v37; // r6
  unsigned int v38; // r5
  const char *v39; // r7
  char *v40; // t1
  _DWORD *v41; // r0
  unsigned int *v42; // r3
  unsigned int v43; // r2
  unsigned int v44; // r2
  _DWORD *v45; // r0
  unsigned int *v46; // r3
  unsigned int v47; // r2
  unsigned int v48; // r2
  _DWORD *v49; // r0
  unsigned int v50; // r4
  _DWORD *v51; // r8
  _DWORD *v52; // r0
  bool v53; // zf
  int v54; // r7
  const char *v55; // r0
  char *v56; // r0
  char *v57; // r4
  unsigned int *v58; // r3
  unsigned int v59; // r2
  unsigned int v60; // r2
  unsigned int *v61; // r3
  unsigned int v62; // r2
  unsigned int v63; // r2
  int *v64; // r0
  char *v65; // r0
  _DWORD *v66; // r8
  unsigned int v67; // r6
  _DWORD *v68; // r0
  _DWORD *v69; // r7
  int v70; // r0
  int v71; // r5
  size_t v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // r0
  int *v76; // r8
  const char *v77; // r0
  _DWORD *v78; // r0
  _DWORD *v79; // r0
  unsigned int v80; // r1
  unsigned int *v81; // r3
  unsigned int v82; // r2
  unsigned int v83; // r2
  const char *v84; // r0
  int *v85; // r0
  char *v86; // r0
  unsigned int v87; // [sp+10h] [bp-11564h]
  unsigned int protocol; // [sp+14h] [bp-11560h]
  _DWORD *v89; // [sp+18h] [bp-1155Ch]
  unsigned int v90; // [sp+20h] [bp-11554h]
  int v91; // [sp+24h] [bp-11550h]
  _DWORD *v92; // [sp+2Ch] [bp-11548h]
  _DWORD *v93; // [sp+34h] [bp-11540h]
  _DWORD *v94; // [sp+40h] [bp-11534h]
  int v95; // [sp+48h] [bp-1152Ch] BYREF
  int fd; // [sp+4Ch] [bp-11528h] BYREF
  socklen_t addr_len; // [sp+50h] [bp-11524h] BYREF
  int v98; // [sp+54h] [bp-11520h] BYREF
  int v99; // [sp+58h] [bp-1151Ch] BYREF
  int v100; // [sp+5Ch] [bp-11518h] BYREF
  struct addrinfo *ai; // [sp+60h] [bp-11514h] BYREF
  int optval; // [sp+64h] [bp-11510h] BYREF
  _DWORD v103[2]; // [sp+68h] [bp-1150Ch] BYREF
  char service[12]; // [sp+70h] [bp-11504h] BYREF
  __int64 v105; // [sp+7Ch] [bp-114F8h] BYREF
  __int64 v106; // [sp+84h] [bp-114F0h]
  __int64 v107; // [sp+8Ch] [bp-114E8h] BYREF
  __int64 v108; // [sp+94h] [bp-114E0h]
  __int64 s1; // [sp+9Ch] [bp-114D8h] BYREF
  __int64 v110; // [sp+A4h] [bp-114D0h]
  _DWORD v111[5]; // [sp+ACh] [bp-114C8h] BYREF
  addrinfo req; // [sp+C0h] [bp-114B4h] BYREF
  struct sockaddr sa; // [sp+E0h] [bp-11494h] BYREF
  char v114[16]; // [sp+160h] [bp-11414h] BYREF
  char v115[252]; // [sp+25Ch] [bp-11318h] BYREF
  char src[256]; // [sp+358h] [bp-1121Ch] BYREF
  _DWORD v117[70]; // [sp+458h] [bp-1111Ch] BYREF
  char s[4096]; // [sp+570h] [bp-11004h] BYREF
  char v119[4048]; // [sp+1570h] [bp-10004h] BYREF
  char v120[4048]; // [sp+2570h] [bp-F004h] BYREF
  char v121[3984]; // [sp+3570h] [bp-E004h] BYREF
  char v122[3984]; // [sp+4570h] [bp-D004h] BYREF
  char v123[3984]; // [sp+5570h] [bp-C004h] BYREF
  char v124[3984]; // [sp+6570h] [bp-B004h] BYREF
  char v125[3984]; // [sp+7570h] [bp-A004h] BYREF
  char v126[3984]; // [sp+8570h] [bp-9004h] BYREF
  char v127[3984]; // [sp+9570h] [bp-8004h] BYREF
  char v128[3984]; // [sp+A570h] [bp-7004h] BYREF
  char v129[3984]; // [sp+B570h] [bp-6004h] BYREF
  char v130[3984]; // [sp+C570h] [bp-5004h] BYREF
  char v131[3984]; // [sp+D570h] [bp-4004h] BYREF
  char v132[3984]; // [sp+E570h] [bp-3004h] BYREF
  double v133[1024]; // [sp+F570h] [bp-2004h] BYREF

  v95 = -1;
  fd = -1;
  memset(v133, 0, sizeof(v133));
  v87 = 2;
  result = memset(s, 0, sizeof(s));
  v1 = (unsigned __int8)byte_2D23C0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  if ( !byte_2D23C0 )
  {
    V_LOCK();
    logfmt_raw(v119, 0x1000u, v1, "Start api function");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "api",
      3,
      2740,
      60,
      v119);
    v2 = (struct addrinfo *)_sigsetjmp((struct __jmp_buf_tag *)v117, v1);
    if ( v2 )
    {
      sub_7F7D8(&v95);
      _pthread_unwind_next((__pthread_unwind_buf_t *)v117);
    }
    else
    {
      _pthread_register_cancel((__pthread_unwind_buf_t *)v117);
      sprintf(service, "%d", 4028);
      memset(&req.ai_family, 0, 28);
      req.ai_flags = 1;
      protocol = getaddrinfo("0.0.0.0", service, &req, &ai);
      if ( protocol )
      {
        V_LOCK();
        logfmt_raw(v127, 0x1000u, 0, "%s: exec getaddrinfo() failed", "api_init_socket");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/api_new.c",
          153,
          "api_init_socket",
          15,
          2292,
          100,
          v127);
LABEL_117:
        V_LOCK();
        logfmt_raw(v120, 0x1000u, 0, "%s: init socket failed", "api");
        V_UNLOCK();
        return (void *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-new/api_new.c",
                         153,
                         "api",
                         3,
                         2747,
                         100,
                         v120);
      }
      v2 = ai;
      if ( ai )
      {
        for ( i = ai; ; i = ai )
        {
          v4 = socket(i->ai_family, 1, protocol);
          if ( v4 > 0 )
          {
            v5 = v4;
            goto LABEL_10;
          }
          v2 = v2->ai_next;
          if ( !v2 )
            break;
        }
        v5 = v4;
        if ( v4 == -1 )
        {
          V_LOCK();
          logfmt_raw(v128, 0x1000u, 0, "%s: exec socket() failed", "api_init_socket");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "api_init_socket",
            15,
            2307,
            100,
            v128);
          goto LABEL_117;
        }
        goto LABEL_10;
      }
    }
    v5 = (int)v2;
LABEL_10:
    optval = 1;
    setsockopt(v5, 1, 2, &optval, 4u);
    v6 = time(0);
    while ( bind(v5, v2->ai_addr, v2->ai_addrlen) < 0 )
    {
      v7 = _errno_location();
      v8 = strerror(*v7);
      if ( time(0) - v6 > 61 )
      {
        freeaddrinfo(ai);
        V_LOCK();
        logfmt_raw(v130, 0x1000u, 0, "api bind to port %d, failed (%s)", 4028, v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/api_new.c",
          153,
          "api_init_socket",
          15,
          2335,
          100,
          v130);
        goto LABEL_117;
      }
      V_LOCK();
      logfmt_raw(v129, 0x1000u, 0, "%s: api bind to port %d failed, trying again in 30sec", "api_init_socket", 4028);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/api_new.c",
        153,
        "api_init_socket",
        15,
        2325,
        80,
        v129);
      sleep(0x1Eu);
    }
    freeaddrinfo(ai);
    if ( listen(v5, 100) >= 0 )
    {
      if ( v5 < 0 )
        goto LABEL_117;
      byte_2D23C0 = 1;
      v95 = v5;
      while ( 1 )
      {
        v9 = (unsigned __int8)byte_2D239C;
        if ( byte_2D239C )
        {
LABEL_107:
          _pthread_unregister_cancel((__pthread_unwind_buf_t *)v117);
          sub_7F7D8(&v95);
          byte_2D23C0 = 0;
          V_LOCK();
          logfmt_raw(v126, 0x1000u, 0, "End api function !!!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "api",
            3,
            2848,
            60,
            v126);
          return (void *)close(v95);
        }
        addr_len = 128;
        v10 = accept(v95, &sa, &addr_len);
        fd = v10;
        if ( v10 < 0 )
        {
          V_LOCK();
          v64 = _errno_location();
          v65 = strerror(*v64);
          logfmt_raw(v121, 0x1000u, v9, "%s: exec accept failed (%s)", "api", v65);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "api",
            3,
            2760,
            100,
            v121);
          goto LABEL_107;
        }
        v100 = 2;
        v98 = 1;
        v99 = 5;
        setsockopt(v10, 1, 9, &v98, 4u);
        setsockopt(fd, 6, 1, &v98, 4u);
        setsockopt(fd, 6, 6, &v98, 4u);
        setsockopt(fd, 6, 4, &v99, 4u);
        setsockopt(fd, 6, 5, &v100, 4u);
        v103[1] = v9;
        v103[0] = 10;
        if ( setsockopt(fd, 1, 21, v103, 8u) )
        {
          V_LOCK();
          logfmt_raw(v122, 0x1000u, v9, "%s:setsocket SO_SNDTIMEO failed\n", "api");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "api",
            3,
            2779,
            100,
            v122);
          close(fd);
        }
        if ( setsockopt(fd, 1, 20, v103, 8u) )
        {
          V_LOCK();
          logfmt_raw(v123, 0x1000u, 0, "%s:setsocket SO_RCVTIMEO failed\n", "api");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "api",
            3,
            2785,
            100,
            v123);
          close(fd);
        }
        v11 = recv(fd, v133, 0xFFFu, 0);
        if ( v11 < 0 )
        {
          LOBYTE(v133[0]) = 0;
          goto LABEL_18;
        }
        v105 = 0;
        v106 = 0;
        *(_QWORD *)::s1 = 0;
        unk_2D2394 = 0;
        *((_BYTE *)v133 + v11) = 0;
        v107 = 0;
        v108 = 0;
        dword_2D2388 = time(0);
        getnameinfo(&sa, 0x80u, ::s1, 0x10u, 0, 0, 1u);
        V_LOCK();
        logfmt_raw(v124, 0x1000u, 0, "connect_addr: %s", ::s1);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/api_new.c",
          153,
          "api",
          3,
          2802,
          20,
          v124);
        s1 = 0;
        v110 = 0;
        v12 = json_loads(v133, 0, v114);
        v13 = v12;
        if ( v12 && !*(_DWORD *)v12 )
        {
          v14 = (_DWORD *)json_object_get(v12, "command");
          v15 = v14;
          if ( v14 && *v14 == 1 )
          {
            v49 = (_DWORD *)json_object_get(v13, "new_api");
            if ( v49 )
              v90 = *v49 != 5;
            else
              v90 = 1;
            v50 = protocol;
            v91 = protocol;
            v51 = json_object();
            while ( (unsigned int)json_array_size(v15) > v50 )
            {
              v52 = json_array_get(v15, v50);
              v53 = v52 == 0;
              if ( v52 )
                v53 = v50 == 11;
              v54 = v53;
              if ( v53 )
                break;
              if ( *v52 == 2 )
              {
                s1 = 0;
                v110 = 0;
                v55 = (const char *)json_string_value(v52);
                snprintf((char *)&s1, 0x10u, "%s", v55);
                if ( strcmp((const char *)&s1, "reload") | v90 )
                {
                  v93 = json_object();
                  sub_7F81C(v93, (const char *)&s1, v54, v90);
                  json_object_set_new(v51, (char *)&s1, v93);
                }
                else
                {
                  v91 = 1;
                }
              }
              ++v50;
            }
            v56 = json_dumps(v51, 24576);
            v57 = v56;
            if ( v56 )
              sub_7FCD0(&fd, v56);
            free(v57);
            if ( v91 == 1 )
              sub_7F81C(v51, "reload", 0, 0);
            if ( v51 )
            {
              if ( v51[1] != -1 )
              {
                v58 = v51 + 1;
                __dmb(0xBu);
                do
                {
                  v59 = __ldrex(v58);
                  v60 = v59 - 1;
                }
                while ( __strex(v60, v58) );
                if ( !v60 )
                  json_delete(v51);
              }
            }
            if ( *((_DWORD *)v13 + 1) != -1 )
            {
              v61 = (unsigned int *)v13 + 1;
              __dmb(0xBu);
              do
              {
                v62 = __ldrex(v61);
                v63 = v62 - 1;
              }
              while ( __strex(v63, v61) );
              if ( !v63 )
                json_delete(v13);
            }
            goto LABEL_18;
          }
          if ( *((_DWORD *)v13 + 1) != -1 )
          {
            v16 = (unsigned int *)v13 + 1;
            __dmb(0xBu);
            do
            {
              v17 = __ldrex(v16);
              v18 = v17 - 1;
            }
            while ( __strex(v18, v16) );
            if ( !v18 )
              json_delete(v13);
          }
        }
        v19 = json_object();
        v20 = json_loads(v133, 0, v115);
        v21 = v20;
        if ( !v20 || *(_DWORD *)v20 )
        {
          v87 = 2;
          snprintf((char *)&v105, 0x10u, "%s", (const char *)v133);
          sub_7F81C(v19, (const char *)&v105, (int)&v107, 2u);
          goto LABEL_38;
        }
        v45 = (_DWORD *)json_object_get(v20, "command");
        if ( v45 && *v45 == 2 )
        {
          v77 = (const char *)json_string_value(v45);
          snprintf((char *)&v105, 0x10u, "%s", v77);
          v78 = (_DWORD *)json_object_get(v21, "new_api");
          if ( v78 && *v78 == 5 )
          {
            if ( *((_DWORD *)v21 + 1) == -1 )
            {
              v87 = protocol;
              sub_7F81C(v19, (const char *)&v105, (int)&v107, protocol);
              goto LABEL_38;
            }
            v80 = protocol;
          }
          else
          {
            v79 = (_DWORD *)json_object_get(v21, "parameter");
            if ( v79 && *v79 == 2 )
            {
              v84 = (const char *)json_string_value(v79);
              snprintf((char *)&v107, 0x10u, "%s", v84);
            }
            if ( *((_DWORD *)v21 + 1) == -1 )
            {
              v87 = 1;
              sub_7F81C(v19, (const char *)&v105, (int)&v107, 1u);
              goto LABEL_38;
            }
            v80 = 1;
          }
          v81 = (unsigned int *)v21 + 1;
          __dmb(0xBu);
          do
          {
            v82 = __ldrex(v81);
            v83 = v82 - 1;
          }
          while ( __strex(v83, v81) );
          v87 = v80;
          if ( v83 )
          {
            sub_7F81C(v19, (const char *)&v105, (int)&v107, v80);
          }
          else
          {
            json_delete(v21);
            sub_7F81C(v19, (const char *)&v105, (int)&v107, v87);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v132, 0x1000u, 0, "%s error: format error about command", "parse_recv_buf");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "parse_recv_buf",
            14,
            2379,
            100,
            v132);
          if ( *((_DWORD *)v21 + 1) != -1 )
          {
            v46 = (unsigned int *)v21 + 1;
            __dmb(0xBu);
            do
            {
              v47 = __ldrex(v46);
              v48 = v47 - 1;
            }
            while ( __strex(v48, v46) );
            if ( !v48 )
              json_delete(v21);
          }
          V_LOCK();
          logfmt_raw(v125, 0x1000u, 0, "%s: input invaild param format", "api");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "api",
            3,
            2817,
            100,
            v125);
          sub_7D134(v19, 0, 24, (int)"Missing JSON 'command'");
        }
LABEL_38:
        if ( v87 == 2 )
        {
          memset(s, 0, sizeof(s));
          if ( v19 )
          {
            v27 = (_DWORD *)json_object_get(v19, "STATUS");
            if ( v27 )
            {
              if ( *v27 == 1 )
              {
                v28 = json_array_get(v27, 0);
                v29 = v28;
                if ( v28 )
                {
                  if ( !*v28 )
                  {
                    v30 = json_object_iter(v28);
                    v31 = json_object_iter_key(v30);
                    if ( v31 )
                    {
                      v92 = v19;
                      do
                      {
                        v35 = json_object_key_to_iter(v31);
                        v36 = (int *)json_object_iter_value(v35);
                        if ( !v36 )
                          break;
                        v32 = strlen(s);
                        *(_WORD *)stpcpy(&s[v32], v31) = 61;
                        sub_7F9D8(s, v36);
                        *(_WORD *)&s[strlen(s)] = 44;
                        v33 = json_object_key_to_iter(v31);
                        v34 = json_object_iter_next(v29, v33);
                        v31 = json_object_iter_key(v34);
                      }
                      while ( v31 );
                      v19 = v92;
                    }
                    v37 = (char **)v111;
                    v38 = protocol;
                    *((_BYTE *)&v117[69] + strlen(s) + 3) = 124;
                    memset(src, 0, sizeof(src));
                    v111[0] = "SUMMARY";
                    v111[1] = "POOLS";
                    v111[2] = "STATS";
                    v111[3] = "DEVS";
                    v111[4] = "VERSION";
                    while ( 1 )
                    {
                      v40 = *v37++;
                      v39 = v40;
                      v41 = (_DWORD *)json_object_get(v19, v40);
                      if ( v41 )
                      {
                        if ( *v41 == 1 )
                          break;
                      }
                      if ( ++v38 == 5 )
                        goto LABEL_62;
                    }
                    v66 = v41;
                    if ( (v38 & 0xFFFFFFFB) == 0 )
                    {
                      snprintf(src, 0x100u, "%s,", v39);
                      strcat(s, src);
                    }
                    v89 = json_array_size(v66);
                    if ( (int)v89 > 0 )
                    {
                      v67 = protocol;
                      do
                      {
                        v68 = json_array_get(v66, v67);
                        v69 = v68;
                        if ( v68 && !*v68 )
                        {
                          v70 = json_object_iter(v68);
                          v71 = json_object_iter_key(v70);
                          if ( v71 )
                          {
                            v94 = v66;
                            do
                            {
                              v75 = json_object_key_to_iter(v71);
                              v76 = (int *)json_object_iter_value(v75);
                              if ( !v76 )
                                break;
                              v72 = strlen(s);
                              *(_WORD *)stpcpy(&s[v72], v71) = 61;
                              sub_7F9D8(s, v76);
                              *(_WORD *)&s[strlen(s)] = 44;
                              v73 = json_object_key_to_iter(v71);
                              v74 = json_object_iter_next(v69, v73);
                              v71 = json_object_iter_key(v74);
                            }
                            while ( v71 );
                            v66 = v94;
                          }
                          *((_BYTE *)&v117[69] + strlen(s) + 3) = 124;
                          if ( (_DWORD *)((char *)v89 - 1) != (_DWORD *)v67 )
                            s[strlen(s)] = 44;
                        }
                        ++v67;
                      }
                      while ( v89 != (_DWORD *)v67 );
                    }
                  }
                }
              }
            }
          }
LABEL_62:
          sub_7FCD0(&fd, s);
          if ( v19 )
          {
            if ( v19[1] != -1 )
            {
              v42 = v19 + 1;
              __dmb(0xBu);
              do
              {
                v43 = __ldrex(v42);
                v44 = v43 - 1;
              }
              while ( __strex(v44, v42) );
              if ( !v44 )
                json_delete(v19);
            }
          }
        }
        else
        {
          v22 = json_dumps(v19, 24576);
          v23 = v22;
          if ( v22 )
            sub_7FCD0(&fd, v22);
          if ( v19 && v19[1] != -1 )
          {
            v24 = v19 + 1;
            __dmb(0xBu);
            do
            {
              v25 = __ldrex(v24);
              v26 = v25 - 1;
            }
            while ( __strex(v26, v24) );
            if ( !v26 )
              json_delete(v19);
          }
          free(v23);
        }
LABEL_18:
        close(fd);
      }
    }
    V_LOCK();
    v85 = _errno_location();
    v86 = strerror(*v85);
    logfmt_raw(v131, 0x1000u, 0, "%s: exec listen() failed (%s)", "api_init_socket", v86);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "api_init_socket",
      15,
      2341,
      100,
      v131);
    close(v5);
    goto LABEL_117;
  }
  return result;
}
