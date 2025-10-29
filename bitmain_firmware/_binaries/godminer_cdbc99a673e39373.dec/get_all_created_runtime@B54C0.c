void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_2E17F0);
  *a1 = dword_2E1808;
  pthread_mutex_unlock(&stru_2E17F0);
  return &unk_2E180C;
}
