int __fastcall sub_FDE0C(int a1, int a2)
{
  _DWORD *v3; // r9
  int v4; // r7
  int v5; // r0
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r7
  int v11; // r6
  int v12; // r0
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v18; // r0
  int v19; // r0
  int v20; // [sp+14h] [bp-1108h]
  int v21; // [sp+18h] [bp-1104h]
  int v22; // [sp+1Ch] [bp-1100h]
  const char *v23; // [sp+20h] [bp-10FCh]
  int v24; // [sp+24h] [bp-10F8h]
  int v25; // [sp+28h] [bp-10F4h]
  int i; // [sp+40h] [bp-10DCh]
  int v27; // [sp+40h] [bp-10DCh]
  int v28; // [sp+44h] [bp-10D8h]
  int v29; // [sp+44h] [bp-10D8h]
  _DWORD *v31; // [sp+4Ch] [bp-10D0h]
  int v32; // [sp+50h] [bp-10CCh] BYREF
  int v33; // [sp+54h] [bp-10C8h] BYREF
  _BYTE v34[20]; // [sp+58h] [bp-10C4h] BYREF
  int v35; // [sp+6Ch] [bp-10B0h]
  int v36; // [sp+70h] [bp-10ACh]
  int v37; // [sp+74h] [bp-10A8h]
  _DWORD v38[8]; // [sp+78h] [bp-10A4h] BYREF
  _BYTE v39[20]; // [sp+98h] [bp-1084h] BYREF
  int v40; // [sp+ACh] [bp-1070h]
  int v41; // [sp+B0h] [bp-106Ch]
  int v42; // [sp+B4h] [bp-1068h]
  int v43; // [sp+B8h] [bp-1064h] BYREF
  _BYTE v44[32]; // [sp+D8h] [bp-1044h] BYREF
  int v45; // [sp+F8h] [bp-1024h] BYREF
  _BYTE v46[4100]; // [sp+118h] [bp-1004h] BYREF

  v28 = *(_DWORD *)(a1 + 372);
  if ( v28 > 0 )
  {
    v3 = *(_DWORD **)(a1 + 364);
    v31 = v3;
    for ( i = 0; i != v28; ++i )
    {
      v4 = 5;
      do
      {
        v5 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, const char *, int, int))(a1 + 152))(
               a1,
               &v33,
               &v32,
               *v3,
               v3[1],
               v3[2],
               v3[3],
               v3[4],
               v3[5],
               v20,
               v21,
               v22,
               v23,
               v24,
               v25);
        if ( v32 )
        {
          v6 = v33;
          if ( v33 >= -63 )
            goto LABEL_9;
          V_LOCK(v5);
          V_INT((int)v38, "chain");
          v24 = *v3;
          v23 = "sensor[%d] invalid temp, retry";
          v20 = v38[5];
          v21 = v38[6];
          v22 = v38[7];
          v7 = logfmt_raw((int)v46, 0x1000u);
          V_UNLOCK(v7);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "read_temperature_zec_1746",
            25,
            481,
            20,
            v46);
        }
        else
        {
          V_LOCK(v5);
          V_INT((int)v34, "chain");
          v23 = "sensor[%d] read lost, retry";
          v24 = *v3;
          v20 = v35;
          v21 = v36;
          v22 = v37;
          v19 = logfmt_raw((int)v46, 0x1000u);
          V_UNLOCK(v19);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "read_temperature_zec_1746",
            25,
            479,
            20,
            v46);
        }
        v8 = usleep((__useconds_t)"nixDatagram15set_nonblocking17h4ff315a764057036E");
        --v4;
      }
      while ( v4 );
      v33 = -64;
      V_LOCK(v8);
      V_INT((int)v39, "chain");
      v25 = 5;
      v23 = "read sensor[%d] local temp failed after retry %d times";
      v24 = *v3;
      v20 = v40;
      v21 = v41;
      v22 = v42;
      v9 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        187,
        "read_temperature_zec_1746",
        25,
        489,
        100,
        v46);
      v6 = v33;
LABEL_9:
      v3 += 6;
      *(_DWORD *)(a2 + 8 * i) = v6;
    }
    v10 = v31;
    v29 = a2 + 8 * v28;
    v27 = a2;
    do
    {
      v11 = 5;
      do
      {
        v12 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 156))(
                a1,
                &v33,
                &v32,
                *v10,
                v10[1],
                v10[2],
                v10[3],
                v10[4],
                v10[5]);
        if ( v32 )
        {
          v13 = v33;
          if ( v33 >= -63 )
            goto LABEL_17;
          V_LOCK(v12);
          V_INT((int)v44, "chain");
          v14 = logfmt_raw((int)v46, 0x1000u);
          V_UNLOCK(v14);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "read_temperature_zec_1746",
            25,
            503,
            20,
            v46);
        }
        else
        {
          V_LOCK(v12);
          V_INT((int)&v43, "chain");
          v18 = logfmt_raw((int)v46, 0x1000u);
          V_UNLOCK(v18);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "read_temperature_zec_1746",
            25,
            501,
            20,
            v46);
        }
        v15 = usleep((__useconds_t)"nixDatagram15set_nonblocking17h4ff315a764057036E");
        --v11;
      }
      while ( v11 );
      v33 = -64;
      V_LOCK(v15);
      V_INT((int)&v45, "chain");
      v16 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v16);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        187,
        "read_temperature_zec_1746",
        25,
        511,
        100,
        v46);
      v13 = v33;
LABEL_17:
      v10 += 6;
      *(_DWORD *)(v27 + 4) = v13;
      v27 += 8;
    }
    while ( v29 != v27 );
  }
  return 0;
}
