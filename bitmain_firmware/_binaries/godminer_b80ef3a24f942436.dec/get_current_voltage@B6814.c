int __fastcall get_current_voltage(int a1)
{
  if ( byte_2F3E00 )
    return dword_2F3E1C;
  else
    return sub_B6168(a1);
}
