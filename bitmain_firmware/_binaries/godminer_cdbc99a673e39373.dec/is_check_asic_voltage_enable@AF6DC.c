int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_2D4A34;
  if ( byte_2D4A34 )
    return (unsigned __int8)byte_2D4A40;
  return result;
}
