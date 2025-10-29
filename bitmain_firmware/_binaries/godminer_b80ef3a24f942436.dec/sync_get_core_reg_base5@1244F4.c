int __fastcall sync_get_core_reg_base5(int a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
  int v9; // r7
  char v13; // r3
  char v14; // r2
  int v15; // r0
  __int16 v16; // r0
  __int16 v17; // kr00_2
  _BYTE *v18; // r11
  char v19; // r0
  int v20; // r11
  int v21; // r2
  char v22; // r10
  int v23; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // [sp+1Ch] [bp-1030h]
  int v36[2]; // [sp+28h] [bp-1024h] BYREF
  _BYTE v37[2]; // [sp+30h] [bp-101Ch] BYREF
  __int64 v38; // [sp+32h] [bp-101Ah] BYREF
  char v39[2]; // [sp+3Ch] [bp-1010h] BYREF
  _BYTE v40[2]; // [sp+3Eh] [bp-100Eh] BYREF
  int v41; // [sp+40h] [bp-100Ch]
  unsigned int v42; // [sp+44h] [bp-1008h]
  _BYTE v43[4088]; // [sp+48h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 252) )
    return 4;
  v38 = 0;
  v13 = *(_BYTE *)(a2 + 9);
  v14 = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 5;
  v15 = *(unsigned __int16 *)(a2 + 10);
  v37[0] = 85;
  v37[1] = -86;
  BYTE2(v38) = v13;
  BYTE1(v38) = 8;
  LOBYTE(v38) = v14 & 0x1F | 0x40;
  v16 = reverse_byte_order_16(v15);
  v17 = *(_WORD *)(a2 + 12);
  *(_WORD *)((char *)&v38 + 5) = v17;
  *(_WORD *)((char *)&v38 + 3) = v16;
  v18 = calloc(7u, 1u);
  memcpy(v18, &v38, 7u);
  v19 = BM_CRC5(v18, 56);
  HIBYTE(v38) = HIBYTE(v38) & 0xE0 | v19 & 0x1F;
  free(v18);
  if ( !*(_BYTE *)(a2 + 8) && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v35 = a4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 900));
  v9 = 0;
  queue_clear(*(_DWORD *)(a1 + 868));
  send_command_packet(a1, v37, 10);
  v20 = 0;
  sub_2704F8(a7, a8, 1000, 0);
  v36[1] = 1000000 * v21;
  v36[0] = sub_2704F8(a7, a8, 1000, 0);
  while ( v20 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 868), v39, 0xCu, v36) == 110 )
      {
        v9 = 3;
        goto LABEL_13;
      }
      if ( (unsigned __int8)v39[0] != 170 || v39[1] != 85 )
      {
        V_LOCK(v40);
        v9 = 1;
        v25 = logfmt_raw((int)v43, 0x1000u);
        V_UNLOCK(v25);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
          170,
          "sync_get_core_reg_base5",
          23,
          1786,
          20,
          v43);
        goto LABEL_13;
      }
      v22 = HIBYTE(v42);
      v23 = BM_CRC5(v40, 75);
      if ( (v22 & 0x1F) == v23 )
        break;
      v9 = 2;
    }
    V_LOCK(v23);
    v26 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v26);
    v27 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
            170,
            "sync_get_core_reg_base5",
            23,
            1793,
            20,
            v43);
    *(_BYTE *)(v35 + 4) = v42;
    V_LOCK(v27);
    v28 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v28);
    v29 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
            170,
            "sync_get_core_reg_base5",
            23,
            1795,
            20,
            v43);
    *(_WORD *)(v35 + 6) = v42 >> 8;
    V_LOCK(v29);
    v30 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v30);
    v31 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
            170,
            "sync_get_core_reg_base5",
            23,
            1797,
            20,
            v43);
    *(_BYTE *)(v35 + 8) = v40[1];
    V_LOCK(v31);
    v32 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v32);
    v33 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
            170,
            "sync_get_core_reg_base5",
            23,
            1799,
            20,
            v43);
    *(_DWORD *)v35 = v41;
    V_LOCK(v33);
    ++v20;
    v35 += 12;
    v34 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v34);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_reg_io_base.c",
      170,
      "sync_get_core_reg_base5",
      23,
      1801,
      20,
      v43);
  }
LABEL_13:
  *a5 = v20;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 900));
  return v9;
}
