int __fastcall scanhash(int a1)
{
  char *v2; // r4
  int v3; // r0
  int v4; // r4
  void *v5; // r10
  char *v6; // r11
  int v7; // r3
  int v9; // r9
  int v10; // r0
  unsigned int v11; // r0
  _QWORD *v12; // r12
  __int64 v13; // r2
  int v14; // lr
  int v15; // r3
  int v16; // r3
  int v17; // [sp+14h] [bp-1228h]
  unsigned int v18; // [sp+18h] [bp-1224h]
  int v19; // [sp+1Ch] [bp-1220h]
  unsigned int v20; // [sp+20h] [bp-121Ch]
  unsigned int v21; // [sp+24h] [bp-1218h]
  int v22; // [sp+24h] [bp-1218h]
  char v23; // [sp+2Fh] [bp-120Dh] BYREF
  int v24; // [sp+30h] [bp-120Ch] BYREF
  int v25; // [sp+34h] [bp-1208h] BYREF
  char s[512]; // [sp+38h] [bp-1204h] BYREF
  char v27[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 228));
  V_LOCK();
  v3 = syscall(224);
  v17 = 0;
  v18 = 1;
  v20 = 1;
  v19 = 0;
  logfmt_raw(v27, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_base.c",
    166,
    "scanhash",
    8,
    118,
    40,
    v27);
  prctl(15, v2);
  v4 = *(_DWORD *)(a1 + 832);
  v5 = calloc(1u, *(_DWORD *)(a1 + 808));
  v6 = (char *)calloc(1u, *(_DWORD *)(a1 + 812));
  while ( 1 )
  {
    memset(s, 0, sizeof(s));
    queue_dequeue(v4, s, 1u);
    if ( *(_BYTE *)(a1 + 860) )
      break;
LABEL_5:
    v7 = (unsigned __int8)s[0];
    while ( 1 )
    {
      if ( v7 != 170 )
      {
        queue_dequeue(v4, s, 1u);
        if ( *(_BYTE *)(a1 + 860) )
          goto LABEL_10;
        goto LABEL_5;
      }
      queue_dequeue(v4, &s[1], 1u);
      if ( *(_BYTE *)(a1 + 860) )
        goto LABEL_10;
      v7 = (unsigned __int8)s[1];
      if ( s[1] == 85 )
        break;
      s[0] = s[1];
    }
    queue_dequeue(v4, &s[2], 1u);
    v21 = (*(int (__fastcall **)(_DWORD))(a1 + 172))((unsigned __int8)s[2]);
    queue_dequeue(v4, &s[3], v21);
    v9 = *(unsigned __int8 *)(a1 + 860);
    if ( *(_BYTE *)(a1 + 860) )
      break;
    memset(v5, *(unsigned __int8 *)(a1 + 860), *(_DWORD *)(a1 + 808));
    v24 = v9;
    v25 = v9;
    v23 = v9;
    v10 = (*(int (__fastcall **)(int, char *, void *, char *, char *, int *, int *))(a1 + 68))(
            a1,
            s,
            v5,
            &v23,
            v6,
            &v24,
            &v25);
    if ( v10 == 10 )
    {
      if ( !queue_enqueue(*(_DWORD *)(a1 + 840), s, v21 + 3) && v20 <= ++v19 )
      {
        V_LOCK();
        logfmt_raw(
          v27,
          0x1000u,
          0,
          "chain[%d], queue_enqueue of __low_priority_resp_packet_queue is false",
          *(_DWORD *)(a1 + 232));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_base.c",
          166,
          "scanhash",
          8,
          227,
          40,
          v27);
        V_LOCK();
        logfmt_raw(
          v27,
          0x1000u,
          0,
          "low_priority_enqueue_fail_cnt = %d, low_priority_enqueue_fail_limit = %d",
          v19,
          v20);
        v19 = 0;
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_base.c",
          166,
          "scanhash",
          8,
          228,
          40,
          v27);
        if ( 10 * v20 >= 0x989680 )
          v16 = 10000000;
        else
          v16 = 10 * v20;
        v20 = v16;
      }
    }
    else if ( v10 == 11 )
    {
      ++*(_QWORD *)(*(_DWORD *)(a1 + 432) + 40);
    }
    else if ( !v10 && *(_BYTE *)(a1 + 238) )
    {
      if ( !*(_BYTE *)(a1 + v25 + 512) && v23 && platform_check_repeat_nonce((int *)a1, v24, v6) )
      {
        ++*(_QWORD *)(*(_DWORD *)(a1 + 432) + 48 * v24 + 32);
      }
      else
      {
        v11 = (*(int (__fastcall **)(int, void *))(a1 + 72))(a1, v5);
        if ( v11 <= 5 )
        {
          v22 = v24;
          v12 = (_QWORD *)(*(_DWORD *)(a1 + 432) + 8 * v11 + 48 * v24);
          ++*v12;
          if ( v11 <= 1 )
          {
            v13 = *(_QWORD *)(a1 + 424) + 1LL;
            ++*(_DWORD *)(*(_DWORD *)(a1 + 456) + 4 * v22);
            v14 = v25;
            *(_QWORD *)(a1 + 424) = v13;
            ++*(_QWORD *)(a1 + 8 * v14 + 544);
            if ( !v11
              && !*(_BYTE *)(a1 + v14 + 512)
              && !queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 844) + 836), (char *)v5, 1)
              && v18 <= ++v17 )
            {
              V_LOCK();
              logfmt_raw(
                v27,
                0x1000u,
                0,
                "chain[%d], queue_enqueue of __nonce_retrieve_queue is false",
                *(_DWORD *)(a1 + 232));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/backend_base.c",
                166,
                "scanhash",
                8,
                202,
                40,
                v27);
              V_LOCK();
              logfmt_raw(v27, 0x1000u, 0, "nonce_enqueue_fail_cnt = %d, nonce_enqueue_fail_limit = %d", v17, v18);
              v17 = 0;
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/backend_base.c",
                166,
                "scanhash",
                8,
                203,
                40,
                v27);
              v15 = 10 * v18;
              if ( 10 * v18 >= 0x989680 )
                v15 = 10000000;
              v18 = v15;
            }
          }
        }
      }
    }
  }
LABEL_10:
  *(_BYTE *)(a1 + 860) = 0;
  free(v5);
  free(v6);
  return 0;
}
