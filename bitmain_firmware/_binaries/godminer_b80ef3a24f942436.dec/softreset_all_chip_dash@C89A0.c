int __fastcall softreset_all_chip_dash(int *a1)
{
  sub_C82B4((int)a1);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  sub_C7FA0((int)a1, 8, 0);
  sub_C7FA0((int)a1, 1, 4);
  sub_C83F0((int)a1, 255);
  return 0;
}
