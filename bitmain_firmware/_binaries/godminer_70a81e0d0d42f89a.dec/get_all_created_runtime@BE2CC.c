void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_2FCB50);
  *a1 = dword_2FCB68;
  pthread_mutex_unlock(&stru_2FCB50);
  return &unk_2FCB6C;
}
