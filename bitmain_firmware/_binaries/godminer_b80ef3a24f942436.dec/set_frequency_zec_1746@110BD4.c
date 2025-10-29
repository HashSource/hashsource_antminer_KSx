int __fastcall set_frequency_zec_1746(int a1)
{
  float v1; // s0
  unsigned int v2; // r2
  int v3; // r4
  const char *i; // r3
  unsigned int v5; // t1
  int (__fastcall *v6)(int, _DWORD *); // r3
  int v7; // r0
  int v8; // r0
  _DWORD v10[2]; // [sp+10h] [bp-1000h] BYREF
  __int64 v11; // [sp+18h] [bp-FF8h]

  v2 = 100;
  v3 = -2145385919;
  for ( i = "d"; (float)v2 <= v1; i += 8 )
  {
    v3 = *((_DWORD *)i + 1);
    if ( i == (const char *)&unk_2A034C )
      break;
    v5 = *((_DWORD *)i + 2);
    v2 = v5;
  }
  v6 = *(int (__fastcall **)(int, _DWORD *))(a1 + 264);
  v10[1] = 0;
  v10[0] = v3;
  v11 = 786433;
  v7 = v6(a1, v10);
  V_LOCK(v7);
  v8 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    187,
    "set_frequency_zec_1746",
    22,
    637,
    40,
    v10);
  return 0;
}
