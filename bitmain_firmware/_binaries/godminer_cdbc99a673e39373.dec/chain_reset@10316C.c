int __fastcall chain_reset(int a1)
{
  chain_reset_low(a1);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return chain_reset_high(a1);
}
