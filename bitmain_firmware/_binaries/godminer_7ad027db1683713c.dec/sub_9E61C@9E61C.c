int __fastcall sub_9E61C(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _DWORD *v8; // r0
  const char *v9; // r7
  _DWORD *v10; // r0
  char *v11; // r8
  _DWORD *v12; // r0
  char *v13; // r9
  _DWORD *v14; // r0
  char *v15; // r10
  _DWORD *v16; // r0
  char *v17; // r11
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  int valid; // r4
  size_t v21; // r0
  void *v22; // r0
  void *v23; // r8
  void *v24; // r0
  void *v25; // r9
  size_t v26; // r0
  size_t v27; // r0
  size_t v28; // r0
  const char *v29; // r0
  size_t v30; // r0
  const char *v31; // r0
  void *v32; // r7
  void *v33; // r0
  size_t v34; // r10
  void *v35; // r0
  void *v36; // r7
  char *v37; // r0
  int v38; // r7
  int v39; // r1
  int v40; // r2
  int v41; // r3
  int v42; // r10
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r12
  int v48; // r2
  int v49; // r3
  void *v50; // r0
  signed int v51; // r7
  int v52; // r0
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int v56; // r7
  int v57; // r5
  int v58; // r0
  int v59; // r1
  int v60; // r2
  int v61; // r3
  int v62; // r2
  _DWORD *v63; // r0
  unsigned __int8 *v64; // r0
  int v65; // r10
  unsigned __int8 *v66; // r4
  void *v67; // r0
  int v68; // [sp+10h] [bp-104Ch]
  char *s; // [sp+14h] [bp-1048h]
  char *sa; // [sp+14h] [bp-1048h]
  char *sb; // [sp+14h] [bp-1048h]
  char *v72; // [sp+18h] [bp-1044h]
  bool v73; // [sp+1Ch] [bp-1040h]
  size_t n; // [sp+20h] [bp-103Ch]
  size_t v75; // [sp+24h] [bp-1038h]
  int v76; // [sp+2Ch] [bp-1030h] BYREF
  int v77; // [sp+30h] [bp-102Ch] BYREF
  int v78; // [sp+34h] [bp-1028h] BYREF
  int v79; // [sp+38h] [bp-1024h] BYREF
  int v80; // [sp+3Ch] [bp-1020h]
  int v81; // [sp+40h] [bp-101Ch]
  int v82; // [sp+44h] [bp-1018h]
  int v83; // [sp+48h] [bp-1014h]
  int v84; // [sp+4Ch] [bp-1010h]
  int v85; // [sp+50h] [bp-100Ch]
  int v86; // [sp+54h] [bp-1008h]
  char v87[4100]; // [sp+58h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v68 = (int)json_array_size(v5);
  v8 = json_array_get(a3, 0);
  v9 = (const char *)json_string_value(v8);
  v10 = json_array_get(a3, 1u);
  v11 = (char *)json_string_value(v10);
  v12 = json_array_get(a3, 2u);
  v13 = (char *)json_string_value(v12);
  v14 = json_array_get(a3, 3u);
  v15 = (char *)json_string_value(v14);
  v16 = json_array_get(a3, 5u);
  v17 = (char *)json_string_value(v16);
  v18 = json_array_get(a3, 6u);
  s = (char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v72 = (char *)json_string_value(v19);
  if ( json_array_get(a3, 8u) )
    v73 = *json_array_get(a3, 8u) == 5;
  else
    v73 = 0;
  if ( valid_ascii(v9)
    && valid_hex(v11)
    && valid_hex(v13)
    && valid_hex(v15)
    && valid_hex(v17)
    && valid_hex(s)
    && (valid = valid_hex(v72)) != 0 )
  {
    v21 = strlen(v11);
    hex2bin((int)&v79, (unsigned __int8 *)v11, v21 >> 1);
    n = strlen(v13) >> 1;
    v22 = calloc(n, 1u);
    v23 = v22;
    if ( !v22 )
    {
      V_LOCK();
      logfmt_raw(v87, 0x1000u, 0, "Failed to calloc pool coinbase1");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        179,
        "stratum_notify_ltc",
        18,
        56,
        100,
        v87);
      return 0;
    }
    hex2bin((int)v22, (unsigned __int8 *)v13, n);
    v75 = strlen(v15) >> 1;
    v24 = calloc(v75, 1u);
    v25 = v24;
    if ( v24 )
    {
      hex2bin((int)v24, (unsigned __int8 *)v15, v75);
      v26 = strlen(v17);
      hex2bin((int)&v76, (unsigned __int8 *)v17, v26 >> 1);
      v27 = strlen(s);
      hex2bin((int)&v77, (unsigned __int8 *)s, v27 >> 1);
      v28 = strlen(v72);
      hex2bin((int)&v78, (unsigned __int8 *)v72, v28 >> 1);
      if ( a2 == (int *)-456 )
      {
        valid = 0;
      }
      else
      {
        v29 = (const char *)a2[395];
        if ( v29 && !strcmp(v29, v9) )
        {
          V_LOCK();
          logfmt_raw(v87, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[395], v9);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            179,
            "stratum_notify_ltc",
            18,
            73,
            80,
            v87);
        }
        if ( strlen(v9) > 0x3F )
        {
          V_LOCK();
          v30 = strlen(v9);
          logfmt_raw(v87, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= %d", v9, v30, 64);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            179,
            "stratum_notify_ltc",
            18,
            76,
            80,
            v87);
        }
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
        v31 = v9;
        v32 = (void *)a2[395];
        a2[395] = (int)_strdup(v31);
        if ( v32 )
          free(v32);
        v33 = (void *)a2[75];
        if ( v33 )
          free(v33);
        v34 = a2[19];
        sa = (char *)(v34 + a2[21] + n);
        a2[74] = (int)&sa[v75];
        v35 = calloc((size_t)&sa[v75], 1u);
        v36 = v35;
        a2[75] = (int)v35;
        if ( v35 )
        {
          memcpy(v35, v23, n);
          memcpy((char *)v36 + n, (const void *)a2[20], v34);
          v37 = &sa[(_DWORD)v36];
          v38 = 0;
          memcpy(v37, v25, v75);
          a2[22] = n + v34;
          v39 = v80;
          v40 = v81;
          v41 = v82;
          v42 = v76;
          a2[25] = v79;
          a2[26] = v39;
          a2[27] = v40;
          a2[28] = v41;
          v43 = v83;
          v44 = v84;
          v45 = v85;
          v46 = v86;
          v47 = v78;
          a2[83] = v42;
          a2[31] = v45;
          v48 = v77;
          a2[32] = v46;
          a2[29] = v43;
          a2[30] = v44;
          v49 = a2[81];
          a2[86] = v48;
          a2[89] = v47;
          while ( v38 < v49 )
          {
            v50 = *(void **)(a2[82] + 4 * v38);
            if ( v50 )
            {
              free(v50);
              v49 = a2[81];
              *(_DWORD *)(a2[82] + 4 * v38) = 0;
            }
            ++v38;
          }
          v51 = 0;
          a2[81] = 0;
          if ( v68 )
          {
            sb = (char *)valid;
            a2[82] = (int)realloc((void *)a2[82], 4 * v68);
            while ( v51 < v68 )
            {
              v63 = json_array_get(v6, v51);
              v64 = (unsigned __int8 *)json_string_value(v63);
              v65 = a2[82];
              v66 = v64;
              v67 = malloc(0x20u);
              *(_DWORD *)(v65 + 4 * v51++) = v67;
              hex2bin((int)v67, v66, 32);
            }
            valid = (int)sb;
            a2[81] = v68;
          }
          memset(a2 + 116, 0, 0x50u);
          v52 = v79;
          v53 = v80;
          v54 = v81;
          v55 = v82;
          a2[116] = v76;
          v56 = v77;
          v57 = v78;
          a2[117] = v52;
          a2[118] = v53;
          a2[119] = v54;
          a2[120] = v55;
          v58 = v83;
          v59 = v84;
          v60 = v85;
          v61 = v86;
          a2[133] = v57;
          a2[134] = v56;
          a2[123] = v60;
          a2[124] = v61;
          v62 = *a2;
          a2[121] = v58;
          a2[122] = v59;
          *((_BYTE *)a2 + 444) = v73;
          *((_QWORD *)a2 + 57) = v62;
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
        }
        else
        {
          V_LOCK();
          logfmt_raw(v87, 0x1000u, 0, "Failed to calloc pool coinbase");
          valid = 0;
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            179,
            "stratum_notify_ltc",
            18,
            87,
            100,
            v87);
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
        }
      }
      free(v25);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v87, 0x1000u, 0, "Failed to calloc pool coinbase2");
      valid = 0;
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        179,
        "stratum_notify_ltc",
        18,
        63,
        100,
        v87);
    }
    free(v23);
    return valid;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v87, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      179,
      "stratum_notify_ltc",
      18,
      48,
      100,
      v87);
    return 0;
  }
}
