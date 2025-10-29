int __fastcall get_chip_dag_packet_num(int a1)
{
  int v2; // r4
  unsigned int v3; // r0
  int v4; // r0
  int v5; // r7
  unsigned int v6; // r0
  unsigned int v7; // r10
  int v8; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r4
  char *v14; // r7
  int v15; // r10
  unsigned int v16; // r3
  unsigned __int64 v17; // d8
  __int64 v18; // d8
  int v19; // r0
  int v20; // r0
  _DWORD *ptr; // [sp+3Ch] [bp-10F0h]
  char *s[2]; // [sp+40h] [bp-10ECh]
  char *v23; // [sp+48h] [bp-10E4h]
  int v24; // [sp+4Ch] [bp-10E0h]
  int v25; // [sp+64h] [bp-10C8h]
  char v26[32]; // [sp+68h] [bp-10C4h] BYREF
  int v27; // [sp+88h] [bp-10A4h] BYREF
  char v28[32]; // [sp+A8h] [bp-1084h] BYREF
  int v29; // [sp+C8h] [bp-1064h] BYREF
  char v30[32]; // [sp+E8h] [bp-1044h] BYREF
  int v31; // [sp+108h] [bp-1024h] BYREF
  _BYTE v32[4100]; // [sp+128h] [bp-1004h] BYREF

  v2 = 0;
  ptr = malloc(0x60u);
  v23 = (char *)malloc(0x60u);
  while ( 1 )
  {
    v3 = sub_D27C4(a1, 86, ptr);
    if ( v3 == 8 )
      break;
    V_LOCK(v3);
    V_INT((int)v26, "chain");
    ++v2;
    v4 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
      192,
      "get_chip_dag_packet_num",
      23,
      1594,
      100,
      v32);
    if ( v2 == 5 )
    {
      v25 = 12;
      goto LABEL_6;
    }
    usleep(0x2710u);
  }
  v25 = 0;
LABEL_6:
  v5 = 0;
  while ( 1 )
  {
    v6 = sub_D27C4(a1, 83, v23);
    v7 = v6;
    if ( v6 == 8 )
    {
      v24 = 8;
      goto LABEL_14;
    }
    V_LOCK(v6);
    V_INT((int)&v27, "chain");
    ++v5;
    v8 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
      192,
      "get_chip_dag_packet_num",
      23,
      1608,
      100,
      v32);
    if ( v5 == 5 )
      break;
    usleep(0x2710u);
  }
  v24 = v7;
  if ( !v7 )
  {
LABEL_11:
    v25 = 12;
    goto LABEL_12;
  }
  V_LOCK(10000);
  v25 = 12;
  V_INT((int)v28, "chain");
  v10 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v10);
  v6 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
         192,
         "get_chip_dag_packet_num",
         23,
         1621,
         100,
         v32);
LABEL_14:
  *(_QWORD *)s = vshld_n_s64(vshrd_n_u64(vdup_n_s32(bswap32(*ptr) & 0x7FFFFFFF).n64_u64[0], 0x20u), 6u);
  if ( *(_QWORD *)s )
  {
    V_LOCK(v6);
    V_INT((int)v30, "chain");
    v11 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v11);
    v12 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
            192,
            "get_chip_dag_packet_num",
            23,
            1633,
            60,
            v32);
    if ( v24 > 1 )
    {
      v13 = ptr;
      v14 = v23;
      v15 = 1;
      do
      {
        ++v15;
        v14 += 12;
        v16 = bswap32(v13[3]);
        v13 += 3;
        v17 = vdup_n_s32(v16 & 0x7FFFFFFF).n64_u64[0];
        V_LOCK(v12);
        v18 = vshld_n_s64(vshrd_n_u64(v17, 0x20u), 6u);
        V_INT((int)&v31, "chain");
        v19 = logfmt_raw((int)v32, 0x1000u);
        V_UNLOCK(v19);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
          192,
          "get_chip_dag_packet_num",
          23,
          1639,
          60,
          v32);
        v12 = v18;
        if ( *(_QWORD *)s != v18 )
          goto LABEL_11;
      }
      while ( v15 != v24 );
    }
  }
  else
  {
    V_LOCK(v6);
    v25 = 12;
    V_INT((int)&v29, "chain");
    v20 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
      192,
      "get_chip_dag_packet_num",
      23,
      1629,
      100,
      v32);
  }
LABEL_12:
  free(ptr);
  free(v23);
  return v25;
}
