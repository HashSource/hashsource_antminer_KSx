void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_2F9820);
  *a1 = dword_2F9838;
  pthread_mutex_unlock(&stru_2F9820);
  return &unk_2F983C;
}
