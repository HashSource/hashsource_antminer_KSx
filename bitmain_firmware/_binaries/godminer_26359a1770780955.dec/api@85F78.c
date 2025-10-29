void *api()
{
  void *result; // r0
  int v1; // r4
  int v2; // r0
  struct addrinfo *v3; // r4
  int v4; // r0
  struct addrinfo *i; // r3
  int v6; // r0
  int v7; // r6
  time_t v8; // r9
  int *v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r6
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  ssize_t v19; // r3
  int v20; // r0
  int v21; // r0
  __int64 v22; // r0
  unsigned int v23; // r2
  unsigned int *v24; // r3
  int v25; // r5
  int v26; // r6
  unsigned int v27; // r2
  int v28; // r4
  int v29; // r3
  _DWORD *v30; // r0
  _DWORD *v31; // r5
  char *v32; // r0
  char *v33; // r5
  unsigned int *v34; // r3
  unsigned int v35; // r2
  unsigned int v36; // r2
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  _DWORD *v39; // r8
  int v40; // r0
  int v41; // r6
  size_t v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int *v46; // r4
  int *v47; // r6
  int v48; // r5
  int v49; // r7
  int v50; // t1
  _DWORD *v51; // r0
  unsigned int *v52; // r3
  unsigned int v53; // r2
  unsigned int v54; // r2
  _DWORD *v55; // r0
  int v56; // r0
  int v57; // r0
  unsigned int *v58; // r3
  unsigned int v59; // r2
  unsigned int v60; // r2
  int v61; // r0
  _DWORD *v62; // r0
  int v63; // r1
  int v64; // r2
  _BOOL4 v65; // r3
  unsigned int v66; // r4
  int v67; // r8
  _DWORD *v68; // r0
  bool v69; // zf
  int v70; // r7
  const char *v71; // r0
  int v72; // r0
  int v73; // r1
  char *v74; // r0
  char *v75; // r4
  unsigned int *v76; // r3
  unsigned int v77; // r2
  unsigned int v78; // r2
  unsigned int *v79; // r3
  unsigned int v80; // r2
  unsigned int v81; // r2
  int *v82; // r0
  int v83; // r0
  int *v84; // r0
  int v85; // r0
  _DWORD *v86; // r8
  int v87; // r6
  _DWORD *v88; // r0
  _DWORD *v89; // r7
  int v90; // r0
  int v91; // r0
  int v92; // r0
  int v93; // r0
  int v94; // r5
  size_t v95; // r0
  int v96; // r0
  int v97; // r0
  int v98; // r0
  int *v99; // r8
  int v100; // r0
  const char *v101; // r0
  _DWORD *v102; // r0
  _DWORD *v103; // r0
  unsigned int v104; // r1
  unsigned int *v105; // r3
  unsigned int v106; // r2
  unsigned int v107; // r2
  const char *v108; // r0
  int v109; // r0
  int *v110; // r0
  int v111; // r0
  unsigned int v112; // [sp+10h] [bp-11574h]
  int protocol; // [sp+14h] [bp-11570h]
  int v114; // [sp+18h] [bp-1156Ch]
  unsigned int v115; // [sp+20h] [bp-11564h]
  int v116; // [sp+24h] [bp-11560h]
  int v117; // [sp+2Ch] [bp-11558h]
  int v118; // [sp+34h] [bp-11550h]
  _DWORD *v119; // [sp+40h] [bp-11544h]
  int v120; // [sp+48h] [bp-1153Ch] BYREF
  int fd; // [sp+4Ch] [bp-11538h] BYREF
  socklen_t addr_len; // [sp+50h] [bp-11534h] BYREF
  int v123; // [sp+54h] [bp-11530h] BYREF
  int v124; // [sp+58h] [bp-1152Ch] BYREF
  int v125; // [sp+5Ch] [bp-11528h] BYREF
  struct addrinfo *ai; // [sp+60h] [bp-11524h] BYREF
  int optval; // [sp+64h] [bp-11520h] BYREF
  _DWORD v128[2]; // [sp+68h] [bp-1151Ch] BYREF
  char service[12]; // [sp+70h] [bp-11514h] BYREF
  __int64 v130; // [sp+7Ch] [bp-11508h] BYREF
  __int64 v131; // [sp+84h] [bp-11500h]
  __int64 s1; // [sp+8Ch] [bp-114F8h] BYREF
  __int64 v133; // [sp+94h] [bp-114F0h]
  _DWORD v134[5]; // [sp+9Ch] [bp-114E8h] BYREF
  __int64 v135; // [sp+B0h] [bp-114D4h] BYREF
  __int64 v136; // [sp+B8h] [bp-114CCh]
  double v137; // [sp+C0h] [bp-114C4h]
  double v138; // [sp+C8h] [bp-114BCh]
  struct addrinfo req; // [sp+D0h] [bp-114B4h] BYREF
  struct sockaddr sa; // [sp+F0h] [bp-11494h] BYREF
  char v141[16]; // [sp+170h] [bp-11414h] BYREF
  char v142[252]; // [sp+26Ch] [bp-11318h] BYREF
  char src[256]; // [sp+368h] [bp-1121Ch] BYREF
  _DWORD v144[70]; // [sp+468h] [bp-1111Ch] BYREF
  char s[4096]; // [sp+580h] [bp-11004h] BYREF
  _BYTE v146[4096]; // [sp+1580h] [bp-10004h] BYREF
  _BYTE v147[4096]; // [sp+2580h] [bp-F004h] BYREF
  _BYTE v148[3968]; // [sp+3580h] [bp-E004h] BYREF
  _BYTE v149[3968]; // [sp+4580h] [bp-D004h] BYREF
  _BYTE v150[3968]; // [sp+5580h] [bp-C004h] BYREF
  _BYTE v151[3968]; // [sp+6580h] [bp-B004h] BYREF
  _BYTE v152[3968]; // [sp+7580h] [bp-A004h] BYREF
  _BYTE v153[3968]; // [sp+8580h] [bp-9004h] BYREF
  _BYTE v154[3968]; // [sp+9580h] [bp-8004h] BYREF
  _BYTE v155[3968]; // [sp+A580h] [bp-7004h] BYREF
  _BYTE v156[3968]; // [sp+B580h] [bp-6004h] BYREF
  _BYTE v157[3968]; // [sp+C580h] [bp-5004h] BYREF
  _BYTE v158[3968]; // [sp+D580h] [bp-4004h] BYREF
  _BYTE v159[3968]; // [sp+E580h] [bp-3004h] BYREF
  char v160[8196]; // [sp+F580h] [bp-2004h] BYREF

  v120 = -1;
  fd = -1;
  memset(v160, 0, 0x2000u);
  v112 = 2;
  result = memset(s, 0, sizeof(s));
  v1 = (unsigned __int8)byte_2E7FA8;
  v130 = 0;
  v131 = 0;
  v135 = 0;
  v136 = 0;
  v137 = 0.0;
  v138 = 0.0;
  if ( !byte_2E7FA8 )
  {
    V_LOCK(result);
    v2 = logfmt_raw((int)v146, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/api_new.c",
      158,
      "api",
      3,
      2880,
      60,
      v146);
    v3 = (struct addrinfo *)_sigsetjmp((struct __jmp_buf_tag *)v144, v1);
    if ( v3 )
    {
      sub_816E8(&v120);
      _pthread_unwind_next((__pthread_unwind_buf_t *)v144);
    }
    else
    {
      _pthread_register_cancel((__pthread_unwind_buf_t *)v144);
      sprintf(service, "%d", 4028);
      memset(&req.ai_family, 0, 28);
      req.ai_flags = 1;
      v4 = getaddrinfo("0.0.0.0", service, &req, &ai);
      protocol = v4;
      if ( v4 )
      {
        V_LOCK(v4);
        v109 = logfmt_raw((int)v154, 0x1000u);
        V_UNLOCK(v109);
        v12 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/api_new.c",
                158,
                "api_init_socket",
                15,
                2432,
                100,
                v154);
LABEL_117:
        V_LOCK(v12);
        v92 = logfmt_raw((int)v147, 0x1000u);
        V_UNLOCK(v92);
        return (void *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-kas_2382/api_new.c",
                         158,
                         "api",
                         3,
                         2887,
                         100,
                         v147);
      }
      v3 = ai;
      if ( ai )
      {
        for ( i = ai; ; i = ai )
        {
          v6 = socket(i->ai_family, 1, protocol);
          if ( v6 > 0 )
          {
            v7 = v6;
            goto LABEL_10;
          }
          v3 = v3->ai_next;
          if ( !v3 )
            break;
        }
        v7 = v6;
        if ( v6 == -1 )
        {
          V_LOCK(-1);
          v100 = logfmt_raw((int)v155, 0x1000u);
          V_UNLOCK(v100);
          v12 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/api_new.c",
                  158,
                  "api_init_socket",
                  15,
                  2447,
                  100,
                  v155);
          goto LABEL_117;
        }
        goto LABEL_10;
      }
    }
    v7 = (int)v3;
LABEL_10:
    optval = 1;
    setsockopt(v7, 1, 2, &optval, 4u);
    v8 = time(0);
    while ( bind(v7, v3->ai_addr, v3->ai_addrlen) < 0 )
    {
      v9 = _errno_location();
      strerror(*v9);
      v10 = time(0) - v8;
      if ( v10 > 61 )
      {
        freeaddrinfo(ai);
        V_LOCK(v90);
        v91 = logfmt_raw((int)v157, 0x1000u);
        V_UNLOCK(v91);
        v12 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/api_new.c",
                158,
                "api_init_socket",
                15,
                2475,
                100,
                v157);
        goto LABEL_117;
      }
      V_LOCK(v10);
      v11 = logfmt_raw((int)v156, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/api_new.c",
        158,
        "api_init_socket",
        15,
        2465,
        80,
        v156);
      sleep(0x1Eu);
    }
    freeaddrinfo(ai);
    v12 = listen(v7, 100);
    if ( v12 >= 0 )
    {
      if ( v7 < 0 )
        goto LABEL_117;
      byte_2E7FA8 = 1;
      v120 = v7;
      while ( 1 )
      {
        v13 = (unsigned __int8)byte_2E7F84;
        if ( byte_2E7F84 )
        {
LABEL_107:
          _pthread_unregister_cancel((__pthread_unwind_buf_t *)v144);
          v84 = sub_816E8(&v120);
          byte_2E7FA8 = 0;
          V_LOCK(v84);
          v85 = logfmt_raw((int)v153, 0x1000u);
          V_UNLOCK(v85);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/api_new.c",
            158,
            "api",
            3,
            2988,
            60,
            v153);
          return (void *)close(v120);
        }
        addr_len = 128;
        v14 = accept(v120, &sa, &addr_len);
        fd = v14;
        if ( v14 < 0 )
        {
          V_LOCK(v14);
          v82 = _errno_location();
          strerror(*v82);
          v83 = logfmt_raw((int)v148, 0x1000u);
          V_UNLOCK(v83);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/api_new.c",
            158,
            "api",
            3,
            2900,
            100,
            v148);
          goto LABEL_107;
        }
        v125 = 2;
        v123 = 1;
        v124 = 5;
        setsockopt(v14, 1, 9, &v123, 4u);
        setsockopt(fd, 6, 1, &v123, 4u);
        setsockopt(fd, 6, 6, &v123, 4u);
        setsockopt(fd, 6, 4, &v124, 4u);
        setsockopt(fd, 6, 5, &v125, 4u);
        v128[1] = v13;
        v128[0] = 10;
        v15 = setsockopt(fd, 1, 21, v128, 8u);
        if ( v15 )
        {
          V_LOCK(v15);
          v16 = logfmt_raw((int)v149, 0x1000u);
          V_UNLOCK(v16);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/api_new.c",
            158,
            "api",
            3,
            2919,
            100,
            v149);
          close(fd);
        }
        v17 = setsockopt(fd, 1, 20, v128, 8u);
        if ( v17 )
        {
          V_LOCK(v17);
          v18 = logfmt_raw((int)v150, 0x1000u);
          V_UNLOCK(v18);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/api_new.c",
            158,
            "api",
            3,
            2925,
            100,
            v150);
          close(fd);
        }
        v19 = recv(fd, v160, 0xFFFu, 0);
        if ( v19 < 0 )
        {
          v160[0] = 0;
          goto LABEL_18;
        }
        v130 = 0;
        v131 = 0;
        *(_QWORD *)::s1 = 0;
        unk_2E7F7C = 0;
        v160[v19] = 0;
        v135 = 0;
        v136 = 0;
        v137 = 0.0;
        v138 = 0.0;
        dword_2E7F70 = time(0);
        v20 = getnameinfo(&sa, 0x80u, ::s1, 0x10u, 0, 0, 1u);
        V_LOCK(v20);
        v21 = logfmt_raw((int)v151, 0x1000u);
        V_UNLOCK(v21);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "api",
          3,
          2942,
          20,
          v151);
        s1 = 0;
        v133 = 0;
        LODWORD(v22) = json_loads(v160, 0, v141, &s1);
        v25 = v22;
        if ( (_DWORD)v22 )
        {
          v24 = *(unsigned int **)v22;
          if ( !*(_DWORD *)v22 )
          {
            LODWORD(v22) = ((int (*)(void))json_object_get)();
            v26 = v22;
            if ( (_DWORD)v22 && *(_DWORD *)v22 == 1 )
            {
              v62 = (_DWORD *)json_object_get(v25, "new_api");
              if ( v62 )
              {
                v65 = *v62 != 5;
                v115 = v65;
              }
              else
              {
                v115 = 1;
              }
              v66 = protocol;
              v116 = protocol;
              v67 = json_object(v62, v63, v64, v65);
              while ( json_array_size(v26) > v66 )
              {
                v68 = (_DWORD *)json_array_get(v26, v66);
                v69 = v68 == 0;
                if ( v68 )
                  v69 = v66 == 11;
                v70 = v69;
                if ( v69 )
                  break;
                if ( *v68 == 2 )
                {
                  s1 = 0;
                  v133 = 0;
                  v71 = (const char *)json_string_value(v68);
                  snprintf((char *)&s1, 0x10u, "%s", v71);
                  v72 = strcmp((const char *)&s1, "reload");
                  if ( v72 | v115 )
                  {
                    v118 = json_object(v72, v73, v72 | v115, v115);
                    sub_8172C(v118, (const char *)&s1, v70, v115);
                    json_object_set_new(v67, &s1, v118);
                  }
                  else
                  {
                    v116 = 1;
                  }
                }
                ++v66;
              }
              v74 = (char *)json_dumps(v67, 24576);
              v75 = v74;
              if ( v74 )
                sub_81CE0(&fd, v74);
              free(v75);
              if ( v116 == 1 )
                sub_8172C(v67, "reload", 0, 0);
              if ( v67 )
              {
                if ( *(_DWORD *)(v67 + 4) != -1 )
                {
                  v76 = (unsigned int *)(v67 + 4);
                  __dmb(0xBu);
                  do
                  {
                    v77 = __ldrex(v76);
                    v78 = v77 - 1;
                  }
                  while ( __strex(v78, v76) );
                  if ( !v78 )
                    json_delete(v67);
                }
              }
              if ( *(_DWORD *)(v25 + 4) != -1 )
              {
                v79 = (unsigned int *)(v25 + 4);
                __dmb(0xBu);
                do
                {
                  v80 = __ldrex(v79);
                  v81 = v80 - 1;
                }
                while ( __strex(v81, v79) );
                if ( !v81 )
                  json_delete(v25);
              }
              goto LABEL_18;
            }
            v24 = *(unsigned int **)(v25 + 4);
            if ( v24 != (unsigned int *)-1 )
            {
              v24 = (unsigned int *)(v25 + 4);
              __dmb(0xBu);
              do
              {
                v27 = __ldrex(v24);
                v23 = v27 - 1;
                HIDWORD(v22) = __strex(v23, v24);
              }
              while ( HIDWORD(v22) );
              if ( !v23 )
                v22 = json_delete(v25);
            }
          }
        }
        v28 = json_object(v22, HIDWORD(v22), v23, v24);
        v30 = (_DWORD *)json_loads(v160, 0, v142, v29);
        v31 = v30;
        if ( !v30 || *v30 )
        {
          v112 = 2;
          snprintf((char *)&v130, 0x10u, "%s", v160);
          sub_8172C(v28, (const char *)&v130, (int)&v135, 2u);
          goto LABEL_38;
        }
        v55 = (_DWORD *)json_object_get(v30, "command");
        if ( v55 && *v55 == 2 )
        {
          v101 = (const char *)json_string_value(v55);
          snprintf((char *)&v130, 0x10u, "%s", v101);
          v102 = (_DWORD *)json_object_get(v31, "new_api");
          if ( v102 && *v102 == 5 )
          {
            if ( v31[1] == -1 )
            {
              v112 = protocol;
              sub_8172C(v28, (const char *)&v130, (int)&v135, protocol);
              goto LABEL_38;
            }
            v104 = protocol;
          }
          else
          {
            v103 = (_DWORD *)json_object_get(v31, "parameter");
            if ( v103 && *v103 == 2 )
            {
              v108 = (const char *)json_string_value(v103);
              snprintf((char *)&v135, 0x20u, "%s", v108);
            }
            if ( v31[1] == -1 )
            {
              v112 = 1;
              sub_8172C(v28, (const char *)&v130, (int)&v135, 1u);
              goto LABEL_38;
            }
            v104 = 1;
          }
          v105 = v31 + 1;
          __dmb(0xBu);
          do
          {
            v106 = __ldrex(v105);
            v107 = v106 - 1;
          }
          while ( __strex(v107, v105) );
          v112 = v104;
          if ( v107 )
          {
            sub_8172C(v28, (const char *)&v130, (int)&v135, v104);
          }
          else
          {
            json_delete(v31);
            sub_8172C(v28, (const char *)&v130, (int)&v135, v112);
          }
        }
        else
        {
          V_LOCK(v55);
          v56 = logfmt_raw((int)v159, 0x1000u);
          V_UNLOCK(v56);
          v57 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/api_new.c",
                  158,
                  "parse_recv_buf",
                  14,
                  2519,
                  100,
                  v159);
          if ( v31[1] != -1 )
          {
            v58 = v31 + 1;
            __dmb(0xBu);
            do
            {
              v59 = __ldrex(v58);
              v60 = v59 - 1;
            }
            while ( __strex(v60, v58) );
            if ( !v60 )
              v57 = json_delete(v31);
          }
          V_LOCK(v57);
          v61 = logfmt_raw((int)v152, 0x1000u);
          V_UNLOCK(v61);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/api_new.c",
            158,
            "api",
            3,
            2957,
            100,
            v152);
          sub_7EB64(v28, 0, 24, (int)"Missing JSON 'command'");
        }
LABEL_38:
        if ( v112 == 2 )
        {
          memset(s, 0, sizeof(s));
          if ( v28 )
          {
            v37 = (_DWORD *)json_object_get(v28, "STATUS");
            if ( v37 )
            {
              if ( *v37 == 1 )
              {
                v38 = (_DWORD *)json_array_get(v37, 0);
                v39 = v38;
                if ( v38 )
                {
                  if ( !*v38 )
                  {
                    v40 = json_object_iter();
                    v41 = json_object_iter_key(v40);
                    if ( v41 )
                    {
                      v117 = v28;
                      do
                      {
                        v45 = json_object_key_to_iter(v41);
                        v46 = (int *)json_object_iter_value(v45);
                        if ( !v46 )
                          break;
                        v42 = strlen(s);
                        *(_WORD *)stpcpy(&s[v42]) = 61;
                        sub_818E8(s, v46);
                        *(_WORD *)&s[strlen(s)] = 44;
                        v43 = json_object_key_to_iter(v41);
                        v44 = json_object_iter_next(v39, v43);
                        v41 = json_object_iter_key(v44);
                      }
                      while ( v41 );
                      v28 = v117;
                    }
                    v47 = v134;
                    v48 = protocol;
                    *((_BYTE *)&v144[69] + strlen(s) + 3) = 124;
                    memset(src, 0, sizeof(src));
                    v134[0] = "SUMMARY";
                    v134[1] = "POOLS";
                    v134[2] = "STATS";
                    v134[3] = "DEVS";
                    v134[4] = "VERSION";
                    while ( 1 )
                    {
                      v50 = *v47++;
                      v49 = v50;
                      v51 = (_DWORD *)json_object_get(v28, v50);
                      if ( v51 )
                      {
                        if ( *v51 == 1 )
                          break;
                      }
                      if ( ++v48 == 5 )
                        goto LABEL_62;
                    }
                    v86 = v51;
                    if ( (v48 & 0xFFFFFFFB) == 0 )
                    {
                      snprintf(src, 0x100u, (const char *)&off_270338, v49);
                      strcat(s, src);
                    }
                    v114 = json_array_size(v86);
                    if ( v114 > 0 )
                    {
                      v87 = protocol;
                      do
                      {
                        v88 = (_DWORD *)json_array_get(v86, v87);
                        v89 = v88;
                        if ( v88 && !*v88 )
                        {
                          v93 = json_object_iter();
                          v94 = json_object_iter_key(v93);
                          if ( v94 )
                          {
                            v119 = v86;
                            do
                            {
                              v98 = json_object_key_to_iter(v94);
                              v99 = (int *)json_object_iter_value(v98);
                              if ( !v99 )
                                break;
                              v95 = strlen(s);
                              *(_WORD *)stpcpy(&s[v95]) = 61;
                              sub_818E8(s, v99);
                              *(_WORD *)&s[strlen(s)] = 44;
                              v96 = json_object_key_to_iter(v94);
                              v97 = json_object_iter_next(v89, v96);
                              v94 = json_object_iter_key(v97);
                            }
                            while ( v94 );
                            v86 = v119;
                          }
                          *((_BYTE *)&v144[69] + strlen(s) + 3) = 124;
                          if ( v114 - 1 != v87 )
                            s[strlen(s)] = 44;
                        }
                        ++v87;
                      }
                      while ( v114 != v87 );
                    }
                  }
                }
              }
            }
          }
LABEL_62:
          sub_81CE0(&fd, s);
          if ( v28 )
          {
            if ( *(_DWORD *)(v28 + 4) != -1 )
            {
              v52 = (unsigned int *)(v28 + 4);
              __dmb(0xBu);
              do
              {
                v53 = __ldrex(v52);
                v54 = v53 - 1;
              }
              while ( __strex(v54, v52) );
              if ( !v54 )
                json_delete(v28);
            }
          }
        }
        else
        {
          v32 = (char *)json_dumps(v28, 24576);
          v33 = v32;
          if ( v32 )
            sub_81CE0(&fd, v32);
          if ( v28 && *(_DWORD *)(v28 + 4) != -1 )
          {
            v34 = (unsigned int *)(v28 + 4);
            __dmb(0xBu);
            do
            {
              v35 = __ldrex(v34);
              v36 = v35 - 1;
            }
            while ( __strex(v36, v34) );
            if ( !v36 )
              json_delete(v28);
          }
          free(v33);
        }
LABEL_18:
        close(fd);
      }
    }
    V_LOCK(v12);
    v110 = _errno_location();
    strerror(*v110);
    v111 = logfmt_raw((int)v158, 0x1000u);
    V_UNLOCK(v111);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/api_new.c",
      158,
      "api_init_socket",
      15,
      2481,
      100,
      v158);
    v12 = close(v7);
    goto LABEL_117;
  }
  return result;
}
