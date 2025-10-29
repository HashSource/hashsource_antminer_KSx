int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_2EB8F4, (unsigned __int8)power_info, 0x64u);
    if ( !(_WORD)result )
      return result;
    return sub_B5C5C(result);
  }
  result = (unsigned __int16)set_voltage(dword_2EB8F4, (unsigned __int8)power_info);
  if ( (_WORD)result )
    return sub_B5C5C(result);
  return result;
}
