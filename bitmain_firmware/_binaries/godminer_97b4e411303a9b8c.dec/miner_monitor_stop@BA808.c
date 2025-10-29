int miner_monitor_stop()
{
  stop_task_timer(dword_2EBDCC);
  return stop_task_timer(dword_2EBDC8);
}
