int __fastcall softreset_all_chip_hns(int a1)
{
  sub_E0910(a1);
  usleep(0x3E8u);
  sub_E05C8(a1, 8, 0);
  usleep(0x64u);
  sub_E05C8(a1, 16, 0);
  usleep(0x64u);
  set_nonce_cycle_limit(a1);
  usleep(0x64u);
  sub_E0A38(a1, 255);
  usleep(0x64u);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return 0;
}
