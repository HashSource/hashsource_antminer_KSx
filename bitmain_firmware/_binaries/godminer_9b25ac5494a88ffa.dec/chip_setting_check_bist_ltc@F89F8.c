int __fastcall chip_setting_check_bist_ltc(int a1, int a2, int a3, char a4, int *a5)
{
  size_t v5; // r4
  size_t v6; // r11
  int v9; // r3
  int *v10; // r6
  _DWORD *v11; // r9
  int v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r0
  char *v16; // r4
  char *v17; // r11
  int v18; // r10
  int v19; // r4
  int v21; // r0
  int v22; // r0
  int *v23; // r10
  int v24; // r8
  int v26; // r0
  int v27; // [sp+4h] [bp-1080h]
  int v29; // [sp+38h] [bp-104Ch]
  char *ptr; // [sp+3Ch] [bp-1048h]
  int v32; // [sp+44h] [bp-1040h]
  int v33; // [sp+4Ch] [bp-1038h] BYREF
  __int64 v34; // [sp+50h] [bp-1034h] BYREF
  __int64 v35; // [sp+58h] [bp-102Ch]
  int v36; // [sp+60h] [bp-1024h] BYREF
  _BYTE v37[4096]; // [sp+80h] [bp-1004h] BYREF

  v33 = 0;
  v9 = (int)&a5;
  if ( a2 )
    v6 = 12;
  v10 = a5;
  if ( a2 )
    v9 = *(_DWORD *)(a1 + 328);
  else
    v5 = 4;
  if ( !a2 )
  {
    v9 = 1;
    v6 = 12;
    v29 = 1;
  }
  LOWORD(v11) = (unsigned __int16)&g_zc;
  if ( a2 )
  {
    v6 *= v9;
    v5 = 4 * v9;
    v29 = v9;
  }
  V_LOCK(a1);
  HIWORD(v11) = (unsigned int)&g_zc >> 16;
  v12 = logfmt_raw((int)v37, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    *v11,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    197,
    "chip_setting_check_bist_ltc",
    27,
    188,
    20,
    v37);
  ptr = (char *)calloc(v6, 1u);
  memset(v10, 0, v5);
  v13 = *(_DWORD *)(a1 + 332);
  v34 = 0;
  v35 = 0;
  if ( a2 )
    v14 = 0;
  else
    v14 = *(_DWORD *)(a1 + 480);
  LOBYTE(v35) = a2;
  if ( !a2 )
    LOBYTE(v14) = *(_BYTE *)(v14 + a3);
  BYTE5(v35) = v13;
  WORD1(v35) = 6;
  BYTE1(v35) = v14;
  HIBYTE(v35) = a4;
  BYTE4(v35) = a4;
  v15 = (*(int (__fastcall **)(int, __int64 *, int, char *, int *, int, int, _DWORD))(a1 + 292))(
          a1,
          &v34,
          v29,
          ptr,
          &v33,
          v27,
          2000,
          0);
  v32 = v33;
  if ( v33 > 0 )
  {
    v16 = ptr;
    v17 = &ptr[12 * v33];
    do
    {
      v18 = 0;
      if ( *((_WORD *)v16 + 3) == 6 )
        v18 = v16[3] & 1;
      if ( a2 )
      {
        v15 = sub_26CA90((unsigned __int8)v16[4], *(_DWORD *)(a1 + 420));
        v10[v15] = v18;
      }
      else
      {
        *v10 = v18;
      }
      v16 += 12;
    }
    while ( v16 != v17 );
  }
  if ( v29 <= v32
    || (V_LOCK(v15),
        V_INT((int)&v36, "chain"),
        v21 = logfmt_raw((int)v37, 0x1000u),
        V_UNLOCK(v21),
        v22 = zlog(
                *v11,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
                197,
                "chip_setting_check_bist_ltc",
                27,
                223,
                80,
                v37),
        v29 <= 0) )
  {
    v19 = 0;
  }
  else
  {
    v19 = 0;
    v23 = &v10[v29];
    v24 = 0;
    do
    {
      if ( !*v10++ )
      {
        V_LOCK(v22);
        v19 = -1;
        v26 = logfmt_raw((int)v37, 0x1000u);
        V_UNLOCK(v26);
        v22 = zlog(
                *v11,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
                197,
                "chip_setting_check_bist_ltc",
                27,
                228,
                80,
                v37);
      }
      ++v24;
    }
    while ( v23 != v10 );
  }
  free(ptr);
  return v19;
}
