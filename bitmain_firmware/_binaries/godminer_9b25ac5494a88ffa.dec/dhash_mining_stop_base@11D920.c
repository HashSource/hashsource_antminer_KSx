int __fastcall dhash_mining_stop_base(int a1)
{
  (*(void (**)(void))(a1 + 4))();
  *(_BYTE *)(a1 + 249) = 0;
  *(_BYTE *)(a1 + 250) = 0;
  return 0;
}
