int __fastcall read_temperature_eth(int a1, int *a2)
{
  int v2; // r2
  _DWORD *v3; // r6
  int *v5; // r8
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  void (__fastcall *v11)(int, int *, int *, _DWORD, int, int, int, int, _DWORD); // r9
  int v12; // r3
  int *v14; // [sp+38h] [bp-109Ch]
  int v15; // [sp+40h] [bp-1094h] BYREF
  int v16; // [sp+44h] [bp-1090h] BYREF
  int v17; // [sp+48h] [bp-108Ch] BYREF
  int v18; // [sp+4Ch] [bp-1088h] BYREF
  _DWORD v19[7]; // [sp+50h] [bp-1084h] BYREF
  int v20; // [sp+6Ch] [bp-1068h]
  _DWORD v21[7]; // [sp+70h] [bp-1064h] BYREF
  int v22; // [sp+8Ch] [bp-1048h]
  _DWORD v23[7]; // [sp+90h] [bp-1044h] BYREF
  int v24; // [sp+ACh] [bp-1028h]
  _DWORD v25[7]; // [sp+B0h] [bp-1024h] BYREF
  int v26; // [sp+CCh] [bp-1008h]
  char v27[4100]; // [sp+D0h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 372);
  v3 = *(_DWORD **)(a1 + 364);
  v15 = -64;
  v16 = -64;
  if ( v2 > 0 )
  {
    v5 = a2;
    v14 = &a2[2 * v2];
    do
    {
      v17 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 152))(
        a1,
        &v15,
        &v17,
        *v3,
        v3[1],
        v3[2],
        v3[3],
        v3[4],
        v3[5]);
      if ( v17 )
      {
        v6 = v15;
        if ( v15 >= -63 )
          goto LABEL_4;
        v15 = -64;
        V_LOCK();
        V_INT((int)v19, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v27,
          0x1000u,
          0,
          v20,
          v19[0],
          v19[1],
          v19[2],
          v19[3],
          v19[4],
          v19[5],
          v19[6],
          v20,
          "got uneffective temp, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          187,
          "read_temperature_eth",
          20,
          1494,
          100,
          v27);
      }
      else
      {
        v15 = -64;
        V_LOCK();
        V_INT((int)v21, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v27,
          0x1000u,
          0,
          v22,
          v21[0],
          v21[1],
          v21[2],
          v21[3],
          v21[4],
          v21[5],
          v21[6],
          v22,
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          187,
          "read_temperature_eth",
          20,
          1501,
          100,
          v27);
      }
      v6 = v15;
LABEL_4:
      *v5 = v6;
      v7 = v3[1];
      v8 = v3[2];
      v9 = v3[3];
      v10 = v3[4];
      v11 = *(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 156);
      v18 = 0;
      v11(a1, &v16, &v18, *v3, v7, v8, v9, v10, v3[5]);
      if ( !v18 )
      {
        v16 = -64;
        V_LOCK();
        V_INT((int)v25, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v27,
          0x1000u,
          0,
          v26,
          v25[0],
          v25[1],
          v25[2],
          v25[3],
          v25[4],
          v25[5],
          v25[6],
          v26,
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          187,
          "read_temperature_eth",
          20,
          1520,
          100,
          v27);
LABEL_11:
        v12 = v16;
        goto LABEL_6;
      }
      v12 = v16;
      if ( v16 < -63 )
      {
        v16 = -64;
        V_LOCK();
        V_INT((int)v23, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v27,
          0x1000u,
          0,
          v24,
          v23[0],
          v23[1],
          v23[2],
          v23[3],
          v23[4],
          v23[5],
          v23[6],
          v24,
          "got uneffective temp, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          187,
          "read_temperature_eth",
          20,
          1513,
          100,
          v27);
        goto LABEL_11;
      }
LABEL_6:
      v5[1] = v12;
      v5 += 2;
      v3 += 6;
    }
    while ( v14 != v5 );
  }
  return 0;
}
