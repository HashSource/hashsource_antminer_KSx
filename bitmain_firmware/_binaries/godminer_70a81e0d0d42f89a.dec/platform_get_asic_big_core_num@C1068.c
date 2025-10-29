int __fastcall platform_get_asic_big_core_num(int a1)
{
  return *(_DWORD *)(dword_30E900 + 120 * a1 + 36);
}
