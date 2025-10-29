int __fastcall scanhash_1(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r5
  void *v6; // r8
  int v8; // r3
  unsigned int v9; // r0
  int v10; // r11
  int v11; // r10
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r3
  char v16; // [sp+0h] [bp-1234h]
  void *ptr; // [sp+10h] [bp-1224h]
  int v18; // [sp+14h] [bp-1220h]
  unsigned int v19; // [sp+18h] [bp-121Ch]
  char v20; // [sp+1Ch] [bp-1218h]
  char v21; // [sp+27h] [bp-120Dh] BYREF
  int v22; // [sp+28h] [bp-120Ch] BYREF
  int v23; // [sp+2Ch] [bp-1208h] BYREF
  char s[512]; // [sp+30h] [bp-1204h] BYREF
  _BYTE v25[4100]; // [sp+230h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  v3 = snprintf(v2, 0x40u, "%.10s_%d", "scanhash_1", *(_DWORD *)(a1 + 240));
  V_LOCK(v3);
  syscall(224);
  v18 = 0;
  v19 = 1;
  v4 = logfmt_raw((int)v25, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_base.c",
    166,
    "scanhash_1",
    10,
    118,
    40,
    v25);
  prctl(15, v2);
  v5 = *(_DWORD *)(a1 + 860);
  v6 = calloc(1u, *(_DWORD *)(a1 + 832));
  ptr = calloc(1u, *(_DWORD *)(a1 + 836));
LABEL_2:
  memset(s, 0, sizeof(s));
  queue_dequeue(v5, s, 1u);
  if ( !*(_BYTE *)(a1 + 896) )
  {
    while ( 1 )
    {
      while ( (unsigned __int8)s[0] != 170 )
      {
        queue_dequeue(v5, s, 1u);
        check_and_print_uart_debug_log(a1 + 1016, 1, (unsigned __int8 *)s, *(_DWORD *)(a1 + 248), 0);
        if ( *(_BYTE *)(a1 + 896) )
          goto LABEL_5;
      }
      queue_dequeue(v5, &s[1], 1u);
      if ( *(_BYTE *)(a1 + 896) )
        break;
      if ( s[1] == 85 )
      {
        v20 = *(_BYTE *)(a1 + 896);
        queue_dequeue(v5, &s[2], 1u);
        v9 = (*(int (__fastcall **)(_DWORD))(a1 + 172))((unsigned __int8)s[2]);
        v10 = v9 + 3;
        queue_dequeue(v5, &s[3], v9);
        check_and_print_uart_debug_log(a1 + 1016, v10, (unsigned __int8 *)s, *(_DWORD *)(a1 + 248), v20);
        v11 = *(unsigned __int8 *)(a1 + 896);
        if ( *(_BYTE *)(a1 + 896) )
          break;
        memset(v6, *(unsigned __int8 *)(a1 + 896), *(_DWORD *)(a1 + 832));
        v22 = v11;
        v23 = v11;
        v21 = v11;
        if ( (*(int (__fastcall **)(int, char *, void *, char *, void *, int *, int *))(a1 + 68))(
               a1,
               s,
               v6,
               &v21,
               ptr,
               &v22,
               &v23) == 10
          && !queue_enqueue(*(_DWORD *)(a1 + 868), s, v10)
          && v19 <= ++v18 )
        {
          V_LOCK(0);
          v12 = logfmt_raw((int)v25, 0x1000u);
          V_UNLOCK(v12);
          v13 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/backend/backend_base.c",
                  166,
                  "scanhash_1",
                  10,
                  174,
                  40,
                  v25);
          V_LOCK(v13);
          v14 = logfmt_raw((int)v25, 0x1000u);
          v18 = 0;
          V_UNLOCK(v14);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_base.c",
            166,
            "scanhash_1",
            10,
            175,
            40,
            v25);
          if ( 10 * v19 >= 0x989680 )
            v15 = 10000000;
          else
            v15 = 10 * v19;
          v19 = v15;
        }
        goto LABEL_2;
      }
      v8 = *(_DWORD *)(a1 + 248);
      v16 = *(_BYTE *)(a1 + 896);
      s[0] = s[1];
      check_and_print_uart_debug_log(a1 + 1016, 2, (unsigned __int8 *)s, v8, v16);
    }
  }
LABEL_5:
  *(_BYTE *)(a1 + 896) = 0;
  free(v6);
  free(ptr);
  return 0;
}
