int __fastcall get_chip_dag_packet_num_rvn(int a1)
{
  void *v2; // r10
  unsigned int v3; // r0
  unsigned int v4; // r0
  int v5; // r6
  int v6; // r7
  int v7; // r0
  int v9; // r0
  int v10; // r0
  void *ptr; // [sp+38h] [bp-1084h]
  int v12; // [sp+3Ch] [bp-1080h]
  int v13; // [sp+54h] [bp-1068h]
  int v14; // [sp+58h] [bp-1064h] BYREF
  _BYTE v15[32]; // [sp+78h] [bp-1044h] BYREF
  int v16; // [sp+98h] [bp-1024h] BYREF
  _BYTE v17[4100]; // [sp+B8h] [bp-1004h] BYREF

  v2 = malloc(0x60u);
  ptr = malloc(0x60u);
  v3 = sub_ECEA4(a1, 115, v2);
  if ( v3 == 8 )
  {
    v13 = 0;
  }
  else
  {
    V_LOCK(v3);
    V_INT((int)&v14, "chain");
    v13 = 12;
    v9 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      187,
      "get_chip_dag_packet_num_rvn",
      27,
      1880,
      100,
      v17);
  }
  v4 = sub_ECEA4(a1, 116, ptr);
  v12 = v4;
  if ( v4 == 8
    || (V_LOCK(v4),
        V_INT((int)v15, "chain"),
        v10 = logfmt_raw((int)v17, 0x1000u),
        V_UNLOCK(v10),
        v4 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
               187,
               "get_chip_dag_packet_num_rvn",
               27,
               1887,
               100,
               v17),
        v13 = 12,
        v12 > 0) )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      ++v6;
      V_LOCK(v4);
      V_INT((int)&v16, "chain");
      v5 += 12;
      v7 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v7);
      v4 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
             187,
             "get_chip_dag_packet_num_rvn",
             27,
             1896,
             60,
             v17);
    }
    while ( v12 > v6 );
  }
  free(v2);
  free(ptr);
  return v13;
}
