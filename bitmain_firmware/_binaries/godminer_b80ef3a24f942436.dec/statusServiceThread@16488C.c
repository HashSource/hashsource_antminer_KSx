int __fastcall statusServiceThread(int a1)
{
  int v2; // r7
  char *v3; // r10
  ssize_t v4; // r3
  char *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r11
  int v9; // r9
  int v10; // r9
  int v11; // r9
  int v12; // r9
  int v13; // r9
  int v14; // r0
  int v15; // r0
  int v16; // r0
  size_t v17; // r0
  unsigned int v18; // r9
  ssize_t v19; // r0
  int *v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r3
  int v25; // r0
  int v26; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r1
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  ssize_t v35; // r10
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int addr_len; // [sp+4h] [bp-7048h]
  char *v49; // [sp+Ch] [bp-7040h]
  struct sockaddr *v50; // [sp+14h] [bp-7038h]
  char v51[4]; // [sp+20h] [bp-702Ch] BYREF
  socklen_t v52; // [sp+24h] [bp-7028h] BYREF
  char needle[8]; // [sp+28h] [bp-7024h] BYREF
  _DWORD optval[2]; // [sp+30h] [bp-701Ch] BYREF
  struct sockaddr addr; // [sp+38h] [bp-7014h] BYREF
  char s[4096]; // [sp+48h] [bp-7004h] BYREF
  _BYTE v57[4088]; // [sp+1048h] [bp-6004h] BYREF
  char v58[10240]; // [sp+2048h] [bp-5004h] BYREF
  char v59[10244]; // [sp+4848h] [bp-2804h] BYREF

  optval[1] = 0;
  optval[0] = 3;
  memset(s, 0, sizeof(s));
  v52 = 0;
  v2 = 0;
  strcpy(v51, "\r\n");
  strcpy(needle, "\r\n\r\n");
  v3 = v58;
  memset(v58, 0, sizeof(v58));
  do
  {
    v6 = a1;
    if ( ExitServer )
      goto LABEL_6;
    v4 = recvfrom(a1, v3, 10239 - v2, 0, &addr, &v52);
    v2 += v4;
    if ( v4 <= 0 )
    {
      v28 = close(a1);
      V_LOCK(v28);
      v29 = logfmt_raw((int)v59, 0x1000u);
      V_UNLOCK(v29);
      v30 = 52;
LABEL_27:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/common/general/http.c",
        165,
        "statusServiceThread",
        19,
        v30,
        20,
        v59);
      return 0;
    }
    v3 = &v58[v2];
    if ( v2 > 10238 )
    {
      v31 = close(a1);
      V_LOCK(v31);
      v32 = logfmt_raw((int)v59, 0x1000u);
      V_UNLOCK(v32);
      v30 = 60;
      goto LABEL_27;
    }
    v5 = strstr(v58, needle);
  }
  while ( !v5 );
  V_LOCK(v5);
  v33 = logfmt_raw((int)v59, 0x1000u);
  V_UNLOCK(v33);
  v6 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/common/general/http.c",
         165,
         "statusServiceThread",
         19,
         67,
         20,
         v59);
LABEL_6:
  V_LOCK(v6);
  v7 = logfmt_raw((int)v59, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/common/general/http.c",
    165,
    "statusServiceThread",
    19,
    72,
    20,
    v59);
  if ( v58[0] != 71 || v58[1] != 69 || v58[2] != 84 || v58[3] != 32 )
  {
    v25 = close(a1);
    V_LOCK(v25);
    v26 = logfmt_raw((int)v59, 0x1000u);
    V_UNLOCK(v26);
    v24 = 79;
    v23 = g_zc;
    v49 = v59;
LABEL_23:
    addr_len = v24;
    LOWORD(v24) = (unsigned __int16)"statusServiceThread";
    goto LABEL_24;
  }
  if ( setsockopt(a1, 1, 21, optval, 8u) )
  {
    v42 = close(a1);
    V_LOCK(v42);
    v43 = logfmt_raw((int)v59, 0x1000u);
    V_UNLOCK(v43);
    v23 = g_zc;
    v49 = v59;
    LOWORD(v24) = 29960;
    addr_len = 87;
LABEL_24:
    HIWORD(v24) = (unsigned int)"statusServiceThread" >> 16;
    zlog(
      v23,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/http.c",
      165,
      v24,
      19,
      addr_len,
      20,
      v49);
    return 0;
  }
  v8 = setsockopt(a1, 1, 20, optval, 8u);
  if ( v8 )
  {
    v44 = close(a1);
    V_LOCK(v44);
    v45 = logfmt_raw((int)v59, 0x1000u);
    V_UNLOCK(v45);
    v23 = g_zc;
    v49 = v59;
    LOWORD(v24) = 29960;
    addr_len = 95;
    goto LABEL_24;
  }
  if ( http_test_case )
  {
    if ( !((int (__fastcall *)(char *, char *, int))http_test_case)(v58, s, 4096) )
      goto LABEL_14;
    v46 = close(a1);
    V_LOCK(v46);
    v47 = logfmt_raw((int)v59, 0x1000u);
    V_UNLOCK(v47);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/http.c",
      165,
      "statusServiceThread",
      19,
      108,
      20,
      v59);
    return 0;
  }
  else
  {
    V_LOCK(0);
    v41 = logfmt_raw((int)v59, 0x1000u);
    V_UNLOCK(v41);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/http.c",
      165,
      "statusServiceThread",
      19,
      103,
      20,
      v59);
LABEL_14:
    v50 = (struct sockaddr *)strlen(s);
    v9 = sprintf(v59, "HTTP/1.0  200  OK%s", v51);
    v10 = v9 + sprintf(&v59[v9], "Server: SearchFreqServer%s", v51);
    v11 = v10 + sprintf(&v59[v10], "Cache-Control: no-cache%s", v51);
    v12 = v11 + sprintf(&v59[v11], "Pragma: no-cache%s", v51);
    v13 = v12 + sprintf(&v59[v12], "Content-Type: text/plain%s", v51);
    v14 = sprintf(&v59[v13], "Content-Length: %d%s", v50, v51);
    v15 = sprintf(&v59[v13 + v14], "Connection: Keep-Alive%s", needle);
    V_LOCK(v15);
    v16 = logfmt_raw((int)v57, 0x1000u);
    V_UNLOCK(v16);
    v17 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/common/general/http.c",
            165,
            "statusServiceThread",
            19,
            123,
            20,
            v57);
    v18 = (unsigned __int8)ExitServer;
    if ( !ExitServer )
    {
      v17 = strlen(v59);
      do
      {
        v19 = send(a1, &v59[v18], v17 - v18, 0x4000);
        if ( v19 == -1 )
        {
          v20 = _errno_location();
          if ( *v20 != 11 )
          {
LABEL_21:
            v21 = close(a1);
            V_LOCK(v21);
            v22 = logfmt_raw((int)v57, 0x1000u);
            V_UNLOCK(v22);
            v23 = g_zc;
            v49 = v57;
            v24 = 139;
            goto LABEL_23;
          }
          V_LOCK(v20);
          v40 = logfmt_raw((int)v57, 0x1000u);
          V_UNLOCK(v40);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/common/general/http.c",
            165,
            "statusServiceThread",
            19,
            132,
            20,
            v57);
          usleep((__useconds_t)&elf_hash_chain[4398]);
        }
        else
        {
          v18 += v19;
          if ( v19 <= 0 )
            goto LABEL_21;
        }
        v17 = strlen(v59);
      }
      while ( v17 > v18 && !ExitServer );
    }
    V_LOCK(v17);
    v34 = logfmt_raw((int)v57, 0x1000u);
    V_UNLOCK(v34);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/http.c",
      165,
      "statusServiceThread",
      19,
      153,
      20,
      v57);
    while ( 1 )
    {
      v35 = send(a1, &s[v8], (size_t)v50 - v8, 0);
      V_LOCK(v35);
      v36 = logfmt_raw((int)v57, 0x1000u);
      V_UNLOCK(v36);
      v37 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/common/general/http.c",
              165,
              "statusServiceThread",
              19,
              159,
              20,
              v57);
      if ( v35 <= 0 )
        break;
      v8 += v35;
      if ( (int)v50 <= v8 || ExitServer )
        goto LABEL_35;
    }
    V_LOCK(v37);
    v38 = logfmt_raw((int)v57, 0x1000u);
    V_UNLOCK(v38);
    v37 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/common/general/http.c",
            165,
            "statusServiceThread",
            19,
            163,
            20,
            v57);
LABEL_35:
    V_LOCK(v37);
    v39 = logfmt_raw((int)v57, 0x1000u);
    V_UNLOCK(v39);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/http.c",
      165,
      "statusServiceThread",
      19,
      173,
      20,
      v57);
    close(a1);
    return v8;
  }
}
