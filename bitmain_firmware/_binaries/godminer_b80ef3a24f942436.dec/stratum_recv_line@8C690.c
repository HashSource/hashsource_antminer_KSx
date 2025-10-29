char *__fastcall stratum_recv_line(pthread_mutex_t *a1)
{
  pthread_mutex_t *v1; // r7
  char *spins; // r10
  signed int v4; // r5
  char *v5; // r0
  char *v6; // r6
  size_t v7; // r0
  _BYTE *v8; // r3
  int v9; // r0
  ssize_t v11; // r0
  int *v12; // r11
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r3
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int *v23; // [sp+2Ch] [bp-5030h]
  time_t v24; // [sp+34h] [bp-5028h] BYREF
  int v25; // [sp+38h] [bp-5024h] BYREF
  _BYTE v26[28]; // [sp+58h] [bp-5004h] BYREF
  char v27[16388]; // [sp+1058h] [bp-4004h] BYREF

  v1 = a1 + 2;
  pthread_mutex_lock(a1 + 2);
  spins = (char *)a1[1].__spins;
  if ( !strchr(spins, 10) && a1[1].__kind != -1 )
  {
    time(&v24);
    while ( 1 )
    {
      memset(v27, 0, 0x4000u);
      v11 = recv(a1[1].__kind, v27, 0x3FFCu, 0);
      if ( !v11 )
      {
        v23 = &g_zc;
        V_LOCK(a1);
        v19 = logfmt_raw((int)v26, 0x1000u);
        V_UNLOCK(v19);
        v17 = 58;
        v16 = g_zc;
        goto LABEL_20;
      }
      if ( v11 < 0 )
      {
        V_LOCK(a1);
        v23 = &g_zc;
        v12 = _errno_location();
        v13 = logfmt_raw((int)v26, 0x1000u);
        V_UNLOCK(v13);
        v14 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/stratum_handler.c",
                161,
                "stratum_recv_line",
                17,
                63,
                20,
                v26);
        if ( *v12 != 11 || (v14 = socket_full(a1[1].__kind, 1)) == 0 )
        {
          V_LOCK(v14);
          v15 = logfmt_raw((int)v26, 0x1000u);
          V_UNLOCK(v15);
          v16 = g_zc;
          v17 = 65;
LABEL_20:
          v20 = zlog(
                  v16,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/stratum_handler.c",
                  161,
                  "stratum_recv_line",
                  17,
                  v17,
                  20,
                  v26);
          V_LOCK(v20);
          V_INT((int)&v25, "poolno", a1->__lock);
          v21 = logfmt_raw((int)v27, 0x1000u);
          V_UNLOCK(v21);
          zlog(
            *v23,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/stratum_handler.c",
            161,
            "stratum_recv_line",
            17,
            74,
            20,
            v27);
          goto LABEL_21;
        }
      }
      else
      {
        stratum_buffer_append((int)a1, v27);
      }
      if ( time(0) - v24 > 59 )
        break;
      spins = (char *)a1[1].__spins;
      if ( strchr(spins, 10) )
        goto LABEL_2;
    }
    spins = (char *)a1[1].__spins;
  }
LABEL_2:
  v4 = strlen(spins);
  v5 = strtok(spins, (const char *)&word_2A2588);
  if ( v5 )
  {
    v6 = _strdup(v5);
    v7 = strlen(v6);
    v8 = (_BYTE *)a1[1].__spins;
    if ( (int)(v7 + 1) < v4 )
      memmove(a1[1].__list.__next, &v8[v7 + 1], v4 - v7 + 1);
    else
      *v8 = 0;
    v9 = pthread_mutex_unlock(v1);
    if ( opt_protocol )
    {
      V_LOCK(v9);
      V_INT((int)v26, "poolno", a1->__lock);
      v18 = logfmt_raw((int)v27, 0x1000u);
      V_UNLOCK(v18);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/stratum_handler.c",
        161,
        "stratum_recv_line",
        17,
        97,
        60,
        v27);
    }
    return v6;
  }
  else
  {
    V_LOCK(0);
    v22 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/stratum_handler.c",
      161,
      "stratum_recv_line",
      17,
      82,
      100,
      v27);
LABEL_21:
    pthread_mutex_unlock(v1);
    return 0;
  }
}
