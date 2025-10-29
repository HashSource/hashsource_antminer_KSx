int __fastcall sync_get_chip_reg_by_id(int a1, int a2, int a3, int a4, int a5, double a6)
{
  int *all_created_runtime; // r0
  int fake_regio_runtime; // r5
  int v12; // r3
  int v13; // t1
  int result; // r0
  int v15; // r4
  pthread_t v16; // r0
  int v17; // [sp+14h] [bp-4h] BYREF

  v17 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v17);
  if ( v17 > 0 )
  {
    fake_regio_runtime = *all_created_runtime;
    if ( a1 == *(_DWORD *)(*all_created_runtime + 228) )
      goto LABEL_7;
    v12 = 0;
    while ( ++v12 != v17 )
    {
      v13 = all_created_runtime[1];
      ++all_created_runtime;
      fake_regio_runtime = v13;
      if ( a1 == *(_DWORD *)(v13 + 228) )
        goto LABEL_7;
    }
  }
  fake_regio_runtime = get_fake_regio_runtime(a1);
LABEL_7:
  if ( *(_DWORD *)(fake_regio_runtime + 832) == *(_DWORD *)(fake_regio_runtime + 840) )
    pthread_create(
      (pthread_t *)(fake_regio_runtime + 852),
      0,
      (void *(*)(void *))get_response,
      (void *)fake_regio_runtime);
  result = (*(int (__fastcall **)(int, int, int, int, int))(fake_regio_runtime + 268))(
             fake_regio_runtime,
             a2,
             a3,
             a4,
             a5);
  v15 = result;
  if ( *(_DWORD *)(fake_regio_runtime + 832) == *(_DWORD *)(fake_regio_runtime + 840) )
  {
    v16 = *(_DWORD *)(fake_regio_runtime + 852);
    *(_BYTE *)(fake_regio_runtime + 861) = 1;
    pthread_join(v16, 0);
    return v15;
  }
  return result;
}
