void __noreturn watchpool_thread()
{
  pthread_t v0; // r0
  char *v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r4
  pthread_mutex_t *v5; // r5
  int count; // r11
  int current_pool; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  char *v11; // r11
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  pthread_mutex_t *v16; // r0
  char v17; // [sp+20h] [bp-1084h] BYREF
  const char *v18; // [sp+40h] [bp-1064h]
  int v19; // [sp+44h] [bp-1060h]
  char *v20; // [sp+48h] [bp-105Ch]
  const char *v21; // [sp+4Ch] [bp-1058h]
  char *v22; // [sp+50h] [bp-1054h]
  char *s; // [sp+54h] [bp-1050h]
  struct timeval v24; // [sp+58h] [bp-104Ch] BYREF
  _BYTE v25[28]; // [sp+60h] [bp-1044h] BYREF
  __int64 v26; // [sp+80h] [bp-1024h] BYREF
  int v27; // [sp+88h] [bp-101Ch]
  int v28; // [sp+8Ch] [bp-1018h]
  int v29; // [sp+90h] [bp-1014h]
  int v30; // [sp+94h] [bp-1010h]
  int v31; // [sp+98h] [bp-100Ch]
  int v32; // [sp+9Ch] [bp-1008h]
  _BYTE v33[4100]; // [sp+A0h] [bp-1004h] BYREF

  v0 = pthread_self();
  pthread_detach(v0);
  pthread_setcanceltype(1, 0);
  sub_B51CC();
  v1 = (char *)calloc(1u, 0x40u);
  v2 = snprintf(v1, 0x40u, "%.10s_%d", "watchpool_thread", 0);
  V_LOCK(v2);
  syscall(224);
  v21 = "stable for >%d seconds";
  v22 = "poolno";
  s = "pool";
  v20 = &v17;
  v3 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/check_pool.c",
    167,
    "watchpool_thread",
    16,
    31,
    40,
    v33);
  prctl(15, v1);
  while ( 1 )
  {
    cgtime(&v24);
    if ( total_pools > 0 )
    {
      v4 = 0;
      do
      {
        while ( 1 )
        {
          v5 = *(pthread_mutex_t **)(pools + 4 * v4++);
          if ( !pool_tget(v5, (unsigned __int8 *)&v5[79].__size[8]) )
          {
            count = v5->__count;
            current_pool = get_current_pool();
            if ( count < *(_DWORD *)(current_pool + 4) && v24.tv_sec - v5[79].__kind > 120 )
              break;
          }
          if ( total_pools <= v4 )
            goto LABEL_9;
        }
        V_LOCK(current_pool);
        V_INT((int)v25, v22, v5->__lock);
        V_STR(&v26, s, (const char *)v5->__kind);
        v8 = HIDWORD(v26);
        v9 = v27;
        v10 = v28;
        v11 = v20;
        v18 = v21;
        v19 = 120;
        *(_DWORD *)v20 = v26;
        *((_DWORD *)v11 + 1) = v8;
        *((_DWORD *)v11 + 2) = v9;
        *((_DWORD *)v11 + 3) = v10;
        v11 += 16;
        v12 = v30;
        v13 = v31;
        v14 = v32;
        *(_DWORD *)v11 = v29;
        *((_DWORD *)v11 + 1) = v12;
        *((_DWORD *)v11 + 2) = v13;
        *((_DWORD *)v11 + 3) = v14;
        v15 = logfmt_raw((int)v33, 0x1000u);
        V_UNLOCK(v15);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/check_pool.c",
          167,
          "watchpool_thread",
          16,
          50,
          80,
          v33);
        switch_pools();
      }
      while ( total_pools > v4 );
    }
LABEL_9:
    v16 = (pthread_mutex_t *)get_current_pool();
    if ( pool_tget(v16, (unsigned __int8 *)&v16[79].__size[8]) )
      switch_pools();
    sleep(0x1Eu);
  }
}
