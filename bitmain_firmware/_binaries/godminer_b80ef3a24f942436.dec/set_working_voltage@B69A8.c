int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_2F3E0C, (unsigned __int8)byte_2F3E00, 0x64u);
    if ( !(_WORD)result )
      return result;
    return sub_B61F4(result);
  }
  result = (unsigned __int16)set_voltage(dword_2F3E0C, (unsigned __int8)byte_2F3E00);
  if ( (_WORD)result )
    return sub_B61F4(result);
  return result;
}
