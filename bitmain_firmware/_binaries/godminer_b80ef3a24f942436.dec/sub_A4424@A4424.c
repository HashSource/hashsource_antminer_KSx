char *__fastcall sub_A4424(int a1, int *a2, _DWORD *a3)
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
  int valid; // r0
  int v21; // r0
  char *v22; // r4
  size_t v23; // r0
  void *v24; // r0
  void *v25; // r8
  void *v26; // r0
  void *v27; // r9
  size_t v28; // r0
  size_t v29; // r0
  size_t v30; // r0
  const char *v31; // r0
  int v32; // r0
  size_t v33; // r0
  int v34; // r0
  const char *v35; // r0
  void *v36; // r7
  void *v37; // r0
  size_t v38; // r10
  void *v39; // r0
  void *v40; // r7
  char *v41; // r0
  int v42; // r7
  int v43; // r1
  int v44; // r2
  int v45; // r3
  int v46; // r10
  int v47; // r0
  int v48; // r1
  int v49; // r2
  int v50; // r3
  int v51; // r12
  int v52; // r2
  int v53; // r3
  void *v54; // r0
  signed int v55; // r7
  int v56; // r0
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r7
  int v61; // r5
  int v62; // r0
  int v63; // r1
  int v64; // r2
  int v65; // r3
  int v66; // r2
  int v67; // r0
  _DWORD *v68; // r0
  unsigned __int8 *v69; // r0
  int v70; // r10
  unsigned __int8 *v71; // r4
  void *v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // [sp+10h] [bp-104Ch]
  char *s; // [sp+14h] [bp-1048h]
  char *sa; // [sp+14h] [bp-1048h]
  char *sb; // [sp+14h] [bp-1048h]
  char *v79; // [sp+18h] [bp-1044h]
  bool v80; // [sp+1Ch] [bp-1040h]
  size_t n; // [sp+20h] [bp-103Ch]
  size_t v82; // [sp+24h] [bp-1038h]
  int v83; // [sp+2Ch] [bp-1030h] BYREF
  int v84; // [sp+30h] [bp-102Ch] BYREF
  int v85; // [sp+34h] [bp-1028h] BYREF
  int v86; // [sp+38h] [bp-1024h] BYREF
  int v87; // [sp+3Ch] [bp-1020h]
  int v88; // [sp+40h] [bp-101Ch]
  int v89; // [sp+44h] [bp-1018h]
  int v90; // [sp+48h] [bp-1014h]
  int v91; // [sp+4Ch] [bp-1010h]
  int v92; // [sp+50h] [bp-100Ch]
  int v93; // [sp+54h] [bp-1008h]
  _BYTE v94[4100]; // [sp+58h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v75 = (int)json_array_size(v5);
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
  v79 = (char *)json_string_value(v19);
  if ( json_array_get(a3, 8u) )
    v80 = *json_array_get(a3, 8u) == 5;
  else
    v80 = 0;
  valid = valid_ascii(v9);
  if ( valid
    && (valid = valid_hex(v11)) != 0
    && (valid = valid_hex(v13)) != 0
    && (valid = valid_hex(v15)) != 0
    && (valid = valid_hex(v17)) != 0
    && (valid = valid_hex(s)) != 0
    && (valid = valid_hex(v79), (v22 = (char *)valid) != 0) )
  {
    v23 = strlen(v11);
    hex2bin((int)&v86, (unsigned __int8 *)v11, v23 >> 1);
    n = strlen(v13) >> 1;
    v24 = calloc(n, 1u);
    v25 = v24;
    if ( !v24 )
    {
      V_LOCK(0);
      v74 = logfmt_raw((int)v94, 0x1000u);
      V_UNLOCK(v74);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        179,
        "stratum_notify_ltc",
        18,
        56,
        100,
        v94);
      return 0;
    }
    hex2bin((int)v24, (unsigned __int8 *)v13, n);
    v82 = strlen(v15) >> 1;
    v26 = calloc(v82, 1u);
    v27 = v26;
    if ( v26 )
    {
      hex2bin((int)v26, (unsigned __int8 *)v15, v82);
      v28 = strlen(v17);
      hex2bin((int)&v83, (unsigned __int8 *)v17, v28 >> 1);
      v29 = strlen(s);
      hex2bin((int)&v84, (unsigned __int8 *)s, v29 >> 1);
      v30 = strlen(v79);
      hex2bin((int)&v85, (unsigned __int8 *)v79, v30 >> 1);
      if ( a2 == (int *)-456 )
      {
        v22 = 0;
      }
      else
      {
        v31 = (const char *)a2[395];
        if ( v31 && !strcmp(v31, v9) )
        {
          V_LOCK(0);
          v32 = logfmt_raw((int)v94, 0x1000u);
          V_UNLOCK(v32);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            179,
            "stratum_notify_ltc",
            18,
            73,
            80,
            v94);
        }
        v33 = strlen(v9);
        if ( v33 > 0x3F )
        {
          V_LOCK(v33);
          strlen(v9);
          v34 = logfmt_raw((int)v94, 0x1000u);
          V_UNLOCK(v34);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            179,
            "stratum_notify_ltc",
            18,
            76,
            80,
            v94);
        }
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
        v35 = v9;
        v36 = (void *)a2[395];
        a2[395] = (int)_strdup(v35);
        if ( v36 )
          free(v36);
        v37 = (void *)a2[75];
        if ( v37 )
          free(v37);
        v38 = a2[19];
        sa = (char *)(v38 + a2[21] + n);
        a2[74] = (int)&sa[v82];
        v39 = calloc((size_t)&sa[v82], 1u);
        v40 = v39;
        a2[75] = (int)v39;
        if ( v39 )
        {
          memcpy(v39, v25, n);
          memcpy((char *)v40 + n, (const void *)a2[20], v38);
          v41 = &sa[(_DWORD)v40];
          v42 = 0;
          memcpy(v41, v27, v82);
          a2[22] = n + v38;
          v43 = v87;
          v44 = v88;
          v45 = v89;
          v46 = v83;
          a2[25] = v86;
          a2[26] = v43;
          a2[27] = v44;
          a2[28] = v45;
          v47 = v90;
          v48 = v91;
          v49 = v92;
          v50 = v93;
          v51 = v85;
          a2[83] = v46;
          a2[31] = v49;
          v52 = v84;
          a2[32] = v50;
          a2[29] = v47;
          a2[30] = v48;
          v53 = a2[81];
          a2[86] = v52;
          a2[89] = v51;
          while ( v42 < v53 )
          {
            v54 = *(void **)(a2[82] + 4 * v42);
            if ( v54 )
            {
              free(v54);
              v53 = a2[81];
              *(_DWORD *)(a2[82] + 4 * v42) = 0;
            }
            ++v42;
          }
          v55 = 0;
          a2[81] = 0;
          if ( v75 )
          {
            sb = v22;
            a2[82] = (int)realloc((void *)a2[82], 4 * v75);
            while ( v55 < v75 )
            {
              v68 = json_array_get(v6, v55);
              v69 = (unsigned __int8 *)json_string_value(v68);
              v70 = a2[82];
              v71 = v69;
              v72 = malloc(0x20u);
              *(_DWORD *)(v70 + 4 * v55++) = v72;
              hex2bin((int)v72, v71, 32);
            }
            v22 = sb;
            a2[81] = v75;
          }
          memset(a2 + 116, 0, 0x50u);
          v56 = v86;
          v57 = v87;
          v58 = v88;
          v59 = v89;
          a2[116] = v83;
          v60 = v84;
          v61 = v85;
          a2[117] = v56;
          a2[118] = v57;
          a2[119] = v58;
          a2[120] = v59;
          v62 = v90;
          v63 = v91;
          v64 = v92;
          v65 = v93;
          a2[133] = v61;
          a2[134] = v60;
          a2[123] = v64;
          a2[124] = v65;
          v66 = *a2;
          a2[121] = v62;
          a2[122] = v63;
          *((_BYTE *)a2 + 444) = v80;
          *((_QWORD *)a2 + 57) = v66;
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
        }
        else
        {
          V_LOCK(0);
          v67 = logfmt_raw((int)v94, 0x1000u);
          v22 = 0;
          V_UNLOCK(v67);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            179,
            "stratum_notify_ltc",
            18,
            87,
            100,
            v94);
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
        }
      }
      free(v27);
    }
    else
    {
      V_LOCK(0);
      v73 = logfmt_raw((int)v94, 0x1000u);
      v22 = 0;
      V_UNLOCK(v73);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        179,
        "stratum_notify_ltc",
        18,
        63,
        100,
        v94);
    }
    free(v25);
    return v22;
  }
  else
  {
    V_LOCK(valid);
    v21 = logfmt_raw((int)v94, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      179,
      "stratum_notify_ltc",
      18,
      48,
      100,
      v94);
    return 0;
  }
}
