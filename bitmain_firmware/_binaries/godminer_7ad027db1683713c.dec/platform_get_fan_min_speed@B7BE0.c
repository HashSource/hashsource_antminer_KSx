int __fastcall platform_get_fan_min_speed(int a1)
{
  return *(_DWORD *)(dword_2E9FA8 + 12 * a1 + 4);
}
