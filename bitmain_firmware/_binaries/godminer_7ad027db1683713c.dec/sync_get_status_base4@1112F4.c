int __fastcall sync_get_status_base4(pthread_mutex_t *a1, int a2, int a3, int *a4, unsigned int a5, unsigned int a6)
{
  if ( a1[9].__size[20] )
    return sub_11091C(a1, a2, a3, a4, a5, a6);
  else
    return 4;
}
