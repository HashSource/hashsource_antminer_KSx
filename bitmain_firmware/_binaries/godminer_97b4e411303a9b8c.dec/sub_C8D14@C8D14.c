bool __fastcall sub_C8D14(int a1, int a2, char **a3)
{
  char v3; // r3
  _DWORD *v5; // r9
  int v6; // r0
  int v7; // r6
  _DWORD *v8; // r5
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r10
  int v13; // r0
  char *v14; // r9
  int v15; // r5
  int v16; // r0
  int v17; // r6
  _WORD *v18; // r5
  int v19; // r0
  int v20; // r0
  int v21; // r2
  int v22; // r3
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v27; // [sp+4h] [bp-10E8h]
  int v28; // [sp+10h] [bp-10DCh]
  int v29; // [sp+14h] [bp-10D8h]
  int v30; // [sp+18h] [bp-10D4h]
  int v31; // [sp+1Ch] [bp-10D0h]
  const char *v32; // [sp+20h] [bp-10CCh]
  int v33; // [sp+24h] [bp-10C8h]
  int v34; // [sp+28h] [bp-10C4h]
  int v35; // [sp+2Ch] [bp-10C0h]
  char *s; // [sp+40h] [bp-10ACh]
  char *v38; // [sp+44h] [bp-10A8h]
  _WORD *ptr; // [sp+4Ch] [bp-10A0h]
  int v40; // [sp+54h] [bp-1098h] BYREF
  __int64 v41; // [sp+58h] [bp-1094h] BYREF
  __int64 v42; // [sp+60h] [bp-108Ch]
  char v43[16]; // [sp+68h] [bp-1084h] BYREF
  int v44; // [sp+78h] [bp-1074h]
  int v45; // [sp+7Ch] [bp-1070h]
  int v46; // [sp+80h] [bp-106Ch]
  int v47; // [sp+84h] [bp-1068h]
  int v48; // [sp+88h] [bp-1064h] BYREF
  char v49[32]; // [sp+A8h] [bp-1044h] BYREF
  int v50; // [sp+C8h] [bp-1024h] BYREF
  _BYTE v51[4100]; // [sp+E8h] [bp-1004h] BYREF

  v3 = 0;
  v40 = 0;
  if ( a2 != -1 && *(_DWORD *)(a1 + 332) >= a2 )
    v3 = *(_BYTE *)(*(_DWORD *)(a1 + 488) + a2);
  v41 = 0;
  v42 = 3932160;
  BYTE1(v42) = v3;
  v5 = calloc(0xCu, 1u);
  v6 = (*(int (__fastcall **)(int, __int64 *, int, _DWORD *, int *))(a1 + 284))(a1, &v41, 1, v5, &v40);
  if ( v40 <= 0 )
  {
    v38 = 0;
  }
  else
  {
    v7 = 0;
    v38 = 0;
    v8 = v5;
    do
    {
      while ( 1 )
      {
        ++v7;
        if ( *((_WORD *)v8 + 3) == 60 )
          break;
        v8 += 3;
        if ( v40 <= v7 )
          goto LABEL_9;
      }
      v9 = *v5;
      v8 += 3;
      v10 = *v5 >> 8;
      v11 = HIWORD(*v5);
      HIBYTE(v50) = *v5;
      BYTE2(v50) = v10;
      BYTE1(v50) = v11;
      LOBYTE(v50) = HIBYTE(v9);
      v12 = v50;
      V_LOCK(v6);
      v38 += v12;
      V_INT((int)v43, "chain");
      v35 = v12;
      v34 = *((unsigned __int16 *)v8 - 3);
      v33 = *((unsigned __int8 *)v8 - 8);
      v32 = "[Top Nonce Cnt] asic %02x, reg %02x cnt %08x";
      v28 = v44;
      v29 = v45;
      v30 = v46;
      v31 = v47;
      v13 = logfmt_raw((int)v51, 0x1000u);
      V_UNLOCK(v13);
      v6 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
             171,
             "ChipSetting_nonce_counter_DASH_1766",
             35,
             427,
             20,
             v51);
    }
    while ( v40 > v7 );
  }
LABEL_9:
  free(v5);
  v14 = 0;
  *a3 = v38;
  v15 = *(_DWORD *)(a1 + 336);
  v41 = 1;
  v42 = 0xFF000A0000LL;
  ptr = calloc(12 * v15, 1u);
  v16 = (*(int (__fastcall **)(int, __int64 *, int, _WORD *, int *, int, int, _DWORD, int, int, int, int, const char *, int, int, int))(a1 + 296))(
          a1,
          &v41,
          v15,
          ptr,
          &v40,
          v27,
          2000,
          0,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
  if ( v40 > 0 )
  {
    v17 = 0;
    v18 = ptr;
    s = 0;
    do
    {
      if ( v18[3] == 10 )
      {
        s += *(_DWORD *)v18;
        V_LOCK(v16);
        V_INT((int)&v48, "chain");
        v23 = logfmt_raw((int)v51, 0x1000u);
        V_UNLOCK(v23);
        v20 = g_zc;
        v21 = 20;
        v22 = 450;
      }
      else
      {
        V_LOCK(v16);
        V_INT((int)v49, "chain");
        v19 = logfmt_raw((int)v51, 0x1000u);
        V_UNLOCK(v19);
        v20 = g_zc;
        v21 = 100;
        v22 = 453;
      }
      ++v17;
      v18 += 6;
      v16 = zlog(
              v20,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
              171,
              "ChipSetting_nonce_counter_DASH_1766",
              35,
              v22,
              v21,
              v51);
    }
    while ( v40 > v17 );
    v14 = s;
  }
  free(ptr);
  V_LOCK(v24);
  V_INT((int)&v50, "chain");
  v25 = logfmt_raw((int)v51, 0x1000u);
  V_UNLOCK(v25);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_nonce_counter_DASH_1766",
    35,
    459,
    40,
    v51);
  return v38 != v14;
}
