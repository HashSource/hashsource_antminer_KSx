int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_2E95DC, (unsigned __int8)byte_2E95D0, 0x64u);
    if ( !(_WORD)result )
      return result;
    return sub_B4CAC(result);
  }
  result = (unsigned __int16)set_voltage(dword_2E95DC, (unsigned __int8)byte_2E95D0);
  if ( (_WORD)result )
    return sub_B4CAC(result);
  return result;
}
