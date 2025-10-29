int __fastcall sub_CB7E0(int a1, char a2, int a3, char a4, int a5)
{
  int v5; // r6
  double v8; // r0
  __int64 v9; // r0
  int v10; // r5
  int v11; // r0
  _BYTE v14[4072]; // [sp+18h] [bp-1000h] BYREF

  if ( a3 <= 700 )
    v5 = a2 & 1;
  else
    v5 = 0;
  if ( v5 )
  {
    v8 = sub_2706F8(*(_DWORD *)(a1 + 992), *(_DWORD *)(a1 + 996)) / (double)a3 * *(float *)(a1 + 976);
    v9 = sub_2708B8(LODWORD(v8), HIDWORD(v8));
    *(float *)(a1 + 976) = (float)a3;
    *(_QWORD *)(a1 + 992) = v9;
  }
  else
  {
    V_LOCK(a1);
    v11 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v11);
    LODWORD(v9) = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
                    189,
                    "parameter_update_dash",
                    21,
                    955,
                    40,
                    v14);
  }
  if ( (unsigned int)(a5 - 1400) <= 0x12C )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 980) = a5;
  return v9;
}
