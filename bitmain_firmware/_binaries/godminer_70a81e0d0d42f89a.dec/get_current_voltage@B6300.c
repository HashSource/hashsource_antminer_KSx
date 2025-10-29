int __fastcall get_current_voltage(int a1)
{
  if ( power_info )
    return dword_2EB904;
  else
    return sub_B5BD0(a1);
}
