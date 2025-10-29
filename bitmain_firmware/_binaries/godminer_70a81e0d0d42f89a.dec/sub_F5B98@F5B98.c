int __fastcall sub_F5B98(int a1, int *a2)
{
  int v2; // r2
  _DWORD *v3; // r6
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int (__fastcall *v11)(int, int *, int *, _DWORD, int, int, int, int, _DWORD); // r8
  int v12; // r0
  int v13; // r2
  int v14; // r1
  int v15; // r0
  int v16; // r3
  int v17; // r12
  bool v18; // zf
  int v19; // r5
  int v20; // r8
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v27; // r0
  int v28; // r0
  _DWORD *v29; // [sp+40h] [bp-10DCh]
  int v30; // [sp+48h] [bp-10D4h] BYREF
  int v31; // [sp+4Ch] [bp-10D0h] BYREF
  int v32; // [sp+50h] [bp-10CCh] BYREF
  int v33; // [sp+54h] [bp-10C8h] BYREF
  _BYTE v34[32]; // [sp+58h] [bp-10C4h] BYREF
  int v35; // [sp+78h] [bp-10A4h] BYREF
  _BYTE v36[32]; // [sp+98h] [bp-1084h] BYREF
  int v37; // [sp+B8h] [bp-1064h] BYREF
  _BYTE v38[32]; // [sp+D8h] [bp-1044h] BYREF
  int v39; // [sp+F8h] [bp-1024h] BYREF
  _BYTE v40[4100]; // [sp+118h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 392);
  v3 = *(_DWORD **)(a1 + 384);
  v30 = -64;
  v31 = -64;
  if ( v2 > 0 )
  {
    v29 = &v3[6 * v2];
    do
    {
      v32 = 0;
      v21 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 152))(
              a1,
              &v30,
              &v32,
              *v3,
              v3[1],
              v3[2],
              v3[3],
              v3[4],
              v3[5]);
      if ( v32 )
      {
        v6 = v30;
        if ( v30 >= -63 )
          goto LABEL_4;
        v30 = -64;
        V_LOCK(v21);
        V_INT((int)v34, "chain");
        v24 = logfmt_raw((int)v40, 0x1000u);
        V_UNLOCK(v24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
          192,
          "read_temperature_ltc",
          20,
          350,
          100,
          v40);
      }
      else
      {
        v30 = -64;
        V_LOCK(v21);
        V_INT((int)&v35, "chain");
        v22 = logfmt_raw((int)v40, 0x1000u);
        V_UNLOCK(v22);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
          192,
          "read_temperature_ltc",
          20,
          355,
          100,
          v40);
      }
      v6 = v30;
LABEL_4:
      *a2 = v6;
      v7 = v3[1];
      v8 = v3[2];
      v9 = v3[3];
      v10 = v3[4];
      v11 = *(int (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 156);
      v33 = 0;
      v12 = v11(a1, &v31, &v33, *v3, v7, v8, v9, v10, v3[5]);
      if ( !v33 )
      {
        v31 = -64;
        V_LOCK(v12);
        V_INT((int)&v37, "chain");
        v23 = logfmt_raw((int)v40, 0x1000u);
        V_UNLOCK(v23);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
          192,
          "read_temperature_ltc",
          20,
          371,
          100,
          v40);
LABEL_28:
        v13 = v31;
        goto LABEL_6;
      }
      v13 = v31;
      if ( v31 < -63 )
      {
        v31 = -64;
        V_LOCK(v12);
        V_INT((int)v36, "chain");
        v25 = logfmt_raw((int)v40, 0x1000u);
        V_UNLOCK(v25);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
          192,
          "read_temperature_ltc",
          20,
          366,
          100,
          v40);
        goto LABEL_28;
      }
LABEL_6:
      a2[1] = v13;
      v14 = v30;
      v15 = dword_2E84D0;
      v16 = v13 - *(unsigned __int8 *)(a1 + 976) - v30;
      v17 = dword_2E84D4;
      if ( v16 < 0 )
        v16 = v30 - (v13 - *(unsigned __int8 *)(a1 + 976));
      if ( v16 > 3 )
      {
        v18 = dword_2E84D0 == -64;
        if ( dword_2E84D0 == -64 )
          v18 = dword_2E84D4 == -64;
        if ( v18 )
        {
          v17 = -64;
          v15 = -64;
        }
        else
        {
          v19 = v30 - dword_2E84D0;
          v20 = v13 - dword_2E84D4;
          if ( v30 - dword_2E84D0 < 0 )
            v19 = dword_2E84D0 - v30;
          if ( v20 < 0 )
            v20 = dword_2E84D4 - v13;
          if ( v19 > v20 )
          {
            V_LOCK(dword_2E84D0);
            V_INT((int)v38, "chain");
            v27 = logfmt_raw((int)v40, 0x1000u);
            V_UNLOCK(v27);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
              192,
              "read_temperature_ltc",
              20,
              383,
              20,
              v40);
            v13 = v31;
            v15 = dword_2E84D0;
            v14 = v31 - *(unsigned __int8 *)(a1 + 976);
            v17 = dword_2E84D4;
            v30 = v14;
            *a2 = v14;
          }
          else if ( v19 < v20 )
          {
            V_LOCK(dword_2E84D0);
            V_INT((int)&v39, "chain");
            v28 = logfmt_raw((int)v40, 0x1000u);
            V_UNLOCK(v28);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
              192,
              "read_temperature_ltc",
              20,
              388,
              20,
              v40);
            v14 = v30;
            v15 = dword_2E84D0;
            v13 = *(unsigned __int8 *)(a1 + 976) + v30;
            v17 = dword_2E84D4;
            v31 = v13;
            a2[1] = v13;
          }
        }
      }
      v3 += 6;
      if ( v15 != v14 )
        dword_2E84D0 = v14;
      if ( v17 != v13 )
        dword_2E84D4 = v13;
      a2 += 3;
    }
    while ( v29 != v3 );
  }
  return 0;
}
