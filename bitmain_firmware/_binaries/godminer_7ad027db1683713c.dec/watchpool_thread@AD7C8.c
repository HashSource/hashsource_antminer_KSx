void __noreturn watchpool_thread()
{
  pthread_t v0; // r0
  char *v1; // r4
  int v2; // r0
  int v3; // r4
  pthread_mutex_t *v4; // r5
  int count; // r11
  int v6; // r1
  int v7; // r2
  int v8; // r3
  char *v9; // r11
  int v10; // r1
  int v11; // r2
  int v12; // r3
  pthread_mutex_t *current_pool; // r0
  char v14; // [sp+20h] [bp-1084h] BYREF
  const char *v15; // [sp+40h] [bp-1064h]
  int v16; // [sp+44h] [bp-1060h]
  char *v17; // [sp+48h] [bp-105Ch]
  const char *v18; // [sp+4Ch] [bp-1058h]
  char *v19; // [sp+50h] [bp-1054h]
  char *s; // [sp+54h] [bp-1050h]
  struct timeval v21; // [sp+58h] [bp-104Ch] BYREF
  _DWORD v22[7]; // [sp+60h] [bp-1044h] BYREF
  int v23; // [sp+7Ch] [bp-1028h]
  __int64 v24; // [sp+80h] [bp-1024h] BYREF
  int v25; // [sp+88h] [bp-101Ch]
  int v26; // [sp+8Ch] [bp-1018h]
  int v27; // [sp+90h] [bp-1014h]
  int v28; // [sp+94h] [bp-1010h]
  int v29; // [sp+98h] [bp-100Ch]
  int v30; // [sp+9Ch] [bp-1008h]
  char v31[4100]; // [sp+A0h] [bp-1004h] BYREF

  v0 = pthread_self();
  pthread_detach(v0);
  pthread_setcanceltype(1, 0);
  sub_AD7AC();
  v1 = (char *)calloc(1u, 0x40u);
  snprintf(v1, 0x40u, "%.10s_%d", "watchpool_thread", 0);
  V_LOCK();
  v2 = syscall(224);
  v18 = "stable for >%d seconds";
  v19 = "poolno";
  s = "pool";
  v17 = &v14;
  logfmt_raw(v31, 0x1000u, 0, "%s on pid %ld", v1, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/check_pool.c",
    167,
    "watchpool_thread",
    16,
    31,
    40,
    v31);
  prctl(15, v1);
  while ( 1 )
  {
    cgtime(&v21);
    if ( total_pools > 0 )
    {
      v3 = 0;
      do
      {
        while ( 1 )
        {
          v4 = *(pthread_mutex_t **)(pools + 4 * v3++);
          if ( !pool_tget(v4, (unsigned __int8 *)&v4[79].__size[8]) )
          {
            count = v4->__count;
            if ( count < *(_DWORD *)(get_current_pool() + 4) && v21.tv_sec - v4[79].__kind > 120 )
              break;
          }
          if ( total_pools <= v3 )
            goto LABEL_9;
        }
        V_LOCK();
        V_INT((int)v22, v19, v4->__lock);
        V_STR(&v24, s, (const char *)v4->__kind);
        v6 = HIDWORD(v24);
        v7 = v25;
        v8 = v26;
        v9 = v17;
        v15 = v18;
        v16 = 120;
        *(_DWORD *)v17 = v24;
        *((_DWORD *)v9 + 1) = v6;
        *((_DWORD *)v9 + 2) = v7;
        *((_DWORD *)v9 + 3) = v8;
        v9 += 16;
        v10 = v28;
        v11 = v29;
        v12 = v30;
        *(_DWORD *)v9 = v27;
        *((_DWORD *)v9 + 1) = v10;
        *((_DWORD *)v9 + 2) = v11;
        *((_DWORD *)v9 + 3) = v12;
        logfmt_raw(v31, 0x1000u, 0, v23, v22[0], v22[1], v22[2], v22[3], v22[4], v22[5], v22[6], v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/check_pool.c",
          167,
          "watchpool_thread",
          16,
          50,
          80,
          v31);
        switch_pools();
      }
      while ( total_pools > v3 );
    }
LABEL_9:
    current_pool = (pthread_mutex_t *)get_current_pool();
    if ( pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) )
      switch_pools();
    sleep(0x1Eu);
  }
}
