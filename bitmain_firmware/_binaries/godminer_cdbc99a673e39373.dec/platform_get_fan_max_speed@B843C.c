int __fastcall platform_get_fan_max_speed(int a1)
{
  return *(_DWORD *)(dword_2EB4A0 + 12 * a1 + 8);
}
