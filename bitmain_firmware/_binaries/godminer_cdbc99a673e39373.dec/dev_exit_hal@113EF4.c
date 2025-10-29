int dev_exit_hal()
{
  int v0; // r0

  uart_uninit();
  fpga_uninit();
  platform_uninit(v0);
  return 0;
}
