void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_300FD8);
  *a1 = dword_300FF0;
  pthread_mutex_unlock(&stru_300FD8);
  return &unk_300FF4;
}
