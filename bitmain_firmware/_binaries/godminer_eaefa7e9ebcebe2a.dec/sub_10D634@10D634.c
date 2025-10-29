int __fastcall sub_10D634(int a1, int *a2)
{
  int v2; // r12
  _DWORD *v4; // r8
  int v5; // r7
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r8
  int v12; // r6
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int *v18; // r2
  int v20; // r0
  int v21; // r0
  int v22; // [sp+14h] [bp-1110h]
  int v23; // [sp+18h] [bp-110Ch]
  int v24; // [sp+1Ch] [bp-1108h]
  const char *v25; // [sp+20h] [bp-1104h]
  int v26; // [sp+24h] [bp-1100h]
  int v27; // [sp+28h] [bp-10FCh]
  _DWORD *v28; // [sp+34h] [bp-10F0h]
  int *v29; // [sp+44h] [bp-10E0h]
  _DWORD *v30; // [sp+48h] [bp-10DCh]
  int v32; // [sp+50h] [bp-10D4h]
  int v33; // [sp+58h] [bp-10CCh] BYREF
  int v34; // [sp+5Ch] [bp-10C8h] BYREF
  char v35[20]; // [sp+60h] [bp-10C4h] BYREF
  int v36; // [sp+74h] [bp-10B0h]
  int v37; // [sp+78h] [bp-10ACh]
  int v38; // [sp+7Ch] [bp-10A8h]
  _DWORD v39[8]; // [sp+80h] [bp-10A4h] BYREF
  char v40[20]; // [sp+A0h] [bp-1084h] BYREF
  int v41; // [sp+B4h] [bp-1070h]
  int v42; // [sp+B8h] [bp-106Ch]
  int v43; // [sp+BCh] [bp-1068h]
  int v44; // [sp+C0h] [bp-1064h] BYREF
  char v45[32]; // [sp+E0h] [bp-1044h] BYREF
  int v46; // [sp+100h] [bp-1024h] BYREF
  _BYTE v47[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 392);
  v32 = v2;
  if ( v2 > 0 )
  {
    v4 = *(_DWORD **)(a1 + 384);
    v29 = a2;
    v30 = &v4[6 * v2];
    v28 = v4;
    do
    {
      v5 = 5;
      do
      {
        v6 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, const char *, int, int))(a1 + 152))(
               a1,
               &v34,
               &v33,
               *v4,
               v4[1],
               v4[2],
               v4[3],
               v4[4],
               v4[5],
               v22,
               v23,
               v24,
               v25,
               v26,
               v27);
        if ( v33 )
        {
          v7 = v34;
          if ( v34 >= -63 )
            goto LABEL_9;
          V_LOCK(v6);
          V_INT((int)v39, "chain");
          v26 = *v4;
          v25 = "sensor[%d] invalid temp, retry";
          v22 = v39[5];
          v23 = v39[6];
          v24 = v39[7];
          v8 = logfmt_raw((int)v47, 0x1000u);
          V_UNLOCK(v8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
            192,
            "read_temperature_zec_1746",
            25,
            481,
            20,
            v47);
        }
        else
        {
          V_LOCK(v6);
          V_INT((int)v35, "chain");
          v25 = "sensor[%d] read lost, retry";
          v26 = *v4;
          v22 = v36;
          v23 = v37;
          v24 = v38;
          v21 = logfmt_raw((int)v47, 0x1000u);
          V_UNLOCK(v21);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
            192,
            "read_temperature_zec_1746",
            25,
            479,
            20,
            v47);
        }
        v9 = usleep((__useconds_t)"t..LowerHex$u20$for$u20$u8$GT$3fmt17hbb583368dc481f64E");
        --v5;
      }
      while ( v5 );
      v34 = -64;
      V_LOCK(v9);
      V_INT((int)v40, "chain");
      v27 = 5;
      v25 = "read sensor[%d] local temp failed after retry %d times";
      v26 = *v4;
      v22 = v41;
      v23 = v42;
      v24 = v43;
      v10 = logfmt_raw((int)v47, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
        192,
        "read_temperature_zec_1746",
        25,
        489,
        100,
        v47);
      v7 = v34;
LABEL_9:
      v4 += 6;
      *v29 = v7;
      v29 += 3;
    }
    while ( v30 != v4 );
    v11 = 0;
    do
    {
      v12 = 5;
      do
      {
        v13 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 156))(
                a1,
                &v34,
                &v33,
                *v28,
                v28[1],
                v28[2],
                v28[3],
                v28[4],
                v28[5]);
        if ( v33 )
        {
          v14 = v34;
          if ( v34 >= -63 )
            goto LABEL_17;
          V_LOCK(v13);
          V_INT((int)v45, "chain");
          v15 = logfmt_raw((int)v47, 0x1000u);
          V_UNLOCK(v15);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
            192,
            "read_temperature_zec_1746",
            25,
            503,
            20,
            v47);
        }
        else
        {
          V_LOCK(v13);
          V_INT((int)&v44, "chain");
          v20 = logfmt_raw((int)v47, 0x1000u);
          V_UNLOCK(v20);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
            192,
            "read_temperature_zec_1746",
            25,
            501,
            20,
            v47);
        }
        v16 = usleep((__useconds_t)"t..LowerHex$u20$for$u20$u8$GT$3fmt17hbb583368dc481f64E");
        --v12;
      }
      while ( v12 );
      v34 = -64;
      V_LOCK(v16);
      V_INT((int)&v46, "chain");
      v17 = logfmt_raw((int)v47, 0x1000u);
      V_UNLOCK(v17);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
        192,
        "read_temperature_zec_1746",
        25,
        511,
        100,
        v47);
      v14 = v34;
LABEL_17:
      v18 = &a2[v11];
      v11 += 3;
      v18[1] = v14;
      v28 += 6;
    }
    while ( 3 * v32 != v11 );
  }
  return 0;
}
