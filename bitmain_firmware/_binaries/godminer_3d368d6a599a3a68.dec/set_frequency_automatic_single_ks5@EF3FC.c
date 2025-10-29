int __fastcall set_frequency_automatic_single_ks5(int a1, int a2, __int16 a3)
{
  int v3; // r4
  char v5; // r6
  int v7; // r0
  float v8; // s14
  float v9; // s16
  int v10; // r3
  int v11; // r0
  int v12; // r6
  int v13; // r0
  _BYTE v15[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = 44 * a3;
  v5 = a3;
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + v3 + 20));
  v7 = *(_DWORD *)(a1 + 528) + v3;
  v8 = *(float *)(v7 + 12);
  v9 = *(float *)(v7 + 4) + *(float *)(v7 + 8);
  v10 = (int)(float)(v8 - v9);
  if ( v10 < 0 )
    v10 = -v10;
  if ( (float)v10 <= 6.25 )
  {
    if ( (double)v10 < 0.01 )
    {
      v12 = 0;
      goto LABEL_8;
    }
  }
  else if ( v8 <= v9 )
  {
    v9 = v8 + 6.25;
  }
  else
  {
    v9 = v8 - 6.25;
  }
  v11 = sub_EF2B4(a1, v5, a2);
  V_LOCK(v11);
  v12 = 1;
  v13 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "set_frequency_automatic_single_ks5",
    34,
    254,
    20,
    v15);
  v7 = *(_DWORD *)(a1 + 528) + v3;
  *(float *)(v7 + 12) = v9;
LABEL_8:
  pthread_mutex_unlock((pthread_mutex_t *)(v7 + 20));
  return v12;
}
