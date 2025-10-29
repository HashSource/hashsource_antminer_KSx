int miner_monitor_stop()
{
  stop_task_timer(dword_2ED0DC);
  return stop_task_timer(dword_2ED0D8);
}
