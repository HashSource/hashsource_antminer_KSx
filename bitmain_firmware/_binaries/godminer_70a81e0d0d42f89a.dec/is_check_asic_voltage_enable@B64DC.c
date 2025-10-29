int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_2EB8EC;
  if ( byte_2EB8EC )
    return (unsigned __int8)byte_2EB8F8;
  return result;
}
