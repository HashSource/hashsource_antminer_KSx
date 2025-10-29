int __fastcall open_core_dram_clk(int a1)
{
  sub_EE0B0(a1);
  usleep(0x2710u);
  sub_EC8B0(a1, 9, 7);
  usleep(0x2710u);
  sub_EC8B0(a1, 15, 3);
  usleep(0x2710u);
  return 0;
}
