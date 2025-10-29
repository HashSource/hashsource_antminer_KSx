int dev_exit_hal()
{
  diag_LogFileClose();
  fpga_uninit();
  platform_uninit();
  return 0;
}
