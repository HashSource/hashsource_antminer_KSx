int __fastcall <std::sys_common::thread_local_key::Key as core::ops::drop::Drop>::drop(pthread_key_t *a1)
{
  return pthread_key_delete(*a1);
}
