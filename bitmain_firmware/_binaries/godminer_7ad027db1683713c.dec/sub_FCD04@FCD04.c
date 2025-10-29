int __fastcall sub_FCD04(int a1, int a2)
{
  _DWORD *v3; // r9
  int v4; // r7
  int v5; // r3
  _DWORD *v6; // r7
  int v7; // r6
  int v8; // r3
  int i; // [sp+40h] [bp-10DCh]
  int v11; // [sp+40h] [bp-10DCh]
  int v12; // [sp+44h] [bp-10D8h]
  int v13; // [sp+44h] [bp-10D8h]
  _DWORD *v15; // [sp+4Ch] [bp-10D0h]
  int v16; // [sp+50h] [bp-10CCh] BYREF
  int v17; // [sp+54h] [bp-10C8h] BYREF
  _DWORD v18[7]; // [sp+58h] [bp-10C4h] BYREF
  int v19; // [sp+74h] [bp-10A8h]
  _DWORD v20[7]; // [sp+78h] [bp-10A4h] BYREF
  int v21; // [sp+94h] [bp-1088h]
  _DWORD v22[7]; // [sp+98h] [bp-1084h] BYREF
  int v23; // [sp+B4h] [bp-1068h]
  _DWORD v24[7]; // [sp+B8h] [bp-1064h] BYREF
  int v25; // [sp+D4h] [bp-1048h]
  _DWORD v26[7]; // [sp+D8h] [bp-1044h] BYREF
  int v27; // [sp+F4h] [bp-1028h]
  _DWORD v28[7]; // [sp+F8h] [bp-1024h] BYREF
  int v29; // [sp+114h] [bp-1008h]
  char v30[4100]; // [sp+118h] [bp-1004h] BYREF

  v12 = *(_DWORD *)(a1 + 372);
  if ( v12 > 0 )
  {
    v3 = *(_DWORD **)(a1 + 364);
    v15 = v3;
    for ( i = 0; i != v12; ++i )
    {
      v4 = 5;
      do
      {
        (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 152))(
          a1,
          &v17,
          &v16,
          *v3,
          v3[1],
          v3[2],
          v3[3],
          v3[4],
          v3[5]);
        if ( v16 )
        {
          v5 = v17;
          if ( v17 >= -63 )
            goto LABEL_9;
          V_LOCK();
          V_INT((int)v20, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v30,
            0x1000u,
            0,
            v21,
            v20[0],
            v20[1],
            v20[2],
            v20[3],
            v20[4],
            v20[5],
            v20[6],
            v21,
            "sensor[%d] invalid temp, retry",
            *v3);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "read_temperature_zec_1746",
            25,
            481,
            20,
            v30);
        }
        else
        {
          V_LOCK();
          V_INT((int)v18, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v30,
            0x1000u,
            0,
            v19,
            v18[0],
            v18[1],
            v18[2],
            v18[3],
            v18[4],
            v18[5],
            v18[6],
            v19,
            "sensor[%d] read lost, retry",
            *v3);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "read_temperature_zec_1746",
            25,
            479,
            20,
            v30);
        }
        usleep((__useconds_t)"d_power17h7a6a23e613986a08E");
        --v4;
      }
      while ( v4 );
      v17 = -64;
      V_LOCK();
      V_INT((int)v22, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v30,
        0x1000u,
        0,
        v23,
        v22[0],
        v22[1],
        v22[2],
        v22[3],
        v22[4],
        v22[5],
        v22[6],
        v23,
        "read sensor[%d] local temp failed after retry %d times",
        *v3,
        5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        187,
        "read_temperature_zec_1746",
        25,
        489,
        100,
        v30);
      v5 = v17;
LABEL_9:
      v3 += 6;
      *(_DWORD *)(a2 + 8 * i) = v5;
    }
    v6 = v15;
    v13 = a2 + 8 * v12;
    v11 = a2;
    do
    {
      v7 = 5;
      do
      {
        (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 156))(
          a1,
          &v17,
          &v16,
          *v6,
          v6[1],
          v6[2],
          v6[3],
          v6[4],
          v6[5]);
        if ( v16 )
        {
          v8 = v17;
          if ( v17 >= -63 )
            goto LABEL_17;
          V_LOCK();
          V_INT((int)v26, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v30,
            0x1000u,
            0,
            v27,
            v26[0],
            v26[1],
            v26[2],
            v26[3],
            v26[4],
            v26[5],
            v26[6],
            v27,
            "sensor[%d] invalid temp, retry",
            *v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "read_temperature_zec_1746",
            25,
            503,
            20,
            v30);
        }
        else
        {
          V_LOCK();
          V_INT((int)v24, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v30,
            0x1000u,
            0,
            v25,
            v24[0],
            v24[1],
            v24[2],
            v24[3],
            v24[4],
            v24[5],
            v24[6],
            v25,
            "sensor[%d] read lost, retry",
            *v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            187,
            "read_temperature_zec_1746",
            25,
            501,
            20,
            v30);
        }
        usleep((__useconds_t)"d_power17h7a6a23e613986a08E");
        --v7;
      }
      while ( v7 );
      v17 = -64;
      V_LOCK();
      V_INT((int)v28, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v30,
        0x1000u,
        0,
        v29,
        v28[0],
        v28[1],
        v28[2],
        v28[3],
        v28[4],
        v28[5],
        v28[6],
        v29,
        "read sensor[%d] remote temp failed after retry %d times",
        *v6,
        5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        187,
        "read_temperature_zec_1746",
        25,
        511,
        100,
        v30);
      v8 = v17;
LABEL_17:
      v6 += 6;
      *(_DWORD *)(v11 + 4) = v8;
      v11 += 8;
    }
    while ( v13 != v11 );
  }
  return 0;
}
