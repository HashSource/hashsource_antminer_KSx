void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_2F67F8);
  *a1 = dword_2F6810;
  pthread_mutex_unlock(&stru_2F67F8);
  return &unk_2F6814;
}
