int miner_monitor_stop()
{
  stop_task_timer(dword_2EADC4);
  return stop_task_timer(dword_2EADC0);
}
