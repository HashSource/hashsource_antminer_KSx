int __fastcall sub_C8220(int a1, int *a2)
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
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  _DWORD *v20; // [sp+38h] [bp-109Ch]
  int v21; // [sp+40h] [bp-1094h] BYREF
  int v22; // [sp+44h] [bp-1090h] BYREF
  int v23; // [sp+48h] [bp-108Ch] BYREF
  int v24; // [sp+4Ch] [bp-1088h] BYREF
  char v25[32]; // [sp+50h] [bp-1084h] BYREF
  int v26; // [sp+70h] [bp-1064h] BYREF
  char v27[32]; // [sp+90h] [bp-1044h] BYREF
  int v28; // [sp+B0h] [bp-1024h] BYREF
  _BYTE v29[4100]; // [sp+D0h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 392);
  v3 = *(_DWORD **)(a1 + 384);
  v21 = -64;
  v22 = -64;
  if ( v2 > 0 )
  {
    v20 = &v3[6 * v2];
    do
    {
      v23 = 0;
      v14 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 152))(
              a1,
              &v21,
              &v23,
              *v3,
              v3[1],
              v3[2],
              v3[3],
              v3[4],
              v3[5]);
      if ( v23 )
      {
        v6 = v21;
        if ( v21 >= -63 )
          goto LABEL_4;
        v21 = -64;
        V_LOCK(v14);
        V_INT((int)v25, "chain");
        v17 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v17);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_dash_1766/backend_dash_1766.c",
          194,
          "read_temperature_dash",
          21,
          563,
          100,
          v29);
      }
      else
      {
        v21 = -64;
        V_LOCK(v14);
        V_INT((int)&v26, "chain");
        v15 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v15);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_dash_1766/backend_dash_1766.c",
          194,
          "read_temperature_dash",
          21,
          568,
          100,
          v29);
      }
      v6 = v21;
LABEL_4:
      *a2 = v6;
      v7 = v3[1];
      v8 = v3[2];
      v9 = v3[3];
      v10 = v3[4];
      v11 = *(int (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 156);
      v24 = 0;
      v12 = v11(a1, &v22, &v24, *v3, v7, v8, v9, v10, v3[5]);
      if ( !v24 )
      {
        v22 = -64;
        V_LOCK(v12);
        V_INT((int)&v28, "chain");
        v16 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v16);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_dash_1766/backend_dash_1766.c",
          194,
          "read_temperature_dash",
          21,
          583,
          100,
          v29);
LABEL_11:
        v13 = v22;
        goto LABEL_6;
      }
      v13 = v22;
      if ( v22 < -63 )
      {
        v22 = -64;
        V_LOCK(v12);
        V_INT((int)v27, "chain");
        v18 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v18);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_dash_1766/backend_dash_1766.c",
          194,
          "read_temperature_dash",
          21,
          578,
          100,
          v29);
        goto LABEL_11;
      }
LABEL_6:
      a2[1] = v13;
      v3 += 6;
      a2 += 3;
    }
    while ( v20 != v3 );
  }
  return 0;
}
