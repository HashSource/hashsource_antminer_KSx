int __fastcall stratum_check(pthread_mutex_t *a1)
{
  const char *kind; // r0
  const char *v3; // r7
  void *owner; // r3
  char *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r8
  int v15; // r0
  int v16; // r2
  int v17; // r3
  int v19; // r0
  int v20; // r0
  __time_t v21; // r8
  int v22; // r11
  int v23; // r0
  void *v24; // r11
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  void (__fastcall *v29)(pthread_mutex_t *); // r1
  int v30; // r2
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int lock; // [sp+0h] [bp-1084h] BYREF
  int v38; // [sp+4h] [bp-1080h]
  int v39; // [sp+8h] [bp-107Ch]
  _BYTE *v40; // [sp+Ch] [bp-1078h]
  int v41; // [sp+10h] [bp-1074h]
  int v42; // [sp+14h] [bp-1070h]
  int v43; // [sp+18h] [bp-106Ch]
  int v44; // [sp+1Ch] [bp-1068h]
  const char *v45; // [sp+20h] [bp-1064h]
  int *p_lock; // [sp+28h] [bp-105Ch]
  char *v47; // [sp+2Ch] [bp-1058h]
  char *s; // [sp+30h] [bp-1054h]
  char *v49; // [sp+34h] [bp-1050h]
  _BYTE v50[4]; // [sp+3Ch] [bp-1048h] BYREF
  _DWORD v51[8]; // [sp+40h] [bp-1044h] BYREF
  _DWORD v52[8]; // [sp+60h] [bp-1024h] BYREF
  _BYTE v53[4100]; // [sp+80h] [bp-1004h] BYREF

  kind = (const char *)frontend_runtime_instance(a1);
  if ( !a1 || (v3 = kind, (kind = (const char *)a1->__kind) == 0) || !a1->__nusers )
  {
    V_LOCK(kind);
    v12 = logfmt_raw((int)v53, 0x1000u);
    V_UNLOCK(v12);
    v11 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/stratum_handler.c",
            161,
            "stratum_check",
            13,
            359,
            100,
            v53);
    goto LABEL_10;
  }
  owner = (void *)a1[1].__owner;
  p_lock = *(int **)(*((_DWORD *)v3 + 18) + 20);
  if ( owner )
  {
    free(owner);
    kind = (const char *)a1->__kind;
  }
  v5 = _strdup(kind);
  v47 = &a1->__size[8];
  a1[1].__owner = (int)v5;
  V_LOCK(v5);
  v6 = logfmt_raw((int)v53, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/stratum_handler.c",
    161,
    "stratum_check",
    13,
    367,
    40,
    v53);
  pool_tset((int)a1, &a1[79].__size[8], 0);
  pool_tclear((int)a1, &a1[79].__size[20], 0);
  pool_tclear((int)a1, &a1->__size[8], 0);
  if ( !(*(int (__fastcall **)(pthread_mutex_t *))v3)(a1) )
  {
    v7 = (*((int (__fastcall **)(pthread_mutex_t *))v3 + 1))(a1);
    V_LOCK(v7);
    v8 = logfmt_raw((int)v53, 0x1000u);
    V_UNLOCK(v8);
    v9 = g_zc;
    v10 = 376;
    v40 = v53;
    lock = 13;
LABEL_8:
    v11 = zlog(
            v9,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/stratum_handler.c",
            161,
            "stratum_check",
            lock,
            v10,
            100,
            v40);
LABEL_10:
    V_LOCK(v11);
    lock = a1->__lock;
    v13 = logfmt_raw((int)v53, 0x1000u);
    v14 = 0;
    V_UNLOCK(v13);
    v15 = g_zc;
    v16 = 100;
    v17 = 441;
    v40 = v53;
    goto LABEL_11;
  }
  if ( !(*((int (__fastcall **)(const char *, pthread_mutex_t *))v3 + 4))(v3, a1) )
  {
    v19 = (*((int (__fastcall **)(pthread_mutex_t *))v3 + 1))(a1);
    V_LOCK(v19);
    v20 = logfmt_raw((int)v53, 0x1000u);
    V_UNLOCK(v20);
    v9 = g_zc;
    v40 = v53;
    lock = 13;
    v10 = 383;
    goto LABEL_8;
  }
  v21 = (__time_t)p_lock;
  s = "poolno";
  v49 = "stratum connection timeout";
  while ( 1 )
  {
    wait_pool_to_be_current_timeout((int)a1);
    v22 = stratum_socket_full((int)a1, v21);
    if ( v22 )
      break;
    V_LOCK(a1);
    V_INT((int)v51, s, a1->__lock);
    v45 = v49;
    p_lock = &lock;
    lock = v51[0];
    v38 = v51[1];
    v39 = v51[2];
    v40 = (_BYTE *)v51[3];
    v41 = v51[4];
    v42 = v51[5];
    v43 = v51[6];
    v44 = v51[7];
    v28 = logfmt_raw((int)v53, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/stratum_handler.c",
      161,
      "stratum_check",
      13,
      393,
      100,
      v53);
LABEL_22:
    v29 = (void (__fastcall *)(pthread_mutex_t *))*((_DWORD *)v3 + 1);
    v30 = total_go + 1;
    ++a1[81].__count;
    total_go = v30;
    v29(a1);
    pool_tclear((int)a1, &a1[79].__size[20], 0);
    v31 = pool_died(a1);
    V_LOCK(v31);
    V_INT((int)v52, s, a1->__lock);
    v45 = "stratum connection interrupted";
    lock = v52[0];
    v38 = v52[1];
    v39 = v52[2];
    v40 = (_BYTE *)v52[3];
    v41 = v52[4];
    v42 = v52[5];
    v43 = v52[6];
    v44 = v52[7];
    v32 = logfmt_raw((int)v53, 0x1000u);
    V_UNLOCK(v32);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/stratum_handler.c",
      161,
      "stratum_check",
      13,
      408,
      20,
      v53);
    sleep(0x1Eu);
  }
  v23 = (*((int (__fastcall **)(pthread_mutex_t *))v3 + 2))(a1);
  if ( !v23 )
    goto LABEL_22;
  v14 = v22;
  v24 = (void *)v23;
  if ( (*((int (__fastcall **)(const char *, pthread_mutex_t *, int, _BYTE *))v3 + 6))(v3, a1, v23, v50)
    || (*((int (__fastcall **)(const char *, void *, pthread_mutex_t *))v3 + 7))(v3, v24, a1) )
  {
    free(v24);
    pool_tset((int)a1, v47, 0);
    pool_tclear((int)a1, &a1[79].__size[8], 0);
    pools_active = 1;
    update_miner_working_status();
    v25 = (*((int (__fastcall **)(pthread_mutex_t *))v3 + 1))(a1);
    V_LOCK(v25);
    v26 = a1->__lock;
    v38 = a1->__kind;
    lock = v26;
    v27 = logfmt_raw((int)v53, 0x1000u);
    V_UNLOCK(v27);
    v15 = g_zc;
    v40 = v53;
    v16 = 40;
    v17 = 437;
LABEL_11:
    zlog(
      v15,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/stratum_handler.c",
      161,
      "stratum_check",
      13,
      v17,
      v16,
      v40);
  }
  else
  {
    free(v24);
    v33 = (*((int (__fastcall **)(pthread_mutex_t *))v3 + 1))(a1);
    V_LOCK(v33);
    lock = a1->__lock;
    v34 = logfmt_raw((int)v53, 0x1000u);
    v14 = 0;
    V_UNLOCK(v34);
    v35 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/stratum_handler.c",
            161,
            "stratum_check",
            13,
            426,
            100,
            v53);
    V_LOCK(v35);
    lock = a1->__lock;
    v36 = logfmt_raw((int)v53, 0x1000u);
    V_UNLOCK(v36);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/stratum_handler.c",
      161,
      "stratum_check",
      13,
      427,
      100,
      v53);
  }
  return v14;
}
