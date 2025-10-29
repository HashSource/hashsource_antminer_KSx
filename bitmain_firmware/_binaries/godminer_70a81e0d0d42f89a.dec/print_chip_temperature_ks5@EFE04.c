int __fastcall print_chip_temperature_ks5(int a1, int a2)
{
  int v2; // r3
  int v4; // r0
  int v5; // r3
  char *v6; // r4
  int v7; // r5
  char *v8; // r9
  char *v9; // r6
  int i; // r3
  int v11; // r0
  int v12; // t1
  unsigned int v13; // r3
  bool v14; // cc
  int v15; // r3
  size_t v16; // r1
  char *v17; // r0
  int v18; // t1
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // [sp+14h] [bp-1FD0h]
  char s[4028]; // [sp+24h] [bp-1FC0h] BYREF
  _BYTE v29[4100]; // [sp+FE0h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 248);
  s[0] = 0;
  v4 = snprintf(s, 0xFBCu, "chain %d, chip temperature array:", v2);
  v5 = 0;
  v6 = (char *)&unk_29348C;
  v7 = v4;
  while ( 2 )
  {
    v26 = v5;
    snprintf(&s[v7], 4028 - v7, (const char *)&word_298D34);
    ++v7;
    v8 = v6 + 44;
    v9 = v6;
    for ( i = v26; ; i = v12 )
    {
      v13 = i - 1;
      v14 = v13 > 0x5B;
      v15 = 44 * v13;
      v16 = 4028 - v7;
      v17 = &s[v7];
      if ( v14 )
        break;
      v11 = snprintf(v17, v16, "%3d ", *(_DWORD *)(*(_DWORD *)(a1 + 528) + v15));
      v7 += v11;
      if ( v8 == v9 )
        goto LABEL_8;
LABEL_4:
      v12 = *((_DWORD *)v9 + 1);
      v9 += 4;
    }
    v7 += 4;
    v11 = snprintf(v17, v16, "XXX ", v15);
    if ( v8 != v9 )
      goto LABEL_4;
LABEL_8:
    if ( &unk_2935DC != (_UNKNOWN *)v6 )
    {
      v18 = *((_DWORD *)v6 + 12);
      v6 += 48;
      v5 = v18;
      continue;
    }
    break;
  }
  switch ( a2 )
  {
    case 0:
      V_LOCK(v11);
      v23 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v23);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
        192,
        "print_chip_temperature_ks5",
        26,
        141,
        60,
        v29);
      return 0;
    case 1:
      V_LOCK(v11);
      v25 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v25);
      zlog(
        g_temp_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
        192,
        "print_chip_temperature_ks5",
        26,
        145,
        40,
        v29);
      return 0;
    case 2:
      printf(s);
      return 0;
    case 3:
      V_LOCK(v11);
      v24 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
        192,
        "print_chip_temperature_ks5",
        26,
        153,
        40,
        v29);
      return 0;
    default:
      V_LOCK(v11);
      v19 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v19);
      v20 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
              192,
              "print_chip_temperature_ks5",
              26,
              156,
              80,
              v29);
      V_LOCK(v20);
      v21 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v21);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
        192,
        "print_chip_temperature_ks5",
        26,
        157,
        60,
        v29);
      return 0;
  }
}
