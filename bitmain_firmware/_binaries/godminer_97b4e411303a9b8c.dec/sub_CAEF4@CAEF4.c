int __fastcall sub_CAEF4(int a1, int a2)
{
  int v4; // r0
  int v6; // r7
  __int64 v7; // r0
  float v8; // s14
  int v9; // r0
  _BYTE v10[32]; // [sp+30h] [bp-1044h] BYREF
  _BYTE v11[32]; // [sp+50h] [bp-1024h] BYREF
  _BYTE v12[4100]; // [sp+70h] [bp-1004h] BYREF

  if ( a2 == 700 )
  {
    v6 = 820;
LABEL_6:
    v7 = sub_26D2D0(*(_DWORD *)(a1 + 984), *(_DWORD *)(a1 + 988), a2, a2 >> 31);
    v8 = *(float *)(a1 + 964);
    *(_DWORD *)(a1 + 968) = v6;
    *(float *)(a1 + 964) = (float)a2;
    *(_QWORD *)(a1 + 984) = v7 * (int)v8;
    V_LOCK(v7);
    V_INT((int)v11, "chain");
    v9 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v9);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/backend_dash_1766/backend_dash_1766.c",
             194,
             "overclock_update_dash",
             21,
             989,
             40,
             v12);
  }
  if ( a2 == 750 )
  {
    v6 = 830;
    goto LABEL_6;
  }
  V_LOCK(a1);
  V_INT((int)v10, "chain");
  v4 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v4);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/backend/backend_dash_1766/backend_dash_1766.c",
           194,
           "overclock_update_dash",
           21,
           991,
           40,
           v12);
}
