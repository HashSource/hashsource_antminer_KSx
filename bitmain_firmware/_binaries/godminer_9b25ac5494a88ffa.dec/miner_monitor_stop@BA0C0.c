int miner_monitor_stop()
{
  stop_task_timer(dword_2E9DAC);
  return stop_task_timer(dword_2E9DA8);
}
