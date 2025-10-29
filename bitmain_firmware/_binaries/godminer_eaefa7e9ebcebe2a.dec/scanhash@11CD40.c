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
  int v13; // r3
  unsigned int v14; // r0
  unsigned int v15; // r8
  int v16; // r10
  _QWORD *v17; // r12
  __int64 v18; // r0
  int v19; // lr
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r3
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r3
  char v28; // [sp+0h] [bp-123Ch]
  char *ptr; // [sp+10h] [bp-122Ch]
  int v30; // [sp+14h] [bp-1228h]
  unsigned int v31; // [sp+18h] [bp-1224h]
  int v32; // [sp+1Ch] [bp-1220h]
  unsigned int v33; // [sp+20h] [bp-121Ch]
  char v34; // [sp+24h] [bp-1218h]
  char v35; // [sp+2Fh] [bp-120Dh] BYREF
  int v36; // [sp+30h] [bp-120Ch] BYREF
  int v37; // [sp+34h] [bp-1208h] BYREF
  unsigned __int8 s[512]; // [sp+38h] [bp-1204h] BYREF
  _BYTE v39[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  v3 = snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 244));
  V_LOCK(v3);
  syscall(224);
  v30 = 0;
  v31 = 1;
  v33 = 1;
  v32 = 0;
  v4 = logfmt_raw((int)v39, 0x1000u);
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
    v39);
  prctl(15, v2);
  v5 = *(_DWORD *)(a1 + 856);
  v6 = calloc(1u, *(_DWORD *)(a1 + 832));
  ptr = (char *)calloc(1u, *(_DWORD *)(a1 + 836));
LABEL_2:
  memset(s, 0, sizeof(s));
  queue_dequeue(v5, s, 1);
  if ( !*(_BYTE *)(a1 + 884) )
  {
    while ( 1 )
    {
      while ( s[0] != 170 )
      {
        queue_dequeue(v5, s, 1);
        check_and_print_uart_debug_log(a1 + 1008, 1, s, *(_DWORD *)(a1 + 248), 0);
        if ( *(_BYTE *)(a1 + 884) )
          goto LABEL_5;
      }
      queue_dequeue(v5, &s[1], 1);
      if ( *(_BYTE *)(a1 + 884) )
        break;
      if ( s[1] == 85 )
      {
        v34 = *(_BYTE *)(a1 + 884);
        queue_dequeue(v5, &s[2], 1);
        v9 = (*(int (__fastcall **)(_DWORD))(a1 + 172))(s[2]);
        v10 = v9 + 3;
        queue_dequeue(v5, &s[3], v9);
        check_and_print_uart_debug_log(a1 + 1008, v10, s, *(_DWORD *)(a1 + 248), v34);
        v11 = *(unsigned __int8 *)(a1 + 884);
        if ( *(_BYTE *)(a1 + 884) )
          break;
        memset(v6, *(unsigned __int8 *)(a1 + 884), *(_DWORD *)(a1 + 832));
        v36 = v11;
        v37 = v11;
        v35 = v11;
        v12 = (*(int (__fastcall **)(int, unsigned __int8 *, void *, char *, char *, int *, int *))(a1 + 68))(
                a1,
                s,
                v6,
                &v35,
                ptr,
                &v36,
                &v37);
        if ( v12 == 10 )
        {
          if ( !queue_enqueue(*(_DWORD *)(a1 + 864), s, v10, v13) && v33 <= ++v32 )
          {
            V_LOCK(0);
            v24 = logfmt_raw((int)v39, 0x1000u);
            V_UNLOCK(v24);
            v25 = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
                    171,
                    "scanhash",
                    8,
                    230,
                    40,
                    v39);
            V_LOCK(v25);
            v26 = logfmt_raw((int)v39, 0x1000u);
            v32 = 0;
            V_UNLOCK(v26);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
              171,
              "scanhash",
              8,
              231,
              40,
              v39);
            if ( 10 * v33 >= 0x989680 )
              v27 = 10000000;
            else
              v27 = 10 * v33;
            v33 = v27;
          }
        }
        else if ( v12 == 11 )
        {
          ++*(_QWORD *)(*(_DWORD *)(a1 + 456) + 40);
        }
        else if ( !v12 && *(_BYTE *)(a1 + 254) )
        {
          if ( !*(_BYTE *)(a1 + v37 + 536) && v35 && platform_check_repeat_nonce(a1, v36, ptr) )
          {
            ++*(_QWORD *)(*(_DWORD *)(a1 + 456) + 48 * v36 + 32);
          }
          else
          {
            v14 = (*(int (__fastcall **)(int, void *))(a1 + 72))(a1, v6);
            v15 = v14;
            if ( v14 <= 5 )
            {
              v16 = v36;
              v17 = (_QWORD *)(*(_DWORD *)(a1 + 456) + 8 * v14 + 48 * v36);
              ++*v17;
              if ( v14 <= 1 )
              {
                v18 = *(_QWORD *)(a1 + 448) + 1LL;
                ++*(_DWORD *)(*(_DWORD *)(a1 + 480) + 4 * v16);
                v19 = v37;
                *(_QWORD *)(a1 + 448) = v18;
                ++*(_QWORD *)(a1 + 8 * v19 + 568);
                if ( !v15
                  && !*(_BYTE *)(a1 + v19 + 536)
                  && !queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 868) + 860), v6, 1, *(_DWORD *)(a1 + 868))
                  && v31 <= ++v30 )
                {
                  V_LOCK(0);
                  v20 = logfmt_raw((int)v39, 0x1000u);
                  V_UNLOCK(v20);
                  v21 = zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
                          171,
                          "scanhash",
                          8,
                          205,
                          40,
                          v39);
                  V_LOCK(v21);
                  v22 = logfmt_raw((int)v39, 0x1000u);
                  v30 = 0;
                  V_UNLOCK(v22);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
                    171,
                    "scanhash",
                    8,
                    206,
                    40,
                    v39);
                  v23 = 10 * v31;
                  if ( 10 * v31 >= 0x989680 )
                    v23 = 10000000;
                  v31 = v23;
                }
              }
            }
          }
        }
        goto LABEL_2;
      }
      v8 = *(_DWORD *)(a1 + 248);
      v28 = *(_BYTE *)(a1 + 884);
      s[0] = s[1];
      check_and_print_uart_debug_log(a1 + 1008, 2, s, v8, v28);
    }
  }
LABEL_5:
  *(_BYTE *)(a1 + 884) = 0;
  free(v6);
  free(ptr);
  return 0;
}
