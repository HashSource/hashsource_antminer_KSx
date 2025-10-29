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
  double *v22; // r0
  double *v23; // r5
  _DWORD *v24; // r0
  _DWORD *v25; // r6
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r2
  _DWORD *v29; // r4
  double *v30; // r0
  double *v31; // r5
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
  char **v47; // r6
  int v48; // r5
  char *v49; // r7
  char *v50; // t1
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
  unsigned int v63; // r4
  _DWORD *v64; // r8
  _DWORD *v65; // r0
  bool v66; // zf
  int v67; // r7
  const char *v68; // r0
  char *v69; // r0
  char *v70; // r4
  unsigned int *v71; // r3
  unsigned int v72; // r2
  unsigned int v73; // r2
  unsigned int *v74; // r3
  unsigned int v75; // r2
  unsigned int v76; // r2
  int *v77; // r0
  int v78; // r0
  int *v79; // r0
  int v80; // r0
  _DWORD *v81; // r8
  unsigned int v82; // r6
  _DWORD *v83; // r0
  _DWORD *v84; // r7
  int v85; // r0
  int v86; // r0
  int v87; // r0
  int v88; // r0
  int v89; // r5
  size_t v90; // r0
  int v91; // r0
  int v92; // r0
  int v93; // r0
  int *v94; // r8
  int v95; // r0
  const char *v96; // r0
  _DWORD *v97; // r0
  _DWORD *v98; // r0
  unsigned int v99; // r1
  unsigned int *v100; // r3
  unsigned int v101; // r2
  unsigned int v102; // r2
  const char *v103; // r0
  int v104; // r0
  int *v105; // r0
  int v106; // r0
  unsigned int v107; // [sp+10h] [bp-11574h]
  int protocol; // [sp+14h] [bp-11570h]
  int v109; // [sp+18h] [bp-1156Ch]
  unsigned int v110; // [sp+20h] [bp-11564h]
  int v111; // [sp+24h] [bp-11560h]
  _DWORD *v112; // [sp+2Ch] [bp-11558h]
  _DWORD *v113; // [sp+34h] [bp-11550h]
  _DWORD *v114; // [sp+40h] [bp-11544h]
  int v115; // [sp+48h] [bp-1153Ch] BYREF
  int fd; // [sp+4Ch] [bp-11538h] BYREF
  socklen_t addr_len; // [sp+50h] [bp-11534h] BYREF
  int v118; // [sp+54h] [bp-11530h] BYREF
  int v119; // [sp+58h] [bp-1152Ch] BYREF
  int v120; // [sp+5Ch] [bp-11528h] BYREF
  struct addrinfo *ai; // [sp+60h] [bp-11524h] BYREF
  int optval; // [sp+64h] [bp-11520h] BYREF
  _DWORD v123[2]; // [sp+68h] [bp-1151Ch] BYREF
  char service[12]; // [sp+70h] [bp-11514h] BYREF
  __int64 v125; // [sp+7Ch] [bp-11508h] BYREF
  __int64 v126; // [sp+84h] [bp-11500h]
  __int64 s1; // [sp+8Ch] [bp-114F8h] BYREF
  __int64 v128; // [sp+94h] [bp-114F0h]
  _DWORD v129[5]; // [sp+9Ch] [bp-114E8h] BYREF
  __int64 v130; // [sp+B0h] [bp-114D4h] BYREF
  __int64 v131; // [sp+B8h] [bp-114CCh]
  double v132; // [sp+C0h] [bp-114C4h]
  double v133; // [sp+C8h] [bp-114BCh]
  addrinfo req; // [sp+D0h] [bp-114B4h] BYREF
  struct sockaddr sa; // [sp+F0h] [bp-11494h] BYREF
  char v136[16]; // [sp+170h] [bp-11414h] BYREF
  char v137[252]; // [sp+26Ch] [bp-11318h] BYREF
  char src[256]; // [sp+368h] [bp-1121Ch] BYREF
  _DWORD v139[70]; // [sp+468h] [bp-1111Ch] BYREF
  char s[4096]; // [sp+580h] [bp-11004h] BYREF
  _BYTE v141[4096]; // [sp+1580h] [bp-10004h] BYREF
  _BYTE v142[4096]; // [sp+2580h] [bp-F004h] BYREF
  _BYTE v143[3968]; // [sp+3580h] [bp-E004h] BYREF
  _BYTE v144[3968]; // [sp+4580h] [bp-D004h] BYREF
  _BYTE v145[3968]; // [sp+5580h] [bp-C004h] BYREF
  _BYTE v146[3968]; // [sp+6580h] [bp-B004h] BYREF
  _BYTE v147[3968]; // [sp+7580h] [bp-A004h] BYREF
  _BYTE v148[3968]; // [sp+8580h] [bp-9004h] BYREF
  _BYTE v149[3968]; // [sp+9580h] [bp-8004h] BYREF
  _BYTE v150[3968]; // [sp+A580h] [bp-7004h] BYREF
  _BYTE v151[3968]; // [sp+B580h] [bp-6004h] BYREF
  _BYTE v152[3968]; // [sp+C580h] [bp-5004h] BYREF
  _BYTE v153[3968]; // [sp+D580h] [bp-4004h] BYREF
  _BYTE v154[3968]; // [sp+E580h] [bp-3004h] BYREF
  double v155[1024]; // [sp+F580h] [bp-2004h] BYREF

  v115 = -1;
  fd = -1;
  memset(v155, 0, sizeof(v155));
  v107 = 2;
  result = memset(s, 0, sizeof(s));
  v1 = (unsigned __int8)byte_2F2B98;
  v125 = 0;
  v126 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0.0;
  v133 = 0.0;
  if ( !byte_2F2B98 )
  {
    V_LOCK(result);
    v2 = logfmt_raw((int)v141, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "api",
      3,
      2880,
      60,
      v141);
    v3 = (struct addrinfo *)_sigsetjmp((struct __jmp_buf_tag *)v139, v1);
    if ( v3 )
    {
      sub_81578(&v115);
      _pthread_unwind_next((__pthread_unwind_buf_t *)v139);
    }
    else
    {
      _pthread_register_cancel((__pthread_unwind_buf_t *)v139);
      sprintf(service, "%d", 4028);
      memset(&req.ai_family, 0, 28);
      req.ai_flags = 1;
      v4 = getaddrinfo("0.0.0.0", service, &req, &ai);
      protocol = v4;
      if ( v4 )
      {
        V_LOCK(v4);
        v104 = logfmt_raw((int)v149, 0x1000u);
        V_UNLOCK(v104);
        v12 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/api_new.c",
                153,
                "api_init_socket",
                15,
                2432,
                100,
                v149);
LABEL_117:
        V_LOCK(v12);
        v87 = logfmt_raw((int)v142, 0x1000u);
        V_UNLOCK(v87);
        return (void *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-new/api_new.c",
                         153,
                         "api",
                         3,
                         2887,
                         100,
                         v142);
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
          v95 = logfmt_raw((int)v150, 0x1000u);
          V_UNLOCK(v95);
          v12 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/api_new.c",
                  153,
                  "api_init_socket",
                  15,
                  2447,
                  100,
                  v150);
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
        V_LOCK(v85);
        v86 = logfmt_raw((int)v152, 0x1000u);
        V_UNLOCK(v86);
        v12 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/api_new.c",
                153,
                "api_init_socket",
                15,
                2475,
                100,
                v152);
        goto LABEL_117;
      }
      V_LOCK(v10);
      v11 = logfmt_raw((int)v151, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/api_new.c",
        153,
        "api_init_socket",
        15,
        2465,
        80,
        v151);
      sleep(0x1Eu);
    }
    freeaddrinfo(ai);
    v12 = listen(v7, 100);
    if ( v12 >= 0 )
    {
      if ( v7 < 0 )
        goto LABEL_117;
      byte_2F2B98 = 1;
      v115 = v7;
      while ( 1 )
      {
        v13 = (unsigned __int8)byte_2F2B74;
        if ( byte_2F2B74 )
        {
LABEL_107:
          _pthread_unregister_cancel((__pthread_unwind_buf_t *)v139);
          v79 = sub_81578(&v115);
          byte_2F2B98 = 0;
          V_LOCK(v79);
          v80 = logfmt_raw((int)v148, 0x1000u);
          V_UNLOCK(v80);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "api",
            3,
            2988,
            60,
            v148);
          return (void *)close(v115);
        }
        addr_len = 128;
        v14 = accept(v115, &sa, &addr_len);
        fd = v14;
        if ( v14 < 0 )
        {
          V_LOCK(v14);
          v77 = _errno_location();
          strerror(*v77);
          v78 = logfmt_raw((int)v143, 0x1000u);
          V_UNLOCK(v78);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "api",
            3,
            2900,
            100,
            v143);
          goto LABEL_107;
        }
        v120 = 2;
        v118 = 1;
        v119 = 5;
        setsockopt(v14, 1, 9, &v118, 4u);
        setsockopt(fd, 6, 1, &v118, 4u);
        setsockopt(fd, 6, 6, &v118, 4u);
        setsockopt(fd, 6, 4, &v119, 4u);
        setsockopt(fd, 6, 5, &v120, 4u);
        v123[1] = v13;
        v123[0] = 10;
        v15 = setsockopt(fd, 1, 21, v123, 8u);
        if ( v15 )
        {
          V_LOCK(v15);
          v16 = logfmt_raw((int)v144, 0x1000u);
          V_UNLOCK(v16);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "api",
            3,
            2919,
            100,
            v144);
          close(fd);
        }
        v17 = setsockopt(fd, 1, 20, v123, 8u);
        if ( v17 )
        {
          V_LOCK(v17);
          v18 = logfmt_raw((int)v145, 0x1000u);
          V_UNLOCK(v18);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "api",
            3,
            2925,
            100,
            v145);
          close(fd);
        }
        v19 = recv(fd, v155, 0xFFFu, 0);
        if ( v19 < 0 )
        {
          LOBYTE(v155[0]) = 0;
          goto LABEL_18;
        }
        v125 = 0;
        v126 = 0;
        *(_QWORD *)::s1 = 0;
        unk_2F2B6C = 0;
        *((_BYTE *)v155 + v19) = 0;
        v130 = 0;
        v131 = 0;
        v132 = 0.0;
        v133 = 0.0;
        dword_2F2B60 = time(0);
        v20 = getnameinfo(&sa, 0x80u, ::s1, 0x10u, 0, 0, 1u);
        V_LOCK(v20);
        v21 = logfmt_raw((int)v146, 0x1000u);
        V_UNLOCK(v21);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/api_new.c",
          153,
          "api",
          3,
          2942,
          20,
          v146);
        s1 = 0;
        v128 = 0;
        v22 = json_loads(v155, 0, v136);
        v23 = v22;
        if ( v22 && !*(_DWORD *)v22 )
        {
          v24 = (_DWORD *)json_object_get(v22, "command");
          v25 = v24;
          if ( v24 && *v24 == 1 )
          {
            v62 = (_DWORD *)json_object_get(v23, "new_api");
            if ( v62 )
              v110 = *v62 != 5;
            else
              v110 = 1;
            v63 = protocol;
            v111 = protocol;
            v64 = json_object();
            while ( json_array_size(v25) > v63 )
            {
              v65 = json_array_get(v25, v63);
              v66 = v65 == 0;
              if ( v65 )
                v66 = v63 == 11;
              v67 = v66;
              if ( v66 )
                break;
              if ( *v65 == 2 )
              {
                s1 = 0;
                v128 = 0;
                v68 = (const char *)json_string_value(v65);
                snprintf((char *)&s1, 0x10u, "%s", v68);
                if ( strcmp((const char *)&s1, "reload") | v110 )
                {
                  v113 = json_object();
                  sub_815BC(v113, (const char *)&s1, v67, v110);
                  json_object_set_new(v64, (char *)&s1, v113);
                }
                else
                {
                  v111 = 1;
                }
              }
              ++v63;
            }
            v69 = json_dumps(v64, 24576);
            v70 = v69;
            if ( v69 )
              sub_81B70(&fd, v69);
            free(v70);
            if ( v111 == 1 )
              sub_815BC(v64, "reload", 0, 0);
            if ( v64 )
            {
              if ( v64[1] != -1 )
              {
                v71 = v64 + 1;
                __dmb(0xBu);
                do
                {
                  v72 = __ldrex(v71);
                  v73 = v72 - 1;
                }
                while ( __strex(v73, v71) );
                if ( !v73 )
                  json_delete(v64);
              }
            }
            if ( *((_DWORD *)v23 + 1) != -1 )
            {
              v74 = (unsigned int *)v23 + 1;
              __dmb(0xBu);
              do
              {
                v75 = __ldrex(v74);
                v76 = v75 - 1;
              }
              while ( __strex(v76, v74) );
              if ( !v76 )
                json_delete(v23);
            }
            goto LABEL_18;
          }
          if ( *((_DWORD *)v23 + 1) != -1 )
          {
            v26 = (unsigned int *)v23 + 1;
            __dmb(0xBu);
            do
            {
              v27 = __ldrex(v26);
              v28 = v27 - 1;
            }
            while ( __strex(v28, v26) );
            if ( !v28 )
              json_delete(v23);
          }
        }
        v29 = json_object();
        v30 = json_loads(v155, 0, v137);
        v31 = v30;
        if ( !v30 || *(_DWORD *)v30 )
        {
          v107 = 2;
          snprintf((char *)&v125, 0x10u, "%s", (const char *)v155);
          sub_815BC(v29, (const char *)&v125, (int)&v130, 2u);
          goto LABEL_38;
        }
        v55 = (_DWORD *)json_object_get(v30, "command");
        if ( v55 && *v55 == 2 )
        {
          v96 = (const char *)json_string_value(v55);
          snprintf((char *)&v125, 0x10u, "%s", v96);
          v97 = (_DWORD *)json_object_get(v31, "new_api");
          if ( v97 && *v97 == 5 )
          {
            if ( *((_DWORD *)v31 + 1) == -1 )
            {
              v107 = protocol;
              sub_815BC(v29, (const char *)&v125, (int)&v130, protocol);
              goto LABEL_38;
            }
            v99 = protocol;
          }
          else
          {
            v98 = (_DWORD *)json_object_get(v31, "parameter");
            if ( v98 && *v98 == 2 )
            {
              v103 = (const char *)json_string_value(v98);
              snprintf((char *)&v130, 0x20u, "%s", v103);
            }
            if ( *((_DWORD *)v31 + 1) == -1 )
            {
              v107 = 1;
              sub_815BC(v29, (const char *)&v125, (int)&v130, 1u);
              goto LABEL_38;
            }
            v99 = 1;
          }
          v100 = (unsigned int *)v31 + 1;
          __dmb(0xBu);
          do
          {
            v101 = __ldrex(v100);
            v102 = v101 - 1;
          }
          while ( __strex(v102, v100) );
          v107 = v99;
          if ( v102 )
          {
            sub_815BC(v29, (const char *)&v125, (int)&v130, v99);
          }
          else
          {
            json_delete(v31);
            sub_815BC(v29, (const char *)&v125, (int)&v130, v107);
          }
        }
        else
        {
          V_LOCK(v55);
          v56 = logfmt_raw((int)v154, 0x1000u);
          V_UNLOCK(v56);
          v57 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/api_new.c",
                  153,
                  "parse_recv_buf",
                  14,
                  2519,
                  100,
                  v154);
          if ( *((_DWORD *)v31 + 1) != -1 )
          {
            v58 = (unsigned int *)v31 + 1;
            __dmb(0xBu);
            do
            {
              v59 = __ldrex(v58);
              v60 = v59 - 1;
            }
            while ( __strex(v60, v58) );
            if ( !v60 )
              json_delete(v31);
          }
          V_LOCK(v57);
          v61 = logfmt_raw((int)v147, 0x1000u);
          V_UNLOCK(v61);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/api_new.c",
            153,
            "api",
            3,
            2957,
            100,
            v147);
          sub_7E9FC((int)v29, 0, 24, (int)"Missing JSON 'command'");
        }
LABEL_38:
        if ( v107 == 2 )
        {
          memset(s, 0, sizeof(s));
          if ( v29 )
          {
            v37 = (_DWORD *)json_object_get(v29, "STATUS");
            if ( v37 )
            {
              if ( *v37 == 1 )
              {
                v38 = json_array_get(v37, 0);
                v39 = v38;
                if ( v38 )
                {
                  if ( !*v38 )
                  {
                    v40 = json_object_iter(v38);
                    v41 = json_object_iter_key(v40);
                    if ( v41 )
                    {
                      v112 = v29;
                      do
                      {
                        v45 = json_object_key_to_iter(v41);
                        v46 = (int *)json_object_iter_value(v45);
                        if ( !v46 )
                          break;
                        v42 = strlen(s);
                        *(_WORD *)stpcpy(&s[v42]) = 61;
                        sub_81778(s, v46);
                        *(_WORD *)&s[strlen(s)] = 44;
                        v43 = json_object_key_to_iter(v41);
                        v44 = json_object_iter_next(v39, v43);
                        v41 = json_object_iter_key(v44);
                      }
                      while ( v41 );
                      v29 = v112;
                    }
                    v47 = (char **)v129;
                    v48 = protocol;
                    *((_BYTE *)&v139[69] + strlen(s) + 3) = 124;
                    memset(src, 0, sizeof(src));
                    v129[0] = "SUMMARY";
                    v129[1] = "POOLS";
                    v129[2] = "STATS";
                    v129[3] = "DEVS";
                    v129[4] = "VERSION";
                    while ( 1 )
                    {
                      v50 = *v47++;
                      v49 = v50;
                      v51 = (_DWORD *)json_object_get(v29, v50);
                      if ( v51 )
                      {
                        if ( *v51 == 1 )
                          break;
                      }
                      if ( ++v48 == 5 )
                        goto LABEL_62;
                    }
                    v81 = v51;
                    if ( (v48 & 0xFFFFFFFB) == 0 )
                    {
                      snprintf(src, 0x100u, (const char *)&off_274068, v49);
                      strcat(s, src);
                    }
                    v109 = json_array_size(v81);
                    if ( v109 > 0 )
                    {
                      v82 = protocol;
                      do
                      {
                        v83 = json_array_get(v81, v82);
                        v84 = v83;
                        if ( v83 && !*v83 )
                        {
                          v88 = json_object_iter(v83);
                          v89 = json_object_iter_key(v88);
                          if ( v89 )
                          {
                            v114 = v81;
                            do
                            {
                              v93 = json_object_key_to_iter(v89);
                              v94 = (int *)json_object_iter_value(v93);
                              if ( !v94 )
                                break;
                              v90 = strlen(s);
                              *(_WORD *)stpcpy(&s[v90]) = 61;
                              sub_81778(s, v94);
                              *(_WORD *)&s[strlen(s)] = 44;
                              v91 = json_object_key_to_iter(v89);
                              v92 = json_object_iter_next(v84, v91);
                              v89 = json_object_iter_key(v92);
                            }
                            while ( v89 );
                            v81 = v114;
                          }
                          *((_BYTE *)&v139[69] + strlen(s) + 3) = 124;
                          if ( v109 - 1 != v82 )
                            s[strlen(s)] = 44;
                        }
                        ++v82;
                      }
                      while ( v109 != v82 );
                    }
                  }
                }
              }
            }
          }
LABEL_62:
          sub_81B70(&fd, s);
          if ( v29 )
          {
            if ( v29[1] != -1 )
            {
              v52 = v29 + 1;
              __dmb(0xBu);
              do
              {
                v53 = __ldrex(v52);
                v54 = v53 - 1;
              }
              while ( __strex(v54, v52) );
              if ( !v54 )
                json_delete(v29);
            }
          }
        }
        else
        {
          v32 = json_dumps(v29, 24576);
          v33 = v32;
          if ( v32 )
            sub_81B70(&fd, v32);
          if ( v29 && v29[1] != -1 )
          {
            v34 = v29 + 1;
            __dmb(0xBu);
            do
            {
              v35 = __ldrex(v34);
              v36 = v35 - 1;
            }
            while ( __strex(v36, v34) );
            if ( !v36 )
              json_delete(v29);
          }
          free(v33);
        }
LABEL_18:
        close(fd);
      }
    }
    V_LOCK(v12);
    v105 = _errno_location();
    strerror(*v105);
    v106 = logfmt_raw((int)v153, 0x1000u);
    V_UNLOCK(v106);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "api_init_socket",
      15,
      2481,
      100,
      v153);
    v12 = close(v7);
    goto LABEL_117;
  }
  return result;
}
