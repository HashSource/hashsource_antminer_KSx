int __fastcall <std::sys::unix::thread::Thread as core::ops::drop::Drop>::drop(pthread_t *a1)
{
  return pthread_detach(*a1);
}
