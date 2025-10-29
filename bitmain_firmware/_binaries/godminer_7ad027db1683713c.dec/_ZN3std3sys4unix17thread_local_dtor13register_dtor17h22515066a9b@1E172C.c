unsigned int __fastcall std::sys::unix::thread_local_dtor::register_dtor(int a1, int a2)
{
  unsigned int result; // r0
  pthread_key_t v5; // r0
  _DWORD *v6; // r0
  const void *v7; // r6
  pthread_key_t v8; // r0
  pthread_key_t v9; // r0
  unsigned int *v10; // r6
  int v11; // r1
  unsigned int v12; // r0

  if ( &__cxa_thread_atexit_impl )
    return _cxa_thread_atexit_impl(a2, a1, &off_2D2370);
  v5 = sub_1E4088();
  if ( !pthread_getspecific(v5) )
  {
    v6 = (_DWORD *)_rust_alloc(0xCu);
    if ( !v6 )
      alloc::alloc::handle_alloc_error();
    v7 = v6;
    *v6 = 0;
    v6[1] = 4;
    v6[2] = 0;
    v8 = sub_1E4088();
    pthread_setspecific(v8, v7);
  }
  v9 = sub_1E4088();
  v10 = (unsigned int *)pthread_getspecific(v9);
  v11 = v10[2];
  if ( v11 == *v10 )
  {
    sub_1A3EC4(v10, v11);
    v11 = v10[2];
  }
  v12 = v10[1];
  v10[2] = v11 + 1;
  *(_DWORD *)(v12 + 8 * v11) = a1;
  result = v12 + 8 * v11;
  *(_DWORD *)(result + 4) = a2;
  return result;
}
