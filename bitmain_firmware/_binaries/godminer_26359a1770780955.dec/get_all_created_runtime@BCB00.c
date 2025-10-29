void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_2F67F0);
  *a1 = dword_2F6808;
  pthread_mutex_unlock(&stru_2F67F0);
  return &unk_2F680C;
}
