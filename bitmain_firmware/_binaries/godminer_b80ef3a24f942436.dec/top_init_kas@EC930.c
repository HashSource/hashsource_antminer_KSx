int __fastcall top_init_kas(int a1)
{
  int v2; // r0
  int v3; // r8
  int v4; // r4
  int v5; // r0
  int v6; // r1
  char v7; // r3
  int v8; // r1
  int v9; // r4
  _WORD *v10; // r10
  int v11; // r0
  _WORD *v12; // r5
  int v13; // r0
  int v15; // [sp+4h] [bp-10A0h]
  int v16; // [sp+10h] [bp-1094h]
  int v17; // [sp+14h] [bp-1090h]
  int v18; // [sp+18h] [bp-108Ch]
  int v19; // [sp+1Ch] [bp-1088h]
  int v20; // [sp+4Ch] [bp-1058h] BYREF
  _QWORD v21[2]; // [sp+50h] [bp-1054h] BYREF
  char v22[16]; // [sp+60h] [bp-1044h] BYREF
  int v23; // [sp+70h] [bp-1034h]
  int v24; // [sp+74h] [bp-1030h]
  int v25; // [sp+78h] [bp-102Ch]
  int v26; // [sp+7Ch] [bp-1028h]
  int v27; // [sp+80h] [bp-1024h] BYREF
  _BYTE v28[4100]; // [sp+A0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v22, "chain", *(int *)(a1 + 248));
  v16 = v23;
  v17 = v24;
  v18 = v25;
  v19 = v26;
  v2 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    187,
    "top_init_kas",
    12,
    1076,
    60,
    v28);
  v3 = *(_DWORD *)(a1 + 336);
  v4 = *(_DWORD *)(a1 + 488);
  v5 = sub_270970(256, (unsigned __int8)v3);
  if ( (_BYTE)v3 )
  {
    v6 = v4 - 1;
    v7 = 0;
    do
    {
      *(_BYTE *)++v6 = v7;
      v7 += v5;
    }
    while ( v4 - 1 + (unsigned __int8)v3 != v6 );
    v4 = *(_DWORD *)(a1 + 488);
    v3 = *(_DWORD *)(a1 + 336);
  }
  v8 = v4;
  *(_DWORD *)(a1 + 428) = v5;
  v9 = 0;
  (*(void (__fastcall **)(int, int, int))(a1 + 256))(a1, v8, v3);
  v21[0] = 0;
  v21[1] = 1;
  v20 = 0;
  v10 = calloc(0x450u, 1u);
  v11 = (*(int (__fastcall **)(int, _QWORD *, int, _WORD *, int *, int, int, _DWORD, int, int, int, int, const char *, const char *))(a1 + 284))(
          a1,
          v21,
          92,
          v10,
          &v20,
          v15,
          2000,
          0,
          v16,
          v17,
          v18,
          v19,
          "%s start",
          "top_init_kas");
  if ( v20 > 0 )
  {
    v12 = v10;
    do
    {
      if ( !v12[3] )
      {
        V_LOCK(v11);
        V_INT((int)&v27, "chain", *(int *)(a1 + 248));
        v13 = logfmt_raw((int)v28, 0x1000u);
        V_UNLOCK(v13);
        v11 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/chip_setting.c",
                166,
                "ChipSetting_get_chip_status_KAS_2380",
                36,
                1565,
                20,
                v28);
      }
      ++v9;
      v12 += 6;
    }
    while ( v9 < v20 );
  }
  free(v10);
  set_core_enable_kas(a1, 23130);
  sub_E9E40(a1, 127);
  set_work_len_kas(a1);
  set_nonce_len_kas(a1);
  set_nonce_count_zero_kas(a1);
  set_nonce_overflow_kas(a1, 0);
  sub_EBC88(a1);
  return 0;
}
