int __fastcall task_timer_thread(int a1)
{
  char *v2; // r4
  int v3; // r0
  int result; // r0
  int v5; // r11
  int v6; // r5
  struct timespec *v7; // r9
  struct timespec *v8; // r11
  struct timespec *v9; // r10
  int v10; // r8
  int v11; // r4
  int v12; // r5
  int v13; // r11
  int v14; // t1
  int tv_nsec; // r1
  int v16; // r2
  int v17; // r2
  int v18; // r4
  char v20[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", 2784292, 0);
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v20, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/common/general/task_timer.c",
    171,
    "task_timer_thread",
    17,
    44,
    40,
    v20);
  for ( result = prctl(15, v2); ; result = usleep(1000 * v6) )
  {
    v5 = *(_DWORD *)(a1 + 6144);
    if ( v5 > 0 )
    {
      v7 = (struct timespec *)a1;
      v8 = (struct timespec *)(a1 + 16 * v5);
      v9 = (struct timespec *)a1;
      v10 = a1;
      do
      {
        while ( 1 )
        {
          clock_gettime(1, v7 + 257);
          v11 = 1000 * (v7[257].tv_sec - v7[256].tv_sec) + (v7[257].tv_nsec - v7[256].tv_nsec) / 1000000;
          if ( *(_DWORD *)(v10 + 1024) <= v11 )
            break;
          v7 += 2;
          v10 += 4;
          if ( v7 == v8 )
            goto LABEL_8;
        }
        clock_gettime(1, v7 + 256);
        v7 += 2;
        (*(void (__fastcall **)(int))v10)(v11);
        v10 += 4;
      }
      while ( v7 != v8 );
LABEL_8:
      v12 = 0x7FFFFFFF;
      v13 = a1 + 1020;
      do
      {
        v14 = *(_DWORD *)(v13 + 4);
        v13 += 4;
        clock_gettime(1, v9 + 257);
        tv_nsec = v9[256].tv_nsec;
        v16 = v9[257].tv_nsec;
        v9 += 2;
        v17 = v16 - tv_nsec;
        result = 1125899907 * v17;
        v18 = v14 - (1000 * (v9[255].tv_sec - v9[254].tv_sec) + v17 / 1000000);
        if ( v12 >= v18 )
          v12 = v18;
      }
      while ( v7 != v9 );
      v6 = v12 & ~(v12 >> 31);
    }
    else
    {
      v6 = 0x7FFFFFFF;
    }
    if ( !*(_BYTE *)(a1 + 6148) )
      break;
  }
  return result;
}
