int __fastcall read_temperature_ks5(int a1, _DWORD *a2)
{
  int v3; // r2
  int v4; // r1
  int v5; // r2
  _DWORD *v6; // r3
  _DWORD *v7; // r2
  void (__fastcall *v8)(int, __int128 *); // r3
  void (__fastcall *v9)(int, __int128 *); // r3
  int v10; // r6
  _WORD *v11; // r10
  int v12; // r0
  int v13; // r3
  int v14; // r2
  int v15; // r6
  _WORD *v16; // r5
  int v17; // r3
  int v18; // r0
  unsigned int v19; // r3
  unsigned int v20; // r1
  signed int v21; // r1
  unsigned int v22; // r3
  float *v23; // r1
  double v24; // d16
  float v25; // s15
  int v26; // r2
  int v27; // r6
  float *v28; // r5
  int v29; // r7
  float v30; // s15
  int v31; // r3
  pthread_mutex_t *v32; // r0
  int v33; // r0
  int v34; // r0
  _DWORD *v35; // r3
  _DWORD *v36; // r6
  int v37; // r7
  int *v38; // r9
  int v39; // r3
  int (__fastcall *v40)(int, int *, int *, _DWORD, int, int, int, int, _DWORD, int, int, int, const char *, int, int, int); // r8
  int v41; // r0
  int v42; // r1
  int v43; // r2
  int v44; // r3
  int v45; // r0
  int v46; // r0
  int v48; // r0
  int v49; // r0
  _DWORD *v50; // r6
  _DWORD *v51; // r9
  int v52; // r7
  int v53; // r3
  int v54; // r3
  int v55; // r0
  int v56; // r3
  int v57; // [sp+4h] [bp-274h]
  int v58; // [sp+10h] [bp-268h]
  int v59; // [sp+14h] [bp-264h]
  int v60; // [sp+18h] [bp-260h]
  int v61; // [sp+1Ch] [bp-25Ch]
  const char *v62; // [sp+20h] [bp-258h]
  int v63; // [sp+24h] [bp-254h]
  int v64; // [sp+28h] [bp-250h]
  int v65; // [sp+2Ch] [bp-24Ch]
  int v66; // [sp+30h] [bp-248h]
  int v67; // [sp+34h] [bp-244h]
  int v68; // [sp+38h] [bp-240h]
  int s; // [sp+40h] [bp-238h]
  _DWORD *v71; // [sp+48h] [bp-230h]
  int v72; // [sp+50h] [bp-228h] BYREF
  int v73; // [sp+54h] [bp-224h] BYREF
  int v74; // [sp+58h] [bp-220h] BYREF
  int v75; // [sp+5Ch] [bp-21Ch] BYREF
  int v76; // [sp+60h] [bp-218h] BYREF
  int v77; // [sp+64h] [bp-214h] BYREF
  char v78[16]; // [sp+68h] [bp-210h] BYREF
  int v79; // [sp+7Ch] [bp-1FCh]
  int v80; // [sp+80h] [bp-1F8h]
  int v81; // [sp+84h] [bp-1F4h]
  char v82[4]; // [sp+88h] [bp-1F0h] BYREF
  int v83; // [sp+9Ch] [bp-1DCh]
  int v84; // [sp+A0h] [bp-1D8h]
  int v85; // [sp+A4h] [bp-1D4h]
  _DWORD v86[8]; // [sp+A8h] [bp-1D0h] BYREF
  __int128 v87; // [sp+C8h] [bp-1B0h] BYREF
  int v88; // [sp+DCh] [bp-19Ch]
  int v89; // [sp+E0h] [bp-198h]
  int v90; // [sp+E4h] [bp-194h]
  char v91[16]; // [sp+E8h] [bp-190h] BYREF
  int v92; // [sp+F8h] [bp-180h]
  int v93; // [sp+FCh] [bp-17Ch]
  int v94; // [sp+100h] [bp-178h]
  int v95; // [sp+104h] [bp-174h]
  _DWORD v96[92]; // [sp+108h] [bp-170h] BYREF
  unsigned __int16 v97; // [sp+278h] [bp+0h] BYREF
  char v98; // [sp+27Ah] [bp+2h]
  char v99; // [sp+27Bh] [bp+3h]

  v3 = *(unsigned __int8 *)(a1 + 252);
  v4 = *(_DWORD *)(a1 + 392);
  v71 = *(_DWORD **)(a1 + 384);
  v72 = -64;
  v66 = v4;
  v73 = -64;
  v74 = -64;
  v75 = -64;
  if ( !v3 )
  {
    s = 0;
    if ( v4 > 0 )
      goto LABEL_32;
    return s;
  }
  v67 = 3;
  do
  {
    v5 = *(_DWORD *)(a1 + 332);
    v76 = 1;
    v86[0] = 0;
    if ( v5 > 0 )
    {
      v6 = v96;
      v7 = &v96[v5];
      do
        *v6++ = -1031798784;
      while ( v6 != v7 );
    }
    v8 = *(void (__fastcall **)(int, __int128 *))(a1 + 264);
    *(_QWORD *)&v87 = 285212672;
    *((_QWORD *)&v87 + 1) = 12582913;
    v8(a1, &v87);
    usleep(0x2710u);
    *(_QWORD *)((char *)&v87 + 4) = 0;
    v9 = *(void (__fastcall **)(int, __int128 *))(a1 + 264);
    *((_QWORD *)&v87 + 1) = 12582913;
    LODWORD(v87) = 285343744;
    v9(a1, &v87);
    usleep(0x2710u);
    v10 = *(_DWORD *)(a1 + 332);
    *(_QWORD *)&v87 = 0;
    *((_QWORD *)&v87 + 1) = 12845057;
    v11 = calloc(12 * v10, 1u);
    v12 = (*(int (__fastcall **)(int, __int128 *, int, _WORD *, _DWORD *, int, int, _DWORD, int, int, int, int, const char *, int, int, int))(a1 + 284))(
            a1,
            &v87,
            v10,
            v11,
            v86,
            v57,
            1000,
            0,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65);
    v13 = v86[0];
    v14 = *(_DWORD *)(a1 + 332);
    if ( v14 < v86[0] )
      v13 = *(_DWORD *)(a1 + 332);
    if ( v13 <= 0 )
    {
      v68 = 0;
    }
    else
    {
      v15 = 0;
      v68 = 0;
      v16 = v11;
      do
      {
        if ( v16[3] == 196 )
        {
          V_LOCK(v12);
          V_INT((int)v91, "chain");
          v63 = *((unsigned __int8 *)v16 + 4);
          v62 = "[MISC CTRL] asic %02x, reg %02x state %08x";
          v64 = (unsigned __int16)v16[3];
          v65 = *(_DWORD *)v16;
          v58 = v92;
          v59 = v93;
          v60 = v94;
          v61 = v95;
          v18 = logfmt_raw((int)&v97, 0x1000u);
          V_UNLOCK(v18);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
            192,
            "update_chip_temp_ks5",
            20,
            1081,
            20,
            &v97);
          v19 = *(_DWORD *)v16;
          v12 = HIWORD(*(_DWORD *)v16);
          if ( (*(_DWORD *)v16 & 0x80) != 0 )
          {
            v20 = *((unsigned __int8 *)v16 + 4);
            v14 = *(_DWORD *)(a1 + 332);
            v98 = BYTE1(*(_DWORD *)v16);
            v21 = v20 >> 1;
            v99 = v19;
            v22 = HIBYTE(v19);
            if ( v21 >= v14 - 1 )
              v21 = v14 - 1;
            LOBYTE(v97) = v22;
            v23 = (float *)&v96[v21];
            HIBYTE(v97) = v12;
            v24 = (float)(*v23 + 64.0);
            if ( v24 < 0.1 && v24 > -0.1 )
            {
              v12 = ++v68;
              v25 = ((double)v97 - 0.5) * 662.88 * 0.000244140625 - 287.48;
              *v23 = v25;
            }
          }
          else
          {
            v14 = *(_DWORD *)(a1 + 332);
          }
        }
        v17 = v86[0];
        ++v15;
        v16 += 6;
        if ( v14 < v86[0] )
          v17 = v14;
      }
      while ( v15 < v17 );
    }
    (*(void (__fastcall **)(int, int))(a1 + 208))(a1, 1);
    v26 = *(_DWORD *)(a1 + 332);
    if ( v26 - v68 > 3 )
      v76 = 0;
    if ( v26 > 0 )
    {
      v27 = 0;
      v28 = (float *)v96;
      v29 = 0;
      do
      {
        ++v29;
        pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + v27 + 20));
        v30 = *v28++;
        v31 = *(_DWORD *)(a1 + 528);
        v32 = (pthread_mutex_t *)(v31 + v27 + 20);
        *(_DWORD *)(v31 + v27) = (int)v30;
        v27 += 44;
        pthread_mutex_unlock(v32);
      }
      while ( v29 < *(_DWORD *)(a1 + 332) );
    }
    free(v11);
    if ( v76 )
    {
      v49 = calc_chip_temp_min_max_avg_ks5(a1, &v73, &v74, &v75, &v76);
      if ( v66 <= 0 )
        return 0;
      v50 = a2;
      v51 = v71;
      v52 = 0;
      s = 0;
      do
      {
        if ( v76 )
        {
          if ( a2 )
          {
            v53 = v51[3];
            if ( v53 )
            {
              if ( v53 == 1 )
              {
                v56 = v74;
                v50[2] = v75;
                v50[1] = v56;
              }
            }
            else
            {
              v54 = v73;
              v50[2] = v75;
              v50[1] = v54;
            }
          }
        }
        else
        {
          V_LOCK(v49);
          s = 4;
          V_INT((int)v82, "chain");
          v62 = "calc temp failed, sensors may occur errors";
          v59 = v83;
          v60 = v84;
          v61 = v85;
          v55 = logfmt_raw((int)&v97, 0x1000u);
          V_UNLOCK(v55);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
            192,
            "read_temperature_ks5",
            20,
            1305,
            100,
            &v97);
          v49 = (*(int (__fastcall **)(int, int))(a1 + 208))(a1, 3);
          v50[2] = -64;
          v50[1] = -64;
        }
        ++v52;
        v50 += 3;
        v51 += 6;
      }
      while ( v66 != v52 );
LABEL_32:
      v36 = v71;
      v37 = 0;
      v38 = a2;
      while ( 1 )
      {
        v40 = *(int (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD, int, int, int, const char *, int, int, int))(a1 + 152);
        v41 = v36[1];
        v42 = v36[2];
        v43 = v36[3];
        v44 = v36[4];
        v77 = 0;
        v45 = v40(a1, &v72, &v77, *v36, v41, v42, v43, v44, v36[5], v59, v60, v61, v62, v63, v64, v65);
        if ( !v77 )
          break;
        v39 = v72;
        if ( v72 < -63 )
        {
          v72 = -64;
          V_LOCK(v45);
          V_INT((int)v86, "chain");
          v64 = v36[5];
          v62 = "got uneffective temp, sensor[%d], addr:%02x";
          v63 = *v36;
          v59 = v86[5];
          v60 = v86[6];
          v61 = v86[7];
          v48 = logfmt_raw((int)&v97, 0x1000u);
          V_UNLOCK(v48);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
            192,
            "read_temperature_ks5",
            20,
            1327,
            100,
            &v97);
          goto LABEL_37;
        }
LABEL_34:
        *v38 = v39;
        v38 += 3;
        ++v37;
        v36 += 6;
        if ( v66 <= v37 )
          return s;
      }
      v72 = -64;
      V_LOCK(v45);
      V_INT((int)&v87, "chain");
      v64 = v36[5];
      v63 = *v36;
      v62 = "read sensor failed, sensor[%d], addr:%02x";
      v59 = v88;
      v60 = v89;
      v61 = v90;
      v46 = logfmt_raw((int)&v97, 0x1000u);
      V_UNLOCK(v46);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
        192,
        "read_temperature_ks5",
        20,
        1334,
        100,
        &v97);
LABEL_37:
      v39 = v72;
      goto LABEL_34;
    }
    --v67;
  }
  while ( v67 );
  v33 = (*(int (__fastcall **)(int))(a1 + 220))(a1);
  V_LOCK(v33);
  V_INT((int)v78, "chain");
  v62 = "failed getting temp";
  v59 = v79;
  v60 = v80;
  v61 = v81;
  v34 = logfmt_raw((int)&v97, 0x1000u);
  V_UNLOCK(v34);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "read_temperature_ks5",
    20,
    1274,
    100,
    &v97);
  if ( v66 > 0 )
  {
    v35 = a2;
    do
    {
      v35[2] = -64;
      v35 += 3;
      *(v35 - 2) = -64;
    }
    while ( &a2[3 * v66] != v35 );
    s = 4;
    goto LABEL_32;
  }
  return 4;
}
