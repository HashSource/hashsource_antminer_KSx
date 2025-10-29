int __fastcall check_and_print_uart_debug_log(int result, int a2, unsigned __int8 *a3, int a4, char a5)
{
  int v6; // r4
  pthread_mutex_t *v7; // r11
  struct timespec *v8; // r9
  struct timespec *v10; // r1
  __int64 v11; // r8
  __int64 v12; // r0
  __int64 v13; // r2
  char v14; // r1
  __int64 v15; // r2
  __int64 v16; // r0
  unsigned __int8 *v17; // r6
  int v18; // r4
  int v19; // t1
  int v20; // r0
  int v21; // r0
  char v22[32]; // [sp+30h] [bp-1444h] BYREF
  _BYTE v23[1056]; // [sp+50h] [bp-1424h] BYREF
  _BYTE var1004[4112]; // [sp+470h] [bp-1004h] BYREF

  if ( !a2 )
    return result;
  v6 = result;
  if ( !*(_BYTE *)(result + 40) )
    return result;
  v7 = (pthread_mutex_t *)(result + 44);
  v8 = (struct timespec *)(result + 16);
  pthread_mutex_lock((pthread_mutex_t *)(result + 44));
  clock_gettime(1, (struct timespec *)(v6 + 24));
  v10 = v8;
  v11 = 1000LL * (*(_DWORD *)(v6 + 24) - *(_DWORD *)(v6 + 16)) + (*(_DWORD *)(v6 + 28) - *(_DWORD *)(v6 + 20)) / 1000000;
  clock_gettime(1, v10);
  v12 = v11;
  if ( v11 < 0 )
    v12 = 0;
  v13 = *(_QWORD *)(v6 + 8) - v12;
  if ( v13 < 0 )
    *(_QWORD *)(v6 + 8) = 0;
  else
    *(_QWORD *)(v6 + 8) = v13;
  pthread_mutex_unlock(v7);
  pthread_mutex_lock(v7);
  v14 = *(_BYTE *)v6;
  if ( *(_BYTE *)v6 )
  {
    v15 = *(_QWORD *)(v6 + 32);
  }
  else
  {
    v15 = *(_QWORD *)(v6 + 32);
    if ( *(__int64 *)(v6 + 8) < 1 && v15 < 1 )
      goto LABEL_12;
  }
  v14 = 1;
LABEL_12:
  *(_BYTE *)(v6 + 40) = v14;
  v16 = v15;
  if ( v15 < 1 )
    v16 = 1;
  *(_QWORD *)(v6 + 32) = v16 - 1;
  result = pthread_mutex_unlock(v7);
  if ( *(_BYTE *)(v6 + 40) )
  {
    if ( a2 > 0 )
    {
      v17 = &a3[a2];
      v18 = 0;
      do
      {
        v19 = *a3++;
        result = snprintf(&v23[v18 + 32], 1024 - v18, "%02x ", v19);
        v18 += 3;
      }
      while ( a3 != v17 );
    }
    V_LOCK(result);
    if ( a5 )
    {
      V_INT((int)v22, "chain");
      v20 = logfmt_raw((int)var1004, 0x1000u);
      V_UNLOCK(v20);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/backend/uart_debug_logger.c",
               176,
               "check_and_print_uart_debug_log",
               30,
               83,
               40,
               var1004);
    }
    else
    {
      V_INT((int)v23, "chain");
      v21 = logfmt_raw((int)var1004, 0x1000u);
      V_UNLOCK(v21);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/backend/uart_debug_logger.c",
               176,
               "check_and_print_uart_debug_log",
               30,
               85,
               40,
               var1004);
    }
  }
  return result;
}
