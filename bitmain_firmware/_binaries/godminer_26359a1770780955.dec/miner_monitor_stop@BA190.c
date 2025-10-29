int miner_monitor_stop()
{
  stop_task_timer(dword_2EADBC);
  return stop_task_timer(dword_2EADB8);
}
