void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_2FB840);
  *a1 = dword_2FB858;
  pthread_mutex_unlock(&stru_2FB840);
  return &unk_2FB85C;
}
