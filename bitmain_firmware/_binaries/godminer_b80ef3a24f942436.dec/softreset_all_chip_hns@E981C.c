int __fastcall softreset_all_chip_hns(int *a1)
{
  sub_E5418((int)a1);
  usleep(0x3E8u);
  sub_E50D0((int)a1, 8, 0);
  usleep(0x64u);
  sub_E50D0((int)a1, 16, 0);
  usleep(0x64u);
  set_nonce_cycle_limit((int)a1);
  usleep(0x64u);
  sub_E5540((int)a1, 255);
  usleep(0x64u);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return 0;
}
