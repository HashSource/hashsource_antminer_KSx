int godminer_register_status_monitor()
{
  add_chip_status_observer(godminer_chip_status_monitor);
  return add_fanspeed_observer(godminer_fan_monitor);
}
