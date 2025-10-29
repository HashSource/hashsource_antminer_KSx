int __fastcall softreset_all_chip_dash(int a1)
{
  sub_C709C(a1);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  sub_C6D88(a1, 8, 0);
  sub_C6D88(a1, 1, 4);
  sub_C71D8(a1, 255);
  return 0;
}
