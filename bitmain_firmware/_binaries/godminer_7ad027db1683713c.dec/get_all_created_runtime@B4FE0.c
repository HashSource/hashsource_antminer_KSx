void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_2E02F8);
  *a1 = dword_2E0310;
  pthread_mutex_unlock(&stru_2E02F8);
  return &unk_2E0314;
}
