int __fastcall set_onechip_to_lower_level_ks5(int a1, int a2)
{
  int v4; // r0
  int v5; // r3
  void (__fastcall *v6)(int, int *); // r2
  int v7; // r3
  void (__fastcall *v8)(int, int *); // r2
  int v9; // r5
  int v10; // r3
  float v11; // s16
  float v12; // s17
  int v13; // r3
  int v14; // s15
  int v15; // r3
  _BYTE v17[32]; // [sp+28h] [bp-1024h] BYREF
  int v18; // [sp+48h] [bp-1004h] BYREF
  _BYTE v19[12]; // [sp+4Ch] [bp-1000h]

  V_LOCK(a1);
  V_INT((int)v17, "chain");
  v4 = logfmt_raw((int)&v18, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "set_onechip_to_lower_level_ks5",
    30,
    927,
    40,
    &v18);
  v5 = *(_DWORD *)(a1 + 352);
  *(_QWORD *)v19 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 264);
  *(_QWORD *)&v19[4] = 4456448;
  v18 = 3;
  v19[5] = v5 * a2;
  v6(a1, &v18);
  v7 = *(_DWORD *)(a1 + 352);
  *(_DWORD *)v19 = 0;
  *(_QWORD *)&v19[4] = 0xFF000A0000LL;
  v18 = 0;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 268);
  v19[5] = v7 * a2;
  v8(a1, &v18);
  usleep((__useconds_t)&elf_hash_bucket[3497]);
  sub_EF5C0(a1, 37);
  v9 = 44 * (__int16)a2;
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + v9 + 20));
  v10 = *(_DWORD *)(a1 + 528) + v9;
  v11 = *(float *)(v10 + 4);
  pthread_mutex_unlock((pthread_mutex_t *)(v10 + 20));
  v12 = *(float *)(a1 + 964) - 50.0;
  v13 = (int)(float)(v12 - v11);
  if ( v13 < 0 )
    v13 = -v13;
  v14 = v13;
  if ( (double)v13 > 0.01 )
  {
    do
    {
      if ( (float)v14 > 6.25 )
      {
        if ( v12 <= v11 )
          v11 = v11 - 6.25;
        else
          v11 = v11 + 6.25;
      }
      else
      {
        v11 = v12;
      }
      (*(void (__fastcall **)(int, _DWORD, int))(a1 + 212))(a1, 0, a2);
      usleep((__useconds_t)"x6thread6Thread3new17hcc793bb7c0096fa2E");
      v15 = (int)(float)(v12 - v11);
      if ( v15 < 0 )
        v15 = -v15;
      v14 = v15;
    }
    while ( (double)v15 > 0.01 );
  }
  return 0;
}
