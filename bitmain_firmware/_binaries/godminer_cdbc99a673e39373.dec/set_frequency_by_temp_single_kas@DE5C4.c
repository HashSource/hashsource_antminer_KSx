int __fastcall set_frequency_by_temp_single_kas(int a1, int a2, int a3)
{
  int v3; // s0
  int v5; // r4
  int v6; // r6
  int v8; // r3

  v5 = 44 * (__int16)a3;
  v6 = *(_DWORD *)(a1 + 332) * a3;
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 504) + v5 + 20));
  sub_DDC44(a1, a2, 0, (unsigned __int8)v6);
  v8 = *(_DWORD *)(a1 + 504) + v5;
  *(_DWORD *)(v8 + 12) = v3;
  pthread_mutex_unlock((pthread_mutex_t *)(v8 + 20));
  return 0;
}
