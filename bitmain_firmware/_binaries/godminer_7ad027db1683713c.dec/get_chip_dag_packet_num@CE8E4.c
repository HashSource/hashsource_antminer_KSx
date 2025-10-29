int __fastcall get_chip_dag_packet_num(int a1)
{
  int v2; // r4
  unsigned int v3; // r7
  int v4; // r7
  unsigned int v5; // r10
  char *v7; // r8
  unsigned __int8 *v8; // r4
  _DWORD *v9; // r7
  int v10; // r10
  unsigned int v11; // r3
  unsigned __int64 v12; // d8
  __int64 v13; // d8
  char *v14; // r9
  int v15; // [sp+28h] [bp-1104h]
  int v16; // [sp+28h] [bp-1104h]
  unsigned __int8 *ptr; // [sp+3Ch] [bp-10F0h]
  char *s[2]; // [sp+40h] [bp-10ECh]
  _DWORD *v19; // [sp+48h] [bp-10E4h]
  int v20; // [sp+4Ch] [bp-10E0h]
  int v21; // [sp+64h] [bp-10C8h]
  _DWORD v22[7]; // [sp+68h] [bp-10C4h] BYREF
  int v23; // [sp+84h] [bp-10A8h]
  _DWORD v24[7]; // [sp+88h] [bp-10A4h] BYREF
  int v25; // [sp+A4h] [bp-1088h]
  _DWORD v26[7]; // [sp+A8h] [bp-1084h] BYREF
  int v27; // [sp+C4h] [bp-1068h]
  _DWORD v28[7]; // [sp+C8h] [bp-1064h] BYREF
  int v29; // [sp+E4h] [bp-1048h]
  _DWORD v30[7]; // [sp+E8h] [bp-1044h] BYREF
  int v31; // [sp+104h] [bp-1028h]
  _DWORD v32[7]; // [sp+108h] [bp-1024h] BYREF
  int v33; // [sp+124h] [bp-1008h]
  char v34[4100]; // [sp+128h] [bp-1004h] BYREF

  v2 = 0;
  ptr = (unsigned __int8 *)malloc(0x60u);
  v19 = malloc(0x60u);
  while ( 1 )
  {
    v3 = sub_C9358(a1, 86, ptr);
    if ( v3 == 8 )
      break;
    V_LOCK();
    V_INT((int)v22, "chain", *(int *)(a1 + 232));
    v15 = v2++;
    logfmt_raw(
      v34,
      0x1000u,
      0,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      "get chip dag packet num failed, resp_num: %d, retry_time: %d",
      v3,
      v15);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      187,
      "get_chip_dag_packet_num",
      23,
      1572,
      100,
      v34);
    if ( v2 == 5 )
    {
      v21 = 12;
      goto LABEL_6;
    }
    usleep(0x2710u);
  }
  v21 = 0;
LABEL_6:
  v4 = 0;
  while ( 1 )
  {
    v5 = sub_C9358(a1, 83, v19);
    if ( v5 == 8 )
    {
      v20 = 8;
      goto LABEL_14;
    }
    V_LOCK();
    V_INT((int)v24, "chain", *(int *)(a1 + 232));
    v16 = v4++;
    logfmt_raw(
      v34,
      0x1000u,
      0,
      v25,
      v24[0],
      v24[1],
      v24[2],
      v24[3],
      v24[4],
      v24[5],
      v24[6],
      v25,
      "get chip dag crc status failed, resp_num: %d, retry_time: %d",
      v5,
      v16);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      187,
      "get_chip_dag_packet_num",
      23,
      1586,
      100,
      v34);
    if ( v4 == 5 )
      break;
    usleep(0x2710u);
  }
  v20 = v5;
  if ( !v5 )
  {
LABEL_11:
    v21 = 12;
    goto LABEL_12;
  }
  V_LOCK();
  v21 = 12;
  V_INT((int)v26, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v34,
    0x1000u,
    0,
    v27,
    v26[0],
    v26[1],
    v26[2],
    v26[3],
    v26[4],
    v26[5],
    v26[6],
    v27,
    "CORE VOL ABNORMAL CNT-%d",
    8 - v5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "get_chip_dag_packet_num",
    23,
    1599,
    100,
    v34);
LABEL_14:
  *(_QWORD *)s = vshld_n_s64(vshrd_n_u64(vdup_n_s32(bswap32(*(_DWORD *)ptr) & 0x7FFFFFFF).n64_u64[0], 0x20u), 6u);
  if ( *(_QWORD *)s )
  {
    V_LOCK();
    V_INT((int)v30, "chain", *(int *)(a1 + 232));
    if ( *v19 )
      v7 = "yes";
    else
      v7 = "no";
    logfmt_raw(
      v34,
      0x1000u,
      0,
      v31,
      v30[0],
      v30[1],
      v30[2],
      v30[3],
      v30[4],
      v30[5],
      v30[6],
      v31,
      "chip[%d] received dag size: 0x%llx, crc error: %s",
      ptr[4],
      *(_QWORD *)s,
      v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      187,
      "get_chip_dag_packet_num",
      23,
      1611,
      60,
      v34);
    if ( v20 > 1 )
    {
      v8 = ptr;
      v9 = v19;
      v10 = 1;
      do
      {
        ++v10;
        v9 += 3;
        v11 = bswap32(*((_DWORD *)v8 + 3));
        v8 += 12;
        v12 = vdup_n_s32(v11 & 0x7FFFFFFF).n64_u64[0];
        V_LOCK();
        v13 = vshld_n_s64(vshrd_n_u64(v12, 0x20u), 6u);
        V_INT((int)v32, "chain", *(int *)(a1 + 232));
        v14 = "yes";
        if ( !*v9 )
          v14 = "no";
        logfmt_raw(
          v34,
          0x1000u,
          0,
          v33,
          v32[0],
          v32[1],
          v32[2],
          v32[3],
          v32[4],
          v32[5],
          v32[6],
          v33,
          "chip[%d] received dag size: 0x%llx, crc error: %s",
          v8[4],
          v13,
          v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          187,
          "get_chip_dag_packet_num",
          23,
          1617,
          60,
          v34);
        if ( *(_QWORD *)s != v13 )
          goto LABEL_11;
      }
      while ( v10 != v20 );
    }
  }
  else
  {
    V_LOCK();
    v21 = 12;
    V_INT((int)v28, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v34,
      0x1000u,
      0,
      v29,
      v28[0],
      v28[1],
      v28[2],
      v28[3],
      v28[4],
      v28[5],
      v28[6],
      v29,
      "chip[0] received dag size error!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      187,
      "get_chip_dag_packet_num",
      23,
      1607,
      100,
      v34);
  }
LABEL_12:
  free(ptr);
  free(v19);
  return v21;
}
