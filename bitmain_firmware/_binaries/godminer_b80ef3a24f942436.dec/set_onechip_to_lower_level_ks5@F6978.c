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
  _BYTE v14[32]; // [sp+28h] [bp-1024h] BYREF
  int v15; // [sp+48h] [bp-1004h] BYREF
  _BYTE v16[12]; // [sp+4Ch] [bp-1000h]

  V_LOCK(a1);
  V_INT((int)v14, "chain", *(int *)(a1 + 248));
  v4 = logfmt_raw((int)&v15, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    187,
    "set_onechip_to_lower_level_ks5",
    30,
    683,
    40,
    &v15);
  v5 = *(_DWORD *)(a1 + 356);
  *(_QWORD *)v16 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 264);
  *(_QWORD *)&v16[4] = 4456448;
  v15 = 3;
  v16[5] = v5 * a2;
  v6(a1, &v15);
  v7 = *(_DWORD *)(a1 + 356);
  *(_DWORD *)v16 = 0;
  *(_QWORD *)&v16[4] = 0xFF000A0000LL;
  v15 = 0;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 268);
  v16[5] = v7 * a2;
  v8(a1, &v15);
  usleep((__useconds_t)&elf_hash_bucket[3497]);
  sub_F32DC(a1, 36);
  v9 = 44 * (__int16)a2;
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + v9 + 20));
  v10 = *(_DWORD *)(a1 + 528) + v9;
  v11 = *(float *)(v10 + 4);
  pthread_mutex_unlock((pthread_mutex_t *)(v10 + 20));
  v12 = *(float *)(a1 + 976) - 100.0;
  while ( v12 < v11 )
  {
    v11 = v11 - 6.25;
    (*(void (__fastcall **)(int, _DWORD, int))(a1 + 196))(a1, 0, a2);
    usleep((__useconds_t)"1a378b912f98865E");
  }
  return 0;
}
