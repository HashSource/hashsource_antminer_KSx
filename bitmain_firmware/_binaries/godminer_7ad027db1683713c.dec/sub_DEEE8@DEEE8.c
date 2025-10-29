int __fastcall sub_DEEE8(int a1, char a2, int a3, char a4, int a5)
{
  int v5; // r6
  double v8; // r0
  int result; // r0
  int v10; // r1
  int v11; // r5
  char v13[4072]; // [sp+18h] [bp-1000h] BYREF

  if ( a3 <= 800 )
    v5 = a2 & 1;
  else
    v5 = 0;
  if ( v5 )
  {
    v8 = COERCE_DOUBLE(sub_25A6F8(*(_QWORD *)(a1 + 960))) / (double)a3 * *(float *)(a1 + 940);
    result = sub_25A8B8(LODWORD(v8), HIDWORD(v8));
    *(float *)(a1 + 940) = (float)a3;
    *(_DWORD *)(a1 + 960) = result;
    *(_DWORD *)(a1 + 964) = v10;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "Update parameter failed, freq:%f", *(float *)(a1 + 940));
    V_UNLOCK();
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
               187,
               "parameter_update_kas",
               20,
               958,
               40,
               v13);
  }
  if ( (unsigned int)(a5 - 1400) <= 0x12C )
    v11 = a4 & 1;
  else
    v11 = 0;
  if ( v11 )
    *(_DWORD *)(a1 + 944) = a5;
  return result;
}
