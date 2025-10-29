int __fastcall set_frequency_zec_1746(int a1)
{
  float v1; // s0
  unsigned int v2; // r2
  int v3; // r4
  const char *v4; // r3
  int v5; // r5
  unsigned int v6; // t1
  void (__fastcall *v7)(int, int *); // r3
  int v9; // [sp+10h] [bp-1000h] BYREF
  __int64 v10[511]; // [sp+14h] [bp-FFCh]

  v2 = 100;
  v3 = -2145385919;
  v4 = "d";
  v5 = 100;
  while ( (float)v2 <= v1 )
  {
    v5 = v2;
    v3 = *((_DWORD *)v4 + 1);
    if ( v4 == (const char *)&unk_280000 )
      break;
    v6 = *((_DWORD *)v4 + 2);
    v4 += 8;
    v2 = v6;
  }
  v7 = *(void (__fastcall **)(int, int *))(a1 + 248);
  LODWORD(v10[0]) = 0;
  v9 = v3;
  *(__int64 *)((char *)v10 + 4) = 786433;
  v7(a1, &v9);
  V_LOCK();
  logfmt_raw((char *)&v9, 0x1000u, 0, "target_freq: %.2f actual_freq: %d, reg_value: %08x", v1, v5, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    187,
    "set_frequency_zec_1746",
    22,
    637,
    40,
    &v9);
  return 0;
}
