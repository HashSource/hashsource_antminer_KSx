int __fastcall softreset_all_chip_dash(int a1)
{
  sub_BFB0C(a1);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  sub_BF7F8(a1, 8, 0);
  sub_BF7F8(a1, 1, 4);
  sub_BFC48(a1, 255);
  return 0;
}
