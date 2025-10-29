int __fastcall top_init_kas(int a1)
{
  int v2; // r8
  int v3; // r4
  unsigned int v4; // r0
  int v5; // r1
  char v6; // r3
  int v7; // r5
  unsigned __int16 *v8; // r8
  unsigned __int16 *v9; // r4
  int v10; // r8
  int v12; // [sp+4h] [bp-1098h]
  unsigned __int16 *ptr; // [sp+34h] [bp-1068h]
  int v14; // [sp+44h] [bp-1058h] BYREF
  _QWORD v15[2]; // [sp+48h] [bp-1054h] BYREF
  _DWORD v16[7]; // [sp+58h] [bp-1044h] BYREF
  int v17; // [sp+74h] [bp-1028h]
  _DWORD v18[7]; // [sp+78h] [bp-1024h] BYREF
  int v19; // [sp+94h] [bp-1008h]
  char v20[4100]; // [sp+98h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v16, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v20,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    "%s start",
    "top_init_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    187,
    "top_init_kas",
    12,
    1029,
    60,
    v20);
  v2 = *(_DWORD *)(a1 + 312);
  v3 = *(_DWORD *)(a1 + 464);
  v4 = sub_25A970(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    v5 = v3 - 1;
    v6 = 0;
    do
    {
      *(_BYTE *)++v5 = v6;
      v6 += v4;
    }
    while ( v3 - 1 + (unsigned __int8)v2 != v5 );
    v3 = *(_DWORD *)(a1 + 464);
    v2 = *(_DWORD *)(a1 + 312);
  }
  *(_DWORD *)(a1 + 404) = v4;
  v7 = 0;
  (*(void (__fastcall **)(int, int, int))(a1 + 240))(a1, v3, v2);
  v15[0] = 0;
  v15[1] = 1;
  v14 = 0;
  v8 = (unsigned __int16 *)calloc(0x450u, 1u);
  ptr = v8;
  (*(void (__fastcall **)(int, _QWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 268))(
    a1,
    v15,
    92,
    v8,
    &v14,
    v12,
    2000,
    0);
  if ( v14 > 0 )
  {
    v9 = v8;
    do
    {
      while ( 1 )
      {
        v10 = v9[3];
        ++v7;
        if ( !v9[3] )
          break;
        v9 += 6;
        if ( v7 >= v14 )
          goto LABEL_10;
      }
      V_LOCK();
      v9 += 6;
      V_INT((int)v18, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v20,
        0x1000u,
        v10,
        v19,
        v18[0],
        v18[1],
        v18[2],
        v18[3],
        v18[4],
        v18[5],
        v18[6],
        v19,
        "[Chip status] asic %02x, reg %02x state %08x",
        *((unsigned __int8 *)v9 - 8),
        *(v9 - 3),
        *((_DWORD *)v9 - 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_setting.c",
        166,
        "ChipSetting_get_chip_status_KAS_2380",
        36,
        1234,
        20,
        v20);
    }
    while ( v7 < v14 );
  }
LABEL_10:
  free(ptr);
  set_core_enable_kas(a1, 23130);
  sub_DD3A8(a1, 127);
  set_work_len_kas(a1);
  set_nonce_len_kas(a1);
  set_nonce_count_zero_kas(a1);
  set_nonce_overflow_kas(a1, 0);
  sub_DEEA8(a1);
  return 0;
}
