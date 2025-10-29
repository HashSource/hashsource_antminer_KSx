int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_2E85D4, (unsigned __int8)byte_2E85C8, 0x64u);
    if ( !(_WORD)result )
      return result;
    return sub_B4BE4(result);
  }
  result = (unsigned __int16)set_voltage(dword_2E85D4, (unsigned __int8)byte_2E85C8);
  if ( (_WORD)result )
    return sub_B4BE4(result);
  return result;
}
