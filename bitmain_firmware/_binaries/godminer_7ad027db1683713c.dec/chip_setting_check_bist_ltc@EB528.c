int __fastcall chip_setting_check_bist_ltc(int a1, int a2, int a3, int a4, int *a5)
{
  size_t v5; // r4
  size_t v6; // r11
  int v9; // r3
  int *v10; // r6
  _DWORD *v11; // r9
  int v12; // r0
  int v13; // r3
  char *v14; // r4
  char *v15; // r11
  int v16; // r10
  int v17; // r4
  int *v19; // r10
  int v20; // r8
  int v22; // r1
  int v23; // [sp+4h] [bp-1080h]
  int v25; // [sp+38h] [bp-104Ch]
  char *ptr; // [sp+3Ch] [bp-1048h]
  int v28; // [sp+44h] [bp-1040h]
  int v29; // [sp+4Ch] [bp-1038h] BYREF
  __int64 v30; // [sp+50h] [bp-1034h] BYREF
  __int64 v31; // [sp+58h] [bp-102Ch]
  _DWORD v32[7]; // [sp+60h] [bp-1024h] BYREF
  int v33; // [sp+7Ch] [bp-1008h]
  char v34[4096]; // [sp+80h] [bp-1004h] BYREF

  v29 = 0;
  v9 = (int)&a5;
  if ( a2 )
    v6 = 12;
  v10 = a5;
  if ( a2 )
    v9 = *(_DWORD *)(a1 + 312);
  else
    v5 = 4;
  if ( !a2 )
  {
    v9 = 1;
    v6 = 12;
    v25 = 1;
  }
  LOWORD(v11) = (unsigned __int16)&g_zc;
  if ( a2 )
  {
    v6 *= v9;
    v5 = 4 * v9;
    v25 = v9;
  }
  V_LOCK();
  HIWORD(v11) = (unsigned int)&g_zc >> 16;
  logfmt_raw(v34, 0x1000u, 0, "check bist result, chip_all %d chip_no %d core %d ", a2, a3, a4);
  V_UNLOCK();
  zlog(
    *v11,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    192,
    "chip_setting_check_bist_ltc",
    27,
    188,
    20,
    v34);
  ptr = (char *)calloc(v6, 1u);
  memset(v10, 0, v5);
  v12 = *(_DWORD *)(a1 + 316);
  v30 = 0;
  v31 = 0;
  if ( a2 )
    v13 = 0;
  else
    v13 = *(_DWORD *)(a1 + 464);
  LOBYTE(v31) = a2;
  if ( !a2 )
    LOBYTE(v13) = *(_BYTE *)(v13 + a3);
  BYTE5(v31) = v12;
  WORD1(v31) = 6;
  BYTE1(v31) = v13;
  HIBYTE(v31) = a4;
  BYTE4(v31) = a4;
  (*(void (__fastcall **)(int, __int64 *, int, char *, int *, int, int, _DWORD))(a1 + 276))(
    a1,
    &v30,
    v25,
    ptr,
    &v29,
    v23,
    2000,
    0);
  v28 = v29;
  if ( v29 > 0 )
  {
    v14 = ptr;
    v15 = &ptr[12 * v29];
    do
    {
      v16 = 0;
      if ( *((_WORD *)v14 + 3) == 6 )
        v16 = v14[3] & 1;
      if ( a2 )
        v10[sub_25ABA8((unsigned __int8)v14[4], *(_DWORD *)(a1 + 404))] = v16;
      else
        *v10 = v16;
      v14 += 12;
    }
    while ( v14 != v15 );
  }
  if ( v25 <= v28
    || (V_LOCK(),
        V_INT((int)v32, "chain", *(int *)(a1 + 232)),
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
          "detected core %d get check bist results less than expect num(%d < %d)",
          a4,
          v29,
          v25),
        V_UNLOCK(),
        zlog(
          *v11,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
          192,
          "chip_setting_check_bist_ltc",
          27,
          223,
          80,
          v34),
        v25 <= 0) )
  {
    v17 = 0;
  }
  else
  {
    v17 = 0;
    v19 = &v10[v25];
    v20 = 0;
    do
    {
      if ( !*v10++ )
      {
        V_LOCK();
        v22 = a3;
        v17 = -1;
        if ( a2 )
          v22 = v20;
        logfmt_raw(v34, 0x1000u, 0, "chip %d core %d check bist failed", v22, a4);
        V_UNLOCK();
        zlog(
          *v11,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
          192,
          "chip_setting_check_bist_ltc",
          27,
          228,
          80,
          v34);
      }
      ++v20;
    }
    while ( v19 != v10 );
  }
  free(ptr);
  return v17;
}
