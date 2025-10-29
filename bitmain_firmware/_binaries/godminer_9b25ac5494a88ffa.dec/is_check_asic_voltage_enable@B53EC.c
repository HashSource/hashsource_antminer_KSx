int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_2E85CC;
  if ( byte_2E85CC )
    return (unsigned __int8)byte_2E85D8;
  return result;
}
