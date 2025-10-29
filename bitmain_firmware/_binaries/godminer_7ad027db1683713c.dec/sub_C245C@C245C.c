int __fastcall sub_C245C(int a1, int a2)
{
  int v5; // r7
  __int64 v6; // r0
  float v7; // s14
  _DWORD v8[7]; // [sp+30h] [bp-1044h] BYREF
  int v9; // [sp+4Ch] [bp-1028h]
  _DWORD v10[7]; // [sp+50h] [bp-1024h] BYREF
  int v11; // [sp+6Ch] [bp-1008h]
  char v12[4100]; // [sp+70h] [bp-1004h] BYREF

  if ( a2 == 700 )
  {
    v5 = 820;
LABEL_6:
    LODWORD(v6) = sub_25A4F8(*(_DWORD *)(a1 + 960), *(_DWORD *)(a1 + 964), a2);
    v7 = *(float *)(a1 + 940);
    *(_DWORD *)(a1 + 944) = v5;
    *(float *)(a1 + 940) = (float)a2;
    *(_QWORD *)(a1 + 960) = v6 * (int)v7;
    V_LOCK();
    V_INT((int)v10, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v12,
      0x1000u,
      0,
      v11,
      v10[0],
      v10[1],
      v10[2],
      v10[3],
      v10[4],
      v10[5],
      v10[6],
      v11,
      "overclock freq %d voltage %d",
      (int)*(float *)(a1 + 940),
      *(_DWORD *)(a1 + 944));
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
             189,
             "overclock_update_dash",
             21,
             989,
             40,
             v12);
  }
  if ( a2 == 750 )
  {
    v5 = 830;
    goto LABEL_6;
  }
  V_LOCK();
  V_INT((int)v8, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v12,
    0x1000u,
    0,
    v9,
    v8[0],
    v8[1],
    v8[2],
    v8[3],
    v8[4],
    v8[5],
    v8[6],
    v9,
    "cannot overclock with freq %d",
    a2);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
           189,
           "overclock_update_dash",
           21,
           991,
           40,
           v12);
}
