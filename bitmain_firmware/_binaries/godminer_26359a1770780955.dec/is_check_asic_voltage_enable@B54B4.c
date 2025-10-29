int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_2E95D4;
  if ( byte_2E95D4 )
    return (unsigned __int8)byte_2E95E0;
  return result;
}
