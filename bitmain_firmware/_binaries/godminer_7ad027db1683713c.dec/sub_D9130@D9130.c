int __fastcall sub_D9130(int a1, int a2)
{
  int v2; // r2
  _DWORD *v3; // r7
  int *v5; // r9
  int v6; // r10
  int v7; // r3
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  void (__fastcall *v12)(int, int *, int *, _DWORD, int, int, int, int, _DWORD); // r8
  int v13; // r2
  int v14; // r1
  int v15; // r3
  int v16; // lr
  int v17; // r0
  bool v18; // cc
  int v19; // lr
  int v20; // r12
  bool v21; // zf
  int v22; // r5
  int v23; // r8
  int v25; // r3
  int v26; // [sp+40h] [bp-10DCh]
  int v27; // [sp+48h] [bp-10D4h] BYREF
  int v28; // [sp+4Ch] [bp-10D0h] BYREF
  int v29; // [sp+50h] [bp-10CCh] BYREF
  int v30; // [sp+54h] [bp-10C8h] BYREF
  _DWORD v31[7]; // [sp+58h] [bp-10C4h] BYREF
  int v32; // [sp+74h] [bp-10A8h]
  _DWORD v33[7]; // [sp+78h] [bp-10A4h] BYREF
  int v34; // [sp+94h] [bp-1088h]
  _DWORD v35[7]; // [sp+98h] [bp-1084h] BYREF
  int v36; // [sp+B4h] [bp-1068h]
  _DWORD v37[7]; // [sp+B8h] [bp-1064h] BYREF
  int v38; // [sp+D4h] [bp-1048h]
  _DWORD v39[7]; // [sp+D8h] [bp-1044h] BYREF
  int v40; // [sp+F4h] [bp-1028h]
  _DWORD v41[7]; // [sp+F8h] [bp-1024h] BYREF
  int v42; // [sp+114h] [bp-1008h]
  char v43[4100]; // [sp+118h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 372);
  v26 = v2;
  v3 = *(_DWORD **)(a1 + 364);
  v27 = -64;
  v28 = -64;
  if ( v2 > 0 )
  {
    v5 = (int *)(a2 + 4);
    v6 = 0;
    do
    {
      v29 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 152))(
        a1,
        &v27,
        &v29,
        *v3,
        v3[1],
        v3[2],
        v3[3],
        v3[4],
        v3[5]);
      if ( v29 )
      {
        v7 = v27;
        if ( v27 >= -63 )
          goto LABEL_4;
        v27 = -64;
        V_LOCK();
        V_INT((int)v31, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v43,
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
          "got uneffective temp, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          187,
          "read_temperature_hns",
          20,
          299,
          100,
          v43);
      }
      else
      {
        v27 = -64;
        V_LOCK();
        V_INT((int)v33, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v43,
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
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          187,
          "read_temperature_hns",
          20,
          304,
          100,
          v43);
      }
      v7 = v27;
LABEL_4:
      *(v5 - 1) = v7;
      v8 = v3[1];
      v9 = v3[2];
      v10 = v3[3];
      v11 = v3[4];
      v12 = *(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 156);
      v30 = 0;
      v12(a1, &v28, &v30, *v3, v8, v9, v10, v11, v3[5]);
      if ( v30 )
      {
        v13 = v28;
        if ( v28 >= -63 )
          goto LABEL_6;
        v28 = -64;
        V_LOCK();
        V_INT((int)v35, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v43,
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
          "got uneffective temp, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          187,
          "read_temperature_hns",
          20,
          315,
          100,
          v43);
      }
      else
      {
        v28 = -64;
        V_LOCK();
        V_INT((int)v37, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v43,
          0x1000u,
          0,
          v38,
          v37[0],
          v37[1],
          v37[2],
          v37[3],
          v37[4],
          v37[5],
          v37[6],
          v38,
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          187,
          "read_temperature_hns",
          20,
          320,
          100,
          v43);
      }
      v13 = v28;
LABEL_6:
      *v5 = v13;
      v14 = v27;
      v15 = v6 + 2 * *(_DWORD *)(a1 + 228);
      v16 = v13 - *(unsigned __int8 *)(a1 + 952) - v27;
      v17 = 4 * v15;
      if ( v16 < 0 )
        v16 = v27 - (v13 - *(unsigned __int8 *)(a1 + 952));
      v18 = v16 <= 3;
      v19 = dword_2D0C24[v15];
      v20 = *(_DWORD *)((char *)&dword_2D0C24[6] + v17);
      if ( v18 )
        goto LABEL_18;
      v21 = v19 == -64;
      if ( v19 == -64 )
        v21 = v20 == -64;
      if ( v21 )
      {
        v20 = -64;
        v19 = -64;
        goto LABEL_18;
      }
      v22 = v27 - v19;
      v23 = v13 - v20;
      if ( v27 - v19 < 0 )
        v22 = v19 - v27;
      if ( v23 < 0 )
        v23 = v20 - v13;
      if ( v22 > v23 )
      {
        V_LOCK();
        V_INT((int)v39, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v43,
          0x1000u,
          0,
          v40,
          v39[0],
          v39[1],
          v39[2],
          v39[3],
          v39[4],
          v39[5],
          v39[6],
          v40,
          "large diff in temperature between two readings(%d, %d), trimming local temp(%d, %d)",
          v27,
          v28 - *(unsigned __int8 *)(a1 + 952),
          v22,
          v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          187,
          "read_temperature_hns",
          20,
          332,
          20,
          v43);
        v13 = v28;
        v14 = v28 - *(unsigned __int8 *)(a1 + 952);
        *(v5 - 1) = v14;
        v25 = *(_DWORD *)(a1 + 228);
        v27 = v14;
LABEL_34:
        v15 = v6 + 2 * v25;
        v17 = 4 * v15;
        v19 = dword_2D0C24[v15];
        v20 = dword_2D0C24[v15 + 6];
        goto LABEL_18;
      }
      if ( v22 < v23 )
      {
        V_LOCK();
        V_INT((int)v41, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v43,
          0x1000u,
          0,
          v42,
          v41[0],
          v41[1],
          v41[2],
          v41[3],
          v41[4],
          v41[5],
          v41[6],
          v42,
          "large diff in temperature between two readings(%d, %d), trimming remote temp(%d, %d)",
          v28,
          *(unsigned __int8 *)(a1 + 952) + v27,
          v22,
          v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          187,
          "read_temperature_hns",
          20,
          337,
          20,
          v43);
        v14 = v27;
        v13 = *(unsigned __int8 *)(a1 + 952) + v27;
        *v5 = v13;
        v28 = v13;
        v25 = *(_DWORD *)(a1 + 228);
        goto LABEL_34;
      }
LABEL_18:
      if ( v19 != v14 )
        dword_2D0C24[v15] = v14;
      if ( v20 != v13 )
        v17 += (int)dword_2D0C24;
      ++v6;
      v3 += 6;
      v5 += 2;
      if ( v20 != v13 )
        *(_DWORD *)(v17 + 24) = v13;
    }
    while ( v26 != v6 );
  }
  return 0;
}
