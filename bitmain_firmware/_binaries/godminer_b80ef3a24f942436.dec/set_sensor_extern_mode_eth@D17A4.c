int __fastcall set_sensor_extern_mode_eth(int a1)
{
  bool v2; // zf
  int result; // r0

  v2 = sub_D174C(a1) == 0;
  result = 0;
  if ( v2 )
    *(_DWORD *)(a1 + 512) = 1;
  return result;
}
