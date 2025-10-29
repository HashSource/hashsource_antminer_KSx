int __fastcall platform_get_sensor_max_chip_temp(int a1)
{
  return *(_DWORD *)(dword_3085A0 + 120 * a1 + 96);
}
