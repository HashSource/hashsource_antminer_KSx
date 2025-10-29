int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_2E95DC;
  if ( byte_2E95DC )
    return (unsigned __int8)byte_2E95E8;
  return result;
}
