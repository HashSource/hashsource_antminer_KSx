int __fastcall check_and_print_uart_debug_log(int result, int a2, unsigned __int8 *a3, int a4, char a5)
{
  int v7; // r4
  pthread_mutex_t *v8; // r11
  struct timespec *v9; // r9
  struct timespec *v11; // r1
  __int64 v12; // r8
  __int64 v13; // r0
  __int64 v14; // r2
  char v15; // r1
  __int64 v16; // r2
  __int64 v17; // r0
  unsigned __int8 *v18; // r6
  int v19; // r4
  int v20; // t1
  int v21; // r0
  int v22; // r0
  char v23[32]; // [sp+30h] [bp-1444h] BYREF
  _BYTE v24[1056]; // [sp+50h] [bp-1424h] BYREF
  _BYTE var1004[4112]; // [sp+470h] [bp-1004h] BYREF

  if ( !a2 )
    return result;
  v7 = result;
  if ( !*(_BYTE *)(result + 40) )
    return result;
  v8 = (pthread_mutex_t *)(result + 44);
  v9 = (struct timespec *)(result + 16);
  pthread_mutex_lock((pthread_mutex_t *)(result + 44));
  clock_gettime(1, (struct timespec *)(v7 + 24));
  v11 = v9;
  v12 = 1000LL * (*(_DWORD *)(v7 + 24) - *(_DWORD *)(v7 + 16)) + (*(_DWORD *)(v7 + 28) - *(_DWORD *)(v7 + 20)) / 1000000;
  clock_gettime(1, v11);
  v13 = v12;
  if ( v12 < 0 )
    v13 = 0;
  v14 = *(_QWORD *)(v7 + 8) - v13;
  if ( v14 < 0 )
    *(_QWORD *)(v7 + 8) = 0;
  else
    *(_QWORD *)(v7 + 8) = v14;
  pthread_mutex_unlock(v8);
  pthread_mutex_lock(v8);
  v15 = *(_BYTE *)v7;
  if ( *(_BYTE *)v7 )
  {
    v16 = *(_QWORD *)(v7 + 32);
  }
  else
  {
    v16 = *(_QWORD *)(v7 + 32);
    if ( *(__int64 *)(v7 + 8) < 1 && v16 < 1 )
      goto LABEL_12;
  }
  v15 = 1;
LABEL_12:
  *(_BYTE *)(v7 + 40) = v15;
  v17 = v16;
  if ( v16 < 1 )
    v17 = 1;
  *(_QWORD *)(v7 + 32) = v17 - 1;
  result = pthread_mutex_unlock(v8);
  if ( *(_BYTE *)(v7 + 40) )
  {
    if ( a2 > 0 )
    {
      v18 = &a3[a2];
      v19 = 0;
      do
      {
        v20 = *a3++;
        result = snprintf(&v24[v19 + 32], 1024 - v19, "%02x ", v20);
        v19 += 3;
      }
      while ( a3 != v18 );
    }
    V_LOCK(result);
    if ( a5 )
    {
      V_INT((int)v23, "chain", a4);
      v21 = logfmt_raw((int)var1004, 0x1000u);
      V_UNLOCK(v21);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/uart_debug_logger.c",
               171,
               "check_and_print_uart_debug_log",
               30,
               83,
               40,
               var1004);
    }
    else
    {
      V_INT((int)v24, "chain", a4);
      v22 = logfmt_raw((int)var1004, 0x1000u);
      V_UNLOCK(v22);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/uart_debug_logger.c",
               171,
               "check_and_print_uart_debug_log",
               30,
               85,
               40,
               var1004);
    }
  }
  return result;
}
