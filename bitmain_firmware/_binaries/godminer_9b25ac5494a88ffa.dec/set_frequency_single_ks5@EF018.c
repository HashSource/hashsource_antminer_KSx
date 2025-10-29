int __fastcall set_frequency_single_ks5(int a1, int a2, __int16 a3)
{
  int v3; // s0
  int v7; // r0
  int v8; // r4
  int v9; // r3
  _BYTE v11[32]; // [sp+38h] [bp-1024h] BYREF
  _BYTE v12[4100]; // [sp+58h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v11, "chain");
  v7 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "set_frequency_single_ks5",
    24,
    591,
    40,
    v12);
  v8 = 44 * a3;
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 520) + v8 + 20));
  sub_EE9E4(a1, a3, a2);
  v9 = *(_DWORD *)(a1 + 520) + v8;
  *(_DWORD *)(v9 + 4) = v3;
  *(_DWORD *)(v9 + 12) = v3;
  pthread_mutex_unlock((pthread_mutex_t *)(v9 + 20));
  return 0;
}
