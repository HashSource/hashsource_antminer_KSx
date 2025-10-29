int __fastcall sub_B2AC4(int a1, int *a2, int a3)
{
  int v3; // r4
  pthread_mutex_t *v5; // r7
  __int64 v8; // r2
  __int64 v9; // r0
  __int16 v10; // kr00_2
  int v11; // r0
  int v12; // r12
  int v13; // r0
  int v14; // r1
  int v15; // lr
  int v16; // r12
  int v17; // r1
  void *v18; // r0
  char *v19; // r0
  _BYTE v21[4096]; // [sp+18h] [bp-1000h] BYREF

  v3 = *(_DWORD *)(a1 + 1132);
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
    *(_DWORD *)v3 = 2;
    *((_QWORD *)a2 + 39) = v9;
    *(_QWORD *)(v3 + 8) = v8;
    *(_WORD *)(v3 + 16) = v10;
    V_LOCK(v9);
    v11 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/dhash_content/zec/zec_1746/zec_1746_content.c",
      194,
      "pre_push_work_zec_1746",
      22,
      36,
      20,
      v21);
    memset((void *)(a1 + 8), 0, 0x400u);
    memcpy((void *)(a1 + 8), a2 + 42, 0x80u);
    memcpy((void *)(a1 + 116), (const void *)a2[20], a2[19]);
    memcpy((void *)(a1 + 8 + 128 - *(_DWORD *)v3), (const void *)(v3 + 16), *(_DWORD *)v3);
    v12 = a2[373];
    v13 = a2[374];
    v14 = a2[375];
    *(_DWORD *)(a1 + 1032) = a2[372];
    *(_DWORD *)(a1 + 1036) = v12;
    *(_DWORD *)(a1 + 1040) = v13;
    *(_DWORD *)(a1 + 1044) = v14;
    v15 = a2[376];
    v16 = a2[377];
    v17 = a2[379];
    *(_DWORD *)(a1 + 1056) = a2[378];
    v18 = *(void **)(a1 + 1124);
    *(_DWORD *)(a1 + 1048) = v15;
    *(_DWORD *)(a1 + 1052) = v16;
    *(_DWORD *)(a1 + 1060) = v17;
    if ( v18 )
    {
      free(v18);
      *(_DWORD *)(a1 + 1124) = 0;
    }
    v19 = _strdup((const char *)a2[395]);
    *(_QWORD *)a1 = *a2;
    *(_DWORD *)(a1 + 1124) = v19;
    pthread_mutex_unlock(v5);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
