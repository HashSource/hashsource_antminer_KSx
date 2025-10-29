int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_2D3544;
  if ( byte_2D3544 )
    return (unsigned __int8)byte_2D3550;
  return result;
}
