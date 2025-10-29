int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_2F3E04;
  if ( byte_2F3E04 )
    return (unsigned __int8)byte_2F3E10;
  return result;
}
