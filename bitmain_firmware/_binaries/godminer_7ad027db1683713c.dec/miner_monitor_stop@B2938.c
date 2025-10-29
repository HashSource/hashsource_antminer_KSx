int miner_monitor_stop()
{
  stop_task_timer(dword_2D48C4);
  return stop_task_timer(dword_2D48C0);
}
