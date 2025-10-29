int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_2EA5EC, (unsigned __int8)byte_2EA5E0, 0x64u);
    if ( !(_WORD)result )
      return result;
    return sub_B52A4(result);
  }
  result = (unsigned __int16)set_voltage(dword_2EA5EC, (unsigned __int8)byte_2EA5E0);
  if ( (_WORD)result )
    return sub_B52A4(result);
  return result;
}
