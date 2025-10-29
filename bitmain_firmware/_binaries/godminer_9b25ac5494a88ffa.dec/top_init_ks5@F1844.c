int __fastcall top_init_ks5(int a1)
{
  int v2; // r0
  int v3; // r8
  int v4; // r4
  int v5; // r0
  int v6; // r1
  char v7; // r3
  int v8; // r6
  _WORD *v9; // r8
  int v10; // r0
  _WORD *v11; // r4
  int v12; // r0
  void (__fastcall *v13)(int, _DWORD *); // r3
  int v15; // [sp+4h] [bp-1098h]
  int v16; // [sp+10h] [bp-108Ch]
  int v17; // [sp+14h] [bp-1088h]
  int v18; // [sp+18h] [bp-1084h]
  int v19; // [sp+1Ch] [bp-1080h]
  int v20; // [sp+44h] [bp-1058h] BYREF
  _QWORD v21[2]; // [sp+48h] [bp-1054h] BYREF
  char v22[16]; // [sp+58h] [bp-1044h] BYREF
  int v23; // [sp+68h] [bp-1034h]
  int v24; // [sp+6Ch] [bp-1030h]
  int v25; // [sp+70h] [bp-102Ch]
  int v26; // [sp+74h] [bp-1028h]
  int v27; // [sp+78h] [bp-1024h] BYREF
  _DWORD v28[2]; // [sp+98h] [bp-1004h] BYREF
  __int64 v29; // [sp+A0h] [bp-FFCh]

  V_LOCK(a1);
  V_INT((int)v22, "chain");
  v16 = v23;
  v17 = v24;
  v18 = v25;
  v19 = v26;
  v2 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "top_init_ks5",
    12,
    1359,
    60,
    v28);
  v3 = *(_DWORD *)(a1 + 328);
  v4 = *(_DWORD *)(a1 + 480);
  v5 = sub_26C858(256, (unsigned __int8)v3);
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
    v4 = *(_DWORD *)(a1 + 480);
    v3 = *(_DWORD *)(a1 + 328);
  }
  *(_DWORD *)(a1 + 420) = v5;
  v8 = 0;
  (*(void (__fastcall **)(int, int, int))(a1 + 252))(a1, v4, v3);
  v21[0] = 0;
  v21[1] = 1;
  v20 = 0;
  v9 = calloc(0x450u, 1u);
  v10 = (*(int (__fastcall **)(int, _QWORD *, int, _WORD *, int *, int, int, _DWORD, int, int, int, int, const char *, const char *))(a1 + 280))(
          a1,
          v21,
          92,
          v9,
          &v20,
          v15,
          2000,
          0,
          v16,
          v17,
          v18,
          v19,
          "%s start",
          "top_init_ks5");
  if ( v20 > 0 )
  {
    v11 = v9;
    do
    {
      while ( 1 )
      {
        ++v8;
        if ( !v11[3] )
          break;
        v11 += 6;
        if ( v8 >= v20 )
          goto LABEL_10;
      }
      V_LOCK(v10);
      v11 += 6;
      V_INT((int)&v27, "chain");
      v12 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v12);
      v10 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
              171,
              "ChipSetting_get_chip_status_KS5_2382",
              36,
              1275,
              20,
              v28);
    }
    while ( v8 < v20 );
  }
LABEL_10:
  free(v9);
  set_core_enable_ks5(a1, 23130);
  sub_EECF0(a1, 127);
  set_work_len_ks5(a1);
  set_nonce_len_ks5(a1);
  set_nonce_count_zero_ks5(a1);
  set_nonce_overflow_ks5(a1, 0);
  sub_F0950(a1);
  v28[1] = 0;
  v28[0] = -1061019888;
  v29 = 0;
  v13 = *(void (__fastcall **)(int, _DWORD *))(a1 + 260);
  LOBYTE(v29) = 1;
  WORD1(v29) = 28;
  v13(a1, v28);
  return 0;
}
