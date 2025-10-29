int __fastcall sub_E68B0(int a1, int *a2)
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
  int v12; // r2
  int v13; // r1
  int v14; // r0
  int v15; // r3
  int v16; // r12
  bool v17; // zf
  int v18; // r5
  int v19; // r9
  int *v21; // [sp+40h] [bp-10DCh]
  int v22; // [sp+48h] [bp-10D4h] BYREF
  int v23; // [sp+4Ch] [bp-10D0h] BYREF
  int v24; // [sp+50h] [bp-10CCh] BYREF
  int v25; // [sp+54h] [bp-10C8h] BYREF
  _DWORD v26[7]; // [sp+58h] [bp-10C4h] BYREF
  int v27; // [sp+74h] [bp-10A8h]
  _DWORD v28[7]; // [sp+78h] [bp-10A4h] BYREF
  int v29; // [sp+94h] [bp-1088h]
  _DWORD v30[7]; // [sp+98h] [bp-1084h] BYREF
  int v31; // [sp+B4h] [bp-1068h]
  _DWORD v32[7]; // [sp+B8h] [bp-1064h] BYREF
  int v33; // [sp+D4h] [bp-1048h]
  _DWORD v34[7]; // [sp+D8h] [bp-1044h] BYREF
  int v35; // [sp+F4h] [bp-1028h]
  _DWORD v36[7]; // [sp+F8h] [bp-1024h] BYREF
  int v37; // [sp+114h] [bp-1008h]
  char v38[4100]; // [sp+118h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 372);
  v3 = *(_DWORD **)(a1 + 364);
  v22 = -64;
  v23 = -64;
  if ( v2 > 0 )
  {
    v21 = &a2[2 * v2];
    v5 = a2;
    do
    {
      v24 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 152))(
        a1,
        &v22,
        &v24,
        *v3,
        v3[1],
        v3[2],
        v3[3],
        v3[4],
        v3[5]);
      if ( v24 )
      {
        v6 = v22;
        if ( v22 >= -63 )
          goto LABEL_4;
        v22 = -64;
        V_LOCK();
        V_INT((int)v26, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v38,
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
          "got uneffective temp, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
          187,
          "read_temperature_ltc",
          20,
          350,
          100,
          v38);
      }
      else
      {
        v22 = -64;
        V_LOCK();
        V_INT((int)v28, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v38,
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
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
          187,
          "read_temperature_ltc",
          20,
          355,
          100,
          v38);
      }
      v6 = v22;
LABEL_4:
      *v5 = v6;
      v7 = v3[1];
      v8 = v3[2];
      v9 = v3[3];
      v10 = v3[4];
      v11 = *(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 156);
      v25 = 0;
      v11(a1, &v23, &v25, *v3, v7, v8, v9, v10, v3[5]);
      if ( !v25 )
      {
        v23 = -64;
        V_LOCK();
        V_INT((int)v32, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v38,
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
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
          187,
          "read_temperature_ltc",
          20,
          371,
          100,
          v38);
LABEL_28:
        v12 = v23;
        goto LABEL_6;
      }
      v12 = v23;
      if ( v23 < -63 )
      {
        v23 = -64;
        V_LOCK();
        V_INT((int)v30, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v38,
          0x1000u,
          0,
          v31,
          v30[0],
          v30[1],
          v30[2],
          v30[3],
          v30[4],
          v30[5],
          v30[6],
          v31,
          "got uneffective temp, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
          187,
          "read_temperature_ltc",
          20,
          366,
          100,
          v38);
        goto LABEL_28;
      }
LABEL_6:
      v5[1] = v12;
      v13 = v22;
      v14 = dword_2D0D1C;
      v15 = v12 - *(unsigned __int8 *)(a1 + 952) - v22;
      v16 = dword_2D0D20;
      if ( v15 < 0 )
        v15 = v22 - (v12 - *(unsigned __int8 *)(a1 + 952));
      if ( v15 > 3 )
      {
        v17 = dword_2D0D1C == -64;
        if ( dword_2D0D1C == -64 )
          v17 = dword_2D0D20 == -64;
        if ( v17 )
        {
          v16 = -64;
          v14 = -64;
        }
        else
        {
          v18 = v22 - dword_2D0D1C;
          v19 = v12 - dword_2D0D20;
          if ( v22 - dword_2D0D1C < 0 )
            v18 = dword_2D0D1C - v22;
          if ( v19 < 0 )
            v19 = dword_2D0D20 - v12;
          if ( v18 > v19 )
          {
            V_LOCK();
            V_INT((int)v34, "chain", *(int *)(a1 + 232));
            logfmt_raw(
              v38,
              0x1000u,
              0,
              v35,
              v34[0],
              v34[1],
              v34[2],
              v34[3],
              v34[4],
              v34[5],
              v34[6],
              v35,
              "large diff in temperature between two readings(%d, %d), trimming local temp(%d, %d)",
              v22,
              v23 - *(unsigned __int8 *)(a1 + 952),
              v18,
              v19);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
              187,
              "read_temperature_ltc",
              20,
              383,
              20,
              v38);
            v12 = v23;
            v14 = dword_2D0D1C;
            v13 = v23 - *(unsigned __int8 *)(a1 + 952);
            v16 = dword_2D0D20;
            v22 = v13;
            *v5 = v13;
          }
          else if ( v18 < v19 )
          {
            V_LOCK();
            V_INT((int)v36, "chain", *(int *)(a1 + 232));
            logfmt_raw(
              v38,
              0x1000u,
              0,
              v37,
              v36[0],
              v36[1],
              v36[2],
              v36[3],
              v36[4],
              v36[5],
              v36[6],
              v37,
              "large diff in temperature between two readings(%d, %d), trimming remote temp(%d, %d)",
              v23,
              *(unsigned __int8 *)(a1 + 952) + v22,
              v18,
              v19);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
              187,
              "read_temperature_ltc",
              20,
              388,
              20,
              v38);
            v13 = v22;
            v14 = dword_2D0D1C;
            v12 = *(unsigned __int8 *)(a1 + 952) + v22;
            v16 = dword_2D0D20;
            v23 = v12;
            v5[1] = v12;
          }
        }
      }
      v5 += 2;
      if ( v14 != v13 )
        dword_2D0D1C = v13;
      if ( v16 != v12 )
        dword_2D0D20 = v12;
      v3 += 6;
    }
    while ( v21 != v5 );
  }
  return 0;
}
