int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_2EA5E4;
  if ( byte_2EA5E4 )
    return (unsigned __int8)byte_2EA5F0;
  return result;
}
