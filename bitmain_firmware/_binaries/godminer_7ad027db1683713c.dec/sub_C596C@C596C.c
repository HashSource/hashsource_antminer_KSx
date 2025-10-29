bool __fastcall sub_C596C(int a1, int a2, char **a3)
{
  char v3; // r3
  _DWORD *v5; // r9
  int v6; // r6
  _DWORD *v7; // r5
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r10
  char *v12; // r9
  int v13; // r5
  int v14; // r6
  _DWORD *v15; // r5
  int v16; // r0
  int v17; // r2
  int v18; // r3
  const char *v19; // r5
  int v21; // [sp+4h] [bp-10E8h]
  char *s; // [sp+40h] [bp-10ACh]
  char *v24; // [sp+44h] [bp-10A8h]
  _DWORD *ptr; // [sp+4Ch] [bp-10A0h]
  int v26; // [sp+54h] [bp-1098h] BYREF
  __int64 v27; // [sp+58h] [bp-1094h] BYREF
  __int64 v28; // [sp+60h] [bp-108Ch]
  _DWORD v29[7]; // [sp+68h] [bp-1084h] BYREF
  int v30; // [sp+84h] [bp-1068h]
  _DWORD v31[7]; // [sp+88h] [bp-1064h] BYREF
  int v32; // [sp+A4h] [bp-1048h]
  _DWORD v33[7]; // [sp+A8h] [bp-1044h] BYREF
  int v34; // [sp+C4h] [bp-1028h]
  _DWORD v35[7]; // [sp+C8h] [bp-1024h] BYREF
  int v36; // [sp+E4h] [bp-1008h]
  char v37[4100]; // [sp+E8h] [bp-1004h] BYREF

  v3 = 0;
  v26 = 0;
  if ( a2 != -1 && *(_DWORD *)(a1 + 312) >= a2 )
    v3 = *(_BYTE *)(*(_DWORD *)(a1 + 464) + a2);
  v27 = 0;
  v28 = 3932160;
  BYTE1(v28) = v3;
  v5 = calloc(0xCu, 1u);
  (*(void (__fastcall **)(int, __int64 *, int, _DWORD *, int *))(a1 + 268))(a1, &v27, 1, v5, &v26);
  if ( v26 <= 0 )
  {
    v24 = 0;
  }
  else
  {
    v6 = 0;
    v24 = 0;
    v7 = v5;
    do
    {
      while ( 1 )
      {
        ++v6;
        if ( *((_WORD *)v7 + 3) == 60 )
          break;
        v7 += 3;
        if ( v26 <= v6 )
          goto LABEL_9;
      }
      v8 = *v5;
      v7 += 3;
      v9 = *v5 >> 8;
      v10 = HIWORD(*v5);
      HIBYTE(v35[0]) = *v5;
      BYTE2(v35[0]) = v9;
      BYTE1(v35[0]) = v10;
      LOBYTE(v35[0]) = HIBYTE(v8);
      v11 = v35[0];
      V_LOCK();
      v24 += v11;
      V_INT((int)v29, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v37,
        0x1000u,
        0,
        v30,
        v29[0],
        v29[1],
        v29[2],
        v29[3],
        v29[4],
        v29[5],
        v29[6],
        v30,
        "[Top Nonce Cnt] asic %02x, reg %02x cnt %08x",
        *((unsigned __int8 *)v7 - 8),
        *((unsigned __int16 *)v7 - 3),
        v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_setting.c",
        166,
        "ChipSetting_nonce_counter_DCR_1727",
        34,
        386,
        20,
        v37);
    }
    while ( v26 > v6 );
  }
LABEL_9:
  free(v5);
  v12 = 0;
  *a3 = v24;
  v13 = *(_DWORD *)(a1 + 316);
  v27 = 1;
  v28 = 0xFF000A0000LL;
  ptr = calloc(12 * v13, 1u);
  (*(void (__fastcall **)(int, __int64 *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 276))(
    a1,
    &v27,
    v13,
    ptr,
    &v26,
    v21,
    2000,
    0);
  if ( v26 > 0 )
  {
    v14 = 0;
    v15 = ptr;
    s = 0;
    do
    {
      if ( *((_WORD *)v15 + 3) == 10 )
      {
        s += *v15;
        V_LOCK();
        V_INT((int)v31, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v37,
          0x1000u,
          0,
          v32,
          v31[0],
          v31[1],
          v31[2],
          v31[3],
          v31[4],
          v31[5],
          v31[6],
          v32,
          "%s chip %02x, core %02x, reg %02x, core_nonce_cnt %08x",
          "ChipSetting_nonce_counter_DCR_1727",
          *((unsigned __int8 *)v15 + 4),
          *((unsigned __int8 *)v15 + 8),
          *((unsigned __int16 *)v15 + 3),
          *v15);
        V_UNLOCK();
        v16 = g_zc;
        v17 = 20;
        v18 = 409;
      }
      else
      {
        V_LOCK();
        V_INT((int)v33, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v37,
          0x1000u,
          0,
          v34,
          v33[0],
          v33[1],
          v33[2],
          v33[3],
          v33[4],
          v33[5],
          v33[6],
          v34,
          "%s chip %02x, expected reg %02x, but %02x, core_nonce_cnt %08x",
          "ChipSetting_nonce_counter_DCR_1727",
          *((unsigned __int8 *)v15 + 4),
          5,
          *((unsigned __int16 *)v15 + 3),
          *v15);
        V_UNLOCK();
        v16 = g_zc;
        v17 = 100;
        v18 = 412;
      }
      ++v14;
      v15 += 3;
      zlog(
        v16,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_setting.c",
        166,
        "ChipSetting_nonce_counter_DCR_1727",
        34,
        v18,
        v17,
        v37);
    }
    while ( v26 > v14 );
    v12 = s;
  }
  free(ptr);
  V_LOCK();
  V_INT((int)v35, "chain", *(int *)(a1 + 232));
  v19 = "Failed";
  if ( v24 == v12 )
    v19 = "Pass";
  logfmt_raw(
    v37,
    0x1000u,
    0,
    v36,
    v35[0],
    v35[1],
    v35[2],
    v35[3],
    v35[4],
    v35[5],
    v35[6],
    v36,
    "check nonce counter, top_nonce_cnt %d, core_nocne_cnt %d (%s)",
    v24,
    v12,
    v19);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_nonce_counter_DCR_1727",
    34,
    418,
    40,
    v37);
  return v24 != v12;
}
