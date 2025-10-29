int __fastcall read_temperature_ks5(int a1, int *a2)
{
  bool v3; // zf
  int v4; // r2
  _DWORD *v5; // r3
  _DWORD *v6; // r2
  void (__fastcall *v7)(int, __int128 *); // r3
  void (__fastcall *v8)(int, __int128 *); // r3
  int v9; // r6
  _WORD *v10; // r10
  int v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r6
  _WORD *v15; // r5
  int v16; // r3
  int v17; // r0
  unsigned int v18; // r3
  unsigned int v19; // r1
  signed int v20; // r1
  unsigned int v21; // r3
  float *v22; // r1
  double v23; // d16
  float v24; // s15
  int v25; // r2
  int v26; // r6
  float *v27; // r5
  int v28; // r7
  float v29; // s15
  int v30; // r3
  pthread_mutex_t *v31; // r0
  int v32; // r0
  int v33; // r0
  int *v34; // r9
  int v35; // r2
  _DWORD *v37; // r6
  int *v38; // r9
  int v39; // r7
  int v40; // r3
  int v41; // r0
  int v42; // r0
  int v43; // r0
  _DWORD *v44; // r6
  int v45; // r5
  int v46; // r3
  int v47; // r0
  int v48; // r3
  int *v49; // r2
  int *v50; // r3
  int v51; // r2
  int v52; // r0
  int v53; // [sp+4h] [bp-274h]
  int v54; // [sp+10h] [bp-268h]
  int v55; // [sp+14h] [bp-264h]
  int v56; // [sp+18h] [bp-260h]
  int v57; // [sp+1Ch] [bp-25Ch]
  const char *v58; // [sp+20h] [bp-258h]
  int v59; // [sp+24h] [bp-254h]
  int v60; // [sp+28h] [bp-250h]
  int v61; // [sp+2Ch] [bp-24Ch]
  int v62; // [sp+30h] [bp-248h]
  int v63; // [sp+34h] [bp-244h]
  int v64; // [sp+38h] [bp-240h]
  _DWORD *v66; // [sp+4Ch] [bp-22Ch]
  int v67; // [sp+54h] [bp-224h] BYREF
  int v68; // [sp+58h] [bp-220h] BYREF
  int v69; // [sp+5Ch] [bp-21Ch] BYREF
  int v70; // [sp+60h] [bp-218h] BYREF
  int v71; // [sp+64h] [bp-214h] BYREF
  char v72[32]; // [sp+68h] [bp-210h] BYREF
  int v73; // [sp+88h] [bp-1F0h] BYREF
  _DWORD v74[8]; // [sp+A8h] [bp-1D0h] BYREF
  __int128 v75; // [sp+C8h] [bp-1B0h] BYREF
  int v76; // [sp+DCh] [bp-19Ch]
  int v77; // [sp+E0h] [bp-198h]
  int v78; // [sp+E4h] [bp-194h]
  char v79[16]; // [sp+E8h] [bp-190h] BYREF
  int v80; // [sp+F8h] [bp-180h]
  int v81; // [sp+FCh] [bp-17Ch]
  int v82; // [sp+100h] [bp-178h]
  int v83; // [sp+104h] [bp-174h]
  _DWORD v84[92]; // [sp+108h] [bp-170h] BYREF
  unsigned __int16 v85; // [sp+278h] [bp+0h] BYREF
  char v86; // [sp+27Ah] [bp+2h]
  char v87; // [sp+27Bh] [bp+3h]

  v3 = *(_BYTE *)(a1 + 248) == 0;
  v66 = *(_DWORD **)(a1 + 380);
  v62 = *(_DWORD *)(a1 + 388);
  v67 = -64;
  v68 = -64;
  v69 = -64;
  v70 = -64;
  if ( v3 )
  {
    if ( v62 <= 0 )
      return 0;
LABEL_33:
    v37 = v66;
    v38 = a2;
    v39 = 0;
    while ( 1 )
    {
      v73 = 0;
      v41 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, const char *, int, int, int))(a1 + 152))(
              a1,
              &v67,
              &v73,
              *v37,
              v37[1],
              v37[2],
              v37[3],
              v37[4],
              v37[5],
              v55,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
      if ( !v73 )
        break;
      v40 = v67;
      if ( v67 < -63 )
      {
        v67 = -64;
        V_LOCK(v41);
        V_INT((int)v74, "chain");
        v60 = v37[5];
        v58 = "got uneffective temp, sensor[%d], addr:%02x";
        v59 = *v37;
        v55 = v74[5];
        v56 = v74[6];
        v57 = v74[7];
        v43 = logfmt_raw((int)&v85, 0x1000u);
        V_UNLOCK(v43);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
          192,
          "read_temperature_ks5",
          20,
          1268,
          100,
          &v85);
        goto LABEL_38;
      }
LABEL_35:
      *v38 = v40;
      v38 += 3;
      ++v39;
      v37 += 6;
      if ( v62 <= v39 )
        return 0;
    }
    v67 = -64;
    V_LOCK(v41);
    V_INT((int)&v75, "chain");
    v60 = v37[5];
    v59 = *v37;
    v58 = "read sensor failed, sensor[%d], addr:%02x";
    v55 = v76;
    v56 = v77;
    v57 = v78;
    v42 = logfmt_raw((int)&v85, 0x1000u);
    V_UNLOCK(v42);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
      192,
      "read_temperature_ks5",
      20,
      1275,
      100,
      &v85);
LABEL_38:
    v40 = v67;
    goto LABEL_35;
  }
  v63 = 3;
  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 + 328);
    v71 = 1;
    v74[0] = 0;
    if ( v4 > 0 )
    {
      v5 = v84;
      v6 = &v84[v4];
      do
        *v5++ = -1031798784;
      while ( v5 != v6 );
    }
    v7 = *(void (__fastcall **)(int, __int128 *))(a1 + 260);
    *(_QWORD *)&v75 = 285212672;
    *((_QWORD *)&v75 + 1) = 12582913;
    v7(a1, &v75);
    usleep(0x2710u);
    *(_QWORD *)((char *)&v75 + 4) = 0;
    v8 = *(void (__fastcall **)(int, __int128 *))(a1 + 260);
    *((_QWORD *)&v75 + 1) = 12582913;
    LODWORD(v75) = 285343744;
    v8(a1, &v75);
    usleep(0x2710u);
    v9 = *(_DWORD *)(a1 + 328);
    *(_QWORD *)&v75 = 0;
    *((_QWORD *)&v75 + 1) = 12845057;
    v10 = calloc(12 * v9, 1u);
    v11 = (*(int (__fastcall **)(int, __int128 *, int, _WORD *, _DWORD *, int, int, _DWORD, int, int, int, int, const char *, int, int, int))(a1 + 280))(
            a1,
            &v75,
            v9,
            v10,
            v74,
            v53,
            1000,
            0,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    v12 = v74[0];
    v13 = *(_DWORD *)(a1 + 328);
    if ( v74[0] >= v13 )
      v12 = *(_DWORD *)(a1 + 328);
    if ( v12 <= 0 )
    {
      v64 = 0;
    }
    else
    {
      v14 = 0;
      v64 = 0;
      v15 = v10;
      do
      {
        if ( v15[3] == 196 )
        {
          V_LOCK(v11);
          V_INT((int)v79, "chain");
          v59 = *((unsigned __int8 *)v15 + 4);
          v58 = "[MISC CTRL] asic %02x, reg %02x state %08x";
          v60 = (unsigned __int16)v15[3];
          v61 = *(_DWORD *)v15;
          v54 = v80;
          v55 = v81;
          v56 = v82;
          v57 = v83;
          v17 = logfmt_raw((int)&v85, 0x1000u);
          V_UNLOCK(v17);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
            192,
            "update_chip_temp_ks5",
            20,
            1046,
            20,
            &v85);
          v18 = *(_DWORD *)v15;
          v11 = HIWORD(*(_DWORD *)v15);
          if ( (*(_DWORD *)v15 & 0x80) != 0 )
          {
            v19 = *((unsigned __int8 *)v15 + 4);
            v13 = *(_DWORD *)(a1 + 328);
            v86 = BYTE1(*(_DWORD *)v15);
            v20 = v19 >> 1;
            v87 = v18;
            v21 = HIBYTE(v18);
            if ( v20 >= v13 - 1 )
              v20 = v13 - 1;
            LOBYTE(v85) = v21;
            v22 = (float *)&v84[v20];
            HIBYTE(v85) = v11;
            v23 = (float)(*v22 + 64.0);
            if ( v23 < 0.1 && v23 > -0.1 )
            {
              v11 = ++v64;
              v24 = ((double)v85 - 0.5) * 662.88 * 0.000244140625 - 287.48;
              *v22 = v24;
            }
          }
          else
          {
            v13 = *(_DWORD *)(a1 + 328);
          }
        }
        v16 = v74[0];
        ++v14;
        v15 += 6;
        if ( v13 < v74[0] )
          v16 = v13;
      }
      while ( v14 < v16 );
    }
    (*(void (__fastcall **)(int, int))(a1 + 204))(a1, 1);
    v25 = *(_DWORD *)(a1 + 328);
    if ( v25 - v64 > 3 )
      v71 = 0;
    if ( v25 > 0 )
    {
      v26 = 0;
      v27 = (float *)v84;
      v28 = 0;
      do
      {
        ++v28;
        pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 520) + v26 + 20));
        v29 = *v27++;
        v30 = *(_DWORD *)(a1 + 520);
        v31 = (pthread_mutex_t *)(v30 + v26 + 20);
        *(_DWORD *)(v30 + v26) = (int)v29;
        v26 += 44;
        pthread_mutex_unlock(v31);
      }
      while ( v28 < *(_DWORD *)(a1 + 328) );
    }
    free(v10);
    if ( v71 )
      break;
    if ( !--v63 )
    {
      V_LOCK(v32);
      V_INT((int)v72, "chain");
      v33 = logfmt_raw((int)&v85, 0x1000u);
      V_UNLOCK(v33);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
        192,
        "read_temperature_ks5",
        20,
        1223,
        100,
        &v85);
      if ( v62 > 0 )
        goto LABEL_29;
      return 4;
    }
  }
  if ( v62 > 0 )
  {
    v44 = v66;
    v45 = 0;
    while ( 1 )
    {
      v47 = calc_chip_temp_min_max_avg_ks5(a1, &v68, &v69, &v70, &v71);
      if ( !v71 )
        break;
      if ( a2 )
      {
        v48 = v44[3];
        v49 = &a2[3 * v45];
        if ( v48 )
        {
          if ( v48 == 1 )
          {
            v50 = &a2[3 * v45];
            v51 = v69;
            v50[2] = v70;
            v50[1] = v51;
          }
        }
        else
        {
          v46 = v68;
          v49[2] = v70;
          v49[1] = v46;
        }
      }
      ++v45;
      v44 += 6;
      if ( v62 == v45 )
        goto LABEL_33;
    }
    V_LOCK(v47);
    V_INT((int)&v73, "chain");
    v52 = logfmt_raw((int)&v85, 0x1000u);
    V_UNLOCK(v52);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
      192,
      "read_temperature_ks5",
      20,
      1249,
      100,
      &v85);
LABEL_29:
    v34 = a2;
    v35 = 0;
    do
    {
      ++v35;
      *v34 = -64;
      v34[2] = -64;
      v34[1] = -64;
      v34 += 3;
    }
    while ( v62 > v35 );
    return 4;
  }
  return 0;
}
