int __fastcall statusServiceThread(int a1)
{
  int v2; // r7
  char *v3; // r10
  ssize_t v4; // r3
  int v5; // r9
  int v6; // r11
  int v7; // r9
  int v8; // r9
  int v9; // r9
  int v10; // r9
  int v11; // r9
  int v12; // r0
  unsigned int v13; // r9
  size_t v14; // r0
  ssize_t v15; // r0
  int v16; // r0
  int v17; // r3
  int v19; // r1
  ssize_t v20; // r10
  int addr_len; // [sp+4h] [bp-7048h]
  char *v22; // [sp+Ch] [bp-7040h]
  struct sockaddr *v23; // [sp+14h] [bp-7038h]
  char v24[4]; // [sp+20h] [bp-702Ch] BYREF
  socklen_t v25; // [sp+24h] [bp-7028h] BYREF
  char needle[8]; // [sp+28h] [bp-7024h] BYREF
  _DWORD optval[2]; // [sp+30h] [bp-701Ch] BYREF
  struct sockaddr addr; // [sp+38h] [bp-7014h] BYREF
  char s[4096]; // [sp+48h] [bp-7004h] BYREF
  char v30[4088]; // [sp+1048h] [bp-6004h] BYREF
  char v31[10240]; // [sp+2048h] [bp-5004h] BYREF
  char v32[10244]; // [sp+4848h] [bp-2804h] BYREF

  optval[1] = 0;
  optval[0] = 3;
  memset(s, 0, sizeof(s));
  v25 = 0;
  v2 = 0;
  strcpy(v24, "\r\n");
  strcpy(needle, "\r\n\r\n");
  v3 = v31;
  memset(v31, 0, sizeof(v31));
  do
  {
    v5 = (unsigned __int8)ExitServer;
    if ( ExitServer )
      goto LABEL_6;
    v4 = recvfrom(a1, v3, 10239 - v2, 0, &addr, &v25);
    v2 += v4;
    if ( v4 <= 0 )
    {
      close(a1);
      V_LOCK();
      logfmt_raw(v32, 0x1000u, v5, ":statusServiceThread recvfrom<=0");
      V_UNLOCK();
      v19 = 52;
LABEL_27:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/common/general/http.c",
        165,
        "statusServiceThread",
        19,
        v19,
        20,
        v32);
      return 0;
    }
    v3 = &v31[v2];
    if ( v2 > 10238 )
    {
      close(a1);
      V_LOCK();
      logfmt_raw(v32, 0x1000u, v5, "BUFSIZE is too small!");
      V_UNLOCK();
      v19 = 60;
      goto LABEL_27;
    }
  }
  while ( !strstr(v31, needle) );
  V_LOCK();
  logfmt_raw(v32, 0x1000u, v5, "find http request end flag!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/common/general/http.c",
    165,
    "statusServiceThread",
    19,
    67,
    20,
    v32);
LABEL_6:
  V_LOCK();
  logfmt_raw(v32, 0x1000u, 0, "get http=%s", v31);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/common/general/http.c",
    165,
    "statusServiceThread",
    19,
    72,
    20,
    v32);
  if ( v31[0] != 71 || v31[1] != 69 || v31[2] != 84 || v31[3] != 32 )
  {
    close(a1);
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "statusServiceThread not support http command");
    V_UNLOCK();
    v17 = 79;
    v16 = g_zc;
    v22 = v32;
LABEL_23:
    addr_len = v17;
    LOWORD(v17) = (unsigned __int16)"statusServiceThread";
    goto LABEL_24;
  }
  if ( setsockopt(a1, 1, 21, optval, 8u) )
  {
    close(a1);
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "setsockopt SO_SNDTIMEO failed");
    V_UNLOCK();
    v16 = g_zc;
    v22 = v32;
    LOWORD(v17) = 28608;
    addr_len = 87;
LABEL_24:
    HIWORD(v17) = (unsigned int)"statusServiceThread" >> 16;
    zlog(
      v16,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/http.c",
      165,
      v17,
      19,
      addr_len,
      20,
      v22);
    return 0;
  }
  v6 = setsockopt(a1, 1, 20, optval, 8u);
  if ( v6 )
  {
    close(a1);
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "setsockopt SO_RCVTIMEO failed");
    V_UNLOCK();
    v16 = g_zc;
    v22 = v32;
    LOWORD(v17) = 28608;
    addr_len = 95;
    goto LABEL_24;
  }
  if ( http_test_case )
  {
    if ( !((int (__fastcall *)(char *, char *, int))http_test_case)(v31, s, 4096) )
      goto LABEL_14;
    close(a1);
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "statusServiceThread exit for Error cmd!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/http.c",
      165,
      "statusServiceThread",
      19,
      108,
      20,
      v32);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "No 6060 test case found.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/http.c",
      165,
      "statusServiceThread",
      19,
      103,
      20,
      v32);
LABEL_14:
    v23 = (struct sockaddr *)strlen(s);
    v7 = sprintf(v32, "HTTP/1.0  200  OK%s", v24);
    v8 = v7 + sprintf(&v32[v7], "Server: SearchFreqServer%s", v24);
    v9 = v8 + sprintf(&v32[v8], "Cache-Control: no-cache%s", v24);
    v10 = v9 + sprintf(&v32[v9], "Pragma: no-cache%s", v24);
    v11 = v10 + sprintf(&v32[v10], "Content-Type: text/plain%s", v24);
    v12 = sprintf(&v32[v11], "Content-Length: %d%s", v23, v24);
    sprintf(&v32[v11 + v12], "Connection: Keep-Alive%s", needle);
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, "send http response...");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/http.c",
      165,
      "statusServiceThread",
      19,
      123,
      20,
      v30);
    v13 = (unsigned __int8)ExitServer;
    if ( !ExitServer )
    {
      v14 = strlen(v32);
      do
      {
        v15 = send(a1, &v32[v13], v14 - v13, 0x4000);
        if ( v15 == -1 )
        {
          if ( *_errno_location() != 11 )
          {
LABEL_21:
            close(a1);
            V_LOCK();
            logfmt_raw(v30, 0x1000u, 0, "statusServiceThread send http response error");
            V_UNLOCK();
            v16 = g_zc;
            v22 = v30;
            v17 = 139;
            goto LABEL_23;
          }
          V_LOCK();
          logfmt_raw(v30, 0x1000u, 0, &unk_287284);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/common/general/http.c",
            165,
            "statusServiceThread",
            19,
            132,
            20,
            v30);
          usleep((__useconds_t)&elf_hash_chain[4398]);
        }
        else
        {
          v13 += v15;
          if ( v15 <= 0 )
            goto LABEL_21;
        }
        v14 = strlen(v32);
      }
      while ( v14 > v13 && !ExitServer );
    }
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, "send http data...");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/http.c",
      165,
      "statusServiceThread",
      19,
      153,
      20,
      v30);
    while ( 1 )
    {
      v20 = send(a1, &s[v6], (size_t)v23 - v6, 0);
      V_LOCK();
      logfmt_raw(v30, 0x1000u, 0, "send http data ret=%d", v20);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/common/general/http.c",
        165,
        "statusServiceThread",
        19,
        159,
        20,
        v30);
      if ( v20 <= 0 )
        break;
      v6 += v20;
      if ( (int)v23 <= v6 || ExitServer )
        goto LABEL_35;
    }
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, "statusServiceThread send http data error");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/http.c",
      165,
      "statusServiceThread",
      19,
      163,
      20,
      v30);
LABEL_35:
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, "one client disconnected!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/http.c",
      165,
      "statusServiceThread",
      19,
      173,
      20,
      v30);
    close(a1);
    return v6;
  }
}
