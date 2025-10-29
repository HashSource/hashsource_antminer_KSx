char *add_pool()
{
  char *v0; // r4
  int v1; // r3
  void *v2; // r0
  int v3; // r1
  _DWORD *v4; // r0
  int v5; // r2
  int v7; // r0
  int v8; // r0
  int v9; // r0
  _BYTE v10[4096]; // [sp+10h] [bp-1000h] BYREF

  v0 = (char *)calloc(0x7D0u, 1u);
  if ( !v0 )
  {
    V_LOCK(0);
    v7 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v7);
    v8 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/pool.c",
           150,
           "add_pool",
           8,
           123,
           100,
           v10);
    V_LOCK(v8);
    v9 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/pool.c",
      150,
      "add_pool",
      8,
      124,
      100,
      v10);
    exit(1);
  }
  v1 = total_pools;
  v2 = (void *)pools;
  v3 = total_pools + 2;
  *((_DWORD *)v0 + 1) = total_pools;
  *(_DWORD *)v0 = v1;
  v4 = realloc(v2, 4 * v3);
  v5 = total_pools++;
  pools = (int)v4;
  v4[v5] = v0;
  *((_DWORD *)v0 + 11) = 0;
  v0[1648] = 0;
  v0[1656] = 0;
  *((_DWORD *)v0 + 437) = 0;
  *((_DWORD *)v0 + 439) = 0;
  *((_DWORD *)v0 + 9) = -1;
  v0[28] = 1;
  *((_QWORD *)v0 + 221) = 0;
  *((_DWORD *)v0 + 444) = 0;
  *(_QWORD *)(v0 + 1684) = 0;
  *(_QWORD *)(v0 + 1692) = 0;
  *(_QWORD *)(v0 + 1700) = 0;
  *(_QWORD *)(v0 + 1708) = 0;
  *(_QWORD *)(v0 + 1716) = 0;
  *(_QWORD *)(v0 + 1724) = 0;
  *(_QWORD *)(v0 + 1732) = 0;
  *(_QWORD *)(v0 + 1740) = 0;
  *((_QWORD *)v0 + 226) = 0;
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1592), 0);
  pthread_mutex_init((pthread_mutex_t *)v0 + 76, 0);
  pthread_condattr_init((pthread_condattr_t *)v0 + 462);
  pthread_condattr_setclock((pthread_condattr_t *)v0 + 462, 1);
  pthread_cond_init((pthread_cond_t *)(v0 + 1856), (const pthread_condattr_t *)v0 + 462);
  pthread_mutex_init((pthread_mutex_t *)v0 + 2, 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1592), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1780), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1660), 0);
  v0[1904] = 1;
  v0[1916] = 0;
  *((_DWORD *)v0 + 477) = -1;
  return v0;
}
