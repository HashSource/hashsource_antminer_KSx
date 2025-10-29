int __fastcall softreset_all_chip_dash(int a1)
{
  sub_C70A4(a1);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  sub_C6D90(a1, 8, 0);
  sub_C6D90(a1, 1, 4);
  sub_C71E0(a1, 255);
  return 0;
}
