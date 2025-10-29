int __fastcall sub_D98F8(int a1, int a2)
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
  int (__fastcall *v12)(int, int *, int *, _DWORD, int, int, int, int, _DWORD); // r8
  int v13; // r0
  int v14; // r2
  int v15; // r1
  int v16; // r3
  int v17; // lr
  int v18; // r0
  bool v19; // cc
  int v20; // lr
  int v21; // r12
  bool v22; // zf
  int v23; // r5
  int v24; // r8
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v31; // r0
  int v32; // r3
  int v33; // r0
  int v34; // [sp+40h] [bp-10DCh]
  int v35; // [sp+48h] [bp-10D4h] BYREF
  int v36; // [sp+4Ch] [bp-10D0h] BYREF
  int v37; // [sp+50h] [bp-10CCh] BYREF
  int v38; // [sp+54h] [bp-10C8h] BYREF
  char v39[32]; // [sp+58h] [bp-10C4h] BYREF
  int v40; // [sp+78h] [bp-10A4h] BYREF
  char v41[32]; // [sp+98h] [bp-1084h] BYREF
  int v42; // [sp+B8h] [bp-1064h] BYREF
  char v43[32]; // [sp+D8h] [bp-1044h] BYREF
  int v44; // [sp+F8h] [bp-1024h] BYREF
  _BYTE v45[4100]; // [sp+118h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 372);
  v34 = v2;
  v3 = *(_DWORD **)(a1 + 364);
  v35 = -64;
  v36 = -64;
  if ( v2 > 0 )
  {
    v5 = (int *)(a2 + 4);
    v6 = 0;
    do
    {
      v37 = 0;
      v25 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 152))(
              a1,
              &v35,
              &v37,
              *v3,
              v3[1],
              v3[2],
              v3[3],
              v3[4],
              v3[5]);
      if ( v37 )
      {
        v7 = v35;
        if ( v35 >= -63 )
          goto LABEL_4;
        v35 = -64;
        V_LOCK(v25);
        V_INT((int)v39, "chain");
        v28 = logfmt_raw((int)v45, 0x1000u);
        V_UNLOCK(v28);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          187,
          "read_temperature_hns",
          20,
          299,
          100,
          v45);
      }
      else
      {
        v35 = -64;
        V_LOCK(v25);
        V_INT((int)&v40, "chain");
        v26 = logfmt_raw((int)v45, 0x1000u);
        V_UNLOCK(v26);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          187,
          "read_temperature_hns",
          20,
          304,
          100,
          v45);
      }
      v7 = v35;
LABEL_4:
      *(v5 - 1) = v7;
      v8 = v3[1];
      v9 = v3[2];
      v10 = v3[3];
      v11 = v3[4];
      v12 = *(int (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 156);
      v38 = 0;
      v13 = v12(a1, &v36, &v38, *v3, v8, v9, v10, v11, v3[5]);
      if ( v38 )
      {
        v14 = v36;
        if ( v36 >= -63 )
          goto LABEL_6;
        v36 = -64;
        V_LOCK(v13);
        V_INT((int)v41, "chain");
        v29 = logfmt_raw((int)v45, 0x1000u);
        V_UNLOCK(v29);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          187,
          "read_temperature_hns",
          20,
          315,
          100,
          v45);
      }
      else
      {
        v36 = -64;
        V_LOCK(v13);
        V_INT((int)&v42, "chain");
        v27 = logfmt_raw((int)v45, 0x1000u);
        V_UNLOCK(v27);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          187,
          "read_temperature_hns",
          20,
          320,
          100,
          v45);
      }
      v14 = v36;
LABEL_6:
      *v5 = v14;
      v15 = v35;
      v16 = v6 + 2 * *(_DWORD *)(a1 + 228);
      v17 = v14 - *(unsigned __int8 *)(a1 + 952) - v35;
      v18 = 4 * v16;
      if ( v17 < 0 )
        v17 = v35 - (v14 - *(unsigned __int8 *)(a1 + 952));
      v19 = v17 <= 3;
      v20 = dword_2D1C44[v16];
      v21 = *(_DWORD *)((char *)&dword_2D1C44[6] + v18);
      if ( v19 )
        goto LABEL_18;
      v22 = v20 == -64;
      if ( v20 == -64 )
        v22 = v21 == -64;
      if ( v22 )
      {
        v21 = -64;
        v20 = -64;
        goto LABEL_18;
      }
      v23 = v35 - v20;
      v24 = v14 - v21;
      if ( v35 - v20 < 0 )
        v23 = v20 - v35;
      if ( v24 < 0 )
        v24 = v21 - v14;
      if ( v23 > v24 )
      {
        V_LOCK(v18);
        V_INT((int)v43, "chain");
        v31 = logfmt_raw((int)v45, 0x1000u);
        V_UNLOCK(v31);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          187,
          "read_temperature_hns",
          20,
          332,
          20,
          v45);
        v14 = v36;
        v15 = v36 - *(unsigned __int8 *)(a1 + 952);
        *(v5 - 1) = v15;
        v32 = *(_DWORD *)(a1 + 228);
        v35 = v15;
LABEL_34:
        v16 = v6 + 2 * v32;
        v18 = 4 * v16;
        v20 = dword_2D1C44[v16];
        v21 = dword_2D1C44[v16 + 6];
        goto LABEL_18;
      }
      if ( v23 < v24 )
      {
        V_LOCK(v18);
        V_INT((int)&v44, "chain");
        v33 = logfmt_raw((int)v45, 0x1000u);
        V_UNLOCK(v33);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          187,
          "read_temperature_hns",
          20,
          337,
          20,
          v45);
        v15 = v35;
        v14 = *(unsigned __int8 *)(a1 + 952) + v35;
        *v5 = v14;
        v36 = v14;
        v32 = *(_DWORD *)(a1 + 228);
        goto LABEL_34;
      }
LABEL_18:
      if ( v20 != v15 )
        dword_2D1C44[v16] = v15;
      if ( v21 != v14 )
        v18 += (int)dword_2D1C44;
      ++v6;
      v3 += 6;
      v5 += 2;
      if ( v21 != v14 )
        *(_DWORD *)(v18 + 24) = v14;
    }
    while ( v34 != v6 );
  }
  return 0;
}
