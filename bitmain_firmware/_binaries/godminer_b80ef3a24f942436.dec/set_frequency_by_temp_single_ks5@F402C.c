int __fastcall set_frequency_by_temp_single_ks5(int a1, int a2, __int16 a3)
{
  int v3; // s0
  int v5; // r4
  char v6; // r6
  int v8; // r3

  v5 = 44 * a3;
  v6 = a3;
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + v5 + 20));
  sub_F355C(a1, v6, a2);
  v8 = *(_DWORD *)(a1 + 528) + v5;
  *(_DWORD *)(v8 + 12) = v3;
  pthread_mutex_unlock((pthread_mutex_t *)(v8 + 20));
  return 0;
}
