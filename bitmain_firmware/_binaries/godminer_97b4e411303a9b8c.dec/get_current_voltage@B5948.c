int __fastcall get_current_voltage(int a1)
{
  if ( byte_2EA5E0 )
    return dword_2EA5FC;
  else
    return sub_B5218(a1);
}
