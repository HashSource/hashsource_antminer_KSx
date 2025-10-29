int __fastcall std::sys::unix::thread_local_dtor::register_dtor(int a1, int a2)
{
  int result; // r0
  pthread_key_t v5; // r0
  void *v6; // r0
  _DWORD *v7; // r0
  const void *v8; // r6
  pthread_key_t v9; // r0
  pthread_key_t v10; // r0
  unsigned int *v11; // r6
  int v12; // r1
  unsigned int v13; // r0

  if ( &__cxa_thread_atexit_impl )
    return _cxa_thread_atexit_impl(a2, a1, &off_2D3860);
  v5 = ((int (*)(void))sub_1E51F8)();
  v6 = pthread_getspecific(v5);
  if ( !v6 )
  {
    v7 = (_DWORD *)_rust_alloc(0xCu);
    if ( !v7 )
      alloc::alloc::handle_alloc_error();
    v8 = v7;
    *v7 = 0;
    v7[1] = 4;
    v7[2] = 0;
    v9 = ((int (*)(void))sub_1E51F8)();
    v6 = (void *)pthread_setspecific(v9, v8);
  }
  v10 = sub_1E51F8(v6);
  v11 = (unsigned int *)pthread_getspecific(v10);
  v12 = v11[2];
  if ( v12 == *v11 )
  {
    sub_1A5034(v11, v12);
    v12 = v11[2];
  }
  v13 = v11[1];
  v11[2] = v12 + 1;
  *(_DWORD *)(v13 + 8 * v12) = a1;
  result = v13 + 8 * v12;
  *(_DWORD *)(result + 4) = a2;
  return result;
}
