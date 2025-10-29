int __fastcall std::sys::unix::thread::Thread::set_name(void *src, int a2)
{
  size_t v2; // r2
  pthread_t v3; // r0
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  v2 = a2 - 1;
  if ( (unsigned int)(a2 - 1) >= 0xF )
    v2 = 15;
  memset(v5, 0, sizeof(v5));
  if ( v2 )
    memcpy(v5, src, v2);
  v3 = pthread_self();
  return pthread_setname_np(v3, v5);
}
