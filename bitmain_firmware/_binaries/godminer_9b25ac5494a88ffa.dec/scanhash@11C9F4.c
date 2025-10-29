int __fastcall scanhash(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r5
  void *v6; // r9
  int v8; // r3
  int v9; // r0
  int v10; // r10
  int v11; // r8
  int v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r8
  int v15; // r10
  _QWORD *v16; // r12
  __int64 v17; // r0
  int v18; // lr
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r3
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r3
  char v27; // [sp+0h] [bp-123Ch]
  char *ptr; // [sp+10h] [bp-122Ch]
  int v29; // [sp+14h] [bp-1228h]
  unsigned int v30; // [sp+18h] [bp-1224h]
  int v31; // [sp+1Ch] [bp-1220h]
  unsigned int v32; // [sp+20h] [bp-121Ch]
  char v33; // [sp+24h] [bp-1218h]
  char v34; // [sp+2Fh] [bp-120Dh] BYREF
  int v35; // [sp+30h] [bp-120Ch] BYREF
  int v36; // [sp+34h] [bp-1208h] BYREF
  unsigned __int8 s[512]; // [sp+38h] [bp-1204h] BYREF
  _BYTE v38[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  v3 = snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 240));
  V_LOCK(v3);
  syscall(224);
  v29 = 0;
  v30 = 1;
  v32 = 1;
  v31 = 0;
  v4 = logfmt_raw((int)v38, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_base.c",
    171,
    "scanhash",
    8,
    118,
    40,
    v38);
  prctl(15, v2);
  v5 = *(_DWORD *)(a1 + 848);
  v6 = calloc(1u, *(_DWORD *)(a1 + 824));
  ptr = (char *)calloc(1u, *(_DWORD *)(a1 + 828));
LABEL_2:
  memset(s, 0, sizeof(s));
  queue_dequeue(v5, s, 1);
  if ( !*(_BYTE *)(a1 + 876) )
  {
    while ( 1 )
    {
      while ( s[0] != 170 )
      {
        queue_dequeue(v5, s, 1);
        check_and_print_uart_debug_log(a1 + 1000, 1, s, *(_DWORD *)(a1 + 244), 0);
        if ( *(_BYTE *)(a1 + 876) )
          goto LABEL_5;
      }
      queue_dequeue(v5, &s[1], 1);
      if ( *(_BYTE *)(a1 + 876) )
        break;
      if ( s[1] == 85 )
      {
        v33 = *(_BYTE *)(a1 + 876);
        queue_dequeue(v5, &s[2], 1);
        v9 = (*(int (__fastcall **)(_DWORD))(a1 + 172))(s[2]);
        v10 = v9 + 3;
        queue_dequeue(v5, &s[3], v9);
        check_and_print_uart_debug_log(a1 + 1000, v10, s, *(_DWORD *)(a1 + 244), v33);
        v11 = *(unsigned __int8 *)(a1 + 876);
        if ( *(_BYTE *)(a1 + 876) )
          break;
        memset(v6, *(unsigned __int8 *)(a1 + 876), *(_DWORD *)(a1 + 824));
        v35 = v11;
        v36 = v11;
        v34 = v11;
        v12 = (*(int (__fastcall **)(int, unsigned __int8 *, void *, char *, char *, int *, int *))(a1 + 68))(
                a1,
                s,
                v6,
                &v34,
                ptr,
                &v35,
                &v36);
        if ( v12 == 10 )
        {
          if ( !queue_enqueue(*(_DWORD *)(a1 + 856), s, v10) && v32 <= ++v31 )
          {
            V_LOCK(0);
            v23 = logfmt_raw((int)v38, 0x1000u);
            V_UNLOCK(v23);
            v24 = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
                    171,
                    "scanhash",
                    8,
                    230,
                    40,
                    v38);
            V_LOCK(v24);
            v25 = logfmt_raw((int)v38, 0x1000u);
            v31 = 0;
            V_UNLOCK(v25);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
              171,
              "scanhash",
              8,
              231,
              40,
              v38);
            if ( 10 * v32 >= 0x989680 )
              v26 = 10000000;
            else
              v26 = 10 * v32;
            v32 = v26;
          }
        }
        else if ( v12 == 11 )
        {
          ++*(_QWORD *)(*(_DWORD *)(a1 + 448) + 40);
        }
        else if ( !v12 && *(_BYTE *)(a1 + 250) )
        {
          if ( !*(_BYTE *)(a1 + v36 + 528) && v34 && platform_check_repeat_nonce(a1, v35, ptr) )
          {
            ++*(_QWORD *)(*(_DWORD *)(a1 + 448) + 48 * v35 + 32);
          }
          else
          {
            v13 = (*(int (__fastcall **)(int, void *))(a1 + 72))(a1, v6);
            v14 = v13;
            if ( v13 <= 5 )
            {
              v15 = v35;
              v16 = (_QWORD *)(*(_DWORD *)(a1 + 448) + 8 * v13 + 48 * v35);
              ++*v16;
              if ( v13 <= 1 )
              {
                v17 = *(_QWORD *)(a1 + 440) + 1LL;
                ++*(_DWORD *)(*(_DWORD *)(a1 + 472) + 4 * v15);
                v18 = v36;
                *(_QWORD *)(a1 + 440) = v17;
                ++*(_QWORD *)(a1 + 8 * v18 + 560);
                if ( !v14
                  && !*(_BYTE *)(a1 + v18 + 528)
                  && !queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 860) + 852), v6, 1)
                  && v30 <= ++v29 )
                {
                  V_LOCK(0);
                  v19 = logfmt_raw((int)v38, 0x1000u);
                  V_UNLOCK(v19);
                  v20 = zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
                          171,
                          "scanhash",
                          8,
                          205,
                          40,
                          v38);
                  V_LOCK(v20);
                  v21 = logfmt_raw((int)v38, 0x1000u);
                  v29 = 0;
                  V_UNLOCK(v21);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
                    171,
                    "scanhash",
                    8,
                    206,
                    40,
                    v38);
                  v22 = 10 * v30;
                  if ( 10 * v30 >= 0x989680 )
                    v22 = 10000000;
                  v30 = v22;
                }
              }
            }
          }
        }
        goto LABEL_2;
      }
      v8 = *(_DWORD *)(a1 + 244);
      v27 = *(_BYTE *)(a1 + 876);
      s[0] = s[1];
      check_and_print_uart_debug_log(a1 + 1000, 2, s, v8, v27);
    }
  }
LABEL_5:
  *(_BYTE *)(a1 + 876) = 0;
  free(v6);
  free(ptr);
  return 0;
}
