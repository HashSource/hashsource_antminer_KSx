int __fastcall sub_1225BC(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  pthread_mutex_t *v6; // r8
  int v9; // r6
  int v10; // r7
  int v11; // r2
  char v12; // r10
  int v13; // r0
  int v14; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v25; // [sp+20h] [bp-1024h]
  int v26[2]; // [sp+2Ch] [bp-1018h] BYREF
  char v27[2]; // [sp+34h] [bp-1010h] BYREF
  char v28; // [sp+36h] [bp-100Eh] BYREF
  int v29; // [sp+37h] [bp-100Dh]
  char v30; // [sp+3Bh] [bp-1009h]
  unsigned __int8 v31; // [sp+3Ch] [bp-1008h]
  char v32; // [sp+3Dh] [bp-1007h]
  _BYTE v33[4096]; // [sp+40h] [bp-1004h] BYREF

  v6 = (pthread_mutex_t *)(a1 + 900);
  v9 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 900));
  queue_clear(*(_DWORD *)(a1 + 868));
  sub_2704F8(a5, a6, 1000, 0);
  v25 = a3;
  v10 = 0;
  v26[1] = 1000000 * v11;
  v26[0] = sub_2704F8(a5, a6, 1000, 0);
  while ( a2 > v10 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 868), v27, 0xAu, v26) == 110 )
      {
        V_LOCK(&v28);
        v14 = logfmt_raw((int)v33, 0x1000u);
        v9 = 3;
        V_UNLOCK(v14);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
          170,
          "sync_get_status_base5",
          21,
          1657,
          40,
          v33);
        goto LABEL_10;
      }
      if ( (unsigned __int8)v27[0] != 170 || v27[1] != 85 )
      {
        v9 = 1;
        goto LABEL_10;
      }
      v12 = v32;
      v13 = BM_CRC5(&v28, 59);
      if ( (v12 & 0x1F) == v13 )
        break;
      v9 = 2;
    }
    V_LOCK(v13);
    v16 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v16);
    v17 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
            170,
            "sync_get_status_base5",
            21,
            1646,
            20,
            v33);
    *(_BYTE *)(v25 + 4) = v30;
    V_LOCK(v17);
    v18 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v18);
    v19 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
            170,
            "sync_get_status_base5",
            21,
            1648,
            20,
            v33);
    *(_WORD *)(v25 + 6) = v31;
    V_LOCK(v19);
    v20 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v20);
    v21 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
            170,
            "sync_get_status_base5",
            21,
            1650,
            20,
            v33);
    *(_DWORD *)v25 = v29;
    V_LOCK(v21);
    ++v10;
    v25 += 12;
    v22 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
      170,
      "sync_get_status_base5",
      21,
      1652,
      20,
      v33);
  }
LABEL_10:
  *a4 = v10;
  pthread_mutex_unlock(v6);
  return v9;
}
