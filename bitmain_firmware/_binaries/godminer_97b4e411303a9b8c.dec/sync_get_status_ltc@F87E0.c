int __fastcall sync_get_status_ltc(pthread_mutex_t *a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  if ( a1[10].__size[12] )
    return sub_F8490(a1, a2, a3, a4, a5, a6);
  else
    return 4;
}
