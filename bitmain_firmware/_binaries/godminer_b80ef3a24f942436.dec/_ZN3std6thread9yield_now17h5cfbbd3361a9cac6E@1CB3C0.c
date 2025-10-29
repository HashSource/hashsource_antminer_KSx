// attributes: thunk
int std::thread::yield_now(void)
{
  return sched_yield();
}
