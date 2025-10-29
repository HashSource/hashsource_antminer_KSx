int miner_monitor_stop()
{
  stop_task_timer(dword_2F5564);
  return stop_task_timer(dword_2F5560);
}
