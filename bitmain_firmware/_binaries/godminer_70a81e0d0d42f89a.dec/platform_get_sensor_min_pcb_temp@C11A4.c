int __fastcall platform_get_sensor_min_pcb_temp(int a1)
{
  return *(_DWORD *)(dword_30E900 + 120 * a1 + 104);
}
