int __fastcall hardreset_hal(int a1)
{
  usleep((__useconds_t)"x6thread6Thread3new17hcc793bb7c0096fa2E");
  chain_reset_low(g_chain_info[2 * a1]);
  usleep((__useconds_t)"x6thread6Thread3new17hcc793bb7c0096fa2E");
  chain_reset_high(g_chain_info[2 * a1]);
  sleep(1u);
  chain_reset_low(g_chain_info[2 * a1]);
  usleep((__useconds_t)"x6thread6Thread3new17hcc793bb7c0096fa2E");
  chain_reset_high(g_chain_info[2 * a1]);
  return 0;
}
