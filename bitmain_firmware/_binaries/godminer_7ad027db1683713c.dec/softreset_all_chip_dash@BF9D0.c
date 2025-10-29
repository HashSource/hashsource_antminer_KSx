int __fastcall softreset_all_chip_dash(int *a1)
{
  sub_BF2E4((int)a1);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  sub_BEFD0((int)a1, 8, 0);
  sub_BEFD0((int)a1, 1, 4);
  sub_BF420((int)a1, 255);
  return 0;
}
