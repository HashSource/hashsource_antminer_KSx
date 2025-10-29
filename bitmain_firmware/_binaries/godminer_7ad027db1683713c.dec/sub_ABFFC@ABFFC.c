int __fastcall sub_ABFFC(int a1, int *a2, int a3)
{
  size_t *v3; // r4
  pthread_mutex_t *v5; // r7
  __int64 v8; // r2
  __int64 v9; // r0
  __int16 v10; // kr00_2
  int v11; // r12
  int v12; // r0
  int v13; // r1
  int v14; // lr
  int v15; // r12
  int v16; // r1
  void *v17; // r0
  char *v18; // r0
  char v20[4096]; // [sp+18h] [bp-1000h] BYREF

  v3 = *(size_t **)(a1 + 1132);
  if ( v3 )
  {
    v5 = (pthread_mutex_t *)(a2 + 398);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    if ( a3 )
    {
      v8 = 0;
      v9 = 1;
      v10 = 0;
    }
    else
    {
      v8 = *((_QWORD *)a2 + 39);
      v9 = v8 + 1;
      v10 = v8;
    }
    *v3 = 2;
    *((_QWORD *)a2 + 39) = v9;
    *((_QWORD *)v3 + 1) = v8;
    *((_WORD *)v3 + 8) = v10;
    V_LOCK();
    logfmt_raw(
      v20,
      0x1000u,
      0,
      "num2bin[%d] %02x%02x%02x%02x",
      *v3,
      *((unsigned __int8 *)v3 + 16),
      *((unsigned __int8 *)v3 + 17),
      *((unsigned __int8 *)v3 + 18),
      *((unsigned __int8 *)v3 + 19));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/dhash_content/zec/zec_1746/zec_1746_content.c",
      189,
      "pre_push_work_zec_1746",
      22,
      36,
      20,
      v20);
    memset((void *)(a1 + 8), 0, 0x400u);
    memcpy((void *)(a1 + 8), a2 + 42, 0x80u);
    memcpy((void *)(a1 + 116), (const void *)a2[20], a2[19]);
    memcpy((void *)(a1 + 8 + 128 - *v3), v3 + 4, *v3);
    v11 = a2[373];
    v12 = a2[374];
    v13 = a2[375];
    *(_DWORD *)(a1 + 1032) = a2[372];
    *(_DWORD *)(a1 + 1036) = v11;
    *(_DWORD *)(a1 + 1040) = v12;
    *(_DWORD *)(a1 + 1044) = v13;
    v14 = a2[376];
    v15 = a2[377];
    v16 = a2[379];
    *(_DWORD *)(a1 + 1056) = a2[378];
    v17 = *(void **)(a1 + 1124);
    *(_DWORD *)(a1 + 1048) = v14;
    *(_DWORD *)(a1 + 1052) = v15;
    *(_DWORD *)(a1 + 1060) = v16;
    if ( v17 )
    {
      free(v17);
      *(_DWORD *)(a1 + 1124) = 0;
    }
    v18 = _strdup((const char *)a2[395]);
    *(_QWORD *)a1 = *a2;
    *(_DWORD *)(a1 + 1124) = v18;
    pthread_mutex_unlock(v5);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
