int __fastcall sub_DFA00(int a1, char a2, int a3, char a4, int a5)
{
  int v5; // r6
  double v8; // r0
  __int64 v9; // r0
  int v10; // r5
  int v11; // r0
  _BYTE v14[4072]; // [sp+18h] [bp-1000h] BYREF

  if ( a3 <= 800 )
    v5 = a2 & 1;
  else
    v5 = 0;
  if ( v5 )
  {
    v8 = sub_25B868(*(_DWORD *)(a1 + 960), *(_DWORD *)(a1 + 964)) / (double)a3 * *(float *)(a1 + 940);
    v9 = sub_25BA28(LODWORD(v8), HIDWORD(v8));
    *(float *)(a1 + 940) = (float)a3;
    *(_QWORD *)(a1 + 960) = v9;
  }
  else
  {
    V_LOCK(a1);
    v11 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v11);
    LODWORD(v9) = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
                    187,
                    "parameter_update_kas",
                    20,
                    1006,
                    40,
                    v14);
  }
  if ( (unsigned int)(a5 - 1400) <= 0x12C )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 944) = a5;
  return v9;
}
