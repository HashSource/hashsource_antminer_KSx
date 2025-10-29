int __fastcall get_chip_dag_packet_num_rvn(int a1)
{
  char *v2; // r10
  int v3; // r6
  signed int v4; // r7
  unsigned __int64 v5; // d8
  int v6; // r11
  int v7; // r4
  char *v8; // r11
  int v10; // [sp+24h] [bp-1098h]
  __int64 v11; // [sp+28h] [bp-1094h]
  char *ptr; // [sp+38h] [bp-1084h]
  signed int v13; // [sp+3Ch] [bp-1080h]
  int v14; // [sp+54h] [bp-1068h]
  _DWORD v15[7]; // [sp+58h] [bp-1064h] BYREF
  int v16; // [sp+74h] [bp-1048h]
  _DWORD v17[7]; // [sp+78h] [bp-1044h] BYREF
  int v18; // [sp+94h] [bp-1028h]
  _DWORD v19[7]; // [sp+98h] [bp-1024h] BYREF
  int v20; // [sp+B4h] [bp-1008h]
  char v21[4100]; // [sp+B8h] [bp-1004h] BYREF

  v2 = (char *)malloc(0x60u);
  ptr = (char *)malloc(0x60u);
  if ( sub_EC7D0(a1, 115, v2) == 8 )
  {
    v14 = 0;
  }
  else
  {
    V_LOCK();
    V_INT((int)v15, "chain", *(int *)(a1 + 232));
    v14 = 12;
    logfmt_raw(
      v21,
      0x1000u,
      0,
      v16,
      v15[0],
      v15[1],
      v15[2],
      v15[3],
      v15[4],
      v15[5],
      v15[6],
      v16,
      "get chip dag packet num failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      187,
      "get_chip_dag_packet_num_rvn",
      27,
      1855,
      100,
      v21);
  }
  v13 = sub_EC7D0(a1, 116, ptr);
  if ( v13 == 8
    || (V_LOCK(),
        V_INT((int)v17, "chain", *(int *)(a1 + 232)),
        logfmt_raw(
          v21,
          0x1000u,
          0,
          v18,
          v17[0],
          v17[1],
          v17[2],
          v17[3],
          v17[4],
          v17[5],
          v17[6],
          v18,
          "get chip dag crc status failed"),
        V_UNLOCK(),
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
          187,
          "get_chip_dag_packet_num_rvn",
          27,
          1862,
          100,
          v21),
        v14 = 12,
        v13 > 0) )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      v5 = vdup_n_s32(bswap32(*(_DWORD *)&v2[v3]) & 0x7FFFFFFF).n64_u64[0];
      V_LOCK();
      V_INT((int)v19, "chain", *(int *)(a1 + 232));
      v6 = (unsigned __int8)v2[v3 + 4];
      v7 = *(_DWORD *)&ptr[v3];
      v3 += 12;
      v11 = vshld_n_s64(vshrd_n_u64(v5, 0x20u), 6u);
      v10 = v6;
      v8 = "yes";
      if ( !v7 )
        v8 = "no";
      logfmt_raw(
        v21,
        0x1000u,
        0,
        v20,
        v19[0],
        v19[1],
        v19[2],
        v19[3],
        v19[4],
        v19[5],
        v19[6],
        v20,
        "chip[%d] received dag size: %lld, crc error: %s",
        v10,
        v11,
        v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
        187,
        "get_chip_dag_packet_num_rvn",
        27,
        1871,
        60,
        v21);
    }
    while ( v13 > v4 );
  }
  free(v2);
  free(ptr);
  return v14;
}
