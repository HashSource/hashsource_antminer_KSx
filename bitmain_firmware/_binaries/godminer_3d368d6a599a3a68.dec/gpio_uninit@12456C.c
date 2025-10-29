int gpio_uninit()
{
  int result; // r0

  if ( dword_30770C )
  {
    dword_307744 = 0;
    pthread_join(dword_307748, 0);
    pthread_mutex_destroy(&stru_307710);
    delete_c_map((void **)dword_307728);
    dword_30770C = 0;
    return pthread_mutex_destroy(&stru_30772C);
  }
  return result;
}
