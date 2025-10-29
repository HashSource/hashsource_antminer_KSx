int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_2E95E4, (unsigned __int8)byte_2E95D8, 0x64u);
    if ( !(_WORD)result )
      return result;
    return sub_B5264(result);
  }
  result = (unsigned __int16)set_voltage(dword_2E95E4, (unsigned __int8)byte_2E95D8);
  if ( (_WORD)result )
    return sub_B5264(result);
  return result;
}
